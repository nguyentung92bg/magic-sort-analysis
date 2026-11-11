public class IceItem : ABlockerItem // TypeDefIndex: 1693
{
	// Fields
	private IceView _iceView; // 0x48
	private BottleItem _rootBottle; // 0x50
	private List<BottleItem> _belongingBottles; // 0x58
	private int _id; // 0x60
	private int _width; // 0x64
	private int _completedBottleIndex; // 0x68
	private IceConfig _iceConfig; // 0x70
	private List<BottleItem> _activeBottleFillers; // 0x78
	private SortingService _sortingService; // 0x80
	private bool _isNewParticleEnabled; // 0x88

	// Properties
	public override bool IsOverlay { get; }

	// Methods

	// RVA: 0x274D1F0 Offset: 0x274D1F0 VA: 0x274D1F0 Slot: 22
	public override bool get_IsOverlay() { }

	// RVA: 0x274D1F8 Offset: 0x274D1F8 VA: 0x274D1F8 Slot: 4
	protected override void OnInitialize() { }

	// RVA: 0x274D3D4 Offset: 0x274D3D4 VA: 0x274D3D4 Slot: 5
	protected override void OnSpawn() { }

	// RVA: 0x274D3DC Offset: 0x274D3DC VA: 0x274D3DC
	public void Prepare(Vector3 viewOffset, Sorting sorting, int width, int id, BottleItem rootBottle, List<BottleItem> belongingBottles, bool useShadow, bool isNewParticleEnabled) { }

	// RVA: 0x274D6C4 Offset: 0x274D6C4 VA: 0x274D6C4 Slot: 6
	protected override void OnRecycle() { }

	// RVA: 0x274D7B0 Offset: 0x274D7B0 VA: 0x274D7B0
	public int GetId() { }

	// RVA: 0x274D7B8 Offset: 0x274D7B8 VA: 0x274D7B8 Slot: 20
	public override void Show() { }

	// RVA: 0x274D7D8 Offset: 0x274D7D8 VA: 0x274D7D8 Slot: 21
	public override void Hide() { }

	// RVA: 0x274D7F8 Offset: 0x274D7F8 VA: 0x274D7F8 Slot: 11
	public override bool IsSelectableAsOrigin() { }

	// RVA: 0x274D800 Offset: 0x274D800 VA: 0x274D800
	public void OnPreBottleComplete(BottleItem bottleItem) { }

	// RVA: 0x274D898 Offset: 0x274D898 VA: 0x274D898 Slot: 17
	public override void OnBottleCompleted() { }

	// RVA: 0x274D8A0 Offset: 0x274D8A0 VA: 0x274D8A0
	private void Complete(bool startImmediately = False) { }

	// RVA: 0x274E484 Offset: 0x274E484 VA: 0x274E484
	public void SetSorting(Sorting sorting) { }

	// RVA: 0x274E4E0 Offset: 0x274E4E0 VA: 0x274E4E0
	public void MarkAsBeingFilled(BottleItem bottleItem) { }

	// RVA: 0x274E5B8 Offset: 0x274E5B8 VA: 0x274E5B8
	public void UnmarkAsBeingFilled(BottleItem bottleItem) { }

	// RVA: 0x274DB50 Offset: 0x274DB50 VA: 0x274DB50
	private void PlayRevealAnimationOrdered(bool startImmediately = False) { }

	// RVA: 0x274E794 Offset: 0x274E794 VA: 0x274E794 Slot: 46
	public override bool IsParentedToBottle() { }

	// RVA: 0x274E79C Offset: 0x274E79C VA: 0x274E79C Slot: 47
	public override bool IsSelectableAsSnitchTarget() { }

	// RVA: 0x274E7AC Offset: 0x274E7AC VA: 0x274E7AC Slot: 48
	public override void OnSnitchPerformed() { }

	// RVA: 0x274E7C0 Offset: 0x274E7C0 VA: 0x274E7C0
	public int GetBelongingBottleCount() { }

	// RVA: 0x274E808 Offset: 0x274E808 VA: 0x274E808 Slot: 8
	public override Vector3 GetSnitchTargetPosition() { }

	// RVA: 0x274E848 Offset: 0x274E848 VA: 0x274E848 Slot: 50
	public override BottleItem GetBelongingBottle() { }

	// RVA: 0x274E850 Offset: 0x274E850 VA: 0x274E850 Slot: 39
	public override void OnRevealSelected() { }

	// RVA: 0x274E890 Offset: 0x274E890 VA: 0x274E890 Slot: 40
	public override void OnRevealDeselected() { }

	// RVA: 0x274E8CC Offset: 0x274E8CC VA: 0x274E8CC Slot: 25
	public override bool IsRevealable() { }

	// RVA: 0x274E8D4 Offset: 0x274E8D4 VA: 0x274E8D4
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x274E8DC Offset: 0x274E8DC VA: 0x274E8DC
	private void <PlayRevealAnimationOrdered>b__26_0() { }

	[CompilerGenerated]
	// RVA: 0x274EA3C Offset: 0x274EA3C VA: 0x274EA3C
	private void <PlayRevealAnimationOrdered>b__26_1() { }
}

// Namespace: Modules.Contexts.GamePlay.Board.Items.Scripts.Ice
[Serializable]