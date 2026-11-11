public class MagicStreakTournamentLobbyButtonController : MonoBehaviour // TypeDefIndex: 3787
{
	// Fields
	[SerializeField]
	private Button _button; // 0x18
	[SerializeField]
	private TextMeshPro _rankText; // 0x20
	[SerializeField]
	private MagicStreakTournamentHatCollectableView _streakHatCollectableView; // 0x28
	[SerializeField]
	private MagicStreakTournamentTimer _streakTournamentTimer; // 0x30
	[SerializeField]
	private MagicStreakTournamentLobbyButtonRewardView _rewardView; // 0x38
	[SerializeField]
	private GameObject _root; // 0x40
	private MagicStreakService _service; // 0x48

	// Methods

	// RVA: 0x3E124D8 Offset: 0x3E124D8 VA: 0x3E124D8
	private void Awake() { }

	// RVA: 0x3E126C0 Offset: 0x3E126C0 VA: 0x3E126C0
	private void OnDestroy() { }

	// RVA: 0x3E12850 Offset: 0x3E12850 VA: 0x3E12850
	public void OnEnable() { }

	[AsyncStateMachine(typeof(MagicStreakTournamentLobbyButtonController.<OnButtonClick>d__10))]
	// RVA: 0x3E12928 Offset: 0x3E12928 VA: 0x3E12928
	private void OnButtonClick() { }

	// RVA: 0x3E129E0 Offset: 0x3E129E0 VA: 0x3E129E0
	public Tween PlayCollectableAnimation(int hatCount) { }

	[Button]
	// RVA: 0x3E129F8 Offset: 0x3E129F8 VA: 0x3E129F8
	public void TestRewardView() { }

	[AsyncStateMachine(typeof(MagicStreakTournamentLobbyButtonController.<PlayRewardAnimationAsync>d__13))]
	// RVA: 0x3E12EFC Offset: 0x3E12EFC VA: 0x3E12EFC
	public Task PlayRewardAnimationAsync(List<RewardModel> _rewards, float lastRewardPercentage, float finalRewardPercentage) { }

	// RVA: 0x3E12A40 Offset: 0x3E12A40 VA: 0x3E12A40
	private List<RewardModel> GetRandomRewards() { }

	// RVA: 0x3E12854 Offset: 0x3E12854 VA: 0x3E12854
	private void UpdateState() { }

	// RVA: 0x3E13010 Offset: 0x3E13010 VA: 0x3E13010
	private void UpdateRank() { }

	// RVA: 0x3E130B4 Offset: 0x3E130B4 VA: 0x3E130B4
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]