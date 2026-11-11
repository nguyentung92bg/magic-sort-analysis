public class CoinTextRevealAnimation : RevealAnimation // TypeDefIndex: 622
{
	// Fields
	[SerializeField]
	private CoinTextRevealAnimationConfig _coinTextRevealAnimationConfig; // 0x18
	[SerializeField]
	private TextMeshPro _textMeshPro; // 0x20
	[SerializeField]
	private ParticleSystem _particleSystem; // 0x28
	private int _targetAmount; // 0x30
	private Sequence _sequence; // 0x38

	// Methods

	// RVA: 0x400DB14 Offset: 0x400DB14 VA: 0x400DB14 Slot: 6
	public override float AnimationStartDelay() { }

	// RVA: 0x400DB30 Offset: 0x400DB30 VA: 0x400DB30
	public void SetTargetAmount(int amount) { }

	// RVA: 0x400DB38 Offset: 0x400DB38 VA: 0x400DB38 Slot: 4
	public override Tween Reveal(float delay) { }

	// RVA: 0x400DFD8 Offset: 0x400DFD8 VA: 0x400DFD8 Slot: 5
	public override void Dispose() { }

	// RVA: 0x400DFF0 Offset: 0x400DFF0 VA: 0x400DFF0
	private void UpdateText(int value) { }

	// RVA: 0x400E0BC Offset: 0x400E0BC VA: 0x400E0BC
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x400E0C4 Offset: 0x400E0C4 VA: 0x400E0C4
	private void <Reveal>b__7_0() { }

	[CompilerGenerated]
	// RVA: 0x400E0F4 Offset: 0x400E0F4 VA: 0x400E0F4
	private void <Reveal>b__7_1() { }
}

// Namespace: Modules.Infrastructure.UI.Common.Scripts.RevealAnimation
[CreateAssetMenu(fileName = "CoinTextRevealAnimationConfig", menuName = "Configs/CoinTextRevealAnimationConfig", order = 1)]