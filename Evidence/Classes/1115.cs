public class PlayOnWithRewardedView : MonoBehaviour // TypeDefIndex: 1115
{
	// Fields
	[SerializeField]
	private TMP_Text _addText; // 0x18
	[SerializeField]
	private SpriteRenderer _tagRenderer; // 0x20
	[SerializeField]
	private Sprite _extraBottleTagSprite; // 0x28
	[SerializeField]
	private Sprite _tinyBottleTagSprite; // 0x30
	[SerializeField]
	private Sprite _undoTagSprite; // 0x38
	[SerializeField]
	private Sprite _megaShuffleTagSprite; // 0x40
	[SerializeField]
	private GameObject _progressBarContainer; // 0x48
	[SerializeField]
	private SpriteRenderer _fillSpriteRenderer; // 0x50
	[SerializeField]
	private float _progressBarFullWidth; // 0x58
	[SerializeField]
	private TMP_Text _progressText; // 0x60

	// Methods

	// RVA: 0x1606A90 Offset: 0x1606A90 VA: 0x1606A90
	public void UpdateView(int currentProgress, int progressTarget, PlayOnBehaviourType playOnBehaviours) { }

	// RVA: 0x16068FC Offset: 0x16068FC VA: 0x16068FC
	public void UpdateProgressBar(int current, int target, bool instant = False) { }

	// RVA: 0x1606CD4 Offset: 0x1606CD4 VA: 0x1606CD4
	public void .ctor() { }
}

// Namespace: Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts