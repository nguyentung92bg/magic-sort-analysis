public class LifeRewardedButton : MonoBehaviour // TypeDefIndex: 1044
{
	// Fields
	[SerializeField]
	private Button _button; // 0x18
	[SerializeField]
	private LoadingbarView _loadingbarView; // 0x20
	private AdService _adService; // 0x28

	// Methods

	// RVA: 0x16E8CEC Offset: 0x16E8CEC VA: 0x16E8CEC
	private void Awake() { }

	// RVA: 0x16E8E74 Offset: 0x16E8E74 VA: 0x16E8E74
	private void OnDestroy() { }

	// RVA: 0x16E8FA0 Offset: 0x16E8FA0 VA: 0x16E8FA0
	public void Show() { }

	// RVA: 0x16E8FD0 Offset: 0x16E8FD0 VA: 0x16E8FD0
	private void ShowLoadingBarIfRewardedNotReady() { }

	// RVA: 0x16E910C Offset: 0x16E910C VA: 0x16E910C
	public void Hide() { }

	[AsyncStateMachine(typeof(LifeRewardedButton.<ShowRewardedToEarnLife>d__8))]
	// RVA: 0x16E9130 Offset: 0x16E9130 VA: 0x16E9130
	private void ShowRewardedToEarnLife() { }

	// RVA: 0x16E91E4 Offset: 0x16E91E4 VA: 0x16E91E4
	public void .ctor() { }
}

// Namespace: Modules.Contexts.GamePlay.UI.RefillPopUpNs.Scripts