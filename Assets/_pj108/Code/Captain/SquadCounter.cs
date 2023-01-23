using TMPro;
using UnityEngine;


namespace _pj108.Code.Captain {
    public class SquadCounter : MonoBehaviour {
        [SerializeField] private TMP_Text _count;
        [SerializeField] private Transform _root;
        [SerializeField] private SpriteRenderer[] _labels;

        private Camera _canvas;

        public void UpdateCount(int count) {
            if (count <= 0)
            {
                _count.text = $"DEAD";
                return;
            }

            _count.text = $"{count}";
        }

        public void SetColor(Color color) {
            foreach (var label in _labels)
            {
                label.color = color;
            }
        }
    }
}