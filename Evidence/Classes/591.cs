public class RadioToggleAnimation : MonoBehaviour // TypeDefIndex: 591
{
	// Fields
	[SerializeField]
	private Transform _switchButton; // 0x18
	[SerializeField]
	private SpriteRenderer _greenBackground; // 0x20
	[SerializeField]
	private GameObject _onText; // 0x28
	[SerializeField]
	private Transform _onPosition; // 0x30
	[SerializeField]
	private Transform _offPosition; // 0x38
	[SerializeField]
	private Transform _nameDisablePosition; // 0x40
	[SerializeField]
	private SpriteRenderer _smallGreenBackground; // 0x48
	private Vector2 _greenBackgroundSize; // 0x50
	private Tween _switchButtonTween; // 0x58
	private Tween _greenBackgroundTween; // 0x60

	// Methods

	// RVA: 0x4005200 Offset: 0x4005200 VA: 0x4005200
	private void Awake() { }

	// RVA: 0x4004AC0 Offset: 0x4004AC0 VA: 0x4004AC0
	public void PlayOnAnimation() { }

	// RVA: 0x4004D34 Offset: 0x4004D34 VA: 0x4004D34
	public void PlayOnIdleAnimation() { }

	// RVA: 0x4004ED0 Offset: 0x4004ED0 VA: 0x4004ED0
	public void PlayOffAnimation() { }

	[Button]
	// RVA: 0x4004D98 Offset: 0x4004D98 VA: 0x4004D98
	public void PlayOffIdleAnimation() { }

	// RVA: 0x4005228 Offset: 0x4005228 VA: 0x4005228
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x4005230 Offset: 0x4005230 VA: 0x4005230
	private void <PlayOnAnimation>b__11_0() { }

	[CompilerGenerated]
	// RVA: 0x4005294 Offset: 0x4005294 VA: 0x4005294
	private Vector2 <PlayOnAnimation>b__11_1() { }

	[CompilerGenerated]
	// RVA: 0x40052B0 Offset: 0x40052B0 VA: 0x40052B0
	private void <PlayOnAnimation>b__11_2(Vector2 x) { }

	[CompilerGenerated]
	// RVA: 0x40052CC Offset: 0x40052CC VA: 0x40052CC
	private void <PlayOffAnimation>b__13_0() { }

	[CompilerGenerated]
	// RVA: 0x4005330 Offset: 0x4005330 VA: 0x4005330
	private Vector2 <PlayOffAnimation>b__13_1() { }

	[CompilerGenerated]
	// RVA: 0x400534C Offset: 0x400534C VA: 0x400534C
	private void <PlayOffAnimation>b__13_2(Vector2 x) { }
}

// Namespace: Modules.Infrastructure.UI.Common.Scripts.ToggleNS
[CreateAssetMenu(fileName = "RadioToggleAnimationConfig", menuName = "Configs/RadioToggleAnimationConfig")]