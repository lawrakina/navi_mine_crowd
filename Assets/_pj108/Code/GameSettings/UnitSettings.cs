using System;
using UnityEngine;


namespace _pj108.Code.GameSettings
{
    [Serializable]
    public class UnitSettings : SettingsBase
    {
        [field: SerializeField] public float Speed { get; private set; }
        [field: SerializeField] public float UnitFlyDelay { get; set; } = 1.2f;
    }
}