using _pj108.Code.Units;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace NavySpade.Modules.FOV
{
    public class FieldOfView : MonoBehaviour
    {
        [SerializeField] private float _viewRadius = 10;
        [Range(0, 360), SerializeField] private float _viewAngle = 90;

        [Space]
        [SerializeField] private LayerMask _targetLayer;
        [SerializeField] private LayerMask _obstacleLayer;
        [SerializeField] private float _meshResolution = 5;
        [SerializeField] private MeshFilter _viewMeshFilter;
        [SerializeField] private List<Collider> _ignoredColliders;

        private List<Transform> _visibleTargets = new List<Transform>();
        private List<Collider> _visibleTargetsColliders = new List<Collider>();
        private Mesh _viewMesh;
        private float _edgeDstThreshold = 0.5f;
        private float _edgeResolveIterations = 4;
        private float _findVisibleTargetsDelay = 0.25f;

        public float ViewRadius { get => _viewRadius; }
        public float ViewAngle { get => _viewAngle; }
        public List<Transform> VisibleTargets { get => _visibleTargets; }
        public List<Collider> VisibleTargetsColliders { get => _visibleTargetsColliders; }
        public Action<Collider> OnFind;

        private void Awake()
        {
            _viewMesh = new Mesh();
            _viewMesh.name = gameObject.name + " View Mesh";
            _viewMeshFilter.mesh = _viewMesh;

            StartCoroutine(FindTargetsWithDealy(_findVisibleTargetsDelay));
        }

        private void LateUpdate()
        {
            DrawViewMesh();
        }

        #region FOV Logic

        public IEnumerator FindTargetsWithDealy(float delay)
        {
            while (true)
            {
                yield return new WaitForSeconds(delay);
                FindVisibleTargets();
            }
        }

        public void FindVisibleTargets()
        {
            _visibleTargets.Clear();
            _visibleTargetsColliders.Clear();
            Collider[] targetsInViewRadius = Physics.OverlapSphere(transform.position, _viewRadius, _targetLayer);

            foreach (Collider targetInRadius in targetsInViewRadius)
            {
                Transform target = targetInRadius.transform;
                Collider targetCollider = targetInRadius;

                if (!_ignoredColliders.Contains(targetInRadius))
                {
                    Vector3 dirToTarget = (target.position - transform.position).normalized;

                    if (Vector3.Angle(transform.forward, dirToTarget) < _viewAngle / 2)
                    {
                        float distToTarget = Vector3.Distance(transform.position, target.position);

                        if (!Physics.Raycast(transform.position, dirToTarget, distToTarget, _obstacleLayer))
                        {
                            _visibleTargets.Add(target);
                            _visibleTargetsColliders.Add(targetCollider);
                        }
                    }
                }
            }
            while (_visibleTargetsColliders.Count > 0)
            {
                var target = _visibleTargetsColliders[0];
                if (target.TryGetComponent(out UnitView unit))
                {
                    if (unit.WasAttached)
                        _visibleTargetsColliders.RemoveAt(0);
                    else
                        break;
                }
                else
                {
                    break;
                }
            }

            if (_visibleTargetsColliders.Count > 0 )
            {
                
                OnFind?.Invoke(_visibleTargetsColliders[0]);
            }
        }

        #endregion

        #region Draw Mesh

        public void DrawViewMesh()
        {
            int stepCount = Mathf.RoundToInt(_viewAngle * _meshResolution);
            float stepAngleSize = _viewAngle / stepCount;
            List<Vector3> viewPoints = new List<Vector3>();

            ViewCastInfo oldViewCast = new ViewCastInfo();

            for (int i = 0; i <= stepCount; i++)
            {
                float angle = transform.eulerAngles.y - _viewAngle / 2 + stepAngleSize * i;
                //Debug.DrawLine(transform.position, transform.position + DirFromAngle(angle, true) * viewRadius, Color.black);
                ViewCastInfo newViewCast = ViewCast(angle);

                if (i > 0)
                {
                    bool edgeDstThresholdExceed = Mathf.Abs(oldViewCast.Distance - newViewCast.Distance) > _edgeDstThreshold;

                    if (oldViewCast.Hit != newViewCast.Hit || (oldViewCast.Hit && newViewCast.Hit && edgeDstThresholdExceed))
                    {
                        EdgeInfo edge = FindEdge(oldViewCast, newViewCast);

                        if (edge.PointA != Vector3.zero)
                        {
                            viewPoints.Add(edge.PointA);
                        }

                        if (edge.PointB != Vector3.zero)
                        {
                            viewPoints.Add(edge.PointB);
                        }
                    }
                }

                viewPoints.Add(newViewCast.Point);
                oldViewCast = newViewCast;
            }

            int vertexCount = viewPoints.Count + 1;
            Vector3[] vertices = new Vector3[vertexCount];
            int[] triangles = new int[(vertexCount - 2) * 3];

            vertices[0] = Vector3.zero;
            for (int i = 0; i < vertexCount - 1; i++)
            {
                vertices[i + 1] = transform.InverseTransformPoint(viewPoints[i]);

                if (i < vertexCount - 2)
                {
                    triangles[i * 3] = 0;
                    triangles[i * 3 + 1] = i + 1;
                    triangles[i * 3 + 2] = i + 2;
                }
            }

            _viewMesh.Clear();
            _viewMesh.vertices = vertices;
            _viewMesh.triangles = triangles;
            _viewMesh.RecalculateNormals();
        }

        private EdgeInfo FindEdge(ViewCastInfo minViewCast, ViewCastInfo maxViewCast)
        {
            float minAngle = minViewCast.Angle;
            float maxAngle = maxViewCast.Angle;
            Vector3 minPoint = Vector3.zero;
            Vector3 maxPoint = Vector3.zero;

            for (int i = 0; i < _edgeResolveIterations; i++)
            {
                float angle = (minAngle + maxAngle) / 2;
                ViewCastInfo newViewCast = ViewCast(angle);

                bool edgeDstThresholdExceed = Mathf.Abs(minViewCast.Distance - newViewCast.Distance) > _edgeDstThreshold;

                if (newViewCast.Hit == minViewCast.Hit && !edgeDstThresholdExceed)
                {
                    minAngle = angle;
                    minPoint = newViewCast.Point;
                }
                else
                {
                    maxAngle = angle;
                    maxPoint = newViewCast.Point;
                }
            }

            return new EdgeInfo(minPoint, maxPoint);
        }

        private ViewCastInfo ViewCast(float globalAngle)
        {
            Vector3 dir = DirFromAngle(globalAngle, true);
            RaycastHit hit;

            if (Physics.Raycast(transform.position, dir, out hit, _viewRadius, _obstacleLayer))
            {
                return new ViewCastInfo(true, hit.point, hit.distance, globalAngle);
            }
            else
            {
                return new ViewCastInfo(false, transform.position + dir * _viewRadius, _viewRadius, globalAngle);
            }
        }

        public Vector3 DirFromAngle(float angleInDegrees, bool angleIsGlobal)
        {
            if (!angleIsGlobal)
            {
                angleInDegrees += transform.eulerAngles.y;
            }

            return new Vector3(Mathf.Sin(angleInDegrees * Mathf.Deg2Rad), 0, Mathf.Cos(angleInDegrees * Mathf.Deg2Rad));
        }

        public struct ViewCastInfo
        {
            public bool Hit;
            public Vector3 Point;
            public float Distance;
            public float Angle;

            public ViewCastInfo(bool hit, Vector3 point, float distance, float angle)
            {
                Hit = hit;
                Point = point;
                Distance = distance;
                Angle = angle;
            }
        }

        public struct EdgeInfo
        {
            public Vector3 PointA;
            public Vector3 PointB;

            public EdgeInfo(Vector3 pointA, Vector3 pointB)
            {
                PointA = pointA;
                PointB = pointB;
            }
        }

        #endregion
    }
}
