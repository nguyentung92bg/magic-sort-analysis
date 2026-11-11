public class CoinTextRevealAnimationConfig : ScriptableObject // TypeDefIndex: 623
{
	// Fields
	[SerializeField]
	public float animationStartDelay; // 0x18
	[SerializeField]
	public float transformInitialScale; // 0x1C
	[SerializeField]
	public float transformAnimationDuration; // 0x20
	[SerializeField]
	public AnimationCurve transformAnimationScaleCurve; // 0x28
	[SerializeField]
	public float textAnimationStartDelay; // 0x30
	[SerializeField]
	public float textAnimationDuration; // 0x34
	[SerializeField]
	public float textScaleInsertAtOffset; // 0x38
	[SerializeField]
	public float textScaleDuration; // 0x3C
	[SerializeField]
	public float textScaleAmount; // 0x40
	[SerializeField]
	public AnimationCurve textScaleCurve; // 0x48
	[SerializeField]
	public float particleSystemInsertAtOffset; // 0x50

	// Methods

	// RVA: 0x400E214 Offset: 0x400E214 VA: 0x400E214
	public void .ctor() { }
}

// Namespace: Modules.Infrastructure.UI.Common.Scripts.RevealAnimation