using System;
using UnityEngine;


namespace _pj108.Code.Units {
    [Serializable]
    public class SpawnUnitsData {
        [field: SerializeField] public float SpawnPeriod { get; set; } = 0.1f;
        [field: SerializeField] public UnitView NeutralUnit { get; set; }
        [field: SerializeField] public Transform NeutralPlace { get; set; }
        [field: SerializeField] public int PrespawnUnitCount { get; set; } = 300;
    }
}