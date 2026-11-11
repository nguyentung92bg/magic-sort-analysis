public class WheelOfFortuneLobbyButton : MonoBehaviour // TypeDefIndex: 1941
{
	// Fields
	[SerializeField]
	private Button _button; // 0x18
	[SerializeField]
	private Timer _timer; // 0x20
	[SerializeField]
	private Transform _spinAlertView; // 0x28
	[SerializeField]
	private Transform _wheelProgressView; // 0x30
	[SerializeField]
	private WheelOfFortuneLobbyButtonAnimationConfig _animationConfig; // 0x38
	[SerializeField]
	private TextMeshPro _progressText; // 0x40
	[SerializeField]
	private List<Transform> _wheelsIcons; // 0x48
	[SerializeField]
	private GameObject _root; // 0x50
	[SerializeField]
	private LobbyIconVariantController _variantController; // 0x58
	[SerializeField]
	private WheelOfFortuneAlertView _alertView; // 0x60
	private WheelOfFortuneService _service; // 0x68
	private Transform _currentWheel; // 0x70

	// Methods

	// RVA: 0x31A92C4 Offset: 0x31A92C4 VA: 0x31A92C4
	private void Awake() { }

	// RVA: 0x31A94A0 Offset: 0x31A94A0 VA: 0x31A94A0
	private void OnDestroy() { }

	// RVA: 0x31A9624 Offset: 0x31A9624 VA: 0x31A9624
	private void OnEnable() { }

	// RVA: 0x31A9740 Offset: 0x31A9740 VA: 0x31A9740
	private void OnButtonClick() { }

	// RVA: 0x31A9628 Offset: 0x31A9628 VA: 0x31A9628
	public void UpdateState() { }

	// RVA: 0x31A9AE0 Offset: 0x31A9AE0 VA: 0x31A9AE0
	private void UpdateAlertView() { }

	// RVA: 0x31A98BC Offset: 0x31A98BC VA: 0x31A98BC
	private void SetWheelLastSeenValue() { }

	// RVA: 0x31A9AF8 Offset: 0x31A9AF8 VA: 0x31A9AF8
	private void ResetAllViews() { }

	// RVA: 0x31A995C Offset: 0x31A995C VA: 0x31A995C
	private void SetProgressTextLastSeenValue() { }

	[Button]
	// RVA: 0x31A9C70 Offset: 0x31A9C70 VA: 0x31A9C70
	public Tween PlayProgressAnimation() { }

	// RVA: 0x31A9D84 Offset: 0x31A9D84 VA: 0x31A9D84
	private Tween ProgressAnimation(int previous, int current, int max) { }

	// RVA: 0x31A9E94 Offset: 0x31A9E94 VA: 0x31A9E94
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]