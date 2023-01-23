using _pj108.Code;
using _pj108.Code.Levels;
using TMPro;
using UnityEngine;
using UnityEngine.UI;


namespace NavySpade.UI.Popups.DifferentPopups {
    internal class WinItemScore : MonoBehaviour {
        [SerializeField] private TMP_Text _score;
        [SerializeField] private TMP_Text _name;
        [SerializeField] private Image _labelColor;

        public void Init(ScoreItem item) {
            SetColor(item.Color);
            SetNameitem(item.Name);
            SetScore(item.Score);
        }

        private void SetScore(int score) {
            _score.text = $"{score}";
        }

        private void SetNameitem(string itemName) {
            _name.text = $"{itemName}";
        }

        private void SetColor(Color color) {
            _labelColor.color = color;
            // var material = meshRenderer.materials[0];
            // material.SetColor(BaseColor, _leader.MaterialUnit);
            // meshRenderer.materials[0] = material;
        }
    }
}