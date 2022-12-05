using System;
using UnityEngine;

public class NewTarget : NewDestroyableObject
{
    private static readonly int PowerShaderProperty = Shader.PropertyToID("_Power");

    public override void GetDamage(Vector3 origin, float damage, float radius)
    {
        base.GetDamage(origin, damage, radius);

        float newPower = 1 - (currentHealth / maxHealth);
        _renderer.material.SetFloat(PowerShaderProperty, newPower);
    }

    private void OnCollisionStay(Collision collisionInfo)
    {
        if (collisionInfo.transform.TryGetComponent(out PlayerHand hand))
        {
            hand.actionController.SendHapticImpulse(0.5f, 0.1f);
        }
    }
}
