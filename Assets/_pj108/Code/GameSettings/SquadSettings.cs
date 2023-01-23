using System;
using _pj108.Code.Units;
using UnityEngine;
using Object = UnityEngine.Object;


namespace _pj108.Code.GameSettings {
    [Serializable] public class SquadSettings {
        [field: SerializeField] public Color Color { get; set; }
        [field: SerializeField] public Material MaterialColor { get; set; }
        [field: SerializeField] public Material OwnerMaterialColor { get; set; }
        [field: SerializeField] public UnitView UnitView { get; set; }
        // [field: SerializeField] public Unit Unit { get; set; }
        [field: SerializeField] public float LuckForInstancingUnit { get; set; } = 0.3f;
    }
}