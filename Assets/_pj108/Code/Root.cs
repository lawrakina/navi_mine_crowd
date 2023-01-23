using _pj108.Code.BaseLogic;
using _pj108.Code.BaseLogic.TimeRemaining;
using _pj108.Code.Enemies;
using _pj108.Code.GameSettings;
using _pj108.Code.Levels;
using _pj108.Code.Miner;
using _pj108.Code.Player;
using _pj108.Code.Units;
using Cinemachine;
using EventSystem.Runtime.Core.Dispose;
using EventSystem.Runtime.Core.Managers;
using Main.Levels.Data;
using NavySpade.Core.Runtime.Levels;
using System.Collections.Generic;
using _pj108.Code.Extension;
using UnityEngine;


namespace _pj108.Code {
    public class Root : LevelBase {
        [SerializeField] private SceneData _sceneData;
        [SerializeField] private SpawnUnitsData _spawnUnitsData;
        [SerializeField] private SpawnEnemiesData _spawnEnemiesData;
        [SerializeField] private CinemachineVirtualCamera _virtualCamera;

        private readonly EventDisposal _dispose = new EventDisposal();
        
        private Vector3 _playerPosition;
        private TimeRemainingController _timer;
        private int _levelTimer;
        private InputController _input;
        private PlayerController _player;
        private List<EnemyController> _enemies = new List<EnemyController>();
        private CameraController _camera;

        private UnitSpawnerController _unitSpawnerController;
        private FightModel _fightModel;

        public override void Init(SceneLevelData dataBase) {
            EventManager.Add(GameStatesEM.StartGame, StartGame).AddTo(_dispose);

            LevelExtensions.Init(_sceneData, _spawnUnitsData);
            LoadExtLevelData(dataBase);
            
            var playerModel = new CaptainModel(){ };
            var playerSettings = new LeaderSettings() {
                CaptainSettings = Settings.Get<CaptainSettings>(),
                MinerSettings = Settings.Get<MinerSettings>(),
                InputSettings = Settings.Get<InputSettings>(),
                SquadSettings = Settings.Get<SquadSettings>(),
                BattleSettings = Settings.Get<BattleSettings>(),
                InventorySettings = Settings.Get<InventorySettings>(),
                CameraSettings = Settings.Get<CameraSettings>(),
            };
            _input = new InputController(playerModel,playerSettings);
            _player = new PlayerController(_sceneData, playerModel, playerSettings, _playerPosition);
            _camera = new CameraController(playerModel,playerSettings,_virtualCamera, _player.Transform);

            _fightModel = new FightModel();
            _fightModel.AddPlayer(_player);
            _player.OnDied += EndRound;
            var neutralModel = new NeutralModel();            
            _unitSpawnerController = new UnitSpawnerController(neutralModel, _spawnUnitsData);

            var timer = new TimeRemaining(EndRound, _levelTimer);
            TimeRemainingExtensions.AddTimeRemaining(timer);
            Gui.Instance.SetTime((int)timer.CurrentTime);

            _timer = new TimeRemainingController();
            SpawnEnemies();
        }

        private void SpawnEnemies() {
            foreach (var enemyData in _spawnEnemiesData.List)
            {
                var captainModel = new CaptainModel(){ };
                var leaderSettings = new LeaderSettings(){
                    CaptainSettings = new CaptainSettings()
                    {
                        Speed = Settings.Get<CaptainSettings>().Speed,
                        CaptainPrefab = Settings.Get<EnemySettings>().Prefab
                    },
                    MinerSettings = Settings.Get<MinerSettings>(),
                    InputSettings = Settings.Get<InputSettings>(),
                    SquadSettings = new SquadSettings()
                    {
                        Color = enemyData.Color,
                        MaterialColor = enemyData.MaterialColor,
                        OwnerMaterialColor = enemyData.OwnerMaterialColor,
                        UnitView = Settings.Get<SquadSettings>().UnitView,
                        LuckForInstancingUnit = Settings.Get<SquadSettings>().LuckForInstancingUnit,
                    },
                    BattleSettings = Settings.Get<BattleSettings>(),
                };


                leaderSettings.CaptainSettings.CaptainPrefab = Settings.Get<EnemySettings>().Prefab;
                var enemy = new EnemyController(_sceneData, captainModel, leaderSettings, enemyData, Settings.Get<EnemySettings>(), enemyData.UnitsCount);
                _fightModel.Add(enemy);
                enemy.OnDied += () => _fightModel.Remove(enemy);
                enemy.OnDied += EndRound;
            }
        }

        private void LoadExtLevelData(SceneLevelData dataBase) {
            if (dataBase.AdditionsData.Length > 0)
            {
                for (int i = 0; i < dataBase.AdditionsData.Length; i++)
                {
                    var data = dataBase.AdditionsData[i].ExtensionData;
                    if (data is LevelData levelData)
                    {
                        _playerPosition = GetPosition(levelData);
                        _levelTimer = levelData.Time;
                    }
                }
            }

            static Vector3 GetPosition(LevelData levelData) {
                return levelData.IsRandomPositions
                    ? LevelExtensions.GetFreePosition()
                    : levelData.PlayerPosition;
            }
        }

        private void StartGame() {
            Controllers.Init();
        }

        private void Update() {
            Controllers.Execute(Time.deltaTime);
        }

        public void EndRound()
        {
            if (_fightModel.IsPlayerWin())
            {
                if (_fightModel.CheckEnemies()) return;
                EventManager.Invoke(MainEnumEvent.Win);
                return;
            }    
            EventManager.Invoke(MainEnumEvent.Fail);
        }

        private void OnDestroy() {
            Controllers.Dispose();
            _dispose.Dispose();
        }
    }

}