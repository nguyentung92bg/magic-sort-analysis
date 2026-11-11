public class LockAnimationView : MonoBehaviour // TypeDefIndex: 1486
{
	// Fields
	[SerializeField]
	private Animator _animator; // 0x18
	[SerializeField]
	public SpriteLibrary spriteLibrary; // 0x20
	[SerializeField]
	private Transform _leftCapTransform; // 0x28
	[SerializeField]
	private Transform _rightCapTransform; // 0x30
	[SerializeField]
	private Transform _ropesTransform; // 0x38

	// Methods

	// RVA: 0x248E2E4 Offset: 0x248E2E4 VA: 0x248E2E4
	public void PlayUnlockAnimation() { }

	// RVA: 0x248E340 Offset: 0x248E340 VA: 0x248E340
	public void SetLocked() { }

	// RVA: 0x248E39C Offset: 0x248E39C VA: 0x248E39C
	public void ArrangeView(float localPositionX) { }

	// RVA: 0x248E4D4 Offset: 0x248E4D4 VA: 0x248E4D4
	public Sequence ArrangeViewWithAnimation(float localPositionX, float duration) { }

	// RVA: 0x248E674 Offset: 0x248E674 VA: 0x248E674
	public void .ctor() { }
}

// Namespace: Modules.Contexts.GamePlay.BoardItems.Scripts.KeyAndLock.Lock