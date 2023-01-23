using System;
using UnityEngine;


namespace _pj108.Code.Enemies {
    [Serializable]
    public class SpawnEnemiesData {
        [field: SerializeField] public EnemyData[] List { get; set; }
    }
}