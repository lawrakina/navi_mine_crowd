using System;
using UnityEngine;


namespace _pj108.Code.GameSettings {
    [Serializable] public class GlobalSquadSettings : SettingsBase {
        [field: SerializeField] public float LuckForInstancingUnit { get; set; } = 0.15f;
    }
}