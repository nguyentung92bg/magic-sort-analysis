public class DuckFestivalPopUp : MonoBehaviour, IPopUp // TypeDefIndex: 4411
{
	// Fields
	[SerializeField]
	private Timer _timer; // 0x18
	[SerializeField]
	private DuckFestivalLeaderboardProgressViewState _progressViewState; // 0x20
	[SerializeField]
	private DuckFestivalLeaderboardClaimViewState _claimViewState; // 0x28
	[SerializeField]
	private DuckFestivalProgressView _duckFestivalProgressView; // 0x30
	[SerializeField]
	private DuckFestivalRewardsSwipeController _swipeController; // 0x38
	[SerializeField]
	private DuckFestivalRewardsListContainer _rewardsListContainer; // 0x40
	[SerializeField]
	private GameObject _inputBlocker; // 0x48
	[SerializeField]
	private Button _infoButton; // 0x50
	private TaskCompletionSource<bool> _popupDisplayFlow; // 0x58
	private DuckFestivalService _duckFestivalService; // 0x60
	private DuckFestivalPopUpArguments _arguments; // 0x68

	// Methods

	// RVA: 0x1B9ACC4 Offset: 0x1B9ACC4 VA: 0x1B9ACC4
	private void Awake() { }

	// RVA: 0x1B9AD50 Offset: 0x1B9AD50 VA: 0x1B9AD50 Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	[AsyncStateMachine(typeof(DuckFestivalPopUp.<UpdateProgressView>d__13))]
	// RVA: 0x1B9AF50 Offset: 0x1B9AF50 VA: 0x1B9AF50
	private Task UpdateProgressView(List<DuckFestivalProgressViewModel> progressModels) { }

	[AsyncStateMachine(typeof(DuckFestivalPopUp.<ShowAsync>d__14))]
	// RVA: 0x1B9B054 Offset: 0x1B9B054 VA: 0x1B9B054 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	[AsyncStateMachine(typeof(DuckFestivalPopUp.<ProcessGaeRewardAnimations>d__15))]
	// RVA: 0x1B9B154 Offset: 0x1B9B154 VA: 0x1B9B154
	private Task ProcessGaeRewardAnimations() { }

	[AsyncStateMachine(typeof(DuckFestivalPopUp.<InfoButtonOnOnSelectSuccessEvent>d__16))]
	// RVA: 0x1B9B240 Offset: 0x1B9B240 VA: 0x1B9B240
	private void InfoButtonOnOnSelectSuccessEvent() { }

	// RVA: 0x1B9B2D8 Offset: 0x1B9B2D8 VA: 0x1B9B2D8 Slot: 6
	public Task Hide() { }

	// RVA: 0x1B9B3F4 Offset: 0x1B9B3F4 VA: 0x1B9B3F4 Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x1B9B3FC Offset: 0x1B9B3FC VA: 0x1B9B3FC
	private void OnDestroy() { }

	// RVA: 0x1B9B488 Offset: 0x1B9B488 VA: 0x1B9B488
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.DuckFestival.Scripts.UI