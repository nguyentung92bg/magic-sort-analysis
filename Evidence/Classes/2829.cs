public class SettingsPopUp : MonoBehaviour, IPopUp // TypeDefIndex: 2829
{
	// Fields
	[SerializeField]
	private SimpleToggle _soundToggle; // 0x18
	[SerializeField]
	private SimpleToggle _musicToggle; // 0x20
	[SerializeField]
	private SimpleToggle _vibrationToggle; // 0x28
	[SerializeField]
	private RadioToggle _notificationToggle; // 0x30
	[SerializeField]
	private SettingsPopupFeedbackView _settingsPopupFeedbackView; // 0x38
	[SerializeField]
	private Button _gameCenterButton; // 0x40
	[SerializeField]
	private GameObject _gameCenterButtonContainer; // 0x48
	[SerializeField]
	private GameObject _bottomContainer; // 0x50
	[SerializeField]
	private float _bottomContainerDefaultYPosition; // 0x58
	[SerializeField]
	private GameObject _loginContainerBigBackground; // 0x60
	[SerializeField]
	private GameObject _loginContainerSmallBackground; // 0x68
	[SerializeField]
	private Transform _miscContainer; // 0x70
	[SerializeField]
	private float _miscContainerDefaultYPosition; // 0x78
	[SerializeField]
	private GameObject _appleButtonContainer; // 0x80
	private SoundService _soundService; // 0x88
	private VibrationService _vibrationService; // 0x90
	private NotificationService _notificationService; // 0x98
	private bool _isSignedInToGameCenter; // 0xA0

	// Methods

	// RVA: 0x2DC8BE8 Offset: 0x2DC8BE8 VA: 0x2DC8BE8 Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x2DC95A4 Offset: 0x2DC95A4 VA: 0x2DC95A4 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x2DC9638 Offset: 0x2DC9638 VA: 0x2DC9638
	private void OnSoundToggleChanged(bool toggle) { }

	// RVA: 0x2DC96C8 Offset: 0x2DC96C8 VA: 0x2DC96C8
	private void OnMusicToggleChanged(bool toggle) { }

	// RVA: 0x2DC9758 Offset: 0x2DC9758 VA: 0x2DC9758
	private void OnVibrationToggleChanged(bool toggle) { }

	// RVA: 0x2DC97E8 Offset: 0x2DC97E8 VA: 0x2DC97E8
	private void OnNotificationToggleChanged(bool toggle) { }

	// RVA: 0x2DC9878 Offset: 0x2DC9878 VA: 0x2DC9878
	private void OnGameCenterButtonClicked() { }

	// RVA: 0x2DC98F4 Offset: 0x2DC98F4 VA: 0x2DC98F4 Slot: 6
	public Task Hide() { }

	// RVA: 0x2DC9B40 Offset: 0x2DC9B40 VA: 0x2DC9B40 Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x2DC9B48 Offset: 0x2DC9B48 VA: 0x2DC9B48
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.SettingsPopUp.Scripts