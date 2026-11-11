public class WindQuestAnimationConfig : ScriptableObject // TypeDefIndex: 1796
{
	// Fields
	[Header("Progress Bar")]
	public float ProgressAnimationStartDelay; // 0x18
	public float ProgressBarFillDuration; // 0x1C
	public AnimationCurve ProgressBarFillEase; // 0x20
	[Header("Reward Grant")]
	public float RewardFadeTime; // 0x28
	public float RewardFadeDuration; // 0x2C
	public float CheckMarkScaleTime; // 0x30
	public float CheckMarkScaleDuration; // 0x34
	public AnimationCurve CheckMarkScaleCurve; // 0x38
	public float RewardRevealTime; // 0x40

	// Methods

	// RVA: 0x2D977D4 Offset: 0x2D977D4 VA: 0x2D977D4
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]