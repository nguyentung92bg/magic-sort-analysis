public class MagicStreakTournamentResultView : MonoBehaviour // TypeDefIndex: 3771
{
	// Fields
	[SerializeField]
	private TextMeshPro _rankResultText; // 0x18
	[SerializeField]
	private GameObject _noRewardText; // 0x20
	[SerializeField]
	private Transform _rewardContainer; // 0x28
	[SerializeField]
	private CurrencyViewFactory _currencyViewFactory; // 0x30
	private CurrencyView _currentCurrencyView; // 0x38

	// Methods

	// RVA: 0x3E10B00 Offset: 0x3E10B00 VA: 0x3E10B00
	public void Dispose() { }

	// RVA: 0x3E10B04 Offset: 0x3E10B04 VA: 0x3E10B04
	private void RecycleCurrentCurrencyView() { }

	// RVA: 0x3E10A20 Offset: 0x3E10A20 VA: 0x3E10A20
	public void Show(string rank, RewardModel rewardModel) { }

	// RVA: 0x3E10BD0 Offset: 0x3E10BD0 VA: 0x3E10BD0
	private void ShowReward(RewardModel rewardModel) { }

	// RVA: 0x3E10D00 Offset: 0x3E10D00 VA: 0x3E10D00
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI