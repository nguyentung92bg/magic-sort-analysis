public class LoadingCatAnimationManager : MonoBehaviour // TypeDefIndex: 5128
{
	// Fields
	[SerializeField]
	private Animator _catLoadingAnimator; // 0x18
	[SerializeField]
	private Animator _newCatLoadingAnimator; // 0x20
	[SerializeField]
	private SpriteRenderer _backGround; // 0x28
	[SerializeField]
	private Transform _scaleTransform; // 0x30
	private Tween _scaleTween; // 0x38
	private Tween _alphaTween; // 0x40
	private StoreModelService _storeModelService; // 0x48

	// Methods

	// RVA: 0x137BF84 Offset: 0x137BF84 VA: 0x137BF84
	private void Awake() { }

	// RVA: 0x137C164 Offset: 0x137C164 VA: 0x137C164
	private Animator ActiveCatLoadingGameObject() { }

	[Button]
	// RVA: 0x137C19C Offset: 0x137C19C VA: 0x137C19C
	private void StartAnimation() { }

	[Button]
	// RVA: 0x137C448 Offset: 0x137C448 VA: 0x137C448
	private void StopAnimation() { }

	// RVA: 0x137C4A4 Offset: 0x137C4A4 VA: 0x137C4A4
	private void OnDestroy() { }

	// RVA: 0x137C610 Offset: 0x137C610 VA: 0x137C610
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Application.Loading.Scripts