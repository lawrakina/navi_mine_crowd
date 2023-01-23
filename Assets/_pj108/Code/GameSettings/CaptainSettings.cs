using System;
using _pj108.Code.Player;
using UnityEngine;


namespace _pj108.Code.GameSettings
{
    [Serializable]
    public class CaptainSettings : SettingsBase
    {
        [field: SerializeField] public float Speed { get; set; }
        [field: SerializeField] public CaptainView CaptainPrefab { get; set; }
    }
}