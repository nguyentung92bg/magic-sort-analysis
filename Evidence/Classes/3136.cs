public class WatchAndWinDynamicRewardView : MonoBehaviour // TypeDefIndex: 3136
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

	// RVA: 0x32FC098 Offset: 0x32FC098 VA: 0x32FC098
	public CurrencyView get_CurrencyView() { }

	// RVA: 0x32FC0A0 Offset: 0x32FC0A0 VA: 0x32FC0A0
	public void SetReward(RewardModel rewardModel) { }

	// RVA: 0x32FC30C Offset: 0x32FC30C VA: 0x32FC30C
	private void RecycleCurrentCurrencyView() { }

	// RVA: 0x32FC3D8 Offset: 0x32FC3D8 VA: 0x32FC3D8
	public void Dispose() { }

	// RVA: 0x32FC3DC Offset: 0x32FC3DC VA: 0x32FC3DC
	public void DisposeWithRecycle() { }

	// RVA: 0x32FC474 Offset: 0x32FC474 VA: 0x32FC474
	public GameObject GetRewardContainer() { }

	// RVA: 0x32FC490 Offset: 0x32FC490 VA: 0x32FC490
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Monetization.WatchAndWin.Scripts.UI