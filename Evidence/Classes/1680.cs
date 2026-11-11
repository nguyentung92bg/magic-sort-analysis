public class IvyItem : ABlockerItem // TypeDefIndex: 1680
{
	// Fields
	private IvyView _ivyView; // 0x48
	private BottleItem _belongingBottle; // 0x50
	private Vector3 _viewOffset; // 0x58
	private bool _isOnQuestionMark; // 0x64
	private int _state; // 0x68
	private ColorId _colorId; // 0x6C

	// Properties
	public override bool IsOverlay { get; }
	public int Height { get; }

	// Methods

	// RVA: 0x274C31C Offset: 0x274C31C VA: 0x274C31C Slot: 22
	public override bool get_IsOverlay() { }

	// RVA: 0x274C324 Offset: 0x274C324 VA: 0x274C324
	public int get_Height() { }

	// RVA: 0x274C32C Offset: 0x274C32C VA: 0x274C32C Slot: 4
	protected override void OnInitialize() { }

	// RVA: 0x274C3D8 Offset: 0x274C3D8 VA: 0x274C3D8 Slot: 5
	protected override void OnSpawn() { }

	// RVA: 0x274C3FC Offset: 0x274C3FC VA: 0x274C3FC
	public void Prepare(Vector3 viewOffset, Sorting sorting, BottleItem belongingBottle, ColorAndColorId colorAndColorId) { }

	// RVA: 0x274C4E8 Offset: 0x274C4E8 VA: 0x274C4E8 Slot: 27
	public override void OnAnyMoveStarted(BottleItem originBottle, BottleItem targetBottle, ColorId waterColorId) { }

	// RVA: 0x274C7A0 Offset: 0x274C7A0 VA: 0x274C7A0 Slot: 11
	public override bool IsSelectableAsOrigin() { }

	// RVA: 0x274C7D0 Offset: 0x274C7D0 VA: 0x274C7D0 Slot: 12
	public override bool IsSelectableAsTarget(BottleItem originBottle, ColorId waterColorId) { }

	// RVA: 0x274C800 Offset: 0x274C800 VA: 0x274C800 Slot: 6
	protected override void OnRecycle() { }

	// RVA: 0x274C8C0 Offset: 0x274C8C0 VA: 0x274C8C0 Slot: 20
	public override void Show() { }

	// RVA: 0x274C8E0 Offset: 0x274C8E0 VA: 0x274C8E0 Slot: 21
	public override void Hide() { }

	// RVA: 0x274C900 Offset: 0x274C900 VA: 0x274C900
	private void Complete() { }

	// RVA: 0x274C940 Offset: 0x274C940 VA: 0x274C940
	private void RemoveFromCells() { }

	// RVA: 0x274C9F8 Offset: 0x274C9F8 VA: 0x274C9F8
	private void CompleteBySnitch() { }

	// RVA: 0x274C9F4 Offset: 0x274C9F4 VA: 0x274C9F4
	private void PlayCompleteAnimation() { }

	// RVA: 0x274CA3C Offset: 0x274CA3C VA: 0x274CA3C Slot: 47
	public override bool IsSelectableAsSnitchTarget() { }

	// RVA: 0x274CA4C Offset: 0x274CA4C VA: 0x274CA4C Slot: 48
	public override void OnSnitchPerformed() { }

	// RVA: 0x274CA5C Offset: 0x274CA5C VA: 0x274CA5C Slot: 50
	public override BottleItem GetBelongingBottle() { }

	// RVA: 0x274CA64 Offset: 0x274CA64 VA: 0x274CA64
	public void .ctor() { }
}

// Namespace: Modules.Contexts.GamePlay.Board.Items.Scripts.Ivy
[Serializable]