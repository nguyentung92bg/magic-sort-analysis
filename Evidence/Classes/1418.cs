public class Cell // TypeDefIndex: 1418
{
	// Fields
	[CompilerGenerated]
	private Vector3 <LocalPosition>k__BackingField; // 0x10
	[CompilerGenerated]
	private WaterItem <WaterItem>k__BackingField; // 0x20
	[CompilerGenerated]
	private QuestionMarkItem <QuestionMarkItem>k__BackingField; // 0x28
	[CompilerGenerated]
	private AItem <OverBoardItem>k__BackingField; // 0x30
	[CompilerGenerated]
	private List<AItem> <Blockers>k__BackingField; // 0x38

	// Properties
	public Vector3 LocalPosition { get; set; }
	public WaterItem WaterItem { get; set; }
	public QuestionMarkItem QuestionMarkItem { get; set; }
	public AItem OverBoardItem { get; set; }
	public List<AItem> Blockers { get; set; }
	public bool HasBlocker { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x1E90954 Offset: 0x1E90954 VA: 0x1E90954
	public Vector3 get_LocalPosition() { }

	[CompilerGenerated]
	// RVA: 0x1E90960 Offset: 0x1E90960 VA: 0x1E90960
	private void set_LocalPosition(Vector3 value) { }

	[CompilerGenerated]
	// RVA: 0x1E9096C Offset: 0x1E9096C VA: 0x1E9096C
	public WaterItem get_WaterItem() { }

	[CompilerGenerated]
	// RVA: 0x1E90974 Offset: 0x1E90974 VA: 0x1E90974
	public void set_WaterItem(WaterItem value) { }

	[CompilerGenerated]
	// RVA: 0x1E9097C Offset: 0x1E9097C VA: 0x1E9097C
	public QuestionMarkItem get_QuestionMarkItem() { }

	[CompilerGenerated]
	// RVA: 0x1E90984 Offset: 0x1E90984 VA: 0x1E90984
	public void set_QuestionMarkItem(QuestionMarkItem value) { }

	[CompilerGenerated]
	// RVA: 0x1E9098C Offset: 0x1E9098C VA: 0x1E9098C
	public AItem get_OverBoardItem() { }

	[CompilerGenerated]
	// RVA: 0x1E90994 Offset: 0x1E90994 VA: 0x1E90994
	public void set_OverBoardItem(AItem value) { }

	[CompilerGenerated]
	// RVA: 0x1E9099C Offset: 0x1E9099C VA: 0x1E9099C
	public List<AItem> get_Blockers() { }

	[CompilerGenerated]
	// RVA: 0x1E909A4 Offset: 0x1E909A4 VA: 0x1E909A4
	public void set_Blockers(List<AItem> value) { }

	// RVA: 0x1E909AC Offset: 0x1E909AC VA: 0x1E909AC
	public bool get_HasBlocker() { }

	// RVA: 0x1E909FC Offset: 0x1E909FC VA: 0x1E909FC
	public void .ctor(Vector3 localPosition) { }

	// RVA: 0x1E90AA8 Offset: 0x1E90AA8 VA: 0x1E90AA8
	public void Recycle() { }

	// RVA: 0x1E90CB4 Offset: 0x1E90CB4 VA: 0x1E90CB4
	public void AddBlocker(AItem blocker) { }

	// RVA: 0x1E90D64 Offset: 0x1E90D64 VA: 0x1E90D64
	public void RemoveBlocker(AItem blocker) { }

	// RVA: 0x1E90DBC Offset: 0x1E90DBC VA: 0x1E90DBC
	public void OnBottleMove(int pourableHeight, bool isLeft, float moveDuration) { }

	// RVA: 0x1E90F3C Offset: 0x1E90F3C VA: 0x1E90F3C
	public void TryReveal() { }

	// RVA: 0x1E90FF0 Offset: 0x1E90FF0 VA: 0x1E90FF0
	public void CompleteQuestionMark() { }

	// RVA: 0x1E90FB4 Offset: 0x1E90FB4 VA: 0x1E90FB4
	public bool HasQuestionMark() { }

	// RVA: 0x1E9102C Offset: 0x1E9102C VA: 0x1E9102C
	public bool HasBlockerItemType(ItemType type) { }
}

// Namespace: Modules.Contexts.GamePlay.Levels.Scripts.Cell