public class PlayOnWithRewardedButton : MonoBehaviour // TypeDefIndex: 1114
{
	// Fields
	[SerializeField]
	private LoadingbarView _loadingbarView; // 0x18
	[SerializeField]
	private Button _button; // 0x20
	[SerializeField]
	private PlayOnTagView _playOnTagView; // 0x28
	[SerializeField]
	private string _source; // 0x30
	[SerializeField]
	private PlayOnWithRewardedView _playOnWithRewardedView; // 0x38
	private int _targetAdWatchCount; // 0x40
	private AdService _adService; // 0x48
	private PlayOnWithRewardedService _playOnWithRewardedService; // 0x50
	[CompilerGenerated]
	private Action OnPlayOnUsed; // 0x58

	// Methods

	[CompilerGenerated]
	// RVA: 0x16F2C40 Offset: 0x16F2C40 VA: 0x16F2C40
	public void add_OnPlayOnUsed(Action value) { }

	[CompilerGenerated]
	// RVA: 0x16F2EFC Offset: 0x16F2EFC VA: 0x16F2EFC
	public void remove_OnPlayOnUsed(Action value) { }

	// RVA: 0x16FB024 Offset: 0x16FB024 VA: 0x16FB024
	public void Awake() { }

	// RVA: 0x16F28F4 Offset: 0x16F28F4 VA: 0x16F28F4
	public void Initialize() { }

	// RVA: 0x16FB18C Offset: 0x16FB18C VA: 0x16FB18C
	public void Show(StuckType stuckType) { }

	[AsyncStateMachine(typeof(PlayOnWithRewardedButton.<PlayOn>d__14))]
	// RVA: 0x16FB220 Offset: 0x16FB220 VA: 0x16FB220
	private void PlayOn() { }

	// RVA: 0x16FB150 Offset: 0x16FB150 VA: 0x16FB150
	private void ShowLoadingBarIfAdNotReady() { }

	// RVA: 0x16FB2D8 Offset: 0x16FB2D8 VA: 0x16FB2D8
	private void ShowLoadingBarIfRewardedNotReady() { }

	// RVA: 0x16FB320 Offset: 0x16FB320 VA: 0x16FB320
	private void ShowLoadingBarIfInterNotReady() { }

	// RVA: 0x16FB368 Offset: 0x16FB368 VA: 0x16FB368
	public void OnDestroy() { }

	// RVA: 0x16FB494 Offset: 0x16FB494 VA: 0x16FB494
	public void .ctor() { }
}

// Namespace: Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts