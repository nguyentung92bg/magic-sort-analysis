public abstract class AStuckPopupVariant : MonoBehaviour // TypeDefIndex: 1104
{
	// Fields
	[SerializeField]
	protected Transform _screenTopPosition; // 0x18
	[SerializeField]
	protected Transform _screenBottomPosition; // 0x20
	[SerializeField]
	protected Transform _screenLeftPosition; // 0x28
	[SerializeField]
	protected Transform _screenRightPosition; // 0x30
	[SerializeField]
	protected SpriteRenderer _background; // 0x38
	[SerializeField]
	protected SpriteRenderer _fullDarkBackground; // 0x40
	[SerializeField]
	protected Transform _coinTransform; // 0x48
	protected FailFlowAnimationConfig AnimationConfig; // 0x50
	private bool _isActivateCalled; // 0x58

	// Methods

	// RVA: 0x16F766C Offset: 0x16F766C VA: 0x16F766C
	public void Activate(FailFlowAnimationConfig animationConfig) { }

	// RVA: 0x16F76D4 Offset: 0x16F76D4 VA: 0x16F76D4 Slot: 4
	protected virtual void OnActivatedOnce() { }

	// RVA: 0x16F76D8 Offset: 0x16F76D8 VA: 0x16F76D8 Slot: 5
	public virtual void Initialize() { }

	// RVA: -1 Offset: -1 Slot: 6
	public abstract void PlayEnterAnimation();

	// RVA: -1 Offset: -1 Slot: 7
	public abstract void PlayGiveUpAnimation();

	// RVA: -1 Offset: -1 Slot: 8
	public abstract void PlayPlayOnAnimation();

	// RVA: 0x16F76DC Offset: 0x16F76DC VA: 0x16F76DC
	protected void .ctor() { }
}

// Namespace: Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts