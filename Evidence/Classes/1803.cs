public class WindQuestLobbyButton : MonoBehaviour // TypeDefIndex: 1803
{
	// Fields
	[SerializeField]
	private GameObject _root; // 0x18
	[SerializeField]
	private Button _button; // 0x20
	[SerializeField]
	private Timer _timer; // 0x28
	[SerializeField]
	private SpriteRenderer _progressBar; // 0x30
	[SerializeField]
	private WatchAndWinDynamicRewardView _rewardView; // 0x38
	[SerializeField]
	private float _progressBarMaxWidth; // 0x40
	[SerializeField]
	[Range(0, 1)]
	private float _maxFillRatio; // 0x44
	[SerializeField]
	private GameObject _completedText; // 0x48
	[SerializeField]
	private WindQuestTaskView _taskView; // 0x50
	private WindQuestService _windQuestService; // 0x58
	private WindQuestLobbyButtonViewModel _viewModel; // 0x60

	// Methods

	// RVA: 0x2D99A38 Offset: 0x2D99A38 VA: 0x2D99A38
	private void Awake() { }

	// RVA: 0x2D99BC0 Offset: 0x2D99BC0 VA: 0x2D99BC0
	private void OnDestroy() { }

	// RVA: 0x2D99CFC Offset: 0x2D99CFC VA: 0x2D99CFC
	private void OnEnable() { }

	// RVA: 0x2D99D00 Offset: 0x2D99D00 VA: 0x2D99D00
	private void UpdateView() { }

	[AsyncStateMachine(typeof(WindQuestLobbyButton.<OnButtonClick>d__15))]
	// RVA: 0x2D9A064 Offset: 0x2D9A064 VA: 0x2D9A064
	private void OnButtonClick() { }

	// RVA: 0x2D99FE8 Offset: 0x2D99FE8 VA: 0x2D99FE8
	private void SetProgress(int currentScore, int goal) { }

	// RVA: 0x2D9A0FC Offset: 0x2D9A0FC VA: 0x2D9A0FC
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]