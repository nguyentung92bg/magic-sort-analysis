public abstract class ADailyStuckPopUpVariant : MonoBehaviour // TypeDefIndex: 4917
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
	[SerializeField]
	private TextMeshPro[] _infoTexts; // 0x50
	protected FailFlowAnimationConfig AnimationConfig; // 0x58

	// Methods

	// RVA: 0x410672C Offset: 0x410672C VA: 0x410672C
	public void Activate(FailFlowAnimationConfig animationConfig, string infoText) { }

	// RVA: -1 Offset: -1 Slot: 4
	public abstract void PlayEnterAnimation();

	// RVA: -1 Offset: -1 Slot: 5
	public abstract void PlayGiveUpAnimation();

	// RVA: -1 Offset: -1 Slot: 6
	public abstract void PlayPlayOnAnimation();

	// RVA: 0x41067D4 Offset: 0x41067D4 VA: 0x41067D4
	protected void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Daily.Scripts.UI
[CreateAssetMenu(fileName = "DailyAnimationConfig", menuName = "Configs/DailyAnimationConfig")]