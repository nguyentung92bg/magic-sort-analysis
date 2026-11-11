public class CarpetItem : ABlockerItem, IFrameUpdate // TypeDefIndex: 1756
{
	// Fields
	private int _id; // 0x44
	private CarpetView _carpetView; // 0x48
	private BottleItem _belongingBottle; // 0x50
	private List<BottleItem> _belongingBottles; // 0x58
	private List<ColorId> _completedColors; // 0x60
	private int _initialBottleCount; // 0x68
	private Sequence _currentSequence; // 0x70
	private CustomUpdater _customUpdater; // 0x78
	private bool _wasPlayingWhenRequested; // 0x80
	private List<Sequence> _sequences; // 0x88
	private const float CarpetAnimationDelay = 0.84;
	private const float EvenCarpetOffset = 0.065;
	private const float QueuedCarpetAnimationDelay = 0;
	private Queue<CarpetItem.CarpetRevealAnimationData> _animationQueue; // 0x90
	private SortingService _sortingService; // 0x98

	// Properties
	public override bool IsOverlay { get; }

	// Methods

	// RVA: 0x2F5A114 Offset: 0x2F5A114 VA: 0x2F5A114 Slot: 22
	public override bool get_IsOverlay() { }

	// RVA: 0x2F5A11C Offset: 0x2F5A11C VA: 0x2F5A11C Slot: 4
	protected override void OnInitialize() { }

	// RVA: 0x2F5A35C Offset: 0x2F5A35C VA: 0x2F5A35C Slot: 5
	protected override void OnSpawn() { }

	// RVA: 0x2F5A364 Offset: 0x2F5A364 VA: 0x2F5A364
	public void Prepare(Vector3 viewOffset, Sorting sorting, BottleItem belongingBottle, List<BottleItem> belongingBottles, int id, int blockerVariant) { }

	// RVA: 0x2F5A67C Offset: 0x2F5A67C VA: 0x2F5A67C
	public void HideInnerItems() { }

	// RVA: 0x2F5A934 Offset: 0x2F5A934 VA: 0x2F5A934 Slot: 6
	protected override void OnRecycle() { }

	// RVA: 0x2F5AA74 Offset: 0x2F5AA74 VA: 0x2F5AA74
	public int GetId() { }

	// RVA: 0x2F5AA7C Offset: 0x2F5AA7C VA: 0x2F5AA7C Slot: 11
	public override bool IsSelectableAsOrigin() { }

	// RVA: 0x2F5AA84 Offset: 0x2F5AA84 VA: 0x2F5AA84 Slot: 12
	public override bool IsSelectableAsTarget(BottleItem bottleItem, ColorId waterColorId) { }

	// RVA: 0x2F5AA8C Offset: 0x2F5AA8C VA: 0x2F5AA8C Slot: 26
	public override void OnAnyBottleCompleted(BottleItem completedBottle, ColorId waterColorId) { }

	// RVA: 0x2F5B058 Offset: 0x2F5B058 VA: 0x2F5B058 Slot: 25
	public override bool IsRevealable() { }

	// RVA: 0x2F5B060 Offset: 0x2F5B060 VA: 0x2F5B060 Slot: 39
	public override void OnRevealSelected() { }

	// RVA: 0x2F5B0F4 Offset: 0x2F5B0F4 VA: 0x2F5B0F4 Slot: 40
	public override void OnRevealDeselected() { }

	// RVA: 0x2F5AC7C Offset: 0x2F5AC7C VA: 0x2F5AC7C
	private void Progress(bool immediate = False) { }

	// RVA: 0x2F5B1D0 Offset: 0x2F5B1D0 VA: 0x2F5B1D0 Slot: 53
	public void FrameUpdate(float elapsedSeconds) { }

	// RVA: 0x2F5B238 Offset: 0x2F5B238 VA: 0x2F5B238
	private void PlayNextQueuedReveal() { }

	// RVA: 0x2F5C548 Offset: 0x2F5C548 VA: 0x2F5C548
	private void Complete() { }

	// RVA: 0x2F5C5F8 Offset: 0x2F5C5F8 VA: 0x2F5C5F8
	private void PlayCompleteAnimation() { }

	// RVA: 0x2F5C6B4 Offset: 0x2F5C6B4 VA: 0x2F5C6B4 Slot: 20
	public override void Show() { }

	// RVA: 0x2F5C6D4 Offset: 0x2F5C6D4 VA: 0x2F5C6D4 Slot: 21
	public override void Hide() { }

	// RVA: 0x2F5C6F4 Offset: 0x2F5C6F4 VA: 0x2F5C6F4 Slot: 46
	public override bool IsParentedToBottle() { }

	// RVA: 0x2F5C6FC Offset: 0x2F5C6FC VA: 0x2F5C6FC Slot: 47
	public override bool IsSelectableAsSnitchTarget() { }

	// RVA: 0x2F5C70C Offset: 0x2F5C70C VA: 0x2F5C70C Slot: 48
	public override void OnSnitchPerformed() { }

	// RVA: 0x2F5C720 Offset: 0x2F5C720 VA: 0x2F5C720 Slot: 50
	public override BottleItem GetBelongingBottle() { }

	// RVA: 0x2F5B130 Offset: 0x2F5B130 VA: 0x2F5B130
	public int GetBelongingBottleCount() { }

	// RVA: 0x2F5C728 Offset: 0x2F5C728 VA: 0x2F5C728
	public Vector3 GetCenterPositionOfBelongingBottles() { }

	// RVA: 0x2F5C9A0 Offset: 0x2F5C9A0 VA: 0x2F5C9A0
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x2F5C9A8 Offset: 0x2F5C9A8 VA: 0x2F5C9A8
	private void <PlayCompleteAnimation>b__34_0() { }
}

// Namespace: Modules.Contexts.GamePlay.Board.Items.Scripts.Carpet
[Serializable]