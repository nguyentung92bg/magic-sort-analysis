public class WandView : MonoBehaviour // TypeDefIndex: 1451
{
	// Fields
	[SerializeField]
	private Animation _animation; // 0x18
	[SerializeField]
	private WandAnimationConfig _animationConfig; // 0x20
	[SerializeField]
	private ParticleSystem _starParticle; // 0x28
	[SerializeField]
	private ParticleSystem _movingParticle; // 0x30
	[SerializeField]
	private ParticleSystem _glowParticle; // 0x38
	[SerializeField]
	private ParticleSystem _magicTouchParticle; // 0x40
	[SerializeField]
	private ParticleSystem _localParticle; // 0x48
	private Vector3 _movingParticleStartPosition; // 0x50
	private bool _shouldAnimationPlayFast; // 0x5C
	private const float WandFadeOutBufferTime = 0.5;

	// Methods

	// RVA: 0x1E9D2B0 Offset: 0x1E9D2B0 VA: 0x1E9D2B0
	private void Awake() { }

	// RVA: 0x1E9D36C Offset: 0x1E9D36C VA: 0x1E9D36C
	private float GetMoveDuration() { }

	// RVA: 0x1E9D39C Offset: 0x1E9D39C VA: 0x1E9D39C
	private float GetMoveFinishTime() { }

	// RVA: 0x1E9D3D4 Offset: 0x1E9D3D4 VA: 0x1E9D3D4
	private float GetRevealParticleTime() { }

	// RVA: 0x1E9D414 Offset: 0x1E9D414 VA: 0x1E9D414
	private float GetBottleRevealTime() { }

	// RVA: 0x1E9D454 Offset: 0x1E9D454 VA: 0x1E9D454
	private float GetBackgroundHideTime() { }

	// RVA: 0x1E9D494 Offset: 0x1E9D494 VA: 0x1E9D494
	private float GetWandFadeOutTime() { }

	// RVA: 0x1E9D4D4 Offset: 0x1E9D4D4 VA: 0x1E9D4D4
	private float GetGameObjectHideTime() { }

	// RVA: 0x1E9D51C Offset: 0x1E9D51C VA: 0x1E9D51C
	public Tween PlayWandAnimation(Vector3 hitPosition, Action revealAction) { }

	// RVA: 0x1E9D9D8 Offset: 0x1E9D9D8 VA: 0x1E9D9D8
	private void ResetAnimationState() { }

	// RVA: 0x1E9DAF8 Offset: 0x1E9DAF8 VA: 0x1E9DAF8
	private Tween PlayParticleMoveToTargetAnimation(Vector3 targetPosition) { }

	// RVA: 0x1E9DD40 Offset: 0x1E9DD40 VA: 0x1E9DD40
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x1E9DD48 Offset: 0x1E9DD48 VA: 0x1E9DD48
	private void <PlayWandAnimation>b__18_0() { }

	[CompilerGenerated]
	// RVA: 0x1E9DD88 Offset: 0x1E9DD88 VA: 0x1E9DD88
	private void <PlayWandAnimation>b__18_2() { }

	[CompilerGenerated]
	// RVA: 0x1E9DDDC Offset: 0x1E9DDDC VA: 0x1E9DDDC
	private void <PlayWandAnimation>b__18_3() { }

	[CompilerGenerated]
	// RVA: 0x1E9DE38 Offset: 0x1E9DE38 VA: 0x1E9DE38
	private void <PlayParticleMoveToTargetAnimation>b__20_0() { }
}

// Namespace: Modules.Contexts.GamePlay.BoardItems.Scripts.Blob
[CreateAssetMenu(fileName = "HomeUiAnimationConfig", menuName = "Configs/HomeUiAnimationConfig")]