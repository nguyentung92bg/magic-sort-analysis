public class SuperChargerButtonInnerView : MonoBehaviour // TypeDefIndex: 1166
{
	// Fields
	private const int AnimatorBaseLayer = 0;
	[SerializeField]
	private SuperChargerType _type; // 0x18
	[SerializeField]
	private ParticleSystem _progressParticle; // 0x20
	[SerializeField]
	private ParticleSystem _readyParticle; // 0x28
	[SerializeField]
	private GameObject _container; // 0x30
	[SerializeField]
	private GameObject _readyContainer; // 0x38
	[SerializeField]
	private GameObject _readyText; // 0x40
	[SerializeField]
	private float _readyTextScaleDuration; // 0x48
	[SerializeField]
	private Transform _trailPivot; // 0x50
	[SerializeField]
	private float _useCrossFadeDuration; // 0x58
	[Header("Animator")]
	[SerializeField]
	private Animator _animator; // 0x60
	[SerializeField]
	private AnimationClip _readyClip; // 0x68
	[SerializeField]
	private AnimationClip _idleClip; // 0x70
	[SerializeField]
	private AnimationClip _useClip; // 0x78
	private bool _isReady; // 0x80

	// Properties
	public SuperChargerType Type { get; }

	// Methods

	// RVA: 0x16176E8 Offset: 0x16176E8 VA: 0x16176E8
	public SuperChargerType get_Type() { }

	// RVA: 0x16176F0 Offset: 0x16176F0 VA: 0x16176F0
	public void Show() { }

	// RVA: 0x1617800 Offset: 0x1617800 VA: 0x1617800
	public void Hide() { }

	// RVA: 0x1617860 Offset: 0x1617860 VA: 0x1617860
	public void OnProgressChanged(float progress) { }

	// RVA: 0x16178E4 Offset: 0x16178E4 VA: 0x16178E4
	public void OnReady(bool isInstant = False) { }

	// RVA: 0x16179B4 Offset: 0x16179B4 VA: 0x16179B4
	public Transform GetTrailPivot() { }

	// RVA: 0x1617988 Offset: 0x1617988 VA: 0x1617988
	public void PlayReadyAnimation() { }

	// RVA: 0x161795C Offset: 0x161795C VA: 0x161795C
	public void PlayIdleAnimation() { }

	// RVA: 0x1617A8C Offset: 0x1617A8C VA: 0x1617A8C
	public void PlayUseAnimation() { }

	// RVA: 0x1617CB0 Offset: 0x1617CB0 VA: 0x1617CB0
	private void OnUseAnimationCompleted() { }

	// RVA: 0x16179BC Offset: 0x16179BC VA: 0x16179BC
	private void PlayState(string stateName) { }

	// RVA: 0x1617B54 Offset: 0x1617B54 VA: 0x1617B54
	private void CrossFadeState(string stateName, float duration) { }

	// RVA: 0x1617750 Offset: 0x1617750 VA: 0x1617750
	private void SetAnimatorEnabled(bool isEnabled) { }

	// RVA: 0x1617C24 Offset: 0x1617C24 VA: 0x1617C24
	private Tween DelayedCall(float delay, TweenCallback onComplete) { }

	// RVA: 0x1617CF8 Offset: 0x1617CF8 VA: 0x1617CF8
	public void .ctor() { }
}

// Namespace: Modules.Contexts.GamePlay.SuperCharger