using System;
using UnityEngine;


namespace _pj108.Code.GameSettings {
    [Serializable]
    public class AnimationSettings {
        [field: SerializeField] public int DelayBeforeAddResource { get; set; } = 300;
    }
}