using _pj108.Code.BaseLogic;
using _pj108.Code.Extension;
using _pj108.Code.GameSettings;
using _pj108.Code.Levels;
using _pj108.Code.Miner;
using _pj108.Code.Player;
using _pj108.Code.Units;
using UniRx;
using UnityEngine;
using UnityEngine.AI;
using Vector3 = UnityEngine.Vector3;

namespace _pj108.Code.Enemies
{
    internal class EnemyController : CaptainController, IExecute {
        private NavMeshAgent _agent;
        private float _patrolTime = 0;
        private float _findPointRadius = 50f;
        private float _patrolFrequency = 0;
        private float _miningTime = 0;
        private float _miningCheckerFrequency = 3;
        private Vector3 _targetPoint;
        private bool _canMove;
        private bool _isMining;
        private bool _isAttacking;
        private int _startUnitsCount;
        private static readonly int RUN = Animator.StringToHash("Run");

        public EnemyController(SceneData sceneData, CaptainModel captainModel, LeaderSettings leaderSettings,
                               EnemyData enemyData, EnemySettings enemySettings, int unitCount) : base(sceneData, captainModel, leaderSettings,
                                                           enemyData.Point.position) {
            _agent = _view.gameObject.AddNavMeshAgent();
            _patrolFrequency = enemySettings.PathUpdateFrequency;
            _findPointRadius = enemySettings.PathRadiusFinder;
            
            _miner.OnMine += OnMine;
            _miner.OnCompleteMine += CompleteMine;
            _model.UnitStartMine.Subscribe(StartMineFromSquad).AddTo(_subscriptions);

            _battle.Init(this, leaderSettings, _model);
            _battle.OnAttack += Attack;
            _startUnitsCount = unitCount;
            _model.PartsOfUnits.ObserveAdd().Subscribe(_squad.AddUnit).AddTo(_subscriptions);
            Controllers.Add(this);
        }

        private void OnMine(ResourceMining obj)
        {
            if (_isMining || _isAttacking) return;

            StopMove();
            _isMining = true;
        }

        public override void Init()
        {
            base.Init();
            UpdateMovePoint();
            _canMove = true;
            _squad.CreateNewUnitForce(SpawnPosition, _startUnitsCount);
        }

        public void Execute(float deltaTime)
        {
            if (!IsAlive) return;
            PathChecker(deltaTime);
        }

        private void PathChecker(float deltaTime)
        {
            if (!_canMove) return;

            _patrolTime += deltaTime;
            if (_patrolTime >= _patrolFrequency)
            {
                _patrolTime = 0;
                UpdateMovePoint();
            }
        }

        private void CompleteMine()
        {
            _isMining = false;
            UpdateMovePoint();
            _canMove = true;

        }

        private void StartMineFromSquad(Vector3 position) 
        {
            if (_isMining) return;

            StopMove();
            _agent.SetDestination(position);
            _agent.isStopped = false;
        }

        public void UpdateMovePoint()
        {
            if (_isAttacking || _agent == null) return;
            _targetPoint = RandomNavmeshLocation(_agent.transform, _findPointRadius);
            _agent.SetDestination(_targetPoint);
            _agent.isStopped = false;
            _view.Animator.SetBool(RUN, true);
        }

        private void StopMove()
        {
            _view.Animator.SetBool(RUN, false);
            _agent.isStopped = true;
            _canMove = false;

        }

        private async void Attack(UnitController unit)
        {
            _isAttacking = true;
            await System.Threading.Tasks.Task.Delay(300);
            _isAttacking = false;
        }

        public Vector3 RandomNavmeshLocation(Transform owner, float radius)
        {
            Vector3 randomDirection = Random.insideUnitSphere * radius;
            randomDirection += owner.position;
            NavMeshHit hit;
            Vector3 finalPosition = Vector3.zero;
            if (NavMesh.SamplePosition(randomDirection, out hit, radius, 1))
            {
                finalPosition = hit.position;
            }
            return finalPosition;
        }
    }
}