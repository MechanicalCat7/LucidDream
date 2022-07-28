using System;
using System.IO;
using Newtonsoft.Json;
using Newtonsoft.Json.Linq;
using UnityEngine;
using UnityEngine.SceneManagement;
using Object = UnityEngine.Object;

public class DataManager
{
    // ==================================================
    //  Static Variables
    // ==================================================

    private const string SaveInfo = "info";
    private const string SceneData = "scene";
    private const string PlayerData = "player";
    private const string StaticObjects = "static";
    private const string DynamicObjects = "dynamic";

    public static readonly string SavePath = $"{Application.persistentDataPath}/Saves";

    // ==================================================
    //  Data Manager
    // ==================================================

    private static DataManager _instance;
    public static DataManager instance => _instance ??= new DataManager();
    private DataManager()
    {
        Debug.Log("DataManager has been initialized.");
    }
    
    // ==================================================
    //  Variables
    // ==================================================
    
    private JObject _loadedData;
    
    // ==================================================
    //  Properties
    // ==================================================
    
    /// <summary>
    /// 변화가 생기지 않는 오브젝트들
    /// </summary>
    public Transform staticObjects { get; private set; }
    
    /// <summary>
    /// 동적으로 생성되거나 제거되는 오브젝트들
    /// </summary>
    public Transform dynamicObjects { get; private set; }
    
    /// <summary>
    /// 기타 오브젝트들
    /// </summary>
    public Transform otherObjects { get; private set; }

    /// <summary>
    /// 불러오기 메뉴에서 선택된 파일 정보
    /// </summary>
    public SaveFileInfo selectedFile { get; set; }
    
    /// <summary>
    /// 게임을 불러오는 중인가?
    /// </summary>
    public bool isLoadingGame { get; private set; }
    
    // ==================================================
    //  Data Manager Functions
    // ==================================================
    
    /// <summary>
    /// Static, Dynamic 오브젝트를 가져온다.
    /// </summary>
    public void GetObjects()
    {
        staticObjects = GameObject.Find("Static").transform;
        dynamicObjects = GameObject.Find("Dynamic").transform;
        otherObjects = GameObject.Find("Other").transform;
    }
    
    // --------------------------------------------------
    
    /// <summary>
    /// 게임을 저장한다.
    /// </summary>
    public void SaveState()
    {
        var playerManager = GameManager.instance.playerManager;
        
        // 준비 작업
        var saveData = new JObject();
        var fileName = $"SaveData_{DateTime.Now.ToString("yyyyMMdd_HHmmss")}.json";

        // 세이브 파일 정보
        saveData[SaveInfo] = SetFileInfo(fileName);
        
        // 씬 데이터
        saveData[SceneData] = GameManager.instance.sceneEvent.SaveData();

        // 플레이어 데이터
        saveData[PlayerData] = playerManager.SaveData();
    
        // Static 오브젝트
        saveData[StaticObjects] = new JArray();
        foreach (Transform target in staticObjects)
        {
            if(target.TryGetComponent(out SerializableObject comp))
                comp.SaveData((JArray)saveData[StaticObjects]);
        }
        
        // Dynamic 오브젝트
        saveData[DynamicObjects] = new JArray();
        foreach (Transform target in dynamicObjects)
        {
            if(target.TryGetComponent(out SerializableObject comp))
                comp.SaveData((JArray)saveData[DynamicObjects]);
        }
        
        // 인벤토리에 있는 오브젝트
        if (playerManager.leftHand.storedItem != null)
        {
            var item = playerManager.leftHand.storedItem.GetComponent<SerializableObject>();
            item.SaveData((JArray)saveData[DynamicObjects]);
        }

        if (playerManager.rightHand.storedItem != null)
        {
            var item = playerManager.rightHand.storedItem.GetComponent<SerializableObject>();
            item.SaveData((JArray)saveData[DynamicObjects]);
        }
        
        
        // JSON 파일로 저장
        var dataString = JsonConvert.SerializeObject(saveData, Formatting.Indented);
        
        if (!Directory.Exists(SavePath))
            Directory.CreateDirectory(SavePath);
        File.WriteAllText($"{SavePath}/{fileName}", dataString);
        
        GameManager.instance.OnEndSaveGame();
        Debug.Log($"Game state saved: {fileName}");
    }
    
    /// <summary>
    /// 게임을 불러온다.
    /// </summary>
    public void LoadState(SaveFileInfo info)
    {
        GameManager.instance.OnBeginLoadGame();
        
        // 저장된 파일 읽기
        var filePath = $"{SavePath}/{info.name}";
        if (!File.Exists(filePath))
        {
            Debug.LogError($"File does not exist: {info.name}");
            return;
        }
        _loadedData = JObject.Parse(File.ReadAllText(filePath));
        
        // 씬 불러오기. 불러온 후 작업 수행
        try
        {
            SceneManager.LoadScene(info.scene);
            isLoadingGame = true;
        }
        catch (Exception e)
        {
            Debug.LogError($"Failed to load scene: {e.Message}");
            isLoadingGame = false;
            
            // TODO: GameManager에서 OnFailGameLoad 함수 만들어서 호출
        }
    }
    
    /// <summary>
    /// 게임 불러오기 작업
    /// </summary>
    public void LoadStateProcess()
    {
        if (_loadedData == null)
        {
            Debug.LogError("No data has been loaded.");
            return;
        }
        
        // 기존에 있는 Dynamic 오브젝트 전부 제거
        foreach (Transform target in dynamicObjects)
        {
            if (target != dynamicObjects)
                Object.Destroy(target.gameObject);
        }
        
        // 씬 데이터
        GameManager.instance.sceneEvent.LoadData(_loadedData[SceneData] as JObject);
        
        // 플레이어 데이터
        GameManager.instance.playerManager.LoadData(_loadedData[PlayerData] as JObject);

        // Static 오브젝트
        var staticArray = _loadedData[StaticObjects] as JArray;
        foreach (JToken token in staticArray)
        {
            var objectData = token as JObject;
            var index = (int)objectData["index"];
            var targetObject = staticObjects.GetChild(index);
            var targetComp = targetObject.GetComponent<SerializableObject>();
            targetComp.LoadData(objectData);
        }
        
        // Dynamic 오브젝트
        var dynamicArray = _loadedData[DynamicObjects] as JArray;
        foreach (JToken token in dynamicArray)
        {
            var objectData = token as JObject;
            var prefabName = objectData["prefab"].ToString();
            
            // 딕셔너리에서 프리팹을 찾아 생성
            if (GameManager.instance.sceneEvent.prefabList.TryGetValue(prefabName,
                    out GameObject prefab))
            {
                var targetObject = Object.Instantiate(prefab, dynamicObjects);
                var targetComp = targetObject.GetComponent<SerializableObject>();
                targetComp.LoadData(objectData);
            }
            else
            {
                Debug.LogWarning($"Prefab not found: {prefabName}");
            }
        }

        _loadedData = null;
        isLoadingGame = false;
        
        GameManager.instance.OnEndLoadGame();
        Debug.Log($"Game state loaded");
    }
    
    // --------------------------------------------------
    
    /// <summary>
    /// 세이브 파일 정보
    /// </summary>
    public class SaveFileInfo
    {
        public string name;
        public string scene;
        public DateTime time;
    }
    
    /// <summary>
    /// 게임 저장 정보를 기록한다.
    /// </summary>
    /// <returns>JObject로 변환된 저장 정보</returns>
    private JObject SetFileInfo(string fileName)
    {
        var data = new JObject
        {
            { "name", fileName },
            { "scene", SceneManager.GetActiveScene().name },
            { "time", DateTime.Now.ToString("yyyyMMdd_HHmmss") }
        };

        return data;
    }
    
    /// <summary>
    /// 게임 저장 정보를 가져온다.
    /// </summary>
    /// <param name="filePath">저장 파일 이름</param>
    /// <returns>SaveFileInfo 인스턴스</returns>
    public SaveFileInfo GetFileInfo(string filePath)
    {
        if (!File.Exists(filePath))
        {
            Debug.LogError($"File does not exist: {filePath}");
            return null;
        }
        
        var dataString = File.ReadAllText(filePath);
        var jObject = JObject.Parse(dataString)[SaveInfo] as JObject;

        var info = new SaveFileInfo
        {
            name = jObject["name"].ToString(),
            scene = jObject["scene"].ToString(),
            time = DateTime.ParseExact(jObject["time"].ToString(), "yyyyMMdd_HHmmss", null)
        };

        return info;
    }
}
