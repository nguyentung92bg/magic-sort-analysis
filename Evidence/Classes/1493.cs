public class KeyView : AItemView // TypeDefIndex: 1493
{
	// Fields
	[SerializeField]
	private SpriteRenderer _keySpriteRenderer; // 0x20
	[SerializeField]
	private KeyAnimationConfig _config; // 0x28
	[SerializeField]
	private Animator _keyAnimator; // 0x30
	[SerializeField]
	private SpriteLibrary _keySpriteLibrary; // 0x38
	[SerializeField]
	private ParticleSystem _keyRevealParticle; // 0x40
	[SerializeField]
	private ParticleSystem _keyTrailParticle; // 0x48
	private Vector3 _inLevelLocalPosition; // 0x50
	private Sequence _mainSequence; // 0x60
	private int _bottleHeight; // 0x68

	// Methods

	// RVA: 0x248F95C Offset: 0x248F95C VA: 0x248F95C Slot: 5
	public override void Initialize() { }

	// RVA: 0x248F960 Offset: 0x248F960 VA: 0x248F960 Slot: 6
	public override void Spawn() { }

	// RVA: 0x248F7C0 Offset: 0x248F7C0 VA: 0x248F7C0
	public void Prepare(int height, KeyLockType keyLockType, Sorting sorting) { }

	// RVA: 0x248FAE4 Offset: 0x248FAE4 VA: 0x248FAE4 Slot: 7
	public override void Recycle() { }

	// RVA: 0x248FAA0 Offset: 0x248FAA0 VA: 0x248FAA0
	public void SetSorting(Sorting sorting) { }

	// RVA: 0x248F9CC Offset: 0x248F9CC VA: 0x248F9CC
	private void SetType(KeyLockType keyLockType) { }

	// RVA: 0x248FB14 Offset: 0x248FB14 VA: 0x248FB14
	public void PlayUnlockAnimationQuick(Vector3 targetPosition, float delay) { }

	// RVA: 0x248FE38 Offset: 0x248FE38 VA: 0x248FE38
	private Tween RotateAnim() { }

	// RVA: 0x248FEB8 Offset: 0x248FEB8 VA: 0x248FEB8
	private Tween ScaleAnim() { }

	// RVA: 0x248FF60 Offset: 0x248FF60 VA: 0x248FF60 Slot: 9
	public override void Hide() { }

	// RVA: 0x24900F0 Offset: 0x24900F0 VA: 0x24900F0 Slot: 8
	public override void Show() { }

	// RVA: 0x2490114 Offset: 0x2490114 VA: 0x2490114
	public Sequence ShowWithAnimation() { }

	// RVA: 0x24901D4 Offset: 0x24901D4 VA: 0x24901D4
	public Sequence HideWithAnimation() { }

	// RVA: 0x24900B0 Offset: 0x24900B0 VA: 0x24900B0
	private void SetAlpha(float alpha) { }

	// RVA: 0x2490294 Offset: 0x2490294 VA: 0x2490294
	public void .ctor() { }
}

// Namespace: Modules.Contexts.GamePlay.BoardItems.Scripts.Curtain