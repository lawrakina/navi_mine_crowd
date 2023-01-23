using System;
using UnityEngine;


namespace _pj108.Code.Levels {
    [Serializable] public class SceneData {
        [field: SerializeField] public Transform Actors { get; set; }
        [SerializeField] private Transform _leftUp;
        [SerializeField] private Transform _rightDown;

        public Vector4 GetBorders =>
            new Vector4(
                _leftUp.position.x,
                _leftUp.position.z,
                _rightDown.position.x,
                _rightDown.position.z);
    }
}