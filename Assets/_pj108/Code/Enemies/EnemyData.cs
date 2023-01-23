using System;
using UnityEngine;


namespace _pj108.Code.Enemies {
    [Serializable]
    public class EnemyData {
        public Transform Point;
        public Color Color;
        public Material OwnerMaterialColor;
        public Material MaterialColor;
        public int UnitsCount;
    }
}