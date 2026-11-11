public class SkyJumpAnimationConfig : ScriptableObject // TypeDefIndex: 2777
{
	// Fields
	[CompilerGenerated]
	[SerializeField]
	private int <MostFrontUserSortOrder>k__BackingField; // 0x18
	[CompilerGenerated]
	[SerializeField]
	private int <FallingUserSortOrderIncreaseAmount>k__BackingField; // 0x1C
	[CompilerGenerated]
	[SerializeField]
	private List<Vector3> <AnchorOffsets>k__BackingField; // 0x20
	[SerializeField]
	[CompilerGenerated]
	[Header("Jump")]
	private float <JumpPower>k__BackingField; // 0x28
	[CompilerGenerated]
	[SerializeField]
	private float <JumpDuration>k__BackingField; // 0x2C
	[CompilerGenerated]
	[SerializeField]
	private int <JumpCount>k__BackingField; // 0x30
	[SerializeField]
	[CompilerGenerated]
	[Header("ShrinkStart")]
	private float <ShrinkScaleDuration>k__BackingField; // 0x34
	[CompilerGenerated]
	[SerializeField]
	private Vector3 <ShrinkStartScale>k__BackingField; // 0x38
	[CompilerGenerated]
	[SerializeField]
	private AnimationCurve <ShrinkScaleEase>k__BackingField; // 0x48
	[CompilerGenerated]
	[Header("Delays")]
	[SerializeField]
	private float <DelayAfterMyJump>k__BackingField; // 0x50
	[CompilerGenerated]
	[SerializeField]
	private float <DelayAfterMyJumpFall>k__BackingField; // 0x54
	[SerializeField]
	[CompilerGenerated]
	private float <ConsecutiveDelay>k__BackingField; // 0x58
	[CompilerGenerated]
	[SerializeField]
	private float <ConsecutiveDelayForLosers>k__BackingField; // 0x5C
	[CompilerGenerated]
	[SerializeField]
	private float <DelayForLoserAnimation>k__BackingField; // 0x60
	[SerializeField]
	[CompilerGenerated]
	private float <StartDelay>k__BackingField; // 0x64
	[SerializeField]
	[CompilerGenerated]
	private float <StepFallDelay>k__BackingField; // 0x68
	[SerializeField]
	[CompilerGenerated]
	private float <UserCountTextAnimDelay>k__BackingField; // 0x6C
	[CompilerGenerated]
	[SerializeField]
	private float <FirstShowTooltipsConsecutiveDelay>k__BackingField; // 0x70
	[SerializeField]
	[CompilerGenerated]
	[Header("MidAirRotation")]
	private float <MidAirRotationDuration>k__BackingField; // 0x74
	[CompilerGenerated]
	[SerializeField]
	private AnimationCurve <MidAirRotationEase>k__BackingField; // 0x78
	[CompilerGenerated]
	[Header("RollSpin")]
	[SerializeField]
	private float <RollSpinDuration>k__BackingField; // 0x80
	[CompilerGenerated]
	[SerializeField]
	private AnimationCurve <RollSpinCurve>k__BackingField; // 0x88
	[CompilerGenerated]
	[Header("Bounces")]
	[SerializeField]
	private float <FirstBounceDuration>k__BackingField; // 0x90
	[SerializeField]
	[CompilerGenerated]
	private AnimationCurve <FirstBounceRotationEase>k__BackingField; // 0x98
	[SerializeField]
	[CompilerGenerated]
	private float <SecondBounceDuration>k__BackingField; // 0xA0
	[CompilerGenerated]
	[SerializeField]
	private AnimationCurve <SecondBounceRotationEase>k__BackingField; // 0xA8
	[CompilerGenerated]
	[SerializeField]
	[Header("MidAirScale")]
	private float <MidAirScaleDuration>k__BackingField; // 0xB0
	[CompilerGenerated]
	[SerializeField]
	private AnimationCurve <XScaleCurve>k__BackingField; // 0xB8
	[SerializeField]
	[CompilerGenerated]
	private AnimationCurve <YScaleCurve>k__BackingField; // 0xC0
	[CompilerGenerated]
	[SerializeField]
	[Header("Step Animation")]
	private float <StepLoopedMoveSpeed>k__BackingField; // 0xC8
	[SerializeField]
	[CompilerGenerated]
	private float <StepMoveOffset>k__BackingField; // 0xCC
	[CompilerGenerated]
	[SerializeField]
	private float <StepApplyForceDuration>k__BackingField; // 0xD0
	[SerializeField]
	[CompilerGenerated]
	private float <StepApplyForceAmountJump>k__BackingField; // 0xD4
	[CompilerGenerated]
	[SerializeField]
	private float <StepApplyForceAmountSit>k__BackingField; // 0xD8
	[CompilerGenerated]
	[SerializeField]
	private float <StepDecreaseCumulativeForceAmount>k__BackingField; // 0xDC
	[CompilerGenerated]
	[SerializeField]
	private float <StepForceCap>k__BackingField; // 0xE0
	[SerializeField]
	[CompilerGenerated]
	private float <ForceRecoverySpeed>k__BackingField; // 0xE4
	[SerializeField]
	[CompilerGenerated]
	private float <StepFallDuration>k__BackingField; // 0xE8
	[CompilerGenerated]
	[SerializeField]
	private AnimationCurve <StepFallCurve>k__BackingField; // 0xF0
	[CompilerGenerated]
	[SerializeField]
	private float <StepFallHidePosition>k__BackingField; // 0xF8
	[SerializeField]
	[Header("StepFallRotation")]
	[CompilerGenerated]
	private Vector2 <StepFallRotationMinMax>k__BackingField; // 0xFC
	[CompilerGenerated]
	[SerializeField]
	private AnimationCurve <StepFallRotationCurve>k__BackingField; // 0x108
	[CompilerGenerated]
	[SerializeField]
	private float <StepFallRotationDuration>k__BackingField; // 0x110
	[SerializeField]
	[CompilerGenerated]
	[Header("StepPillowSquish")]
	private float <StepMaxPillowForce>k__BackingField; // 0x114
	[SerializeField]
	[CompilerGenerated]
	private Vector3 <StepPillowSquishedLocalPosition>k__BackingField; // 0x118
	[CompilerGenerated]
	[SerializeField]
	private Vector3 <StepPillowSquishedScale>k__BackingField; // 0x124
	[SerializeField]
	[CompilerGenerated]
	private float <StepPillowForceRecoverySpeed>k__BackingField; // 0x130
	[SerializeField]
	[CompilerGenerated]
	private float <StepPillowApplyForceAmount>k__BackingField; // 0x134
	[CompilerGenerated]
	[SerializeField]
	private float <StepPositionSmoothTime>k__BackingField; // 0x138
	[CompilerGenerated]
	[SerializeField]
	private float <StepScaleSmoothTime>k__BackingField; // 0x13C
	[CompilerGenerated]
	[Header("SitRelocate")]
	[SerializeField]
	private float <RelocateDuration>k__BackingField; // 0x140
	[CompilerGenerated]
	[SerializeField]
	private AnimationCurve <RelocateCurve>k__BackingField; // 0x148
	[CompilerGenerated]
	[Header("JumpFall")]
	[SerializeField]
	private float <JumpFallDuration>k__BackingField; // 0x150
	[CompilerGenerated]
	[SerializeField]
	private float <MinJumpFallPower>k__BackingField; // 0x154
	[CompilerGenerated]
	[SerializeField]
	private float <MaxJumpFallPower>k__BackingField; // 0x158
	[SerializeField]
	[CompilerGenerated]
	private float <MinJumpYDifference>k__BackingField; // 0x15C
	[CompilerGenerated]
	[SerializeField]
	private float <MaxJumpYDifference>k__BackingField; // 0x160
	[CompilerGenerated]
	[SerializeField]
	private Vector2 <RandomJumpFallOffsetX>k__BackingField; // 0x164
	[SerializeField]
	[CompilerGenerated]
	private float <JumpFallYPositionOffset>k__BackingField; // 0x16C
	[SerializeField]
	[CompilerGenerated]
	private Vector2 <JumpFallYPositionMinMaxOffset>k__BackingField; // 0x170
	[CompilerGenerated]
	[Header("FallScaleSampled")]
	[SerializeField]
	private float <FallScaleDuration>k__BackingField; // 0x178
	[CompilerGenerated]
	[SerializeField]
	private AnimationCurve <FallScaleCurveX>k__BackingField; // 0x180
	[SerializeField]
	[CompilerGenerated]
	private AnimationCurve <FallScaleCurveY>k__BackingField; // 0x188
	[CompilerGenerated]
	[Header("UserFadeOut")]
	[SerializeField]
	private float <UserFadeOutDuration>k__BackingField; // 0x190
	[CompilerGenerated]
	[SerializeField]
	private AnimationCurve <UserFadeOutCurve>k__BackingField; // 0x198
	[CompilerGenerated]
	[SerializeField]
	private float <UserFadeOutDelay>k__BackingField; // 0x1A0
	[SerializeField]
	[Header("SearchAnim")]
	[CompilerGenerated]
	private AnimationCurve <SearchUserViewAnimationStartCurve>k__BackingField; // 0x1A8
	[SerializeField]
	[CompilerGenerated]
	private float <SearchUserViewAnimationStartDelay>k__BackingField; // 0x1B0
	[CompilerGenerated]
	[SerializeField]
	private float <SearchUserViewAnimationInitialScale>k__BackingField; // 0x1B4
	[CompilerGenerated]
	[SerializeField]
	private float <SearchUserViewScaleAnimationDuration>k__BackingField; // 0x1B8
	[CompilerGenerated]
	[SerializeField]
	private Vector3 <SearchUserViewAnimationInitialPositionOffset>k__BackingField; // 0x1BC
	[CompilerGenerated]
	[SerializeField]
	private AnimationCurve <SearchUserViewAnimationScaleCurve>k__BackingField; // 0x1C8
	[SerializeField]
	[CompilerGenerated]
	private float <SearchUserViewPositionAnimationDuration>k__BackingField; // 0x1D0
	[SerializeField]
	[CompilerGenerated]
	private AnimationCurve <SearchUserViewAnimationPositionCurve>k__BackingField; // 0x1D8
	[CompilerGenerated]
	[SerializeField]
	private float <SearchTextDuration>k__BackingField; // 0x1E0
	[CompilerGenerated]
	[SerializeField]
	private float <SearchTextScale>k__BackingField; // 0x1E4
	[SerializeField]
	[CompilerGenerated]
	private AnimationCurve <SearchTextAnimationCurve>k__BackingField; // 0x1E8
	[SerializeField]
	[Header("User Count Anim")]
	[CompilerGenerated]
	private Vector3 <UserCountScaleInTarget>k__BackingField; // 0x1F0
	[SerializeField]
	[CompilerGenerated]
	private float <UserCountScaleInDuration>k__BackingField; // 0x1FC
	[SerializeField]
	[CompilerGenerated]
	private AnimationCurve <UserCountScaleInCurve>k__BackingField; // 0x200
	[CompilerGenerated]
	[SerializeField]
	private float <UserCountScaleOutDuration>k__BackingField; // 0x208
	[SerializeField]
	[CompilerGenerated]
	private AnimationCurve <UserCountScaleOutCurve>k__BackingField; // 0x210
	[CompilerGenerated]
	[SerializeField]
	private AnimationCurve <UserCountTextChangeCurve>k__BackingField; // 0x218
	[CompilerGenerated]
	[SerializeField]
	private float <UserCountTextChangeDuration>k__BackingField; // 0x220
	[SerializeField]
	[CompilerGenerated]
	private float <UserCountTextHitParticleTime>k__BackingField; // 0x224
	[CompilerGenerated]
	[SerializeField]
	private float <StepCountTextHitParticleTime>k__BackingField; // 0x228
	[CompilerGenerated]
	[SerializeField]
	private Vector3 <UserStartScale>k__BackingField; // 0x22C
	[SerializeField]
	[CompilerGenerated]
	private float <JumpXPosCutIntervalLength>k__BackingField; // 0x238
	[SerializeField]
	[CompilerGenerated]
	private List<UserJumpValues> <UserJumpValues>k__BackingField; // 0x240
	[Header("Sfx")]
	[CompilerGenerated]
	[SerializeField]
	private float <JumpSfxDelay>k__BackingField; // 0x248
	[CompilerGenerated]
	[SerializeField]
	private float <FallSfxDelay>k__BackingField; // 0x24C

	// Properties
	public int MostFrontUserSortOrder { get; set; }
	public int FallingUserSortOrderIncreaseAmount { get; set; }
	public List<Vector3> AnchorOffsets { get; set; }
	public float JumpPower { get; set; }
	public float JumpDuration { get; set; }
	public int JumpCount { get; set; }
	public float ShrinkScaleDuration { get; set; }
	public Vector3 ShrinkStartScale { get; set; }
	public AnimationCurve ShrinkScaleEase { get; set; }
	public float DelayAfterMyJump { get; set; }
	public float DelayAfterMyJumpFall { get; set; }
	public float ConsecutiveDelay { get; set; }
	public float ConsecutiveDelayForLosers { get; set; }
	public float DelayForLoserAnimation { get; set; }
	public float StartDelay { get; set; }
	public float StepFallDelay { get; set; }
	public float UserCountTextAnimDelay { get; set; }
	public float FirstShowTooltipsConsecutiveDelay { get; set; }
	public float MidAirRotationDuration { get; set; }
	public AnimationCurve MidAirRotationEase { get; set; }
	public float RollSpinDuration { get; set; }
	public AnimationCurve RollSpinCurve { get; set; }
	public float FirstBounceDuration { get; set; }
	public AnimationCurve FirstBounceRotationEase { get; set; }
	public float SecondBounceDuration { get; set; }
	public AnimationCurve SecondBounceRotationEase { get; set; }
	public float MidAirScaleDuration { get; set; }
	public AnimationCurve XScaleCurve { get; set; }
	public AnimationCurve YScaleCurve { get; set; }
	public float StepLoopedMoveSpeed { get; set; }
	public float StepMoveOffset { get; set; }
	public float StepApplyForceDuration { get; set; }
	public float StepApplyForceAmountJump { get; set; }
	public float StepApplyForceAmountSit { get; set; }
	public float StepDecreaseCumulativeForceAmount { get; set; }
	public float StepForceCap { get; set; }
	public float ForceRecoverySpeed { get; set; }
	public float StepFallDuration { get; set; }
	public AnimationCurve StepFallCurve { get; set; }
	public float StepFallHidePosition { get; set; }
	public Vector2 StepFallRotationMinMax { get; set; }
	public AnimationCurve StepFallRotationCurve { get; set; }
	public float StepFallRotationDuration { get; set; }
	public float StepMaxPillowForce { get; set; }
	public Vector3 StepPillowSquishedLocalPosition { get; set; }
	public Vector3 StepPillowSquishedScale { get; set; }
	public float StepPillowForceRecoverySpeed { get; set; }
	public float StepPillowApplyForceAmount { get; set; }
	public float StepPositionSmoothTime { get; set; }
	public float StepScaleSmoothTime { get; set; }
	public float RelocateDuration { get; set; }
	public AnimationCurve RelocateCurve { get; set; }
	public float JumpFallDuration { get; set; }
	public float MinJumpFallPower { get; set; }
	public float MaxJumpFallPower { get; set; }
	public float MinJumpYDifference { get; set; }
	public float MaxJumpYDifference { get; set; }
	public Vector2 RandomJumpFallOffsetX { get; set; }
	public float JumpFallYPositionOffset { get; set; }
	public Vector2 JumpFallYPositionMinMaxOffset { get; set; }
	public float FallScaleDuration { get; set; }
	public AnimationCurve FallScaleCurveX { get; set; }
	public AnimationCurve FallScaleCurveY { get; set; }
	public float UserFadeOutDuration { get; set; }
	public AnimationCurve UserFadeOutCurve { get; set; }
	public float UserFadeOutDelay { get; set; }
	public AnimationCurve SearchUserViewAnimationStartCurve { get; set; }
	public float SearchUserViewAnimationStartDelay { get; set; }
	public float SearchUserViewAnimationInitialScale { get; set; }
	public float SearchUserViewScaleAnimationDuration { get; set; }
	public Vector3 SearchUserViewAnimationInitialPositionOffset { get; set; }
	public AnimationCurve SearchUserViewAnimationScaleCurve { get; set; }
	public float SearchUserViewPositionAnimationDuration { get; set; }
	public AnimationCurve SearchUserViewAnimationPositionCurve { get; set; }
	public float SearchTextDuration { get; set; }
	public float SearchTextScale { get; set; }
	public AnimationCurve SearchTextAnimationCurve { get; set; }
	public Vector3 UserCountScaleInTarget { get; set; }
	public float UserCountScaleInDuration { get; set; }
	public AnimationCurve UserCountScaleInCurve { get; set; }
	public float UserCountScaleOutDuration { get; set; }
	public AnimationCurve UserCountScaleOutCurve { get; set; }
	public AnimationCurve UserCountTextChangeCurve { get; set; }
	public float UserCountTextChangeDuration { get; set; }
	public float UserCountTextHitParticleTime { get; set; }
	public float StepCountTextHitParticleTime { get; set; }
	public Vector3 UserStartScale { get; set; }
	public float JumpXPosCutIntervalLength { get; set; }
	public List<UserJumpValues> UserJumpValues { get; set; }
	public float JumpSfxDelay { get; set; }
	public float FallSfxDelay { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x2F1D6C8 Offset: 0x2F1D6C8 VA: 0x2F1D6C8
	public int get_MostFrontUserSortOrder() { }

	[CompilerGenerated]
	// RVA: 0x2F1D6D0 Offset: 0x2F1D6D0 VA: 0x2F1D6D0
	private void set_MostFrontUserSortOrder(int value) { }

	[CompilerGenerated]
	// RVA: 0x2F1D6D8 Offset: 0x2F1D6D8 VA: 0x2F1D6D8
	public int get_FallingUserSortOrderIncreaseAmount() { }

	[CompilerGenerated]
	// RVA: 0x2F1D6E0 Offset: 0x2F1D6E0 VA: 0x2F1D6E0
	private void set_FallingUserSortOrderIncreaseAmount(int value) { }

	[CompilerGenerated]
	// RVA: 0x2F1D6E8 Offset: 0x2F1D6E8 VA: 0x2F1D6E8
	public List<Vector3> get_AnchorOffsets() { }

	[CompilerGenerated]
	// RVA: 0x2F1D6F0 Offset: 0x2F1D6F0 VA: 0x2F1D6F0
	private void set_AnchorOffsets(List<Vector3> value) { }

	[CompilerGenerated]
	// RVA: 0x2F1D6F8 Offset: 0x2F1D6F8 VA: 0x2F1D6F8
	public float get_JumpPower() { }

	[CompilerGenerated]
	// RVA: 0x2F1D700 Offset: 0x2F1D700 VA: 0x2F1D700
	private void set_JumpPower(float value) { }

	[CompilerGenerated]
	// RVA: 0x2F1D708 Offset: 0x2F1D708 VA: 0x2F1D708
	public float get_JumpDuration() { }

	[CompilerGenerated]
	// RVA: 0x2F1D710 Offset: 0x2F1D710 VA: 0x2F1D710
	private void set_JumpDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x2F1D718 Offset: 0x2F1D718 VA: 0x2F1D718
	public int get_JumpCount() { }

	[CompilerGenerated]
	// RVA: 0x2F1D720 Offset: 0x2F1D720 VA: 0x2F1D720
	private void set_JumpCount(int value) { }

	[CompilerGenerated]
	// RVA: 0x2F1D728 Offset: 0x2F1D728 VA: 0x2F1D728
	public float get_ShrinkScaleDuration() { }

	[CompilerGenerated]
	// RVA: 0x2F1D730 Offset: 0x2F1D730 VA: 0x2F1D730
	private void set_ShrinkScaleDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x2F1D738 Offset: 0x2F1D738 VA: 0x2F1D738
	public Vector3 get_ShrinkStartScale() { }

	[CompilerGenerated]
	// RVA: 0x2F1D744 Offset: 0x2F1D744 VA: 0x2F1D744
	private void set_ShrinkStartScale(Vector3 value) { }

	[CompilerGenerated]
	// RVA: 0x2F1D750 Offset: 0x2F1D750 VA: 0x2F1D750
	public AnimationCurve get_ShrinkScaleEase() { }

	[CompilerGenerated]
	// RVA: 0x2F1D758 Offset: 0x2F1D758 VA: 0x2F1D758
	private void set_ShrinkScaleEase(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x2F1D760 Offset: 0x2F1D760 VA: 0x2F1D760
	public float get_DelayAfterMyJump() { }

	[CompilerGenerated]
	// RVA: 0x2F1D768 Offset: 0x2F1D768 VA: 0x2F1D768
	private void set_DelayAfterMyJump(float value) { }

	[CompilerGenerated]
	// RVA: 0x2F1D770 Offset: 0x2F1D770 VA: 0x2F1D770
	public float get_DelayAfterMyJumpFall() { }

	[CompilerGenerated]
	// RVA: 0x2F1D778 Offset: 0x2F1D778 VA: 0x2F1D778
	private void set_DelayAfterMyJumpFall(float value) { }

	[CompilerGenerated]
	// RVA: 0x2F1D780 Offset: 0x2F1D780 VA: 0x2F1D780
	public float get_ConsecutiveDelay() { }

	[CompilerGenerated]
	// RVA: 0x2F1D788 Offset: 0x2F1D788 VA: 0x2F1D788
	private void set_ConsecutiveDelay(float value) { }

	[CompilerGenerated]
	// RVA: 0x2F1D790 Offset: 0x2F1D790 VA: 0x2F1D790
	public float get_ConsecutiveDelayForLosers() { }

	[CompilerGenerated]
	// RVA: 0x2F1D798 Offset: 0x2F1D798 VA: 0x2F1D798
	private void set_ConsecutiveDelayForLosers(float value) { }

	[CompilerGenerated]
	// RVA: 0x2F1D7A0 Offset: 0x2F1D7A0 VA: 0x2F1D7A0
	public float get_DelayForLoserAnimation() { }

	[CompilerGenerated]
	// RVA: 0x2F1D7A8 Offset: 0x2F1D7A8 VA: 0x2F1D7A8
	private void set_DelayForLoserAnimation(float value) { }

	[CompilerGenerated]
	// RVA: 0x2F1D7B0 Offset: 0x2F1D7B0 VA: 0x2F1D7B0
	public float get_StartDelay() { }

	[CompilerGenerated]
	// RVA: 0x2F1D7B8 Offset: 0x2F1D7B8 VA: 0x2F1D7B8
	private void set_StartDelay(float value) { }

	[CompilerGenerated]
	// RVA: 0x2F1D7C0 Offset: 0x2F1D7C0 VA: 0x2F1D7C0
	public float get_StepFallDelay() { }

	[CompilerGenerated]
	// RVA: 0x2F1D7C8 Offset: 0x2F1D7C8 VA: 0x2F1D7C8
	private void set_StepFallDelay(float value) { }

	[CompilerGenerated]
	// RVA: 0x2F1D7D0 Offset: 0x2F1D7D0 VA: 0x2F1D7D0
	public float get_UserCountTextAnimDelay() { }

	[CompilerGenerated]
	// RVA: 0x2F1D7D8 Offset: 0x2F1D7D8 VA: 0x2F1D7D8
	private void set_UserCountTextAnimDelay(float value) { }

	[CompilerGenerated]
	// RVA: 0x2F1D7E0 Offset: 0x2F1D7E0 VA: 0x2F1D7E0
	public float get_FirstShowTooltipsConsecutiveDelay() { }

	[CompilerGenerated]
	// RVA: 0x2F1D7E8 Offset: 0x2F1D7E8 VA: 0x2F1D7E8
	private void set_FirstShowTooltipsConsecutiveDelay(float value) { }

	[CompilerGenerated]
	// RVA: 0x2F1D7F0 Offset: 0x2F1D7F0 VA: 0x2F1D7F0
	public float get_MidAirRotationDuration() { }

	[CompilerGenerated]
	// RVA: 0x2F1D7F8 Offset: 0x2F1D7F8 VA: 0x2F1D7F8
	private void set_MidAirRotationDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x2F1D800 Offset: 0x2F1D800 VA: 0x2F1D800
	public AnimationCurve get_MidAirRotationEase() { }

	[CompilerGenerated]
	// RVA: 0x2F1D808 Offset: 0x2F1D808 VA: 0x2F1D808
	private void set_MidAirRotationEase(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x2F1D810 Offset: 0x2F1D810 VA: 0x2F1D810
	public float get_RollSpinDuration() { }

	[CompilerGenerated]
	// RVA: 0x2F1D818 Offset: 0x2F1D818 VA: 0x2F1D818
	private void set_RollSpinDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x2F1D820 Offset: 0x2F1D820 VA: 0x2F1D820
	public AnimationCurve get_RollSpinCurve() { }

	[CompilerGenerated]
	// RVA: 0x2F1D828 Offset: 0x2F1D828 VA: 0x2F1D828
	private void set_RollSpinCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x2F1D830 Offset: 0x2F1D830 VA: 0x2F1D830
	public float get_FirstBounceDuration() { }

	[CompilerGenerated]
	// RVA: 0x2F1D838 Offset: 0x2F1D838 VA: 0x2F1D838
	private void set_FirstBounceDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x2F1D840 Offset: 0x2F1D840 VA: 0x2F1D840
	public AnimationCurve get_FirstBounceRotationEase() { }

	[CompilerGenerated]
	// RVA: 0x2F1D848 Offset: 0x2F1D848 VA: 0x2F1D848
	private void set_FirstBounceRotationEase(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x2F1D850 Offset: 0x2F1D850 VA: 0x2F1D850
	public float get_SecondBounceDuration() { }

	[CompilerGenerated]
	// RVA: 0x2F1D858 Offset: 0x2F1D858 VA: 0x2F1D858
	private void set_SecondBounceDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x2F1D860 Offset: 0x2F1D860 VA: 0x2F1D860
	public AnimationCurve get_SecondBounceRotationEase() { }

	[CompilerGenerated]
	// RVA: 0x2F1D868 Offset: 0x2F1D868 VA: 0x2F1D868
	private void set_SecondBounceRotationEase(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x2F1D870 Offset: 0x2F1D870 VA: 0x2F1D870
	public float get_MidAirScaleDuration() { }

	[CompilerGenerated]
	// RVA: 0x2F1D878 Offset: 0x2F1D878 VA: 0x2F1D878
	private void set_MidAirScaleDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x2F1D880 Offset: 0x2F1D880 VA: 0x2F1D880
	public AnimationCurve get_XScaleCurve() { }

	[CompilerGenerated]
	// RVA: 0x2F1D888 Offset: 0x2F1D888 VA: 0x2F1D888
	private void set_XScaleCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x2F1D890 Offset: 0x2F1D890 VA: 0x2F1D890
	public AnimationCurve get_YScaleCurve() { }

	[CompilerGenerated]
	// RVA: 0x2F1D898 Offset: 0x2F1D898 VA: 0x2F1D898
	private void set_YScaleCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x2F1D8A0 Offset: 0x2F1D8A0 VA: 0x2F1D8A0
	public float get_StepLoopedMoveSpeed() { }

	[CompilerGenerated]
	// RVA: 0x2F1D8A8 Offset: 0x2F1D8A8 VA: 0x2F1D8A8
	private void set_StepLoopedMoveSpeed(float value) { }

	[CompilerGenerated]
	// RVA: 0x2F1D8B0 Offset: 0x2F1D8B0 VA: 0x2F1D8B0
	public float get_StepMoveOffset() { }

	[CompilerGenerated]
	// RVA: 0x2F1D8B8 Offset: 0x2F1D8B8 VA: 0x2F1D8B8
	private void set_StepMoveOffset(float value) { }

	[CompilerGenerated]
	// RVA: 0x2F1D8C0 Offset: 0x2F1D8C0 VA: 0x2F1D8C0
	public float get_StepApplyForceDuration() { }

	[CompilerGenerated]
	// RVA: 0x2F1D8C8 Offset: 0x2F1D8C8 VA: 0x2F1D8C8
	private void set_StepApplyForceDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x2F1D8D0 Offset: 0x2F1D8D0 VA: 0x2F1D8D0
	public float get_StepApplyForceAmountJump() { }

	[CompilerGenerated]
	// RVA: 0x2F1D8D8 Offset: 0x2F1D8D8 VA: 0x2F1D8D8
	private void set_StepApplyForceAmountJump(float value) { }

	[CompilerGenerated]
	// RVA: 0x2F1D8E0 Offset: 0x2F1D8E0 VA: 0x2F1D8E0
	public float get_StepApplyForceAmountSit() { }

	[CompilerGenerated]
	// RVA: 0x2F1D8E8 Offset: 0x2F1D8E8 VA: 0x2F1D8E8
	private void set_StepApplyForceAmountSit(float value) { }

	[CompilerGenerated]
	// RVA: 0x2F1D8F0 Offset: 0x2F1D8F0 VA: 0x2F1D8F0
	public float get_StepDecreaseCumulativeForceAmount() { }

	[CompilerGenerated]
	// RVA: 0x2F1D8F8 Offset: 0x2F1D8F8 VA: 0x2F1D8F8
	private void set_StepDecreaseCumulativeForceAmount(float value) { }

	[CompilerGenerated]
	// RVA: 0x2F1D900 Offset: 0x2F1D900 VA: 0x2F1D900
	public float get_StepForceCap() { }

	[CompilerGenerated]
	// RVA: 0x2F1D908 Offset: 0x2F1D908 VA: 0x2F1D908
	private void set_StepForceCap(float value) { }

	[CompilerGenerated]
	// RVA: 0x2F1D910 Offset: 0x2F1D910 VA: 0x2F1D910
	public float get_ForceRecoverySpeed() { }

	[CompilerGenerated]
	// RVA: 0x2F1D918 Offset: 0x2F1D918 VA: 0x2F1D918
	private void set_ForceRecoverySpeed(float value) { }

	[CompilerGenerated]
	// RVA: 0x2F1D920 Offset: 0x2F1D920 VA: 0x2F1D920
	public float get_StepFallDuration() { }

	[CompilerGenerated]
	// RVA: 0x2F1D928 Offset: 0x2F1D928 VA: 0x2F1D928
	private void set_StepFallDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x2F1D930 Offset: 0x2F1D930 VA: 0x2F1D930
	public AnimationCurve get_StepFallCurve() { }

	[CompilerGenerated]
	// RVA: 0x2F1D938 Offset: 0x2F1D938 VA: 0x2F1D938
	private void set_StepFallCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x2F1D940 Offset: 0x2F1D940 VA: 0x2F1D940
	public float get_StepFallHidePosition() { }

	[CompilerGenerated]
	// RVA: 0x2F1D948 Offset: 0x2F1D948 VA: 0x2F1D948
	private void set_StepFallHidePosition(float value) { }

	[CompilerGenerated]
	// RVA: 0x2F1D950 Offset: 0x2F1D950 VA: 0x2F1D950
	public Vector2 get_StepFallRotationMinMax() { }

	[CompilerGenerated]
	// RVA: 0x2F1D958 Offset: 0x2F1D958 VA: 0x2F1D958
	private void set_StepFallRotationMinMax(Vector2 value) { }

	[CompilerGenerated]
	// RVA: 0x2F1D960 Offset: 0x2F1D960 VA: 0x2F1D960
	public AnimationCurve get_StepFallRotationCurve() { }

	[CompilerGenerated]
	// RVA: 0x2F1D968 Offset: 0x2F1D968 VA: 0x2F1D968
	private void set_StepFallRotationCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x2F1D978 Offset: 0x2F1D978 VA: 0x2F1D978
	public float get_StepFallRotationDuration() { }

	[CompilerGenerated]
	// RVA: 0x2F1D980 Offset: 0x2F1D980 VA: 0x2F1D980
	private void set_StepFallRotationDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x2F1D988 Offset: 0x2F1D988 VA: 0x2F1D988
	public float get_StepMaxPillowForce() { }

	[CompilerGenerated]
	// RVA: 0x2F1D990 Offset: 0x2F1D990 VA: 0x2F1D990
	private void set_StepMaxPillowForce(float value) { }

	[CompilerGenerated]
	// RVA: 0x2F1D998 Offset: 0x2F1D998 VA: 0x2F1D998
	public Vector3 get_StepPillowSquishedLocalPosition() { }

	[CompilerGenerated]
	// RVA: 0x2F1D9A8 Offset: 0x2F1D9A8 VA: 0x2F1D9A8
	private void set_StepPillowSquishedLocalPosition(Vector3 value) { }

	[CompilerGenerated]
	// RVA: 0x2F1D9B8 Offset: 0x2F1D9B8 VA: 0x2F1D9B8
	public Vector3 get_StepPillowSquishedScale() { }

	[CompilerGenerated]
	// RVA: 0x2F1D9C8 Offset: 0x2F1D9C8 VA: 0x2F1D9C8
	private void set_StepPillowSquishedScale(Vector3 value) { }

	[CompilerGenerated]
	// RVA: 0x2F1D9D8 Offset: 0x2F1D9D8 VA: 0x2F1D9D8
	public float get_StepPillowForceRecoverySpeed() { }

	[CompilerGenerated]
	// RVA: 0x2F1D9E0 Offset: 0x2F1D9E0 VA: 0x2F1D9E0
	private void set_StepPillowForceRecoverySpeed(float value) { }

	[CompilerGenerated]
	// RVA: 0x2F1D9E8 Offset: 0x2F1D9E8 VA: 0x2F1D9E8
	public float get_StepPillowApplyForceAmount() { }

	[CompilerGenerated]
	// RVA: 0x2F1D9F0 Offset: 0x2F1D9F0 VA: 0x2F1D9F0
	private void set_StepPillowApplyForceAmount(float value) { }

	[CompilerGenerated]
	// RVA: 0x2F1D9F8 Offset: 0x2F1D9F8 VA: 0x2F1D9F8
	public float get_StepPositionSmoothTime() { }

	[CompilerGenerated]
	// RVA: 0x2F1DA00 Offset: 0x2F1DA00 VA: 0x2F1DA00
	private void set_StepPositionSmoothTime(float value) { }

	[CompilerGenerated]
	// RVA: 0x2F1DA08 Offset: 0x2F1DA08 VA: 0x2F1DA08
	public float get_StepScaleSmoothTime() { }

	[CompilerGenerated]
	// RVA: 0x2F1DA10 Offset: 0x2F1DA10 VA: 0x2F1DA10
	private void set_StepScaleSmoothTime(float value) { }

	[CompilerGenerated]
	// RVA: 0x2F1DA18 Offset: 0x2F1DA18 VA: 0x2F1DA18
	public float get_RelocateDuration() { }

	[CompilerGenerated]
	// RVA: 0x2F1DA20 Offset: 0x2F1DA20 VA: 0x2F1DA20
	private void set_RelocateDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x2F1DA28 Offset: 0x2F1DA28 VA: 0x2F1DA28
	public AnimationCurve get_RelocateCurve() { }

	[CompilerGenerated]
	// RVA: 0x2F1DA30 Offset: 0x2F1DA30 VA: 0x2F1DA30
	private void set_RelocateCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x2F1DA40 Offset: 0x2F1DA40 VA: 0x2F1DA40
	public float get_JumpFallDuration() { }

	[CompilerGenerated]
	// RVA: 0x2F1DA48 Offset: 0x2F1DA48 VA: 0x2F1DA48
	private void set_JumpFallDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x2F1DA50 Offset: 0x2F1DA50 VA: 0x2F1DA50
	public float get_MinJumpFallPower() { }

	[CompilerGenerated]
	// RVA: 0x2F1DA58 Offset: 0x2F1DA58 VA: 0x2F1DA58
	private void set_MinJumpFallPower(float value) { }

	[CompilerGenerated]
	// RVA: 0x2F1DA60 Offset: 0x2F1DA60 VA: 0x2F1DA60
	public float get_MaxJumpFallPower() { }

	[CompilerGenerated]
	// RVA: 0x2F1DA68 Offset: 0x2F1DA68 VA: 0x2F1DA68
	private void set_MaxJumpFallPower(float value) { }

	[CompilerGenerated]
	// RVA: 0x2F1DA70 Offset: 0x2F1DA70 VA: 0x2F1DA70
	public float get_MinJumpYDifference() { }

	[CompilerGenerated]
	// RVA: 0x2F1DA78 Offset: 0x2F1DA78 VA: 0x2F1DA78
	private void set_MinJumpYDifference(float value) { }

	[CompilerGenerated]
	// RVA: 0x2F1DA80 Offset: 0x2F1DA80 VA: 0x2F1DA80
	public float get_MaxJumpYDifference() { }

	[CompilerGenerated]
	// RVA: 0x2F1DA88 Offset: 0x2F1DA88 VA: 0x2F1DA88
	private void set_MaxJumpYDifference(float value) { }

	[CompilerGenerated]
	// RVA: 0x2F1DA90 Offset: 0x2F1DA90 VA: 0x2F1DA90
	public Vector2 get_RandomJumpFallOffsetX() { }

	[CompilerGenerated]
	// RVA: 0x2F1DA9C Offset: 0x2F1DA9C VA: 0x2F1DA9C
	private void set_RandomJumpFallOffsetX(Vector2 value) { }

	[CompilerGenerated]
	// RVA: 0x2F1DAA8 Offset: 0x2F1DAA8 VA: 0x2F1DAA8
	public float get_JumpFallYPositionOffset() { }

	[CompilerGenerated]
	// RVA: 0x2F1DAB0 Offset: 0x2F1DAB0 VA: 0x2F1DAB0
	private void set_JumpFallYPositionOffset(float value) { }

	[CompilerGenerated]
	// RVA: 0x2F1DAB8 Offset: 0x2F1DAB8 VA: 0x2F1DAB8
	public Vector2 get_JumpFallYPositionMinMaxOffset() { }

	[CompilerGenerated]
	// RVA: 0x2F1DAC4 Offset: 0x2F1DAC4 VA: 0x2F1DAC4
	private void set_JumpFallYPositionMinMaxOffset(Vector2 value) { }

	[CompilerGenerated]
	// RVA: 0x2F1DAD0 Offset: 0x2F1DAD0 VA: 0x2F1DAD0
	public float get_FallScaleDuration() { }

	[CompilerGenerated]
	// RVA: 0x2F1DAD8 Offset: 0x2F1DAD8 VA: 0x2F1DAD8
	private void set_FallScaleDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x2F1DAE0 Offset: 0x2F1DAE0 VA: 0x2F1DAE0
	public AnimationCurve get_FallScaleCurveX() { }

	[CompilerGenerated]
	// RVA: 0x2F1DAE8 Offset: 0x2F1DAE8 VA: 0x2F1DAE8
	private void set_FallScaleCurveX(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x2F1DAF8 Offset: 0x2F1DAF8 VA: 0x2F1DAF8
	public AnimationCurve get_FallScaleCurveY() { }

	[CompilerGenerated]
	// RVA: 0x2F1DB00 Offset: 0x2F1DB00 VA: 0x2F1DB00
	private void set_FallScaleCurveY(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x2F1DB10 Offset: 0x2F1DB10 VA: 0x2F1DB10
	public float get_UserFadeOutDuration() { }

	[CompilerGenerated]
	// RVA: 0x2F1DB18 Offset: 0x2F1DB18 VA: 0x2F1DB18
	private void set_UserFadeOutDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x2F1DB20 Offset: 0x2F1DB20 VA: 0x2F1DB20
	public AnimationCurve get_UserFadeOutCurve() { }

	[CompilerGenerated]
	// RVA: 0x2F1DB28 Offset: 0x2F1DB28 VA: 0x2F1DB28
	private void set_UserFadeOutCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x2F1DB38 Offset: 0x2F1DB38 VA: 0x2F1DB38
	public float get_UserFadeOutDelay() { }

	[CompilerGenerated]
	// RVA: 0x2F1DB40 Offset: 0x2F1DB40 VA: 0x2F1DB40
	private void set_UserFadeOutDelay(float value) { }

	[CompilerGenerated]
	// RVA: 0x2F1DB48 Offset: 0x2F1DB48 VA: 0x2F1DB48
	public AnimationCurve get_SearchUserViewAnimationStartCurve() { }

	[CompilerGenerated]
	// RVA: 0x2F1DB50 Offset: 0x2F1DB50 VA: 0x2F1DB50
	private void set_SearchUserViewAnimationStartCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x2F1DB60 Offset: 0x2F1DB60 VA: 0x2F1DB60
	public float get_SearchUserViewAnimationStartDelay() { }

	[CompilerGenerated]
	// RVA: 0x2F1DB68 Offset: 0x2F1DB68 VA: 0x2F1DB68
	private void set_SearchUserViewAnimationStartDelay(float value) { }

	[CompilerGenerated]
	// RVA: 0x2F1DB70 Offset: 0x2F1DB70 VA: 0x2F1DB70
	public float get_SearchUserViewAnimationInitialScale() { }

	[CompilerGenerated]
	// RVA: 0x2F1DB78 Offset: 0x2F1DB78 VA: 0x2F1DB78
	private void set_SearchUserViewAnimationInitialScale(float value) { }

	[CompilerGenerated]
	// RVA: 0x2F1DB80 Offset: 0x2F1DB80 VA: 0x2F1DB80
	public float get_SearchUserViewScaleAnimationDuration() { }

	[CompilerGenerated]
	// RVA: 0x2F1DB88 Offset: 0x2F1DB88 VA: 0x2F1DB88
	private void set_SearchUserViewScaleAnimationDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x2F1DB90 Offset: 0x2F1DB90 VA: 0x2F1DB90
	public Vector3 get_SearchUserViewAnimationInitialPositionOffset() { }

	[CompilerGenerated]
	// RVA: 0x2F1DBA0 Offset: 0x2F1DBA0 VA: 0x2F1DBA0
	private void set_SearchUserViewAnimationInitialPositionOffset(Vector3 value) { }

	[CompilerGenerated]
	// RVA: 0x2F1DBB0 Offset: 0x2F1DBB0 VA: 0x2F1DBB0
	public AnimationCurve get_SearchUserViewAnimationScaleCurve() { }

	[CompilerGenerated]
	// RVA: 0x2F1DBB8 Offset: 0x2F1DBB8 VA: 0x2F1DBB8
	private void set_SearchUserViewAnimationScaleCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x2F1DBC8 Offset: 0x2F1DBC8 VA: 0x2F1DBC8
	public float get_SearchUserViewPositionAnimationDuration() { }

	[CompilerGenerated]
	// RVA: 0x2F1DBD0 Offset: 0x2F1DBD0 VA: 0x2F1DBD0
	private void set_SearchUserViewPositionAnimationDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x2F1DBD8 Offset: 0x2F1DBD8 VA: 0x2F1DBD8
	public AnimationCurve get_SearchUserViewAnimationPositionCurve() { }

	[CompilerGenerated]
	// RVA: 0x2F1DBE0 Offset: 0x2F1DBE0 VA: 0x2F1DBE0
	private void set_SearchUserViewAnimationPositionCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x2F1DBF0 Offset: 0x2F1DBF0 VA: 0x2F1DBF0
	public float get_SearchTextDuration() { }

	[CompilerGenerated]
	// RVA: 0x2F1DBF8 Offset: 0x2F1DBF8 VA: 0x2F1DBF8
	private void set_SearchTextDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x2F1DC00 Offset: 0x2F1DC00 VA: 0x2F1DC00
	public float get_SearchTextScale() { }

	[CompilerGenerated]
	// RVA: 0x2F1DC08 Offset: 0x2F1DC08 VA: 0x2F1DC08
	private void set_SearchTextScale(float value) { }

	[CompilerGenerated]
	// RVA: 0x2F1DC10 Offset: 0x2F1DC10 VA: 0x2F1DC10
	public AnimationCurve get_SearchTextAnimationCurve() { }

	[CompilerGenerated]
	// RVA: 0x2F1DC18 Offset: 0x2F1DC18 VA: 0x2F1DC18
	private void set_SearchTextAnimationCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x2F1DC28 Offset: 0x2F1DC28 VA: 0x2F1DC28
	public Vector3 get_UserCountScaleInTarget() { }

	[CompilerGenerated]
	// RVA: 0x2F1DC38 Offset: 0x2F1DC38 VA: 0x2F1DC38
	private void set_UserCountScaleInTarget(Vector3 value) { }

	[CompilerGenerated]
	// RVA: 0x2F1DC48 Offset: 0x2F1DC48 VA: 0x2F1DC48
	public float get_UserCountScaleInDuration() { }

	[CompilerGenerated]
	// RVA: 0x2F1DC50 Offset: 0x2F1DC50 VA: 0x2F1DC50
	private void set_UserCountScaleInDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x2F1DC58 Offset: 0x2F1DC58 VA: 0x2F1DC58
	public AnimationCurve get_UserCountScaleInCurve() { }

	[CompilerGenerated]
	// RVA: 0x2F1DC60 Offset: 0x2F1DC60 VA: 0x2F1DC60
	private void set_UserCountScaleInCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x2F1DC70 Offset: 0x2F1DC70 VA: 0x2F1DC70
	public float get_UserCountScaleOutDuration() { }

	[CompilerGenerated]
	// RVA: 0x2F1DC78 Offset: 0x2F1DC78 VA: 0x2F1DC78
	private void set_UserCountScaleOutDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x2F1DC80 Offset: 0x2F1DC80 VA: 0x2F1DC80
	public AnimationCurve get_UserCountScaleOutCurve() { }

	[CompilerGenerated]
	// RVA: 0x2F1DC88 Offset: 0x2F1DC88 VA: 0x2F1DC88
	private void set_UserCountScaleOutCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x2F1DC98 Offset: 0x2F1DC98 VA: 0x2F1DC98
	public AnimationCurve get_UserCountTextChangeCurve() { }

	[CompilerGenerated]
	// RVA: 0x2F1DCA0 Offset: 0x2F1DCA0 VA: 0x2F1DCA0
	private void set_UserCountTextChangeCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x2F1DCB0 Offset: 0x2F1DCB0 VA: 0x2F1DCB0
	public float get_UserCountTextChangeDuration() { }

	[CompilerGenerated]
	// RVA: 0x2F1DCB8 Offset: 0x2F1DCB8 VA: 0x2F1DCB8
	private void set_UserCountTextChangeDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x2F1DCC0 Offset: 0x2F1DCC0 VA: 0x2F1DCC0
	public float get_UserCountTextHitParticleTime() { }

	[CompilerGenerated]
	// RVA: 0x2F1DCC8 Offset: 0x2F1DCC8 VA: 0x2F1DCC8
	private void set_UserCountTextHitParticleTime(float value) { }

	[CompilerGenerated]
	// RVA: 0x2F1DCD0 Offset: 0x2F1DCD0 VA: 0x2F1DCD0
	public float get_StepCountTextHitParticleTime() { }

	[CompilerGenerated]
	// RVA: 0x2F1DCD8 Offset: 0x2F1DCD8 VA: 0x2F1DCD8
	private void set_StepCountTextHitParticleTime(float value) { }

	[CompilerGenerated]
	// RVA: 0x2F1DCE0 Offset: 0x2F1DCE0 VA: 0x2F1DCE0
	public Vector3 get_UserStartScale() { }

	[CompilerGenerated]
	// RVA: 0x2F1DCF0 Offset: 0x2F1DCF0 VA: 0x2F1DCF0
	private void set_UserStartScale(Vector3 value) { }

	[CompilerGenerated]
	// RVA: 0x2F1DD00 Offset: 0x2F1DD00 VA: 0x2F1DD00
	public float get_JumpXPosCutIntervalLength() { }

	[CompilerGenerated]
	// RVA: 0x2F1DD08 Offset: 0x2F1DD08 VA: 0x2F1DD08
	private void set_JumpXPosCutIntervalLength(float value) { }

	[CompilerGenerated]
	// RVA: 0x2F1DD10 Offset: 0x2F1DD10 VA: 0x2F1DD10
	public List<UserJumpValues> get_UserJumpValues() { }

	[CompilerGenerated]
	// RVA: 0x2F1DD18 Offset: 0x2F1DD18 VA: 0x2F1DD18
	private void set_UserJumpValues(List<UserJumpValues> value) { }

	[CompilerGenerated]
	// RVA: 0x2F1DD28 Offset: 0x2F1DD28 VA: 0x2F1DD28
	public float get_JumpSfxDelay() { }

	[CompilerGenerated]
	// RVA: 0x2F1DD30 Offset: 0x2F1DD30 VA: 0x2F1DD30
	private void set_JumpSfxDelay(float value) { }

	[CompilerGenerated]
	// RVA: 0x2F1DD38 Offset: 0x2F1DD38 VA: 0x2F1DD38
	public float get_FallSfxDelay() { }

	[CompilerGenerated]
	// RVA: 0x2F1DD40 Offset: 0x2F1DD40 VA: 0x2F1DD40
	private void set_FallSfxDelay(float value) { }

	// RVA: 0x2F1DD48 Offset: 0x2F1DD48 VA: 0x2F1DD48
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.SkyJump.Scripts.UI
[Serializable]