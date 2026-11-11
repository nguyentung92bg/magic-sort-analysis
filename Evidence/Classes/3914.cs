public class MagicPassAnimationConfig : ScriptableObject // TypeDefIndex: 3914
{
	// Fields
	[Header("Initial Animation")]
	public float InitialMoveDelay; // 0x18
	public float InitialMoveDuration; // 0x1C
	public float InitialMoveEndDelay; // 0x20
	public float InitialStepOffset; // 0x24
	public float InitialMoveSoundDelay; // 0x28
	[Header("Horizontal Scroll Animation")]
	public float ProgressBarStepFillInitialDelay; // 0x2C
	public float ProgressBarStepFillDuration; // 0x30
	public float ProgressBarStepFillIconPuchScale; // 0x34
	public float ProgressBarStepFillIconPuchDuration; // 0x38
	public float LockHitAnimationDuration; // 0x3C
	public Ease LockHitAnimationEase; // 0x40
	public float VaultHitParticleDelay; // 0x44
	[Header("Vertical Scroll Animation")]
	public float VerticalScrollBarMoveDurationPerStep; // 0x48
	public float VerticalScrollBarSingleStepMoveDuration; // 0x4C
	public float VerticalScrollBarFillOffset; // 0x50
	public float VerticalScrollBarVaultMoveDuration; // 0x54
	public float StepSeparatorUnlockDuration; // 0x58
	public float StepSeparatorYOffset; // 0x5C
	public float StepSeparatorVaultYOffset; // 0x60
	public float StepSeparatorInitialYOffset; // 0x64
	public float StepSeparatorLockOffsetDuration; // 0x68
	public float StepSeparatorClaimButtonsScaleDuration; // 0x6C
	public float StepSeparatorClaimButtonsScaleDelay; // 0x70
	public float StepSeparatorParticleStopDelay; // 0x74
	public float StepSeparatorVaultMoveDelay; // 0x78
	public float StepIconChangeInitialDelay; // 0x7C
	public float StepIconChangeDelay; // 0x80

	// Methods

	// RVA: 0x38E1DB4 Offset: 0x38E1DB4 VA: 0x38E1DB4
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.MagicPass.Scripts.UI