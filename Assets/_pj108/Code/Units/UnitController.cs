using _pj108.Code.BaseLogic;
using _pj108.Code.Captain;
using _pj108.Code.Miner;
using _pj108.Code.Player;
using Cysharp.Threading.Tasks;
using UniRx;
using UnityEngine;


namespace _pj108.Code.Units {
    public class UnitController : BaseController, IExecute
     {
        private CaptainModel _captainModel;
        private UnitView _view;
        private CaptainController _owner;
        private UnitModel _model;
        private LeaderSettings _settings;

        private int _level;
        private UnitState _oldState;
        private UnitWorkState _oldWorkState;
        private AnimState? _state;
        private static readonly int BaseColor = Shader.PropertyToID("_AlbedoColor");
        private static readonly int Run = Animator.StringToHash("Run");
        private static readonly int ATTACK_HASH = Animator.StringToHash("Attack");
        private static readonly int Speed = Animator.StringToHash("Speed");
        private bool _removed = false;
        private Rigidbody _rigidbody;
        private Animator _animator;
        private MeshRenderer[] _renderer;
        private MinerController _miner;
        private Attractor _attractor;
        private BattleModule _battler;
        private ResourceMining _target;
        private int _lookAtTarget;
        private float _leftTime;
        private Vector3 _oldPos;

        private bool WasAttached {
            get => _view.WasAttached;
            set => _view.WasAttached = value;
        }

        public CaptainModel OwnerModel => _captainModel;
        public CaptainController Owner => _owner;
        public UnitView View => _view;
        public int Level {
            get => _level;
            set {
                _level = value;
                _model.State.Value = value switch
                {
                    1 => UnitState.Legs,
                    2 => UnitState.Body,
                    3 => UnitState.Full,
                    _ => UnitState.Dead
                };

                _view.SwitchPartsOfBody(
                    value switch{
                        1 => UnitState.Legs,
                        2 => UnitState.Body,
                        3 => UnitState.Full,
                        _ => UnitState.Dead
                    });
            }
        }
        public Transform Transform => _view.transform;

        public UnitController(UnitView view, UnitModel model) {
            _view = view;
            _model = model;
            _rigidbody = view.RibidBody;
            _renderer = view.Renderer;
            _animator = view.Animator;
            _view.Controller = this;
            Controllers.Add(this);
        }

        public void Init(CaptainController owner, LeaderSettings settings, CaptainModel model, int level = 3) {
            base.Init();
            _owner = owner;
            _settings = settings;
            _captainModel = model;
            _model.State.Subscribe(ChangeState).AddTo(_subscriptions);
            if (level == 3)
            {
                _model.State.Value = UnitState.Full;
            }
            _attractor = _view.Attactor;
            _attractor.On();

            WasAttached = true;
            if (_settings.SquadSettings.MaterialColor != null)
                SetMaterial(_settings.SquadSettings.MaterialColor);
            else
                SetColor(_settings.SquadSettings.Color);

            Level = level;
        }

        private void ChangeState(UnitState state)
        {
            if (_oldState == state) return;

            switch (state)
            {
                case UnitState.Dead:
                    break;
                case UnitState.Legs:
                    break;
                case UnitState.Body:
                    break;
                case UnitState.Full:
                    EnableMining();
                    EnableAttacking();
                    break;
                default:
                    break;
            }
            _oldState = state;
        }

        private void ChangeWorkState(UnitWorkState state)
        {
            switch (state)
            {
                case UnitWorkState.Attack:
                    _miner.ToogleMine(false);
                    break;
                case UnitWorkState.Mining:
                    break;
                case UnitWorkState.Idle:
                    _miner.ToogleMine(true);
                    break;
                default:
                    break;
            }
            _oldWorkState = state;
        }

        private void EnableMining()
        {
            var mineView = _view.MinerView;
            if (_miner != null)
            {
                _miner.OnStartMine -= LookAtMyMine;
                _miner.OnMine -= LookAtMine;
            }
            _miner = new MinerController(mineView, _captainModel, _settings);
            _miner.Init();
            _miner.Animator = _animator;
            _miner.OnStartMine += LookAtMyMine;
            _miner.OnMine += LookAtMine;
            _model.WorkState.Subscribe(ChangeWorkState).AddTo(_subscriptions);
        }

        private void EnableAttacking()
        {
            _battler = _view.BattleModule;
            _battler.Init(_owner, _settings, _captainModel);
        }

        private void Attack(Unit _)
        {
            //_animator.SetTrigger(ATTACK_HASH);
        }

        private void LookAtMyMine(ResourceMining target)
        {
            _captainModel.UnitStartMine.Execute(_view.transform.position);
        }

        private void LookAtMine(ResourceMining target) {
            _lookAtTarget = target.HealthPoint;
            _target = target;
        }

        public void Execute(float deltaTime) {
            ChangeAnimation(deltaTime);
        }

        public void Move() {
            if (_removed && !WasAttached)
            {
                DeattachToLeader();
                return;
            }

            var direction = _owner.Transform.position - _view.transform.position;
            direction.y = 0;

            _rigidbody.velocity = direction.normalized * _settings.CaptainSettings.Speed;
            
            Rotate();
        }
        
        private void ChangeAnimation(float deltaTime) {
            _leftTime -= deltaTime;

            if (!(_leftTime < 0)) return;
            _leftTime = _view.Config.AnimationSpeedLeftTime;

            var speed = Vector3.Distance(Transform.position, _oldPos);
            _oldPos = Transform.position;

            _animator.SetFloat(Speed, speed);
            // _animator.SetFloat(AnimationSpeed, Mathf.Min(Mathf.Max(speed * 5, 0.1f), 1f));// если надо замедлять анимацию привяжи скорость анимации к параметру новому
        }

        private void Rotate() {
            if (_lookAtTarget > 0)
            {
                _lookAtTarget--;
                if (_target == null) return;
                var resTrans = _target.transform.position;
                _view.Root.LookAt(new Vector3(resTrans.x, _view.Root.position.y, resTrans.z));
            } else
            {
                _view.Root.forward = Vector3.Lerp(_view.Root.forward, _owner.Transform.forward, 5 * Time.deltaTime);
            }
        }

        private void SetColor(Color materialUnit) {
            foreach (var t in _renderer)
            {
                var material = t.materials[0];
                material.SetColor(BaseColor, materialUnit);
                t.materials[0] = material;
            }
        }

        private void SetMaterial(Material materialUnit)
        {
            foreach (var t in _renderer)
            {
                var material = new Material(materialUnit);
                t.material = material;
            }
        }

        private void DeattachToLeader() {
            _removed = true;
            WasAttached = false;
            _subscriptions.Dispose();
            Object.Destroy(_view.gameObject);
            Dispose();
        }

        public override void Dispose() {
            base.Dispose();
            _miner.OnMine -= LookAtMine;
            _miner.OnStartMine -= LookAtMyMine;
        }
     }
}