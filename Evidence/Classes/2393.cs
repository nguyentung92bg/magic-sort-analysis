public class TeamArenaLeaderboardRewardView : MonoBehaviour // TypeDefIndex: 2393
{
	// Fields
	[SerializeField]
	private Transform _rewardContainer; // 0x18
	[SerializeField]
	private CurrencyViewFactory _currencyViewFactory; // 0x20
	[SerializeField]
	private bool _setSortingOrder; // 0x28
	[SerializeField]
	private int _sortingOrder; // 0x2C
	private CurrencyView _currentCurrencyView; // 0x30

	// Properties
	public CurrencyView CurrencyView { get; }

	// Methods

	// RVA: 0x2969E64 Offset: 0x2969E64 VA: 0x2969E64
	public CurrencyView get_CurrencyView() { }

	// RVA: 0x296804C Offset: 0x296804C VA: 0x296804C
	public void SetReward(RewardModel rewardModel) { }

	// RVA: 0x2969E6C Offset: 0x2969E6C VA: 0x2969E6C
	private void RecycleCurrentCurrencyView() { }

	// RVA: 0x296829C Offset: 0x296829C VA: 0x296829C
	public void Dispose() { }

	// RVA: 0x2969F38 Offset: 0x2969F38 VA: 0x2969F38
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.TeamArena.UI.Popups.TeamLeaderboard