public class MiniGameTutorialController : MonoBehaviour // TypeDefIndex: 3559
{
	// Fields
	[SerializeField]
	private MiniGameAnimationConfig _animationConfig; // 0x18
	[SerializeField]
	private SpriteRenderer _arrow; // 0x20
	[SerializeField]
	private SpriteRenderer _background; // 0x28
	[SerializeField]
	private UITouchBlockerElement _backgroundBlocker; // 0x30
	[SerializeField]
	private TextMeshPro _infoText; // 0x38
	private MiniGameBoardCell _targetCell; // 0x40
	private int _targetCellDefaultRaycastOrder; // 0x48
	private int _targetCellDefaultSortingOrder; // 0x4C
	private Sequence _tutorialSequence; // 0x50

	// Methods

	// RVA: 0x218CDD0 Offset: 0x218CDD0 VA: 0x218CDD0
	public void Initialize(MiniGameBoardCell targetCell) { }

	// RVA: 0x218CFE0 Offset: 0x218CFE0 VA: 0x218CFE0
	public Tween PlayTutorialSequence() { }

	// RVA: 0x2191758 Offset: 0x2191758 VA: 0x2191758
	private void OnTutorialCellClicked() { }

	// RVA: 0x21916B4 Offset: 0x21916B4 VA: 0x21916B4
	private Vector3 GetDynamicTutorialInfoTextPosition() { }

	// RVA: 0x218D22C Offset: 0x218D22C VA: 0x218D22C
	public void Hide() { }

	// RVA: 0x21909A8 Offset: 0x21909A8 VA: 0x21909A8
	public void Dispose() { }

	// RVA: 0x21917A8 Offset: 0x21917A8 VA: 0x21917A8
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x21917B0 Offset: 0x21917B0 VA: 0x21917B0
	private void <PlayTutorialSequence>b__10_0() { }
}

// Namespace: Modules.Contexts.Home.MergeMiniGame.Scripts