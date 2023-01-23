using System;
using _pj108.Code.Player;
using UnityEngine;


namespace _pj108.Code.GameSettings {
    [Serializable] public class EnemySettings : SettingsBase {
        [field: SerializeField] public CaptainView Prefab { get; set; }
        [field: SerializeField] public float PathUpdateFrequency { get; private set; }
        [field: SerializeField] public float PathRadiusFinder { get; private set; } = 5f;
    }
}