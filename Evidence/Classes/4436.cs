public class DuckFestivalLobbyMultiplierAnimation : MonoBehaviour // TypeDefIndex: 4436
{
	// Fields
	[SerializeField]
	private DuckFestivalLobbyMultiplierAnimationConfig _config; // 0x18
	[SerializeField]
	private ParticleSystem _fadeParticle; // 0x20
	[SerializeField]
	private Transform _scaleObject; // 0x28
	[SerializeField]
	private Transform _movementContainer; // 0x30
	private bool _animationState; // 0x38

	// Methods

	[Button]
	// RVA: 0x38C8A20 Offset: 0x38C8A20 VA: 0x38C8A20
	public Tween PlayAppear() { }

	[Button]
	// RVA: 0x38C8F00 Offset: 0x38C8F00 VA: 0x38C8F00
	public Tween PlayDisappear() { }

	// RVA: 0x38C8C34 Offset: 0x38C8C34 VA: 0x38C8C34
	private TweenerCore<Color, Color, ColorOptions> PlayFadeAnimation(bool isAppear) { }

	// RVA: 0x38C8C00 Offset: 0x38C8C00 VA: 0x38C8C00
	private void PlayLoops() { }

	// RVA: 0x38C90E0 Offset: 0x38C90E0 VA: 0x38C90E0
	private void CancelLoops() { }

	// RVA: 0x38C9108 Offset: 0x38C9108 VA: 0x38C9108
	public bool GetState() { }

	// RVA: 0x38C9110 Offset: 0x38C9110 VA: 0x38C9110
	private void EnsurePositions() { }

	// RVA: 0x38C922C Offset: 0x38C922C VA: 0x38C922C
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.DuckFestival.Scripts.UI.Lobby