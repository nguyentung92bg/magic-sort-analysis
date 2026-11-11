public class SafeItem : ABlockerItem // TypeDefIndex: 1639
{
	// Fields
	private SafeView _view; // 0x48
	private BottleItem _belongingBottle; // 0x50
	private List<BottleItem> _belongingBottles; // 0x58
	private int _remainingBottleCompletions; // 0x60
	private SafeType _safeType; // 0x64
	private List<ColorId> _completedColors; // 0x68

	// Properties
	public override bool IsOverlay { get; }

	// Methods

	// RVA: 0x2613A4C Offset: 0x2613A4C VA: 0x2613A4C Slot: 22
	public override bool get_IsOverlay() { }

	// RVA: 0x2613A54 Offset: 0x2613A54 VA: 0x2613A54 Slot: 4
	protected override void OnInitialize() { }

	// RVA: 0x2613BA8 Offset: 0x2613BA8 VA: 0x2613BA8 Slot: 5
	protected override void OnSpawn() { }

	// RVA: 0x2613BB0 Offset: 0x2613BB0 VA: 0x2613BB0
	public void Prepare(Vector3 viewOffset, Sorting sorting, BottleItem belongingBottle, List<BottleItem> belongingBottles, int remainingBottleCompletions, SafeType safeType) { }

	// RVA: 0x2614190 Offset: 0x2614190 VA: 0x2614190 Slot: 6
	protected override void OnRecycle() { }

	// RVA: 0x26143F0 Offset: 0x26143F0 VA: 0x26143F0 Slot: 11
	public override bool IsSelectableAsOrigin() { }

	// RVA: 0x26143F8 Offset: 0x26143F8 VA: 0x26143F8 Slot: 12
	public override bool IsSelectableAsTarget(BottleItem bottleItem, ColorId waterColorId) { }

	// RVA: 0x2614400 Offset: 0x2614400 VA: 0x2614400 Slot: 20
	public override void Show() { }

	// RVA: 0x2614420 Offset: 0x2614420 VA: 0x2614420 Slot: 21
	public override void Hide() { }

	// RVA: 0x2614440 Offset: 0x2614440 VA: 0x2614440 Slot: 26
	public override void OnAnyBottleCompleted(BottleItem completedBottle, ColorId waterColorId) { }

	// RVA: 0x261462C Offset: 0x261462C VA: 0x261462C
	private void TryComplete() { }

	// RVA: 0x26158D4 Offset: 0x26158D4 VA: 0x26158D4
	private void UnlockAnimationLocks() { }

	// RVA: 0x2615A34 Offset: 0x2615A34 VA: 0x2615A34
	private void OnRevealed() { }

	// RVA: 0x2615CB0 Offset: 0x2615CB0 VA: 0x2615CB0 Slot: 46
	public override bool IsParentedToBottle() { }

	// RVA: 0x2615CB8 Offset: 0x2615CB8 VA: 0x2615CB8
	public int GetBelongingBottleCount() { }

	// RVA: 0x2615D00 Offset: 0x2615D00 VA: 0x2615D00 Slot: 8
	public override Vector3 GetSnitchTargetPosition() { }

	// RVA: 0x2615D40 Offset: 0x2615D40 VA: 0x2615D40 Slot: 50
	public override BottleItem GetBelongingBottle() { }

	// RVA: 0x2615D48 Offset: 0x2615D48 VA: 0x2615D48
	public void HideInnerItems() { }

	// RVA: 0x2616000 Offset: 0x2616000 VA: 0x2616000
	public void .ctor() { }
}

// Namespace: Modules.Contexts.GamePlay.Board.Items.Scripts.Safe
[Serializable]