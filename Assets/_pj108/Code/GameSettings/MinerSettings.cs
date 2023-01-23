using System;
using UnityEngine;


namespace _pj108.Code.GameSettings {
    [Serializable]
    public class MinerSettings {
        [field: SerializeField] public float MineDelay { get; set; } = 1f;
        [field: SerializeField] public float MineEndChecker { get; set; } = 1f;
    }
}