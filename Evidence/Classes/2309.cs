public class TeamQuestPopupProgressBarView : MonoBehaviour // TypeDefIndex: 2309
{
	// Fields
	[SerializeField]
	private SpriteRenderer _progressBar; // 0x18
	[SerializeField]
	private float _minFillRatio; // 0x20
	[SerializeField]
	private GameObject _completedCheck; // 0x28
	[SerializeField]
	private GameObject _cross; // 0x30
	[SerializeField]
	private Button _claimButton; // 0x38
	[SerializeField]
	private TMP_Text _requiredProgressText; // 0x40
	[SerializeField]
	private GameObject _requiredProgressGO; // 0x48
	[SerializeField]
	private TeamQuestPopupAnimationConfig _animationConfig; // 0x50
	[SerializeField]
	private Button _messageButton; // 0x58
	[SerializeField]
	private ChestView _chestView; // 0x60
	private TeamQuestService _teamQuestService; // 0x68
	private Sequence _progressSequence; // 0x70
	private Vector2 _progressBarSize; // 0x78
	private float _fullDistance; // 0x80
	private TeamQuestStepViewModel _viewModel; // 0x88
	private static readonly string NoContributionTerm; // 0x0
	private static readonly string NoContributionForChestTerm; // 0x8

	// Methods

	// RVA: 0x2DDE7B4 Offset: 0x2DDE7B4 VA: 0x2DDE7B4
	private void Awake() { }

	// RVA: 0x2DDC6B4 Offset: 0x2DDC6B4 VA: 0x2DDC6B4
	public void Dispose() { }

	// RVA: 0x2DDD704 Offset: 0x2DDD704 VA: 0x2DDD704
	public Tween Show(TeamQuestStepViewModel viewModel) { }

	// RVA: 0x2DDEA08 Offset: 0x2DDEA08 VA: 0x2DDEA08
	private Tween PlayProgressAnimation(int previousMap, int currentMap, int maxMap, bool isCurrentStep) { }

	// RVA: 0x2DDE8B4 Offset: 0x2DDE8B4 VA: 0x2DDE8B4
	private Tween UpdateFillAmount(float progressRatio, float duration, bool easeAtEnd) { }

	// RVA: 0x2DDE98C Offset: 0x2DDE98C VA: 0x2DDE98C
	public void ApplyChestState(TeamQuestStepChestState state, bool shouldAnimate = False) { }

	// RVA: 0x2DDEA8C Offset: 0x2DDEA8C VA: 0x2DDEA8C
	private void SetChestState(bool completed, bool cross, bool requiredProgress, bool claimButton, bool shouldAnimate) { }

	// RVA: 0x2DDEB14 Offset: 0x2DDEB14 VA: 0x2DDEB14
	private void PlayIconAnimation(GameObject icon, bool show, bool animate = False) { }

	// RVA: 0x2DDE100 Offset: 0x2DDE100 VA: 0x2DDE100
	public Sequence PlayRevealAnimation() { }

	// RVA: 0x2DDEC18 Offset: 0x2DDEC18 VA: 0x2DDEC18
	private void MessageButtonOnSelectSuccessEvent() { }

	// RVA: 0x2DDED30 Offset: 0x2DDED30 VA: 0x2DDED30
	private void ClaimButtonOnSelectSuccessEvent() { }

	// RVA: 0x2DDED34 Offset: 0x2DDED34 VA: 0x2DDED34
	private void TryApplyChestStateAndPlayRevealAnimation() { }

	// RVA: 0x2DDEEA8 Offset: 0x2DDEEA8 VA: 0x2DDEEA8
	public void .ctor() { }

	// RVA: 0x2DDEEBC Offset: 0x2DDEEBC VA: 0x2DDEEBC
	private static void .cctor() { }

	[CompilerGenerated]
	// RVA: 0x2DDEF58 Offset: 0x2DDEF58 VA: 0x2DDEF58
	private void <PlayRevealAnimation>b__25_0() { }
}

// Namespace: Modules.Contexts.Home.TeamQuest.Scripts.UI