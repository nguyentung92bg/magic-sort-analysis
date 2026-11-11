public class MergeStageView : MergeScrollItemBase // TypeDefIndex: 3658
{
	// Fields
	[SerializeField]
	private BasicUIElement _uiElement; // 0x30
	[SerializeField]
	private MergeStageView.MergeProgressItemHolder[] _progressItems; // 0x38
	[SerializeField]
	private WatchAndWinDynamicRewardView _rewardView; // 0x40
	[SerializeField]
	private Transform _rewardParent; // 0x48
	[SerializeField]
	private GameObject _targetContainer; // 0x50
	[SerializeField]
	private SpriteRenderer _completedCheckMark; // 0x58
	[SerializeField]
	private Transform _completedCheckMarkParent; // 0x60
	[SerializeField]
	private ParticleSystem _stageCompletedParticle; // 0x68
	[SerializeField]
	private SpriteRenderer _itemSprite; // 0x70
	[SerializeField]
	private WatchAndWinAnimationConfig _animationConfig; // 0x78
	[SerializeField]
	private MergeMiniGameAnimationConfig _miniGameAnimationConfig; // 0x80
	[SerializeField]
	private MergeItemSpriteConfig _itemSpriteConfig; // 0x88
	[CompilerGenerated]
	private int <Id>k__BackingField; // 0x90
	private MergeStageViewModel _viewModel; // 0x98
	private MergeStageView.MergeProgressItemHolder _progressItem; // 0xA0

	// Properties
	public override int Id { get; set; }
	public override Vector3 Size { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x3FB9EA8 Offset: 0x3FB9EA8 VA: 0x3FB9EA8 Slot: 5
	public override int get_Id() { }

	[CompilerGenerated]
	// RVA: 0x3FB9EB0 Offset: 0x3FB9EB0 VA: 0x3FB9EB0 Slot: 6
	public override void set_Id(int value) { }

	// RVA: 0x3FB9EB8 Offset: 0x3FB9EB8 VA: 0x3FB9EB8 Slot: 9
	public override Vector3 get_Size() { }

	// RVA: 0x3FB9EE0 Offset: 0x3FB9EE0 VA: 0x3FB9EE0 Slot: 7
	public override void Initialize() { }

	// RVA: 0x3FB9EE4 Offset: 0x3FB9EE4 VA: 0x3FB9EE4 Slot: 8
	public override void Recycle() { }

	// RVA: 0x3FB9F80 Offset: 0x3FB9F80 VA: 0x3FB9F80 Slot: 10
	public override void SetModel(IMergeStageScrollViewModel scrollViewModel) { }

	// RVA: 0x3FBA03C Offset: 0x3FBA03C VA: 0x3FBA03C
	private void UpdateView(MergeStageViewModel scrollViewModel) { }

	// RVA: 0x3FBA308 Offset: 0x3FBA308 VA: 0x3FBA308
	private void SetProgress(float progress) { }

	// RVA: 0x3FB9998 Offset: 0x3FB9998 VA: 0x3FB9998
	public void SetCompleted() { }

	// RVA: 0x3FB99B8 Offset: 0x3FB99B8 VA: 0x3FB99B8
	public Tween IncreaseProgressAnimation() { }

	[Button]
	// RVA: 0x3FB9A98 Offset: 0x3FB9A98 VA: 0x3FB9A98
	public Tween CompleteStageAnimation() { }

	// RVA: 0x3FBA34C Offset: 0x3FBA34C VA: 0x3FBA34C
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x3FBA354 Offset: 0x3FBA354 VA: 0x3FBA354
	private void <CompleteStageAnimation>b__27_0() { }

	[CompilerGenerated]
	// RVA: 0x3FBA370 Offset: 0x3FBA370 VA: 0x3FBA370
	private void <CompleteStageAnimation>b__27_1() { }
}

// Namespace: Modules.Contexts.Home.MergeMiniGame.Scripts.UI.LobbyButton