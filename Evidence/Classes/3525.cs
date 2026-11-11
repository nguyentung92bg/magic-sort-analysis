public class MiniGameTooltipRewardElementView : BasicView // TypeDefIndex: 3525
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

	// RVA: 0x2185654 Offset: 0x2185654 VA: 0x2185654 Slot: 5
	public override int get_Id() { }

	// RVA: 0x218565C Offset: 0x218565C VA: 0x218565C Slot: 6
	public override void set_Id(int value) { }

	// RVA: 0x2185664 Offset: 0x2185664 VA: 0x2185664
	public Vector3 get_Size() { }

	// RVA: 0x218568C Offset: 0x218568C VA: 0x218568C
	public void SetModel(MiniGameStageViewModel viewModel) { }

	// RVA: 0x21859E8 Offset: 0x21859E8 VA: 0x21859E8
	private void RecycleCurrencyView() { }

	// RVA: 0x2185AA0 Offset: 0x2185AA0 VA: 0x2185AA0 Slot: 7
	public override void Initialize() { }

	// RVA: 0x2185AA4 Offset: 0x2185AA4 VA: 0x2185AA4 Slot: 8
	public override void Recycle() { }

	// RVA: 0x2185B08 Offset: 0x2185B08 VA: 0x2185B08
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.MiniGame.Scripts.UI.Tooltip
[CreateAssetMenu(fileName = "MiniGameTooltipRewardsFactory", menuName = "Factory/MiniGameTooltipRewardsFactory")]