using _pj108.Code.BaseLogic;
using _pj108.Code.GameSettings;
using _pj108.Code.Player;
using _pj108.Code.Units;
using System;
using UnityEngine;


namespace _pj108.Code.Captain {
    [RequireComponent(typeof(Collider))] public class BattleModule : MonoBehaviour {
        [SerializeField] private SphereCollider[] _colliders;
        [SerializeField] private LineRenderer _lineRenderer;

        private float _attackTime = 0f;
        private float _attackFrequency;
        private bool _isAttacking;
        private CaptainController _owner;
        private CaptainModel _captainModel;
        private UnitModel _model;
        private LeaderSettings _settings;

        private static readonly int BaseColor = Shader.PropertyToID("_AlbedoColor");
        private static readonly int ATTACK_HASH = Animator.StringToHash("Attack");

        public bool IsAttacking => _isAttacking;
        public CaptainController Owner => _owner;
        public CaptainModel OwnerModel => _captainModel;

        public Action<UnitController> OnAttack;

        public void Init(CaptainController captainController, LeaderSettings settings, CaptainModel captainModel, UnitModel model = null) {
            _captainModel = captainModel;
            _model = model;
            _owner = captainController;
            _settings = settings;
            var material = _lineRenderer.materials[0];
            material.SetColor(BaseColor, settings.SquadSettings.Color);
            _lineRenderer.material = material;
            _attackFrequency = settings.BattleSettings.AttackFrequency;
            _attackTime = _attackFrequency;
            _isAttacking = true;
        }

        public void UpdateRadius(float viewRadius) {
            foreach (var collider in _colliders)
            {
                collider.radius = viewRadius;
            }
        }

        private void OnTriggerStay(Collider other)
        {
            if (_isAttacking || _captainModel == null) return;

            if (other.TryGetComponent(out UnitView unit))
            {
                Attack(unit);
            }
            else if (other.TryGetComponent(out CaptainView captain))
            {
                Attack(captain);
            }
        }

        private void Attack(UnitView unit)
        {
            if (unit.Controller.OwnerModel != _captainModel && unit.WasAttached)
            {
                var enemyUnits = unit.Controller.OwnerModel.UnitsController.Count;
                var mineUnits = _captainModel.UnitsController.Count;
                if (enemyUnits < mineUnits)
                {
                    _attackTime = _attackFrequency;
                    _isAttacking = true;
                    if (_model != null)
                        _model.WorkState.Value = UnitWorkState.Attack;

                    _owner.View.Animator.SetTrigger(ATTACK_HASH);
                    GetUnit(unit);
                }
            }
        }

        private void Attack(CaptainView captain)
        {
            if (captain.BattleModule != this)
            {
                var enemyUnits = captain.BattleModule.OwnerModel.UnitsController.Count;
                var mineUnits = _captainModel.UnitsController.Count;
                if (enemyUnits < mineUnits)
                {
                    if (enemyUnits == 0)
                    {
                        _attackTime = _attackFrequency;
                        _isAttacking = true;
                        if (_model != null)
                            _model.WorkState.Value = UnitWorkState.Attack;
                        captain.BattleModule.Owner.View.Animator.SetTrigger(ATTACK_HASH);
                        captain.BattleModule.Owner.Die();
                        return;
                    }
                }
            }
        }

        private void GetUnit(UnitView unit)
        {
            unit.Controller.OwnerModel.UnitsController.Remove(unit.Controller);
            unit.Controller.Init(_owner, _settings, _captainModel);
            _captainModel.UnitsController.Add(unit.Controller);
            OnAttack?.Invoke(unit.Controller);
            _captainModel.SquadAttack.Execute();
            _isAttacking = true;
        }

        private void LateUpdate() {
            DrawPolygon(96, _colliders[0].radius, transform.position, 0.1f, 0.1f);
        }

        void DrawPolygon(int vertexNumber, float radius, Vector3 centerPos, float startWidth, float endWidth) {
            _lineRenderer.startWidth = startWidth;
            _lineRenderer.endWidth = endWidth;
            _lineRenderer.loop = true;
            var angle = 2 * Mathf.PI / vertexNumber;
            _lineRenderer.positionCount = vertexNumber;

            for (var i = 0; i < vertexNumber; i++)
            {
                var rotationMatrix = new Matrix4x4(new Vector4(Mathf.Cos(angle * i), 0, Mathf.Sin(angle * i), 0),
                                                   new Vector4(-1 * Mathf.Sin(angle * i), 0, Mathf.Cos(angle * i), 0),
                                                   new Vector4(0, 0, 1, 0),
                                                   new Vector4(0, 0, 0, 1));
                var initialRelativePosition = new Vector3(0, radius, 0);
                _lineRenderer.SetPosition(i, centerPos + rotationMatrix.MultiplyPoint(initialRelativePosition));
            }
        }
        private void Update()
        {
            if (!_isAttacking) return;

            _attackTime -= Time.deltaTime;

            if (_attackTime <= 0)
            {
                _isAttacking = false;
                if (_model != null)
                    _model.WorkState.Value = UnitWorkState.Idle;
            }
        }
    }
}