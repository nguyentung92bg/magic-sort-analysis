public class DuckFestivalLeaderboardClaimViewState : MonoBehaviour // TypeDefIndex: 4441
{
	// Fields
	[SerializeField]
	private DuckFestivalLeaderboardElementPlacementController _placementController; // 0x18
	[SerializeField]
	private TextMeshPro _rankValueText; // 0x20
	[SerializeField]
	private DuckFestivalLeaderboardElementRewardView _elementRewardView; // 0x28
	[SerializeField]
	private Button _claimButton; // 0x30
	[SerializeField]
	private Button _closeButton; // 0x38
	[SerializeField]
	private Transform _parent; // 0x40
	[SerializeField]
	private GameObject _noRewardsObject; // 0x48
	[SerializeField]
	private TextMeshPro _continueText; // 0x50
	[SerializeField]
	private TextMeshPro _claimText; // 0x58
	private RewardModel _rewardModel; // 0x60
	private DuckFestivalFinishEventParameters _parameterCache; // 0x68

	// Methods

	// RVA: 0x38C9358 Offset: 0x38C9358 VA: 0x38C9358
	private void Awake() { }

	// RVA: 0x38C9438 Offset: 0x38C9438 VA: 0x38C9438
	private void OnDestroy() { }

	// RVA: 0x38C9518 Offset: 0x38C9518 VA: 0x38C9518
	public void Show() { }

	// RVA: 0x38C9AD8 Offset: 0x38C9AD8 VA: 0x38C9AD8
	public void Hide() { }

	[AsyncStateMachine(typeof(DuckFestivalLeaderboardClaimViewState.<OnCloseButtonDown>d__15))]
	// RVA: 0x38C9B04 Offset: 0x38C9B04 VA: 0x38C9B04
	private void OnCloseButtonDown() { }

	[AsyncStateMachine(typeof(DuckFestivalLeaderboardClaimViewState.<OnClaimButtonDown>d__16))]
	// RVA: 0x38C9BBC Offset: 0x38C9BBC VA: 0x38C9BBC
	private void OnClaimButtonDown() { }

	[AsyncStateMachine(typeof(DuckFestivalLeaderboardClaimViewState.<TryClaimEvent>d__17))]
	// RVA: 0x38C9C74 Offset: 0x38C9C74 VA: 0x38C9C74
	private Task<bool> TryClaimEvent() { }

	// RVA: 0x38C9D88 Offset: 0x38C9D88 VA: 0x38C9D88
	public void Dispose() { }

	// RVA: 0x38C9DDC Offset: 0x38C9DDC VA: 0x38C9DDC
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]