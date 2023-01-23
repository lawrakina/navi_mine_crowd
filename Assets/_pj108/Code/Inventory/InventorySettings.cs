using System;
using UnityEngine;

namespace _pj108.Code.GameSettings
{
    [Serializable]
    public class InventorySettings : SettingsBase
    {
        [field: SerializeField] public InventoryStack Stack { get; set; }
        [field: SerializeField] public float DropTime { get; set; }
    }
}
