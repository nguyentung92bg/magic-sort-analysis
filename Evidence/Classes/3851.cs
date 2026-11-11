public class MagicStreakGaeKeyAnimationView : MonoBehaviour // TypeDefIndex: 3851
{
	// Fields
	[SerializeField]
	private MagicStreakGaeKeyAnimationConfig _animationConfig; // 0x18
	[SerializeField]
	private Transform _tagMultiplierSpawnPosition; // 0x20
	[SerializeField]
	private Transform _levelMultiplierSpawnPosition; // 0x28
	[SerializeField]
	private Transform _keyStartTransform; // 0x30
	[SerializeField]
	private Transform _keyTransform; // 0x38
	[SerializeField]
	private Transform _keyTargetPosition; // 0x40
	[SerializeField]
	private Transform _magicStreakGaeTagParent; // 0x48
	[SerializeField]
	private SpriteRenderer _background; // 0x50
	[SerializeField]
	private Animator _animator; // 0x58
	[SerializeField]
	private Animator _progressBarKeyMultiplierAnimator; // 0x60
	[SerializeField]
	private TextMeshPro _progressbarTagMultiplierCountText; // 0x68
	[SerializeField]
	private TextMeshPro _currentKeyCountText; // 0x70
	[SerializeField]
	private TextMeshPro _tagMultiplierCountText; // 0x78
	[SerializeField]
	private ParticleSystem _keyCenterParticle; // 0x80
	[SerializeField]
	private ParticleSystem _multiplierHitParticle; // 0x88
	[SerializeField]
	private ParticleSystem _keyHitToBarParticle; // 0x90
	[SerializeField]
	private ParticleSystem _keyBackgroundParticle; // 0x98
	[SerializeField]
	private ParticleSystem _tagSpawnParticle; // 0xA0
	private Sequence _animationSequence; // 0xA8

	// Methods

	// RVA: 0x3CF7558 Offset: 0x3CF7558 VA: 0x3CF7558
	private void Awake() { }

	// RVA: 0x3CF3D20 Offset: 0x3CF3D20 VA: 0x3CF3D20
	public void DisposeAnimations() { }

	[Button]
	// RVA: 0x3CF75A8 Offset: 0x3CF75A8 VA: 0x3CF75A8
	public void PlayKeyMultiplyAnimationTest() { }

	// RVA: 0x3CF4B28 Offset: 0x3CF4B28 VA: 0x3CF4B28
	public Sequence PlayHatMultiplyAnimation(int streakMultiplier, int defaultKeyCount, List<int> multipliers) { }

	// RVA: 0x3CF7764 Offset: 0x3CF7764 VA: 0x3CF7764
	private Sequence MultiplierJumpSequence(int defaultKeyCount, int streakMultiplier) { }

	// RVA: 0x3CF7DF8 Offset: 0x3CF7DF8 VA: 0x3CF7DF8
	private Tween SampleScale(Transform target, float duration, AnimationCurve xCurve, AnimationCurve yCurve) { }

	// RVA: 0x3CF7CE0 Offset: 0x3CF7CE0 VA: 0x3CF7CE0
	private Tween MoveKeyToBar() { }

	// RVA: 0x3CF7F04 Offset: 0x3CF7F04 VA: 0x3CF7F04
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x3CF7F0C Offset: 0x3CF7F0C VA: 0x3CF7F0C
	private void <PlayHatMultiplyAnimation>b__22_3() { }

	[CompilerGenerated]
	// RVA: 0x3CF7F38 Offset: 0x3CF7F38 VA: 0x3CF7F38
	private void <PlayHatMultiplyAnimation>b__22_4() { }

	[CompilerGenerated]
	// RVA: 0x3CF7F54 Offset: 0x3CF7F54 VA: 0x3CF7F54
	private void <PlayHatMultiplyAnimation>b__22_5() { }
}

// Namespace: Modules.Contexts.Home.MagicStreakGAE.Scripts