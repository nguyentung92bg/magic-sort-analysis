public class TeamQuestPopup : MonoBehaviour, IPopUp // TypeDefIndex: 2303
{
	// Fields
	[SerializeField]
	private CurrencyViewFactory _currencyViewFactory; // 0x18
	[SerializeField]
	private Button _claimButton; // 0x20
	[SerializeField]
	private Button _closeButton; // 0x28
	[SerializeField]
	private Button _infoButton; // 0x30
	[SerializeField]
	private GameObject _claimAreaGO; // 0x38
	[SerializeField]
	private Timer _timer; // 0x40
	[SerializeField]
	private TeamQuestPopupProgressBarView[] _progressBarViews; // 0x48
	[SerializeField]
	private TMP_Text _progressTooltipText; // 0x50
	[SerializeField]
	private GameObject _progressTooltipGO; // 0x58
	[SerializeField]
	private TeamQuestLeaderboardView _inProgressLeaderboardView; // 0x60
	[SerializeField]
	private TeamQuestLeaderboardView _claimLeaderboardView; // 0x68
	[SerializeField]
	private GameObject[] _heroImages; // 0x70
	[SerializeField]
	private GameObject _heroImageParent; // 0x78
	[SerializeField]
	private TeamQuestPopupAnimationConfig _animationConfig; // 0x80
	[SerializeField]
	private List<ToolbarButton> _toolbarButtons; // 0x88
	[SerializeField]
	private TMP_Text _alertText; // 0x90
	[SerializeField]
	private GameObject _alertTextGO; // 0x98
	[SerializeField]
	private TMP_Text _claimButtonText; // 0xA0
	private TaskCompletionSource<bool> _popupDisplayFlow; // 0xA8
	private TeamQuestService _teamQuestService; // 0xB0
	private TeamQuestViewModel _viewModel; // 0xB8
	private Sequence _progressSequence; // 0xC0

	// Methods

	// RVA: 0x2DDC328 Offset: 0x2DDC328 VA: 0x2DDC328
	private void Awake() { }

	// RVA: 0x2DDC440 Offset: 0x2DDC440 VA: 0x2DDC440
	private void OnDestroy() { }

	// RVA: 0x2DDC558 Offset: 0x2DDC558 VA: 0x2DDC558 Slot: 6
	public Task Hide() { }

	// RVA: 0x2DDC7B8 Offset: 0x2DDC7B8 VA: 0x2DDC7B8 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x2DDC894 Offset: 0x2DDC894 VA: 0x2DDC894 Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x2DDD568 Offset: 0x2DDD568 VA: 0x2DDD568
	private string GetAlertText(TeamQuestAlertMessageType alertType) { }

	// RVA: 0x2DDCF88 Offset: 0x2DDCF88 VA: 0x2DDCF88
	private void SetupProgressBars() { }

	// RVA: 0x2DDCE2C Offset: 0x2DDCE2C VA: 0x2DDCE2C
	private void UpdateHeroImages(bool activateAll) { }

	// RVA: 0x2DDD2D4 Offset: 0x2DDD2D4 VA: 0x2DDD2D4
	private void SetRewardModels() { }

	// RVA: 0x2DDDB34 Offset: 0x2DDDB34 VA: 0x2DDDB34
	private float GetTooltipXPosition(int map, int maxMap, int chestIndex) { }

	// RVA: 0x2DDDBA8 Offset: 0x2DDDBA8 VA: 0x2DDDBA8
	public void MoveProgressTooltip(int currentMap, int maxMap, int chestIndex, float duration) { }

	// RVA: 0x2DDD9B4 Offset: 0x2DDD9B4 VA: 0x2DDD9B4
	public Tween MoveHeroImage(int targetStep, float duration) { }

	// RVA: 0x2DDCCD8 Offset: 0x2DDCCD8 VA: 0x2DDCCD8
	public void SetProgressTooltipInitialPosition(int targetStep, List<TeamQuestStepViewModel> stepViewModels) { }

	// RVA: 0x2DDDA80 Offset: 0x2DDDA80 VA: 0x2DDDA80
	private Tween PlayTooltipAppear(float duration = 0.25) { }

	// RVA: 0x2DDDC24 Offset: 0x2DDDC24 VA: 0x2DDDC24
	private void ButtonOnSelectSuccessEvent() { }

	// RVA: 0x2DDDE1C Offset: 0x2DDDE1C VA: 0x2DDDE1C
	private void PlayClaimAnimation(List<ValueTuple<int, TeamQuestStepModel>> unclaimedSteps) { }

	// RVA: 0x2DDE1A4 Offset: 0x2DDE1A4 VA: 0x2DDE1A4
	private void InfoButtonOnOnSelectSuccessEvent() { }

	[AsyncStateMachine(typeof(TeamQuestPopup.<SendClaimRequestAndClosePopup>d__39))]
	// RVA: 0x2DDE1AC Offset: 0x2DDE1AC VA: 0x2DDE1AC
	private void SendClaimRequestAndClosePopup() { }

	// RVA: 0x2DDCC10 Offset: 0x2DDCC10 VA: 0x2DDCC10
	private void OpenTeamQuestInfoPopUp(TeamQuestInfoPopupImpressionSource source) { }

	// RVA: 0x2DDE264 Offset: 0x2DDE264 VA: 0x2DDE264 Slot: 7
	public GameObject GetGameObject() { }

	[Button]
	// RVA: 0x2DDE26C Offset: 0x2DDE26C VA: 0x2DDE26C
	public void AnimationTest() { }

	// RVA: 0x2DDE330 Offset: 0x2DDE330 VA: 0x2DDE330
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x2DDE338 Offset: 0x2DDE338 VA: 0x2DDE338
	private void <SetupProgressBars>b__28_0() { }
}

// Namespace: Modules.Contexts.Home.TeamQuest.Scripts.UI
[Serializable]