public class SkyJumpWithStageAnimationConfig : ScriptableObject // TypeDefIndex: 2683
{
	// Fields
	[SerializeField]
	[CompilerGenerated]
	private int <MostFrontUserSortOrder>k__BackingField; // 0x18
	[SerializeField]
	[CompilerGenerated]
	private int <FallingUserSortOrderIncreaseAmount>k__BackingField; // 0x1C
	[CompilerGenerated]
	[SerializeField]
	private List<Vector3> <AnchorOffsets>k__BackingField; // 0x20
	[CompilerGenerated]
	[Header("Jump")]
	[SerializeField]
	private float <JumpPower>k__BackingField; // 0x28
	[SerializeField]
	[CompilerGenerated]
	private float <JumpDuration>k__BackingField; // 0x2C
	[CompilerGenerated]
	[SerializeField]
	private int <JumpCount>k__BackingField; // 0x30
	[CompilerGenerated]
	[SerializeField]
	[Header("ShrinkStart")]
	private float <ShrinkScaleDuration>k__BackingField; // 0x34
	[SerializeField]
	[CompilerGenerated]
	private Vector3 <ShrinkStartScale>k__BackingField; // 0x38
	[SerializeField]
	[CompilerGenerated]
	private AnimationCurve <ShrinkScaleEase>k__BackingField; // 0x48
	[CompilerGenerated]
	[SerializeField]
	[Header("Delays")]
	private float <DelayAfterMyJump>k__BackingField; // 0x50
	[SerializeField]
	[CompilerGenerated]
	private float <DelayAfterMyJumpFall>k__BackingField; // 0x54
	[CompilerGenerated]
	[SerializeField]
	private float <ConsecutiveDelay>k__BackingField; // 0x58
	[SerializeField]
	[CompilerGenerated]
	private float <ConsecutiveDelayForLosers>k__BackingField; // 0x5C
	[CompilerGenerated]
	[SerializeField]
	private float <DelayForLoserAnimation>k__BackingField; // 0x60
	[SerializeField]
	[CompilerGenerated]
	private float <StartDelay>k__BackingField; // 0x64
	[CompilerGenerated]
	[SerializeField]
	private float <StepFallDelay>k__BackingField; // 0x68
	[CompilerGenerated]
	[SerializeField]
	private float <UserCountTextAnimDelay>k__BackingField; // 0x6C
	[CompilerGenerated]
	[SerializeField]
	private float <FirstShowTooltipsConsecutiveDelay>k__BackingField; // 0x70
	[CompilerGenerated]
	[SerializeField]
	[Header("MidAirRotation")]
	private float <MidAirRotationDuration>k__BackingField; // 0x74
	[CompilerGenerated]
	[SerializeField]
	private AnimationCurve <MidAirRotationEase>k__BackingField; // 0x78
	[CompilerGenerated]
	[SerializeField]
	[Header("RollSpin")]
	private float <RollSpinDuration>k__BackingField; // 0x80
	[SerializeField]
	[CompilerGenerated]
	private AnimationCurve <RollSpinCurve>k__BackingField; // 0x88
	[Header("Bounces")]
	[SerializeField]
	[CompilerGenerated]
	private float <FirstBounceDuration>k__BackingField; // 0x90
	[CompilerGenerated]
	[SerializeField]
	private AnimationCurve <FirstBounceRotationEase>k__BackingField; // 0x98
	[CompilerGenerated]
	[SerializeField]
	private float <SecondBounceDuration>k__BackingField; // 0xA0
	[SerializeField]
	[CompilerGenerated]
	private AnimationCurve <SecondBounceRotationEase>k__BackingField; // 0xA8
	[SerializeField]
	[Header("MidAirScale")]
	[CompilerGenerated]
	private float <MidAirScaleDuration>k__BackingField; // 0xB0
	[SerializeField]
	[CompilerGenerated]
	private AnimationCurve <XScaleCurve>k__BackingField; // 0xB8
	[SerializeField]
	[CompilerGenerated]
	private AnimationCurve <YScaleCurve>k__BackingField; // 0xC0
	[CompilerGenerated]
	[Header("Step Animation")]
	[SerializeField]
	private float <StepLoopedMoveSpeed>k__BackingField; // 0xC8
	[CompilerGenerated]
	[SerializeField]
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
	[SerializeField]
	[CompilerGenerated]
	private float <StepDecreaseCumulativeForceAmount>k__BackingField; // 0xDC
	[SerializeField]
	[CompilerGenerated]
	private float <StepForceCap>k__BackingField; // 0xE0
	[SerializeField]
	[CompilerGenerated]
	private float <ForceRecoverySpeed>k__BackingField; // 0xE4
	[SerializeField]
	[CompilerGenerated]
	private float <StepFallDuration>k__BackingField; // 0xE8
	[SerializeField]
	[CompilerGenerated]
	private AnimationCurve <StepFallCurve>k__BackingField; // 0xF0
	[SerializeField]
	[CompilerGenerated]
	private float <StepFallHidePosition>k__BackingField; // 0xF8
	[SerializeField]
	[Header("StepFallRotation")]
	[CompilerGenerated]
	private Vector2 <StepFallRotationMinMax>k__BackingField; // 0xFC
	[SerializeField]
	[CompilerGenerated]
	private AnimationCurve <StepFallRotationCurve>k__BackingField; // 0x108
	[SerializeField]
	[CompilerGenerated]
	private float <StepFallRotationDuration>k__BackingField; // 0x110
	[SerializeField]
	[CompilerGenerated]
	[Header("StepPillowSquish")]
	private float <StepMaxPillowForce>k__BackingField; // 0x114
	[CompilerGenerated]
	[SerializeField]
	private Vector3 <StepPillowSquishedLocalPosition>k__BackingField; // 0x118
	[CompilerGenerated]
	[SerializeField]
	private Vector3 <StepPillowSquishedScale>k__BackingField; // 0x124
	[CompilerGenerated]
	[SerializeField]
	private float <StepPillowForceRecoverySpeed>k__BackingField; // 0x130
	[CompilerGenerated]
	[SerializeField]
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
	[SerializeField]
	[CompilerGenerated]
	private float <MinJumpFallPower>k__BackingField; // 0x154
	[CompilerGenerated]
	[SerializeField]
	private float <MaxJumpFallPower>k__BackingField; // 0x158
	[CompilerGenerated]
	[SerializeField]
	private float <MinJumpYDifference>k__BackingField; // 0x15C
	[SerializeField]
	[CompilerGenerated]
	private float <MaxJumpYDifference>k__BackingField; // 0x160
	[CompilerGenerated]
	[SerializeField]
	private Vector2 <RandomJumpFallOffsetX>k__BackingField; // 0x164
	[CompilerGenerated]
	[SerializeField]
	private float <JumpFallYPositionOffset>k__BackingField; // 0x16C
	[CompilerGenerated]
	[SerializeField]
	private Vector2 <JumpFallYPositionMinMaxOffset>k__BackingField; // 0x170
	[CompilerGenerated]
	[Header("FallScaleSampled")]
	[SerializeField]
	private float <FallScaleDuration>k__BackingField; // 0x178
	[CompilerGenerated]
	[SerializeField]
	private AnimationCurve <FallScaleCurveX>k__BackingField; // 0x180
	[CompilerGenerated]
	[SerializeField]
	private AnimationCurve <FallScaleCurveY>k__BackingField; // 0x188
	[CompilerGenerated]
	[SerializeField]
	[Header("UserFadeOut")]
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
	[CompilerGenerated]
	[SerializeField]
	private float <SearchUserViewAnimationStartDelay>k__BackingField; // 0x1B0
	[SerializeField]
	[CompilerGenerated]
	private float <SearchUserViewAnimationInitialScale>k__BackingField; // 0x1B4
	[SerializeField]
	[CompilerGenerated]
	private float <SearchUserViewScaleAnimationDuration>k__BackingField; // 0x1B8
	[CompilerGenerated]
	[SerializeField]
	private Vector3 <SearchUserViewAnimationInitialPositionOffset>k__BackingField; // 0x1BC
	[CompilerGenerated]
	[SerializeField]
	private AnimationCurve <SearchUserViewAnimationScaleCurve>k__BackingField; // 0x1C8
	[CompilerGenerated]
	[SerializeField]
	private float <SearchUserViewPositionAnimationDuration>k__BackingField; // 0x1D0
	[CompilerGenerated]
	[SerializeField]
	private AnimationCurve <SearchUserViewAnimationPositionCurve>k__BackingField; // 0x1D8
	[SerializeField]
	[CompilerGenerated]
	private float <SearchTextDuration>k__BackingField; // 0x1E0
	[CompilerGenerated]
	[SerializeField]
	private float <SearchTextScale>k__BackingField; // 0x1E4
	[CompilerGenerated]
	[SerializeField]
	private AnimationCurve <SearchTextAnimationCurve>k__BackingField; // 0x1E8
	[CompilerGenerated]
	[Header("User Count Anim")]
	[SerializeField]
	private Vector3 <UserCountScaleInTarget>k__BackingField; // 0x1F0
	[CompilerGenerated]
	[SerializeField]
	private float <UserCountScaleInDuration>k__BackingField; // 0x1FC
	[CompilerGenerated]
	[SerializeField]
	private AnimationCurve <UserCountScaleInCurve>k__BackingField; // 0x200
	[CompilerGenerated]
	[SerializeField]
	private float <UserCountScaleOutDuration>k__BackingField; // 0x208
	[CompilerGenerated]
	[SerializeField]
	private AnimationCurve <UserCountScaleOutCurve>k__BackingField; // 0x210
	[CompilerGenerated]
	[SerializeField]
	private AnimationCurve <UserCountTextChangeCurve>k__BackingField; // 0x218
	[SerializeField]
	[CompilerGenerated]
	private float <UserCountTextChangeDuration>k__BackingField; // 0x220
	[CompilerGenerated]
	[SerializeField]
	private float <UserCountTextHitParticleTime>k__BackingField; // 0x224
	[CompilerGenerated]
	[SerializeField]
	private float <StepCountTextHitParticleTime>k__BackingField; // 0x228
	[CompilerGenerated]
	[SerializeField]
	private Vector3 <UserStartScale>k__BackingField; // 0x22C
	[CompilerGenerated]
	[SerializeField]
	private float <JumpXPosCutIntervalLength>k__BackingField; // 0x238
	[CompilerGenerated]
	[SerializeField]
	private List<UserJumpValues> <UserJumpValues>k__BackingField; // 0x240
	[SerializeField]
	[CompilerGenerated]
	[Header("Sfx")]
	private float <JumpSfxDelay>k__BackingField; // 0x248
	[SerializeField]
	[CompilerGenerated]
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
	// RVA: 0x23397C8 Offset: 0x23397C8 VA: 0x23397C8
	public int get_MostFrontUserSortOrder() { }

	[CompilerGenerated]
	// RVA: 0x23397D0 Offset: 0x23397D0 VA: 0x23397D0
	private void set_MostFrontUserSortOrder(int value) { }

	[CompilerGenerated]
	// RVA: 0x23397D8 Offset: 0x23397D8 VA: 0x23397D8
	public int get_FallingUserSortOrderIncreaseAmount() { }

	[CompilerGenerated]
	// RVA: 0x23397E0 Offset: 0x23397E0 VA: 0x23397E0
	private void set_FallingUserSortOrderIncreaseAmount(int value) { }

	[CompilerGenerated]
	// RVA: 0x23397E8 Offset: 0x23397E8 VA: 0x23397E8
	public List<Vector3> get_AnchorOffsets() { }

	[CompilerGenerated]
	// RVA: 0x23397F0 Offset: 0x23397F0 VA: 0x23397F0
	private void set_AnchorOffsets(List<Vector3> value) { }

	[CompilerGenerated]
	// RVA: 0x23397F8 Offset: 0x23397F8 VA: 0x23397F8
	public float get_JumpPower() { }

	[CompilerGenerated]
	// RVA: 0x2339800 Offset: 0x2339800 VA: 0x2339800
	private void set_JumpPower(float value) { }

	[CompilerGenerated]
	// RVA: 0x2339808 Offset: 0x2339808 VA: 0x2339808
	public float get_JumpDuration() { }

	[CompilerGenerated]
	// RVA: 0x2339810 Offset: 0x2339810 VA: 0x2339810
	private void set_JumpDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x2339818 Offset: 0x2339818 VA: 0x2339818
	public int get_JumpCount() { }

	[CompilerGenerated]
	// RVA: 0x2339820 Offset: 0x2339820 VA: 0x2339820
	private void set_JumpCount(int value) { }

	[CompilerGenerated]
	// RVA: 0x2339828 Offset: 0x2339828 VA: 0x2339828
	public float get_ShrinkScaleDuration() { }

	[CompilerGenerated]
	// RVA: 0x2339830 Offset: 0x2339830 VA: 0x2339830
	private void set_ShrinkScaleDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x2339838 Offset: 0x2339838 VA: 0x2339838
	public Vector3 get_ShrinkStartScale() { }

	[CompilerGenerated]
	// RVA: 0x2339844 Offset: 0x2339844 VA: 0x2339844
	private void set_ShrinkStartScale(Vector3 value) { }

	[CompilerGenerated]
	// RVA: 0x2339850 Offset: 0x2339850 VA: 0x2339850
	public AnimationCurve get_ShrinkScaleEase() { }

	[CompilerGenerated]
	// RVA: 0x2339858 Offset: 0x2339858 VA: 0x2339858
	private void set_ShrinkScaleEase(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x2339860 Offset: 0x2339860 VA: 0x2339860
	public float get_DelayAfterMyJump() { }

	[CompilerGenerated]
	// RVA: 0x2339868 Offset: 0x2339868 VA: 0x2339868
	private void set_DelayAfterMyJump(float value) { }

	[CompilerGenerated]
	// RVA: 0x2339870 Offset: 0x2339870 VA: 0x2339870
	public float get_DelayAfterMyJumpFall() { }

	[CompilerGenerated]
	// RVA: 0x2339878 Offset: 0x2339878 VA: 0x2339878
	private void set_DelayAfterMyJumpFall(float value) { }

	[CompilerGenerated]
	// RVA: 0x2339880 Offset: 0x2339880 VA: 0x2339880
	public float get_ConsecutiveDelay() { }

	[CompilerGenerated]
	// RVA: 0x2339888 Offset: 0x2339888 VA: 0x2339888
	private void set_ConsecutiveDelay(float value) { }

	[CompilerGenerated]
	// RVA: 0x2339890 Offset: 0x2339890 VA: 0x2339890
	public float get_ConsecutiveDelayForLosers() { }

	[CompilerGenerated]
	// RVA: 0x2339898 Offset: 0x2339898 VA: 0x2339898
	private void set_ConsecutiveDelayForLosers(float value) { }

	[CompilerGenerated]
	// RVA: 0x23398A0 Offset: 0x23398A0 VA: 0x23398A0
	public float get_DelayForLoserAnimation() { }

	[CompilerGenerated]
	// RVA: 0x23398A8 Offset: 0x23398A8 VA: 0x23398A8
	private void set_DelayForLoserAnimation(float value) { }

	[CompilerGenerated]
	// RVA: 0x23398B0 Offset: 0x23398B0 VA: 0x23398B0
	public float get_StartDelay() { }

	[CompilerGenerated]
	// RVA: 0x23398B8 Offset: 0x23398B8 VA: 0x23398B8
	private void set_StartDelay(float value) { }

	[CompilerGenerated]
	// RVA: 0x23398C0 Offset: 0x23398C0 VA: 0x23398C0
	public float get_StepFallDelay() { }

	[CompilerGenerated]
	// RVA: 0x23398C8 Offset: 0x23398C8 VA: 0x23398C8
	private void set_StepFallDelay(float value) { }

	[CompilerGenerated]
	// RVA: 0x23398D0 Offset: 0x23398D0 VA: 0x23398D0
	public float get_UserCountTextAnimDelay() { }

	[CompilerGenerated]
	// RVA: 0x23398D8 Offset: 0x23398D8 VA: 0x23398D8
	private void set_UserCountTextAnimDelay(float value) { }

	[CompilerGenerated]
	// RVA: 0x23398E0 Offset: 0x23398E0 VA: 0x23398E0
	public float get_FirstShowTooltipsConsecutiveDelay() { }

	[CompilerGenerated]
	// RVA: 0x23398E8 Offset: 0x23398E8 VA: 0x23398E8
	private void set_FirstShowTooltipsConsecutiveDelay(float value) { }

	[CompilerGenerated]
	// RVA: 0x23398F0 Offset: 0x23398F0 VA: 0x23398F0
	public float get_MidAirRotationDuration() { }

	[CompilerGenerated]
	// RVA: 0x23398F8 Offset: 0x23398F8 VA: 0x23398F8
	private void set_MidAirRotationDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x2339900 Offset: 0x2339900 VA: 0x2339900
	public AnimationCurve get_MidAirRotationEase() { }

	[CompilerGenerated]
	// RVA: 0x2339908 Offset: 0x2339908 VA: 0x2339908
	private void set_MidAirRotationEase(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x2339910 Offset: 0x2339910 VA: 0x2339910
	public float get_RollSpinDuration() { }

	[CompilerGenerated]
	// RVA: 0x2339918 Offset: 0x2339918 VA: 0x2339918
	private void set_RollSpinDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x2339920 Offset: 0x2339920 VA: 0x2339920
	public AnimationCurve get_RollSpinCurve() { }

	[CompilerGenerated]
	// RVA: 0x2339928 Offset: 0x2339928 VA: 0x2339928
	private void set_RollSpinCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x2339930 Offset: 0x2339930 VA: 0x2339930
	public float get_FirstBounceDuration() { }

	[CompilerGenerated]
	// RVA: 0x2339938 Offset: 0x2339938 VA: 0x2339938
	private void set_FirstBounceDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x2339940 Offset: 0x2339940 VA: 0x2339940
	public AnimationCurve get_FirstBounceRotationEase() { }

	[CompilerGenerated]
	// RVA: 0x2339948 Offset: 0x2339948 VA: 0x2339948
	private void set_FirstBounceRotationEase(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x2339950 Offset: 0x2339950 VA: 0x2339950
	public float get_SecondBounceDuration() { }

	[CompilerGenerated]
	// RVA: 0x2339958 Offset: 0x2339958 VA: 0x2339958
	private void set_SecondBounceDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x2339960 Offset: 0x2339960 VA: 0x2339960
	public AnimationCurve get_SecondBounceRotationEase() { }

	[CompilerGenerated]
	// RVA: 0x2339968 Offset: 0x2339968 VA: 0x2339968
	private void set_SecondBounceRotationEase(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x2339970 Offset: 0x2339970 VA: 0x2339970
	public float get_MidAirScaleDuration() { }

	[CompilerGenerated]
	// RVA: 0x2339978 Offset: 0x2339978 VA: 0x2339978
	private void set_MidAirScaleDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x2339980 Offset: 0x2339980 VA: 0x2339980
	public AnimationCurve get_XScaleCurve() { }

	[CompilerGenerated]
	// RVA: 0x2339988 Offset: 0x2339988 VA: 0x2339988
	private void set_XScaleCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x2339990 Offset: 0x2339990 VA: 0x2339990
	public AnimationCurve get_YScaleCurve() { }

	[CompilerGenerated]
	// RVA: 0x2339998 Offset: 0x2339998 VA: 0x2339998
	private void set_YScaleCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x23399A0 Offset: 0x23399A0 VA: 0x23399A0
	public float get_StepLoopedMoveSpeed() { }

	[CompilerGenerated]
	// RVA: 0x23399A8 Offset: 0x23399A8 VA: 0x23399A8
	private void set_StepLoopedMoveSpeed(float value) { }

	[CompilerGenerated]
	// RVA: 0x23399B0 Offset: 0x23399B0 VA: 0x23399B0
	public float get_StepMoveOffset() { }

	[CompilerGenerated]
	// RVA: 0x23399B8 Offset: 0x23399B8 VA: 0x23399B8
	private void set_StepMoveOffset(float value) { }

	[CompilerGenerated]
	// RVA: 0x23399C0 Offset: 0x23399C0 VA: 0x23399C0
	public float get_StepApplyForceDuration() { }

	[CompilerGenerated]
	// RVA: 0x23399C8 Offset: 0x23399C8 VA: 0x23399C8
	private void set_StepApplyForceDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x23399D0 Offset: 0x23399D0 VA: 0x23399D0
	public float get_StepApplyForceAmountJump() { }

	[CompilerGenerated]
	// RVA: 0x23399D8 Offset: 0x23399D8 VA: 0x23399D8
	private void set_StepApplyForceAmountJump(float value) { }

	[CompilerGenerated]
	// RVA: 0x23399E0 Offset: 0x23399E0 VA: 0x23399E0
	public float get_StepApplyForceAmountSit() { }

	[CompilerGenerated]
	// RVA: 0x23399E8 Offset: 0x23399E8 VA: 0x23399E8
	private void set_StepApplyForceAmountSit(float value) { }

	[CompilerGenerated]
	// RVA: 0x23399F0 Offset: 0x23399F0 VA: 0x23399F0
	public float get_StepDecreaseCumulativeForceAmount() { }

	[CompilerGenerated]
	// RVA: 0x23399F8 Offset: 0x23399F8 VA: 0x23399F8
	private void set_StepDecreaseCumulativeForceAmount(float value) { }

	[CompilerGenerated]
	// RVA: 0x2339A00 Offset: 0x2339A00 VA: 0x2339A00
	public float get_StepForceCap() { }

	[CompilerGenerated]
	// RVA: 0x2339A08 Offset: 0x2339A08 VA: 0x2339A08
	private void set_StepForceCap(float value) { }

	[CompilerGenerated]
	// RVA: 0x2339A10 Offset: 0x2339A10 VA: 0x2339A10
	public float get_ForceRecoverySpeed() { }

	[CompilerGenerated]
	// RVA: 0x2339A18 Offset: 0x2339A18 VA: 0x2339A18
	private void set_ForceRecoverySpeed(float value) { }

	[CompilerGenerated]
	// RVA: 0x2339A20 Offset: 0x2339A20 VA: 0x2339A20
	public float get_StepFallDuration() { }

	[CompilerGenerated]
	// RVA: 0x2339A28 Offset: 0x2339A28 VA: 0x2339A28
	private void set_StepFallDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x2339A30 Offset: 0x2339A30 VA: 0x2339A30
	public AnimationCurve get_StepFallCurve() { }

	[CompilerGenerated]
	// RVA: 0x2339A38 Offset: 0x2339A38 VA: 0x2339A38
	private void set_StepFallCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x2339A40 Offset: 0x2339A40 VA: 0x2339A40
	public float get_StepFallHidePosition() { }

	[CompilerGenerated]
	// RVA: 0x2339A48 Offset: 0x2339A48 VA: 0x2339A48
	private void set_StepFallHidePosition(float value) { }

	[CompilerGenerated]
	// RVA: 0x2339A50 Offset: 0x2339A50 VA: 0x2339A50
	public Vector2 get_StepFallRotationMinMax() { }

	[CompilerGenerated]
	// RVA: 0x2339A58 Offset: 0x2339A58 VA: 0x2339A58
	private void set_StepFallRotationMinMax(Vector2 value) { }

	[CompilerGenerated]
	// RVA: 0x2339A60 Offset: 0x2339A60 VA: 0x2339A60
	public AnimationCurve get_StepFallRotationCurve() { }

	[CompilerGenerated]
	// RVA: 0x2339A68 Offset: 0x2339A68 VA: 0x2339A68
	private void set_StepFallRotationCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x2339A78 Offset: 0x2339A78 VA: 0x2339A78
	public float get_StepFallRotationDuration() { }

	[CompilerGenerated]
	// RVA: 0x2339A80 Offset: 0x2339A80 VA: 0x2339A80
	private void set_StepFallRotationDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x2339A88 Offset: 0x2339A88 VA: 0x2339A88
	public float get_StepMaxPillowForce() { }

	[CompilerGenerated]
	// RVA: 0x2339A90 Offset: 0x2339A90 VA: 0x2339A90
	private void set_StepMaxPillowForce(float value) { }

	[CompilerGenerated]
	// RVA: 0x2339A98 Offset: 0x2339A98 VA: 0x2339A98
	public Vector3 get_StepPillowSquishedLocalPosition() { }

	[CompilerGenerated]
	// RVA: 0x2339AA8 Offset: 0x2339AA8 VA: 0x2339AA8
	private void set_StepPillowSquishedLocalPosition(Vector3 value) { }

	[CompilerGenerated]
	// RVA: 0x2339AB8 Offset: 0x2339AB8 VA: 0x2339AB8
	public Vector3 get_StepPillowSquishedScale() { }

	[CompilerGenerated]
	// RVA: 0x2339AC8 Offset: 0x2339AC8 VA: 0x2339AC8
	private void set_StepPillowSquishedScale(Vector3 value) { }

	[CompilerGenerated]
	// RVA: 0x2339AD8 Offset: 0x2339AD8 VA: 0x2339AD8
	public float get_StepPillowForceRecoverySpeed() { }

	[CompilerGenerated]
	// RVA: 0x2339AE0 Offset: 0x2339AE0 VA: 0x2339AE0
	private void set_StepPillowForceRecoverySpeed(float value) { }

	[CompilerGenerated]
	// RVA: 0x2339AE8 Offset: 0x2339AE8 VA: 0x2339AE8
	public float get_StepPillowApplyForceAmount() { }

	[CompilerGenerated]
	// RVA: 0x2339AF0 Offset: 0x2339AF0 VA: 0x2339AF0
	private void set_StepPillowApplyForceAmount(float value) { }

	[CompilerGenerated]
	// RVA: 0x2339AF8 Offset: 0x2339AF8 VA: 0x2339AF8
	public float get_StepPositionSmoothTime() { }

	[CompilerGenerated]
	// RVA: 0x2339B00 Offset: 0x2339B00 VA: 0x2339B00
	private void set_StepPositionSmoothTime(float value) { }

	[CompilerGenerated]
	// RVA: 0x2339B08 Offset: 0x2339B08 VA: 0x2339B08
	public float get_StepScaleSmoothTime() { }

	[CompilerGenerated]
	// RVA: 0x2339B10 Offset: 0x2339B10 VA: 0x2339B10
	private void set_StepScaleSmoothTime(float value) { }

	[CompilerGenerated]
	// RVA: 0x2339B18 Offset: 0x2339B18 VA: 0x2339B18
	public float get_RelocateDuration() { }

	[CompilerGenerated]
	// RVA: 0x2339B20 Offset: 0x2339B20 VA: 0x2339B20
	private void set_RelocateDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x2339B28 Offset: 0x2339B28 VA: 0x2339B28
	public AnimationCurve get_RelocateCurve() { }

	[CompilerGenerated]
	// RVA: 0x2339B30 Offset: 0x2339B30 VA: 0x2339B30
	private void set_RelocateCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x2339B40 Offset: 0x2339B40 VA: 0x2339B40
	public float get_JumpFallDuration() { }

	[CompilerGenerated]
	// RVA: 0x2339B48 Offset: 0x2339B48 VA: 0x2339B48
	private void set_JumpFallDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x2339B50 Offset: 0x2339B50 VA: 0x2339B50
	public float get_MinJumpFallPower() { }

	[CompilerGenerated]
	// RVA: 0x2339B58 Offset: 0x2339B58 VA: 0x2339B58
	private void set_MinJumpFallPower(float value) { }

	[CompilerGenerated]
	// RVA: 0x2339B60 Offset: 0x2339B60 VA: 0x2339B60
	public float get_MaxJumpFallPower() { }

	[CompilerGenerated]
	// RVA: 0x2339B68 Offset: 0x2339B68 VA: 0x2339B68
	private void set_MaxJumpFallPower(float value) { }

	[CompilerGenerated]
	// RVA: 0x2339B70 Offset: 0x2339B70 VA: 0x2339B70
	public float get_MinJumpYDifference() { }

	[CompilerGenerated]
	// RVA: 0x2339B78 Offset: 0x2339B78 VA: 0x2339B78
	private void set_MinJumpYDifference(float value) { }

	[CompilerGenerated]
	// RVA: 0x2339B80 Offset: 0x2339B80 VA: 0x2339B80
	public float get_MaxJumpYDifference() { }

	[CompilerGenerated]
	// RVA: 0x2339B88 Offset: 0x2339B88 VA: 0x2339B88
	private void set_MaxJumpYDifference(float value) { }

	[CompilerGenerated]
	// RVA: 0x2339B90 Offset: 0x2339B90 VA: 0x2339B90
	public Vector2 get_RandomJumpFallOffsetX() { }

	[CompilerGenerated]
	// RVA: 0x2339B9C Offset: 0x2339B9C VA: 0x2339B9C
	private void set_RandomJumpFallOffsetX(Vector2 value) { }

	[CompilerGenerated]
	// RVA: 0x2339BA8 Offset: 0x2339BA8 VA: 0x2339BA8
	public float get_JumpFallYPositionOffset() { }

	[CompilerGenerated]
	// RVA: 0x2339BB0 Offset: 0x2339BB0 VA: 0x2339BB0
	private void set_JumpFallYPositionOffset(float value) { }

	[CompilerGenerated]
	// RVA: 0x2339BB8 Offset: 0x2339BB8 VA: 0x2339BB8
	public Vector2 get_JumpFallYPositionMinMaxOffset() { }

	[CompilerGenerated]
	// RVA: 0x2339BC4 Offset: 0x2339BC4 VA: 0x2339BC4
	private void set_JumpFallYPositionMinMaxOffset(Vector2 value) { }

	[CompilerGenerated]
	// RVA: 0x2339BD0 Offset: 0x2339BD0 VA: 0x2339BD0
	public float get_FallScaleDuration() { }

	[CompilerGenerated]
	// RVA: 0x2339BD8 Offset: 0x2339BD8 VA: 0x2339BD8
	private void set_FallScaleDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x2339BE0 Offset: 0x2339BE0 VA: 0x2339BE0
	public AnimationCurve get_FallScaleCurveX() { }

	[CompilerGenerated]
	// RVA: 0x2339BE8 Offset: 0x2339BE8 VA: 0x2339BE8
	private void set_FallScaleCurveX(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x2339BF8 Offset: 0x2339BF8 VA: 0x2339BF8
	public AnimationCurve get_FallScaleCurveY() { }

	[CompilerGenerated]
	// RVA: 0x2339C00 Offset: 0x2339C00 VA: 0x2339C00
	private void set_FallScaleCurveY(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x2339C10 Offset: 0x2339C10 VA: 0x2339C10
	public float get_UserFadeOutDuration() { }

	[CompilerGenerated]
	// RVA: 0x2339C18 Offset: 0x2339C18 VA: 0x2339C18
	private void set_UserFadeOutDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x2339C20 Offset: 0x2339C20 VA: 0x2339C20
	public AnimationCurve get_UserFadeOutCurve() { }

	[CompilerGenerated]
	// RVA: 0x2339C28 Offset: 0x2339C28 VA: 0x2339C28
	private void set_UserFadeOutCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x2339C38 Offset: 0x2339C38 VA: 0x2339C38
	public float get_UserFadeOutDelay() { }

	[CompilerGenerated]
	// RVA: 0x2339C40 Offset: 0x2339C40 VA: 0x2339C40
	private void set_UserFadeOutDelay(float value) { }

	[CompilerGenerated]
	// RVA: 0x2339C48 Offset: 0x2339C48 VA: 0x2339C48
	public AnimationCurve get_SearchUserViewAnimationStartCurve() { }

	[CompilerGenerated]
	// RVA: 0x2339C50 Offset: 0x2339C50 VA: 0x2339C50
	private void set_SearchUserViewAnimationStartCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x2339C60 Offset: 0x2339C60 VA: 0x2339C60
	public float get_SearchUserViewAnimationStartDelay() { }

	[CompilerGenerated]
	// RVA: 0x2339C68 Offset: 0x2339C68 VA: 0x2339C68
	private void set_SearchUserViewAnimationStartDelay(float value) { }

	[CompilerGenerated]
	// RVA: 0x2339C70 Offset: 0x2339C70 VA: 0x2339C70
	public float get_SearchUserViewAnimationInitialScale() { }

	[CompilerGenerated]
	// RVA: 0x2339C78 Offset: 0x2339C78 VA: 0x2339C78
	private void set_SearchUserViewAnimationInitialScale(float value) { }

	[CompilerGenerated]
	// RVA: 0x2339C80 Offset: 0x2339C80 VA: 0x2339C80
	public float get_SearchUserViewScaleAnimationDuration() { }

	[CompilerGenerated]
	// RVA: 0x2339C88 Offset: 0x2339C88 VA: 0x2339C88
	private void set_SearchUserViewScaleAnimationDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x2339C90 Offset: 0x2339C90 VA: 0x2339C90
	public Vector3 get_SearchUserViewAnimationInitialPositionOffset() { }

	[CompilerGenerated]
	// RVA: 0x2339CA0 Offset: 0x2339CA0 VA: 0x2339CA0
	private void set_SearchUserViewAnimationInitialPositionOffset(Vector3 value) { }

	[CompilerGenerated]
	// RVA: 0x2339CB0 Offset: 0x2339CB0 VA: 0x2339CB0
	public AnimationCurve get_SearchUserViewAnimationScaleCurve() { }

	[CompilerGenerated]
	// RVA: 0x2339CB8 Offset: 0x2339CB8 VA: 0x2339CB8
	private void set_SearchUserViewAnimationScaleCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x2339CC8 Offset: 0x2339CC8 VA: 0x2339CC8
	public float get_SearchUserViewPositionAnimationDuration() { }

	[CompilerGenerated]
	// RVA: 0x2339CD0 Offset: 0x2339CD0 VA: 0x2339CD0
	private void set_SearchUserViewPositionAnimationDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x2339CD8 Offset: 0x2339CD8 VA: 0x2339CD8
	public AnimationCurve get_SearchUserViewAnimationPositionCurve() { }

	[CompilerGenerated]
	// RVA: 0x2339CE0 Offset: 0x2339CE0 VA: 0x2339CE0
	private void set_SearchUserViewAnimationPositionCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x2339CF0 Offset: 0x2339CF0 VA: 0x2339CF0
	public float get_SearchTextDuration() { }

	[CompilerGenerated]
	// RVA: 0x2339CF8 Offset: 0x2339CF8 VA: 0x2339CF8
	private void set_SearchTextDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x2339D00 Offset: 0x2339D00 VA: 0x2339D00
	public float get_SearchTextScale() { }

	[CompilerGenerated]
	// RVA: 0x2339D08 Offset: 0x2339D08 VA: 0x2339D08
	private void set_SearchTextScale(float value) { }

	[CompilerGenerated]
	// RVA: 0x2339D10 Offset: 0x2339D10 VA: 0x2339D10
	public AnimationCurve get_SearchTextAnimationCurve() { }

	[CompilerGenerated]
	// RVA: 0x2339D18 Offset: 0x2339D18 VA: 0x2339D18
	private void set_SearchTextAnimationCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x2339D28 Offset: 0x2339D28 VA: 0x2339D28
	public Vector3 get_UserCountScaleInTarget() { }

	[CompilerGenerated]
	// RVA: 0x2339D38 Offset: 0x2339D38 VA: 0x2339D38
	private void set_UserCountScaleInTarget(Vector3 value) { }

	[CompilerGenerated]
	// RVA: 0x2339D48 Offset: 0x2339D48 VA: 0x2339D48
	public float get_UserCountScaleInDuration() { }

	[CompilerGenerated]
	// RVA: 0x2339D50 Offset: 0x2339D50 VA: 0x2339D50
	private void set_UserCountScaleInDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x2339D58 Offset: 0x2339D58 VA: 0x2339D58
	public AnimationCurve get_UserCountScaleInCurve() { }

	[CompilerGenerated]
	// RVA: 0x2339D60 Offset: 0x2339D60 VA: 0x2339D60
	private void set_UserCountScaleInCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x2339D70 Offset: 0x2339D70 VA: 0x2339D70
	public float get_UserCountScaleOutDuration() { }

	[CompilerGenerated]
	// RVA: 0x2339D78 Offset: 0x2339D78 VA: 0x2339D78
	private void set_UserCountScaleOutDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x2339D80 Offset: 0x2339D80 VA: 0x2339D80
	public AnimationCurve get_UserCountScaleOutCurve() { }

	[CompilerGenerated]
	// RVA: 0x2339D88 Offset: 0x2339D88 VA: 0x2339D88
	private void set_UserCountScaleOutCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x2339D98 Offset: 0x2339D98 VA: 0x2339D98
	public AnimationCurve get_UserCountTextChangeCurve() { }

	[CompilerGenerated]
	// RVA: 0x2339DA0 Offset: 0x2339DA0 VA: 0x2339DA0
	private void set_UserCountTextChangeCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x2339DB0 Offset: 0x2339DB0 VA: 0x2339DB0
	public float get_UserCountTextChangeDuration() { }

	[CompilerGenerated]
	// RVA: 0x2339DB8 Offset: 0x2339DB8 VA: 0x2339DB8
	private void set_UserCountTextChangeDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x2339DC0 Offset: 0x2339DC0 VA: 0x2339DC0
	public float get_UserCountTextHitParticleTime() { }

	[CompilerGenerated]
	// RVA: 0x2339DC8 Offset: 0x2339DC8 VA: 0x2339DC8
	private void set_UserCountTextHitParticleTime(float value) { }

	[CompilerGenerated]
	// RVA: 0x2339DD0 Offset: 0x2339DD0 VA: 0x2339DD0
	public float get_StepCountTextHitParticleTime() { }

	[CompilerGenerated]
	// RVA: 0x2339DD8 Offset: 0x2339DD8 VA: 0x2339DD8
	private void set_StepCountTextHitParticleTime(float value) { }

	[CompilerGenerated]
	// RVA: 0x2339DE0 Offset: 0x2339DE0 VA: 0x2339DE0
	public Vector3 get_UserStartScale() { }

	[CompilerGenerated]
	// RVA: 0x2339DF0 Offset: 0x2339DF0 VA: 0x2339DF0
	private void set_UserStartScale(Vector3 value) { }

	[CompilerGenerated]
	// RVA: 0x2339E00 Offset: 0x2339E00 VA: 0x2339E00
	public float get_JumpXPosCutIntervalLength() { }

	[CompilerGenerated]
	// RVA: 0x2339E08 Offset: 0x2339E08 VA: 0x2339E08
	private void set_JumpXPosCutIntervalLength(float value) { }

	[CompilerGenerated]
	// RVA: 0x2339E10 Offset: 0x2339E10 VA: 0x2339E10
	public List<UserJumpValues> get_UserJumpValues() { }

	[CompilerGenerated]
	// RVA: 0x2339E18 Offset: 0x2339E18 VA: 0x2339E18
	private void set_UserJumpValues(List<UserJumpValues> value) { }

	[CompilerGenerated]
	// RVA: 0x2339E28 Offset: 0x2339E28 VA: 0x2339E28
	public float get_JumpSfxDelay() { }

	[CompilerGenerated]
	// RVA: 0x2339E30 Offset: 0x2339E30 VA: 0x2339E30
	private void set_JumpSfxDelay(float value) { }

	[CompilerGenerated]
	// RVA: 0x2339E38 Offset: 0x2339E38 VA: 0x2339E38
	public float get_FallSfxDelay() { }

	[CompilerGenerated]
	// RVA: 0x2339E40 Offset: 0x2339E40 VA: 0x2339E40
	private void set_FallSfxDelay(float value) { }

	// RVA: 0x2339E48 Offset: 0x2339E48 VA: 0x2339E48
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.SkyJumpWithStage.Scripts.UI
[Serializable]