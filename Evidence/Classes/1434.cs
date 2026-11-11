public class BottleSelectionBackground : MonoBehaviour // TypeDefIndex: 1434
{
	// Fields
	[SerializeField]
	private SpriteRenderer _spriteRenderer; // 0x18
	private Color _initialColor; // 0x20
	private Color _initialTextColor; // 0x30
	[SerializeField]
	private GameObject _container; // 0x40
	[SerializeField]
	private TextMeshPro _text; // 0x48
	private Tween _tween; // 0x50
	private Tween _textTween; // 0x58
	[SerializeField]
	private Button _cancelSelectionButton1; // 0x60
	[SerializeField]
	private Button _cancelSelectionButton2; // 0x68
	private const string ShuffleTextKey = "GameBoosterShuffleInfo";
	private const string RevealTextKey = "GameBoosterRevealInfo";

	// Methods

	// RVA: 0x1E96C30 Offset: 0x1E96C30 VA: 0x1E96C30
	public void Awake() { }

	// RVA: 0x1E96F48 Offset: 0x1E96F48 VA: 0x1E96F48
	private void Show(InputMode inputMode) { }

	// RVA: 0x1E97280 Offset: 0x1E97280 VA: 0x1E97280
	private void SetInitialPositionOfBottomInputBlocker(int bottleRowCount) { }

	// RVA: 0x1E97368 Offset: 0x1E97368 VA: 0x1E97368
	private void HideText() { }

	// RVA: 0x1E971A4 Offset: 0x1E971A4 VA: 0x1E971A4
	private void SetText(InputMode inputMode) { }

	// RVA: 0x1E973C8 Offset: 0x1E973C8 VA: 0x1E973C8
	private void CancelSelection() { }

	// RVA: 0x1E9743C Offset: 0x1E9743C VA: 0x1E9743C
	private void Hide() { }

	// RVA: 0x1E97624 Offset: 0x1E97624 VA: 0x1E97624
	public void OnDestroy() { }

	// RVA: 0x1E978F0 Offset: 0x1E978F0 VA: 0x1E978F0
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x1E978F8 Offset: 0x1E978F8 VA: 0x1E978F8
	private void <Hide>b__17_0() { }
}

// Namespace: Modules.Contexts.GamePlay.Boosters.Scripts