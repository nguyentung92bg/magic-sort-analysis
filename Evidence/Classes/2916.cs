public class ClockAnimationView : MonoBehaviour // TypeDefIndex: 2916
{
	// Fields
	[SerializeField]
	private Transform hourHandContainer; // 0x18
	[SerializeField]
	private ClockAnimationConfig clockAnimationConfig; // 0x20
	[SerializeField]
	private bool _shouldAnimationAutoStart; // 0x28
	private Vector3 _initialRotation; // 0x2C
	private Tween _rotationTween; // 0x38
	private bool _isAnimationPlaying; // 0x40
	private bool _isEnabled; // 0x41
	private bool _isAnimationRequested; // 0x42

	// Methods

	// RVA: 0x2984B98 Offset: 0x2984B98 VA: 0x2984B98
	private void OnEnable() { }

	// RVA: 0x2984BD8 Offset: 0x2984BD8 VA: 0x2984BD8
	private void OnDisable() { }

	// RVA: 0x2984BA4 Offset: 0x2984BA4 VA: 0x2984BA4
	private void UpdateView() { }

	// RVA: 0x2984CF8 Offset: 0x2984CF8 VA: 0x2984CF8
	public void Stop() { }

	// RVA: 0x2984D00 Offset: 0x2984D00 VA: 0x2984D00
	public void Play() { }

	// RVA: 0x2984C24 Offset: 0x2984C24 VA: 0x2984C24
	private void StartAnimation() { }

	// RVA: 0x2984BE0 Offset: 0x2984BE0 VA: 0x2984BE0
	private void StopAnimation() { }

	// RVA: 0x2984D0C Offset: 0x2984D0C VA: 0x2984D0C
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.UI.Chest.Scripts
[CreateAssetMenu(fileName = "ChestAnimationsConfig", menuName = "Configs/ChestAnimationsConfig")]