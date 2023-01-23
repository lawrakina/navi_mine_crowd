using Main.Levels.Data;
using UnityEngine;

namespace NavySpade.Core.Runtime.Levels
{
    public abstract class LevelBase : MonoBehaviour
    {
        public abstract void Init(SceneLevelData dataBase);
    }
}