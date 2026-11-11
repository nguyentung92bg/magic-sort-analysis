public class DailyQuitPopUp : MonoBehaviour, IPopUp // TypeDefIndex: 4935
{
	// Fields
	[SerializeField]
	private Transform _container; // 0x18
	[SerializeField]
	private Button _quitButton; // 0x20
	[SerializeField]
	private Button _closeButton; // 0x28
	private FailFlowAnimationConfig _animationConfig; // 0x30
	private TaskCompletionSource<bool> _popupDisplayFlow; // 0x38
	private Tween _tween; // 0x40

	// Methods

	// RVA: 0x3E22084 Offset: 0x3E22084 VA: 0x3E22084 Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x3E222C0 Offset: 0x3E222C0 VA: 0x3E222C0
	public void QuitFromDaily() { }

	// RVA: 0x3E22454 Offset: 0x3E22454 VA: 0x3E22454
	public void ResumePlayingAfterQuit() { }

	// RVA: 0x3E221D4 Offset: 0x3E221D4 VA: 0x3E221D4
	private void PlayScaleAnimation() { }

	// RVA: 0x3E2253C Offset: 0x3E2253C VA: 0x3E2253C Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x3E22608 Offset: 0x3E22608 VA: 0x3E22608 Slot: 6
	public Task Hide() { }

	// RVA: 0x3E2279C Offset: 0x3E2279C VA: 0x3E2279C Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x3E227A4 Offset: 0x3E227A4 VA: 0x3E227A4
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Daily.Scripts.UI
[CreateAssetMenu(fileName = "DailySpriteConfig", menuName = "Configs/DailySpriteConfig")]