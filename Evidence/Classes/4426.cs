public class DuckFestivalRewardElement : BasicView // TypeDefIndex: 4426
{
	// Fields
	[SerializeField]
	private int _id; // 0x24
	[SerializeField]
	private UIElement _uiElement; // 0x28
	[SerializeField]
	private CurrencyViewFactory _currencyViewFactory; // 0x30
	[SerializeField]
	private GameObject _lastRewardBackground; // 0x38
	[SerializeField]
	private GameObject _lastRewardClaimedTick; // 0x40
	[SerializeField]
	private GameObject _defaultRewardBackground; // 0x48
	[SerializeField]
	private GameObject _claimedBackground; // 0x50
	[SerializeField]
	private GameObject _lockIcon; // 0x58
	[SerializeField]
	private GameObject _rankShine; // 0x60
	[SerializeField]
	private GameObject _rankGreenBackground; // 0x68
	[SerializeField]
	private GameObject _rankDefaultBackground; // 0x70
	[SerializeField]
	private GameObject _bottomStick; // 0x78
	[SerializeField]
	private TextMeshPro _rankText; // 0x80
	[SerializeField]
	private Transform _currencyContainer; // 0x88
	[SerializeField]
	private float _scaleMultiplier; // 0x90
	private CurrencyView _currentCurrencyView; // 0x98

	// Properties
	public override int Id { get; set; }
	public Vector3 Size { get; }

	// Methods

	// RVA: 0x38C64EC Offset: 0x38C64EC VA: 0x38C64EC Slot: 5
	public override int get_Id() { }

	// RVA: 0x38C64F4 Offset: 0x38C64F4 VA: 0x38C64F4 Slot: 6
	public override void set_Id(int value) { }

	// RVA: 0x38C64FC Offset: 0x38C64FC VA: 0x38C64FC
	public Vector3 get_Size() { }

	// RVA: 0x38C6524 Offset: 0x38C6524 VA: 0x38C6524
	public void SetModel(DuckFestivalProgressbarRewardElementViewModel model) { }

	// RVA: 0x38C6904 Offset: 0x38C6904 VA: 0x38C6904
	private void RecycleCurrencyView() { }

	// RVA: 0x38C69BC Offset: 0x38C69BC VA: 0x38C69BC Slot: 7
	public override void Initialize() { }

	// RVA: 0x38C69C0 Offset: 0x38C69C0 VA: 0x38C69C0 Slot: 8
	public override void Recycle() { }

	// RVA: 0x38C6A24 Offset: 0x38C6A24 VA: 0x38C6A24
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.DuckFestival.Scripts.UI.Rewards