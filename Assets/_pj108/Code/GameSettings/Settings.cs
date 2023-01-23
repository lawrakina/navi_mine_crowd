using System;
using NavySpade.Modules.Configuration.Runtime.SO;
using UnityEngine;


namespace _pj108.Code.GameSettings
{
    public class Settings : ObjectConfig<Settings>
    {
        [field: SerializeField] public GlobalSquadSettings GlobalSquadSettings { get; private set; }
        [field: SerializeField] public InputSettings InputSettings { get; private set; }
        [field: SerializeField] public CaptainSettings CaptainSettings { get; private set; }
        [field: SerializeField] public EnemySettings EnemySettings { get; private set; }
        [field: SerializeField] public UnitSettings UnitSettings { get; private set; }
        [field: SerializeField] public EffectSettings EffectSettings { get; private set; }
        [field: SerializeField] public BattleSettings BattleSettings { get; private set; }
        [field: SerializeField] public SquadSettings SquadSettings { get; private set; }
        [field: SerializeField] public MinerSettings MinerSettings { get; private set; }
        [field: SerializeField] public InventorySettings InventorySettings { get; private set; }
        [field: SerializeField] public CameraSettings CameraSettings { get; private set; }
        [field: SerializeField] public AnimationSettings AnimationSettings{ get; private set; }
        

        public static T Get<T>() {
            foreach (var propertyInfo in Instance.GetType().GetProperties())
            {
                if (propertyInfo.PropertyType == typeof(T))
                {
                    return (T)propertyInfo.GetValue(Instance);
                }
            }

            throw new Exception($"Settings {typeof(T)} not fount");
        }
    }
}