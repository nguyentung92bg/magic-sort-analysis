public class DuckHouseItem : ABlockerItem // TypeDefIndex: 1728
{
	// Fields
	private DuckHouseView _view; // 0x48
	private BottleItem _belongingBottle; // 0x50
	private List<BottleItem> _belongingBottles; // 0x58
	private List<DuckItem> _duckItems; // 0x60
	private DuckType _duckType; // 0x68

	// Properties
	public override bool IsOverlay { get; }

	// Methods

	// RVA: 0x2757230 Offset: 0x2757230 VA: 0x2757230 Slot: 22
	public override bool get_IsOverlay() { }

	// RVA: 0x2757238 Offset: 0x2757238 VA: 0x2757238 Slot: 4
	protected override void OnInitialize() { }

	// RVA: 0x275738C Offset: 0x275738C VA: 0x275738C Slot: 5
	protected override void OnSpawn() { }

	// RVA: 0x2757394 Offset: 0x2757394 VA: 0x2757394
	public void Prepare(Vector3 viewOffset, Sorting sorting, BottleItem belongingBottle, List<BottleItem> belongingBottles, DuckType duckType) { }

	// RVA: 0x2757988 Offset: 0x2757988 VA: 0x2757988 Slot: 6
	protected override void OnRecycle() { }

	// RVA: 0x2757A90 Offset: 0x2757A90 VA: 0x2757A90 Slot: 11
	public override bool IsSelectableAsOrigin() { }

	// RVA: 0x2757A98 Offset: 0x2757A98 VA: 0x2757A98 Slot: 12
	public override bool IsSelectableAsTarget(BottleItem bottleItem, ColorId waterColorId) { }

	// RVA: 0x2757AA0 Offset: 0x2757AA0 VA: 0x2757AA0 Slot: 20
	public override void Show() { }

	// RVA: 0x2757AC0 Offset: 0x2757AC0 VA: 0x2757AC0 Slot: 21
	public override void Hide() { }

	// RVA: 0x2757AE0 Offset: 0x2757AE0 VA: 0x2757AE0
	public Vector3 GetKeyTargetPosition() { }

	// RVA: 0x2757B20 Offset: 0x2757B20 VA: 0x2757B20
	public void TryComplete(DuckItem duckItem, bool isKeyOnQuestionMark, float revealDelay, bool immediate = False) { }

	// RVA: 0x2758314 Offset: 0x2758314 VA: 0x2758314
	private void PlayCompleteAnimation(float revealDelay, bool immediate = False) { }

	// RVA: 0x27592DC Offset: 0x27592DC VA: 0x27592DC Slot: 46
	public override bool IsParentedToBottle() { }

	// RVA: 0x27592E4 Offset: 0x27592E4 VA: 0x27592E4
	public int GetBelongingBottleCount() { }

	// RVA: 0x275932C Offset: 0x275932C VA: 0x275932C Slot: 8
	public override Vector3 GetSnitchTargetPosition() { }

	// RVA: 0x275936C Offset: 0x275936C VA: 0x275936C Slot: 50
	public override BottleItem GetBelongingBottle() { }

	// RVA: 0x2759374 Offset: 0x2759374 VA: 0x2759374
	public void AddDuckItem(DuckItem duckItem) { }

	// RVA: 0x275948C Offset: 0x275948C VA: 0x275948C
	public void HideInnerItems() { }

	// RVA: 0x2759744 Offset: 0x2759744 VA: 0x2759744
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x275974C Offset: 0x275974C VA: 0x275974C
	private void <TryComplete>b__16_0() { }
}

// Namespace: Modules.Contexts.GamePlay.Board.Items.Scripts.Duck
[Serializable]