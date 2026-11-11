public class MergeMiniGameScatterQueue : MonoBehaviour // TypeDefIndex: 3618
{
	// Fields
	[SerializeField]
	private Transform _scatterQueueTargetView; // 0x18
	[SerializeField]
	private Transform _scatterContentRoot; // 0x20
	[SerializeField]
	private ToolbarButton _toolbarButton; // 0x28
	[SerializeField]
	private Transform _scatterQueueNextParent; // 0x30
	[SerializeField]
	private TMP_Text _scatterQueueCountText; // 0x38
	[SerializeField]
	private Transform _scatterQueueNextItemView; // 0x40
	[SerializeField]
	private SpriteRenderer _itemSpriteView; // 0x48
	[SerializeField]
	private SpriteRenderer _bubbleSpriteView; // 0x50
	[SerializeField]
	private MergeMiniGameAnimationConfig _animationConfig; // 0x58
	[SerializeField]
	private MergeItemsSpriteLibrary _spriteLibrary; // 0x60
	private string localizedToolbarDescriptionKey; // 0x68
	private MergeMiniGameScatterQueueViewModel _viewModel; // 0x70
	private Sequence _sequence; // 0x78
	private Sequence _increaseScatterQueueSequence; // 0x80
	private Sequence _scatterQueueViewAppearSequence; // 0x88
	private float _restingLocalY; // 0x90

	// Methods

	// RVA: 0x3FA9024 Offset: 0x3FA9024 VA: 0x3FA9024
	public void Initialize(MergeMiniGameScatterQueueViewModel viewModel) { }

	// RVA: 0x3FB0010 Offset: 0x3FB0010 VA: 0x3FB0010
	private void SetSprite(MergeMiniGameItemModel item) { }

	// RVA: 0x3FA98C0 Offset: 0x3FA98C0 VA: 0x3FA98C0
	public void Dispose() { }

	// RVA: 0x3FA8B64 Offset: 0x3FA8B64 VA: 0x3FA8B64
	public Sequence PlayAppearAnimation(MergeMiniGameScatterQueueViewModel viewModel) { }

	// RVA: 0x3FA8650 Offset: 0x3FA8650 VA: 0x3FA8650
	public Sequence PlayScatterItemGoesToQueueAnimation(MergeMiniGameScatterQueueViewModel viewModel) { }

	// RVA: 0x3FA8DB0 Offset: 0x3FA8DB0 VA: 0x3FA8DB0
	public Sequence IncreaseScatterQueue(MergeMiniGameScatterQueueViewModel viewModel) { }

	// RVA: 0x3FB00B0 Offset: 0x3FB00B0 VA: 0x3FB00B0
	public Transform GetTargetTransform() { }

	// RVA: 0x3FB00B8 Offset: 0x3FB00B8 VA: 0x3FB00B8
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x3FB00C0 Offset: 0x3FB00C0 VA: 0x3FB00C0
	private void <PlayAppearAnimation>b__19_0() { }

	[CompilerGenerated]
	// RVA: 0x3FB01D8 Offset: 0x3FB01D8 VA: 0x3FB01D8
	private void <PlayAppearAnimation>b__19_1() { }

	[CompilerGenerated]
	// RVA: 0x3FB0204 Offset: 0x3FB0204 VA: 0x3FB0204
	private void <PlayScatterItemGoesToQueueAnimation>b__20_0() { }

	[CompilerGenerated]
	// RVA: 0x3FB027C Offset: 0x3FB027C VA: 0x3FB027C
	private void <PlayScatterItemGoesToQueueAnimation>b__20_1() { }

	[CompilerGenerated]
	// RVA: 0x3FB033C Offset: 0x3FB033C VA: 0x3FB033C
	private void <PlayScatterItemGoesToQueueAnimation>b__20_2() { }

	[CompilerGenerated]
	// RVA: 0x3FB0358 Offset: 0x3FB0358 VA: 0x3FB0358
	private void <PlayScatterItemGoesToQueueAnimation>b__20_3() { }

	[CompilerGenerated]
	// RVA: 0x3FB0374 Offset: 0x3FB0374 VA: 0x3FB0374
	private void <IncreaseScatterQueue>b__21_0() { }

	[CompilerGenerated]
	// RVA: 0x3FB03EC Offset: 0x3FB03EC VA: 0x3FB03EC
	private void <IncreaseScatterQueue>b__21_1() { }
}

// Namespace: Modules.Contexts.Home.MergeMiniGame.Scripts.UI