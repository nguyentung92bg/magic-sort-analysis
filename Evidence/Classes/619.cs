public class BasicRevealAnimation : RevealAnimation // TypeDefIndex: 619
{
	// Fields
	[SerializeField]
	private BasicRevealAnimationConfig _animationConfig; // 0x18
	private Tween _revealTween; // 0x20

	// Methods

	// RVA: 0x400D894 Offset: 0x400D894 VA: 0x400D894 Slot: 6
	public override float AnimationStartDelay() { }

	// RVA: 0x400D8B0 Offset: 0x400D8B0 VA: 0x400D8B0 Slot: 4
	public override Tween Reveal(float delay) { }

	// RVA: 0x400DAB4 Offset: 0x400DAB4 VA: 0x400DAB4 Slot: 5
	public override void Dispose() { }

	// RVA: 0x400DACC Offset: 0x400DACC VA: 0x400DACC
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x400DADC Offset: 0x400DADC VA: 0x400DADC
	private void <Reveal>b__3_0() { }
}

// Namespace: Modules.Infrastructure.UI.Common.Scripts.RevealAnimation
[CreateAssetMenu(fileName = "BasicRevealAnimationConfig", menuName = "Configs/BasicRevealAnimationConfig", order = 1)]