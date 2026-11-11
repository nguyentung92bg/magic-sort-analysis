public class MagicStreakTournamentRewardElement : BasicView // TypeDefIndex: 3775
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
	private CurrencyView _currentCurrencyView; // 0x90

	// Properties
	public override int Id { get; set; }
	public Vector3 Size { get; }

	// Methods

	// RVA: 0x3E11170 Offset: 0x3E11170 VA: 0x3E11170 Slot: 5
	public override int get_Id() { }

	// RVA: 0x3E11178 Offset: 0x3E11178 VA: 0x3E11178 Slot: 6
	public override void set_Id(int value) { }

	// RVA: 0x3E11180 Offset: 0x3E11180 VA: 0x3E11180
	public Vector3 get_Size() { }

	// RVA: 0x3E111A8 Offset: 0x3E111A8 VA: 0x3E111A8
	public void SetModel(MagicStreakProgressbarRewardElementViewModel model) { }

	// RVA: 0x3E1142C Offset: 0x3E1142C VA: 0x3E1142C
	private void RecycleCurrencyView() { }

	// RVA: 0x3E114E4 Offset: 0x3E114E4 VA: 0x3E114E4 Slot: 7
	public override void Initialize() { }

	// RVA: 0x3E114E8 Offset: 0x3E114E8 VA: 0x3E114E8 Slot: 8
	public override void Recycle() { }

	// RVA: 0x3E1154C Offset: 0x3E1154C VA: 0x3E1154C
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Rewards
[CreateAssetMenu(fileName = "MagicStreakTournamentRewardsFactory", menuName = "Factory/MagicStreakTournamentRewardsFactory")]