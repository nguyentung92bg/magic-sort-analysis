public class EditorDuckItem : EditorABlockerItem // TypeDefIndex: 316
{
	// Fields
	[CompilerGenerated]
	private readonly bool <BottleVisibilityBlocker>k__BackingField; // 0x29
	private EditorDuckView _view; // 0x30
	private EditorCell _belongingCell; // 0x38
	private EditorBottleItem _belongingBottle; // 0x40
	private DuckType _duckType; // 0x48

	// Properties
	public override bool BottleVisibilityBlocker { get; }
	public override bool IsOverlay { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x3DDD6EC Offset: 0x3DDD6EC VA: 0x3DDD6EC Slot: 10
	public override bool get_BottleVisibilityBlocker() { }

	// RVA: 0x3DDD6F4 Offset: 0x3DDD6F4 VA: 0x3DDD6F4 Slot: 11
	public override bool get_IsOverlay() { }

	// RVA: 0x3DDD6FC Offset: 0x3DDD6FC VA: 0x3DDD6FC Slot: 4
	protected override void OnInitialize() { }

	// RVA: 0x3DDD7A8 Offset: 0x3DDD7A8 VA: 0x3DDD7A8 Slot: 5
	protected override void OnSpawn() { }

	// RVA: 0x3DDC39C Offset: 0x3DDC39C VA: 0x3DDC39C
	public void Prepare(Sorting sorting, EditorBottleItem belongingBottle, EditorCell belongingCell, DuckType duckType) { }

	// RVA: 0x3DDD82C Offset: 0x3DDD82C VA: 0x3DDD82C
	public DuckType GetDuckType() { }

	// RVA: 0x3DDD834 Offset: 0x3DDD834 VA: 0x3DDD834 Slot: 6
	protected override void OnRecycle() { }

	// RVA: 0x3DDD8F0 Offset: 0x3DDD8F0 VA: 0x3DDD8F0 Slot: 8
	public override void Show() { }

	// RVA: 0x3DDD910 Offset: 0x3DDD910 VA: 0x3DDD910 Slot: 9
	public override void Hide() { }

	// RVA: 0x3DDD930 Offset: 0x3DDD930 VA: 0x3DDD930 Slot: 18
	public override EditorBottleItem GetBelongingBottle() { }

	// RVA: 0x3DDD938 Offset: 0x3DDD938 VA: 0x3DDD938
	private void PlayCompletedBySnitch() { }

	// RVA: 0x3DDD270 Offset: 0x3DDD270 VA: 0x3DDD270
	public void .ctor() { }
}

// Namespace: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Duck