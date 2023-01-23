using System;
using UnityEngine;


namespace _pj108.Code.GameSettings {
    [Serializable] public class EffectSettings : SettingsBase {
        [field: SerializeField] public GameObject SecrifaceEffect { get; set; }
        [field: SerializeField] public GameObject FlySpirits { get; set; }
    }
}