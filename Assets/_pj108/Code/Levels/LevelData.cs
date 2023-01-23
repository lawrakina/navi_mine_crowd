using System;
using Main.Levels.AdditionData;
using NaughtyAttributes;
using UnityEngine;


namespace _pj108.Code
{
    [Serializable]
    [CustomSerializeReferenceName("LevelExtensionData")]
    public class LevelData : ILevelExtensionData
    {
        public bool IsRandomPositions;
        public Vector3 PlayerPosition;
        [InfoBox("В секундах")] public int Time = 120;

        public void Apply()
        {
        }

        public void Clear()
        {
        }
    }
}