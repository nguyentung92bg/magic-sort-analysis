public class Timer : MonoBehaviour, ISecondUpdate // TypeDefIndex: 1136
{
	// Fields
	public Action OnTimeIsUp; // 0x18
	[SerializeField]
	private TextMeshPro _timetext; // 0x20
	[SerializeField]
	private TMProWarpText _TMProWarpText; // 0x28
	[SerializeField]
	private ClockAnimationView _clockAnimationView; // 0x30
	private DateTime _endDate; // 0x38
	private bool _timeIsUp; // 0x40
	private Action _onFinished; // 0x48
	private string _localizedFinished; // 0x50

	// Methods

	// RVA: 0x160DFD0 Offset: 0x160DFD0 VA: 0x160DFD0
	public void Initialize(DateTime endDateTime, Action onFinished) { }

	// RVA: 0x160E244 Offset: 0x160E244 VA: 0x160E244 Slot: 4
	public void SecondUpdate() { }

	// RVA: 0x160E088 Offset: 0x160E088 VA: 0x160E088
	private void UpdateTimerText() { }

	// RVA: 0x160E290 Offset: 0x160E290 VA: 0x160E290
	private void ContinueTimerAnimation() { }

	// RVA: 0x160E254 Offset: 0x160E254 VA: 0x160E254
	private void StopTimerAnimation() { }

	// RVA: 0x160E2A4 Offset: 0x160E2A4 VA: 0x160E2A4
	private void OnEnable() { }

	// RVA: 0x160E330 Offset: 0x160E330 VA: 0x160E330
	private void OnDisable() { }

	// RVA: 0x160E3D0 Offset: 0x160E3D0 VA: 0x160E3D0
	public void .ctor() { }
}

// Namespace: Modules.Contexts.GamePlay.Tutorial.Scripts