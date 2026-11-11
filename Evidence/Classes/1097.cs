public class InLevelSettingsButton : MonoBehaviour // TypeDefIndex: 1097
{
	// Fields
	private List<Vector3> _initialGameObjectPositions; // 0x18
	[SerializeField]
	private Button _button; // 0x20
	[SerializeField]
	private SpriteRenderer _buttonImage; // 0x28
	[SerializeField]
	private InLevelSettingsAnimationConfig _inLevelSettingsAnimationConfig; // 0x30
	[SerializeField]
	private SpriteRenderer _backgroundImage; // 0x38
	[SerializeField]
	private Button _backGroundButton; // 0x40
	[SerializeField]
	private Color _backgroundTargetColor; // 0x48
	[SerializeField]
	private GameObject _soundContainer; // 0x58
	[SerializeField]
	private GameObject _vibrationContainer; // 0x60
	[SerializeField]
	private GameObject _musicContainer; // 0x68
	[SerializeField]
	private GameObject _quitContainer; // 0x70
	private Color _backgroundInitialColor; // 0x78
	private Tween _spinTween; // 0x88
	private Tween _backgroundTween; // 0x90
	private Sequence _sequence; // 0x98
	private bool _isOpen; // 0xA0
	private List<GameObject> _containers; // 0xA8

	// Methods

	// RVA: 0x16F58A8 Offset: 0x16F58A8 VA: 0x16F58A8
	private void Awake() { }

	// RVA: 0x16F62DC Offset: 0x16F62DC VA: 0x16F62DC
	private void Hide(InputMode inputMode) { }

	// RVA: 0x16F6300 Offset: 0x16F6300 VA: 0x16F6300
	private void Show() { }

	// RVA: 0x16F5DA8 Offset: 0x16F5DA8 VA: 0x16F5DA8
	public void PositionButtons(bool isVibrationEnabled, bool isMusicEnabled) { }

	// RVA: 0x16F57FC Offset: 0x16F57FC VA: 0x16F57FC
	public void OpenOrCloseSettings() { }

	// RVA: 0x16F6764 Offset: 0x16F6764 VA: 0x16F6764
	private void OpenSettings() { }

	// RVA: 0x16F6324 Offset: 0x16F6324 VA: 0x16F6324
	private void CloseSettings() { }

	// RVA: 0x16F6BEC Offset: 0x16F6BEC VA: 0x16F6BEC
	public void OnDestroy() { }

	// RVA: 0x16F6E04 Offset: 0x16F6E04 VA: 0x16F6E04
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x16F6E0C Offset: 0x16F6E0C VA: 0x16F6E0C
	private void <CloseSettings>b__23_0() { }
}

// Namespace: Modules.Contexts.GamePlay.UI.InLevelSettings.Scripts