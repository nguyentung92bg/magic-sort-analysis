public class SettingsController : MonoBehaviour // TypeDefIndex: 2856
{
	// Fields
	[SerializeField]
	private SimpleToggle _soundToggle; // 0x18
	[SerializeField]
	private SimpleToggle _vibrationToggle; // 0x20
	[SerializeField]
	private RadioToggle _notificationToggle; // 0x28
	private SoundService _soundService; // 0x30
	private VibrationService _vibrationService; // 0x38
	private NotificationService _notificationService; // 0x40
	[SerializeField]
	private Transform _soundToggleMiddlePosition; // 0x48
	[SerializeField]
	private Transform _soundTransform; // 0x50
	[SerializeField]
	private Transform _vibrationTransform; // 0x58

	// Methods

	// RVA: 0x2DD1DEC Offset: 0x2DD1DEC VA: 0x2DD1DEC
	public void Awake() { }

	// RVA: 0x2DD2188 Offset: 0x2DD2188 VA: 0x2DD2188
	private void OnSoundToggleChanged(bool toggle) { }

	// RVA: 0x2DD2218 Offset: 0x2DD2218 VA: 0x2DD2218
	private void OnMusicToggleChanged(bool toggle) { }

	// RVA: 0x2DD22A8 Offset: 0x2DD22A8 VA: 0x2DD22A8
	private void OnVibrationToggleChanged(bool toggle) { }

	// RVA: 0x2DD2338 Offset: 0x2DD2338 VA: 0x2DD2338
	private void OnNotificationToggleChanged(bool toggle) { }

	// RVA: 0x2DD23C8 Offset: 0x2DD23C8 VA: 0x2DD23C8
	private void OnDestroy() { }

	// RVA: 0x2DD2548 Offset: 0x2DD2548 VA: 0x2DD2548
	public GameObject GetGameObject() { }

	// RVA: 0x2DD2550 Offset: 0x2DD2550 VA: 0x2DD2550
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.UI.ProgressScroll.Scripts