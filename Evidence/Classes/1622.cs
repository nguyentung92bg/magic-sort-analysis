public class SnitchItem : ABlockerItem // TypeDefIndex: 1622
{
	// Fields
	private SnitchItemView _itemView; // 0x48
	private Cell _belongingCell; // 0x50
	private BottleItem _belongingBottle; // 0x58
	private readonly Quaternion _initialRotation; // 0x60
	private Vector3 _viewOffset; // 0x70
	private SnitchSpawnInfo _snitchInfo; // 0x80
	private bool _isInQuestionMarkCell; // 0x88
	private SnitchInGameManager _snitchInGameManager; // 0x90

	// Properties
	public override bool IsOverlay { get; }

	// Methods

	// RVA: 0x260D988 Offset: 0x260D988 VA: 0x260D988 Slot: 22
	public override bool get_IsOverlay() { }

	// RVA: 0x260D990 Offset: 0x260D990 VA: 0x260D990 Slot: 4
	protected override void OnInitialize() { }

	// RVA: 0x260DA3C Offset: 0x260DA3C VA: 0x260DA3C Slot: 5
	protected override void OnSpawn() { }

	// RVA: 0x260DA60 Offset: 0x260DA60 VA: 0x260DA60
	public void Prepare(Vector3 viewOffset, Sorting sorting, Cell belongingCell, BottleItem belongingBottle, SnitchSpawnInfo snitchInfo) { }

	// RVA: 0x260DC5C Offset: 0x260DC5C VA: 0x260DC5C Slot: 6
	protected override void OnRecycle() { }

	// RVA: 0x260DD1C Offset: 0x260DD1C VA: 0x260DD1C Slot: 20
	public override void Show() { }

	// RVA: 0x260DD3C Offset: 0x260DD3C VA: 0x260DD3C Slot: 21
	public override void Hide() { }

	// RVA: 0x260DD5C Offset: 0x260DD5C VA: 0x260DD5C Slot: 29
	public override void OnWaterRotate(float rotation, Vector3 rotationRelatedWorldPosition, int index) { }

	// RVA: 0x260DF4C Offset: 0x260DF4C VA: 0x260DF4C Slot: 14
	public override void OnBottleWatersUpdated(WaterItem topWaterItem) { }

	// RVA: 0x260DF78 Offset: 0x260DF78 VA: 0x260DF78
	private void Complete() { }

	// RVA: 0x260E0E0 Offset: 0x260E0E0 VA: 0x260E0E0
	public SnitchItemType GetSnitchType() { }

	// RVA: 0x260E0FC Offset: 0x260E0FC VA: 0x260E0FC
	public Cell GetBelongingCell() { }

	// RVA: 0x260E104 Offset: 0x260E104 VA: 0x260E104 Slot: 50
	public override BottleItem GetBelongingBottle() { }

	// RVA: 0x260E10C Offset: 0x260E10C VA: 0x260E10C
	public int[] GetTargetCellIndices() { }

	// RVA: 0x260E128 Offset: 0x260E128 VA: 0x260E128
	public bool HasTargetCell() { }

	// RVA: 0x260E15C Offset: 0x260E15C VA: 0x260E15C
	public int[] GetTargetBottleIndices() { }

	// RVA: 0x260E178 Offset: 0x260E178 VA: 0x260E178
	public bool HasTargetBottle() { }

	// RVA: 0x260E1AC Offset: 0x260E1AC VA: 0x260E1AC
	public SnitchItemView GetSnitchItemView() { }

	// RVA: 0x260E1B4 Offset: 0x260E1B4 VA: 0x260E1B4
	public void OnRedSnitchPlaceTarget() { }

	// RVA: 0x260E4A0 Offset: 0x260E4A0 VA: 0x260E4A0
	public void PlaySnitchSitAnimation() { }

	// RVA: 0x260E520 Offset: 0x260E520 VA: 0x260E520
	public void SetBelongingCell(Cell cell) { }

	// RVA: 0x260E528 Offset: 0x260E528 VA: 0x260E528
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x260E55C Offset: 0x260E55C VA: 0x260E55C
	private void <Complete>b__18_0() { }
}

// Namespace: Modules.Contexts.GamePlay.Board.Items.Scripts.Snitch
[Serializable]