public class DailyPlayButton : MonoBehaviour // TypeDefIndex: 4928
{
	// Fields
	[SerializeField]
	private Button _activePlayButton; // 0x18
	[SerializeField]
	private Button _pastDayPlayButton; // 0x20
	[SerializeField]
	private GameObject _activeButtonContainer; // 0x28
	[SerializeField]
	private GameObject _cooldownButtonContainer; // 0x30
	[SerializeField]
	private GameObject _unclaimedButtonContainer; // 0x38
	[SerializeField]
	private TextMeshPro _activeButtonText; // 0x40
	[SerializeField]
	private TextMeshPro _cooldownButtonText; // 0x48
	[SerializeField]
	private TextMeshPro _unclaimedButtonText; // 0x50
	[SerializeField]
	private RewardedButton _rewardedButton; // 0x58
	[SerializeField]
	private FingerView _fingerView; // 0x60
	private DailyService _dailyService; // 0x68
	private RemoteTimeService _remoteTimeService; // 0x70
	private DateTime _currentSelectedDateTime; // 0x78

	// Methods

	// RVA: 0x3E204FC Offset: 0x3E204FC VA: 0x3E204FC
	private void Awake() { }

	// RVA: 0x3E20678 Offset: 0x3E20678 VA: 0x3E20678
	public void SetCurrentSelectedDateTime(DateTime dateTime) { }

	[AsyncStateMachine(typeof(DailyPlayButton.<OnLockedDayPlayButtonClick>d__15))]
	// RVA: 0x3E20680 Offset: 0x3E20680 VA: 0x3E20680
	private void OnLockedDayPlayButtonClick() { }

	// RVA: 0x3E20738 Offset: 0x3E20738 VA: 0x3E20738
	private void OnUnlockedDayPlayButtonClick() { }

	// RVA: 0x3E20A1C Offset: 0x3E20A1C VA: 0x3E20A1C
	public void SetClaimedPlayButtonDateText(string text) { }

	// RVA: 0x3E20A40 Offset: 0x3E20A40 VA: 0x3E20A40
	public void SetUnclaimedPlayButtonDateText(string text) { }

	// RVA: 0x3E20A64 Offset: 0x3E20A64 VA: 0x3E20A64
	public void SetPlayButtonViewForState(DailyPlayButtonState state) { }

	// RVA: 0x3E20B28 Offset: 0x3E20B28 VA: 0x3E20B28
	private void OnDestroy() { }

	// RVA: 0x3E20C08 Offset: 0x3E20C08 VA: 0x3E20C08
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Daily.Scripts.UI