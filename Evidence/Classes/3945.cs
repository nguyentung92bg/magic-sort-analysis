public class MagicPassStepSeparatorView : MonoBehaviour // TypeDefIndex: 3945
{
	// Fields
	[SerializeField]
	private Transform _separator; // 0x18
	[SerializeField]
	private Animation _animation; // 0x20
	[SerializeField]
	private AnimationClip _lockAnimation; // 0x28
	[SerializeField]
	private AnimationClip _lockInstantAnimation; // 0x30
	[SerializeField]
	private AnimationClip _unlockAnimation; // 0x38
	[SerializeField]
	private AnimationClip _unlockInstantAnimation; // 0x40
	[SerializeField]
	private ParticleSystem _moveParticles; // 0x48

	// Methods

	// RVA: 0x38EA550 Offset: 0x38EA550 VA: 0x38EA550
	public void Lock() { }

	// RVA: 0x38E9D60 Offset: 0x38E9D60 VA: 0x38E9D60
	public void LockInstant() { }

	// RVA: 0x38EA4D0 Offset: 0x38EA4D0 VA: 0x38EA4D0
	public void Unlock() { }

	// RVA: 0x38EA37C Offset: 0x38EA37C VA: 0x38EA37C
	public void UnlockInstant() { }

	// RVA: 0x38EB08C Offset: 0x38EB08C VA: 0x38EB08C
	private void PlayAnimation(AnimationClip animationClip) { }

	// RVA: 0x38E9D20 Offset: 0x38E9D20 VA: 0x38E9D20
	public void SetYPosition(float yPosition) { }

	// RVA: 0x38EA188 Offset: 0x38EA188 VA: 0x38EA188
	public Tween MoveY(float yPosition, float duration) { }

	// RVA: 0x38EA4F0 Offset: 0x38EA4F0 VA: 0x38EA4F0
	public void PlayMoveParticles() { }

	// RVA: 0x38EA570 Offset: 0x38EA570 VA: 0x38EA570
	public void StopMoveParticles() { }

	// RVA: 0x38EB0E0 Offset: 0x38EB0E0 VA: 0x38EB0E0
	public void .ctor() { }
}

// Namespace: 