public class BlockItem : MergeItem // TypeDefIndex: 3699
{
	// Fields
	[SerializeField]
	private List<GameObject> _itemHiders; // 0x90
	[SerializeField]
	private GameObject _shatterParticle; // 0x98
	[CompilerGenerated]
	private int <Id>k__BackingField; // 0xA0

	// Properties
	public override int Id { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x4119FA8 Offset: 0x4119FA8 VA: 0x4119FA8 Slot: 5
	public override int get_Id() { }

	[CompilerGenerated]
	// RVA: 0x4119FB0 Offset: 0x4119FB0 VA: 0x4119FB0 Slot: 6
	public override void set_Id(int value) { }

	// RVA: 0x4119FB8 Offset: 0x4119FB8 VA: 0x4119FB8 Slot: 7
	public override void Initialize() { }

	// RVA: 0x4119FBC Offset: 0x4119FBC VA: 0x4119FBC Slot: 9
	public override bool CanMove() { }

	// RVA: 0x4119FC4 Offset: 0x4119FC4 VA: 0x4119FC4 Slot: 10
	public override bool CanMerge() { }

	// RVA: 0x4119FCC Offset: 0x4119FCC VA: 0x4119FCC Slot: 11
	public override void OnMerge() { }

	// RVA: 0x4119FD0 Offset: 0x4119FD0 VA: 0x4119FD0 Slot: 12
	public override bool IsClearedByNeighborMerge() { }

	// RVA: 0x4119FD8 Offset: 0x4119FD8 VA: 0x4119FD8 Slot: 16
	public override void Dispose() { }

	// RVA: 0x4115D50 Offset: 0x4115D50 VA: 0x4115D50
	public Sequence PlayNeighborMergeAnimationSequence() { }

	// RVA: 0x4119FF8 Offset: 0x4119FF8 VA: 0x4119FF8 Slot: 18
	public override void OnPlacedToBoard() { }

	// RVA: 0x411A200 Offset: 0x411A200 VA: 0x411A200 Slot: 8
	public override void Recycle() { }

	// RVA: 0x411A32C Offset: 0x411A32C VA: 0x411A32C
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x411A334 Offset: 0x411A334 VA: 0x411A334
	private void <PlayNeighborMergeAnimationSequence>b__12_0() { }
}

// Namespace: Modules.Contexts.Home.MergeMiniGame.Scripts.Board.Items