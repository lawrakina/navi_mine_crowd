using System;
using UnityEngine;


namespace _pj108.Code.GameSettings {
    [Serializable] public class BattleSettings : SettingsBase {
        [field: SerializeField] public float AttackFrequency { get; set; } = 0.5f;
        [field: SerializeField] public float TimeScaleWhenAttack { get; set; } = 0.3f;
        [field: SerializeField] public float ShakePower { get; set; } = 5f;
        [field: SerializeField] public float ShakeDuration { get; set; } = 0.2f;
        [field: SerializeField] public int LevelTime { get; set; } = 120;
    }
}