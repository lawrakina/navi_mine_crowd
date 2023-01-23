using System;
using UnityEngine;

namespace _pj108.Code.GameSettings
{
    [Serializable]
    public class CameraSettings : SettingsBase
    {
        [field: SerializeField] public float CameraDistanceDefault = 30f;
        [field: SerializeField] public int UnitCountForChange = 30;
        [field: SerializeField] public CameraDistancingData[] CameraDistance { get; set; }
    }

    [Serializable]
    public class CameraDistancingData {
        public int UnitsCount;
        public float CameraDistance;
    }
}
