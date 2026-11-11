public class TagItem : ABlockerItem // TypeDefIndex: 1615
{
	// Fields
	private TagView _tagView; // 0x48
	private BottleItem _belongingBottle; // 0x50
	private ColorId _colorId; // 0x58

	// Properties
	public override bool IsOverlay { get; }

	// Methods

	// RVA: 0x260B1EC Offset: 0x260B1EC VA: 0x260B1EC Slot: 22
	public override bool get_IsOverlay() { }

	// RVA: 0x260B1F4 Offset: 0x260B1F4 VA: 0x260B1F4 Slot: 4
	protected override void OnInitialize() { }

	// RVA: 0x260B2A0 Offset: 0x260B2A0 VA: 0x260B2A0 Slot: 5
	protected override void OnSpawn() { }

	// RVA: 0x260B2C4 Offset: 0x260B2C4 VA: 0x260B2C4
	public void Prepare(Vector3 viewOffset, Sorting sorting, BottleItem belongingBottle, ColorAndColorId colorAndColorId) { }

	// RVA: 0x260B3D8 Offset: 0x260B3D8 VA: 0x260B3D8 Slot: 6
	protected override void OnRecycle() { }

	// RVA: 0x260B440 Offset: 0x260B440 VA: 0x260B440 Slot: 13
	public override void PlayLevelEntranceAnimation() { }

	// RVA: 0x260B4AC Offset: 0x260B4AC VA: 0x260B4AC Slot: 15
	public override void OnBottleMove(int pourableHeight, bool isLeft, float animationDuration) { }

	// RVA: 0x260B5B8 Offset: 0x260B5B8 VA: 0x260B5B8 Slot: 26
	public override void OnAnyBottleCompleted(BottleItem completedBottle, ColorId waterColorId) { }

	// RVA: 0x260B734 Offset: 0x260B734 VA: 0x260B734 Slot: 17
	public override void OnBottleCompleted() { }

	// RVA: 0x260B73C Offset: 0x260B73C VA: 0x260B73C Slot: 31
	public override void UndoComplete() { }

	// RVA: 0x260B5DC Offset: 0x260B5DC VA: 0x260B5DC
	private void Complete(bool undoable) { }

	// RVA: 0x260B7A0 Offset: 0x260B7A0 VA: 0x260B7A0 Slot: 12
	public override bool IsSelectableAsTarget(BottleItem bottleItem, ColorId waterColorId) { }

	// RVA: 0x260B7B0 Offset: 0x260B7B0 VA: 0x260B7B0 Slot: 24
	public override bool IsAllowShuffle() { }

	// RVA: 0x260B7B8 Offset: 0x260B7B8 VA: 0x260B7B8
	public ColorId GetColorId() { }

	// RVA: 0x260B7C0 Offset: 0x260B7C0 VA: 0x260B7C0 Slot: 20
	public override void Show() { }

	// RVA: 0x260B7E0 Offset: 0x260B7E0 VA: 0x260B7E0 Slot: 21
	public override void Hide() { }

	// RVA: 0x260B800 Offset: 0x260B800 VA: 0x260B800 Slot: 46
	public override bool IsParentedToBottle() { }

	// RVA: 0x260B808 Offset: 0x260B808 VA: 0x260B808 Slot: 47
	public override bool IsSelectableAsSnitchTarget() { }

	// RVA: 0x260B818 Offset: 0x260B818 VA: 0x260B818 Slot: 48
	public override void OnSnitchPerformed() { }

	// RVA: 0x260B82C Offset: 0x260B82C VA: 0x260B82C Slot: 50
	public override BottleItem GetBelongingBottle() { }

	// RVA: 0x260B834 Offset: 0x260B834 VA: 0x260B834 Slot: 25
	public override bool IsRevealable() { }

	// RVA: 0x260B83C Offset: 0x260B83C VA: 0x260B83C
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x260B844 Offset: 0x260B844 VA: 0x260B844
	private void <Complete>b__14_0() { }
}

// Namespace: Modules.Contexts.GamePlay.Board.Items.Scripts.Tag
[CreateAssetMenu(fileName = "TagItemAssets", menuName = "Custom/TagItemAssets")]