public class BoatRushAnimationConfig : ScriptableObject // TypeDefIndex: 4843
{
	// Fields
	[SerializeField]
	[Header("Progress")]
	[CompilerGenerated]
	private float <UnseenAnimationsDelay>k__BackingField; // 0x18
	[CompilerGenerated]
	[SerializeField]
	private float <UserMoveDuration>k__BackingField; // 0x1C
	[SerializeField]
	[CompilerGenerated]
	private AnimationCurve <UserMoveCurve>k__BackingField; // 0x20
	[SerializeField]
	[CompilerGenerated]
	private float <UserWinMoveDuration>k__BackingField; // 0x28
	[CompilerGenerated]
	[SerializeField]
	private AnimationCurve <UserWinMoveCurve>k__BackingField; // 0x30
	[CompilerGenerated]
	[SerializeField]
	private float <UserWinParticleTime>k__BackingField; // 0x38
	[SerializeField]
	[CompilerGenerated]
	private float <UserWinPositionOffset>k__BackingField; // 0x3C
	[SerializeField]
	[Header("Star Appear On Stage")]
	[CompilerGenerated]
	private float <StageStarAppearDelay>k__BackingField; // 0x40
	[SerializeField]
	[CompilerGenerated]
	private List<float> <StageStarAppearedPositions>k__BackingField; // 0x48
	[SerializeField]
	[CompilerGenerated]
	private float <StageStarDisabledPositionY>k__BackingField; // 0x50
	[CompilerGenerated]
	[SerializeField]
	private float <StageStarAppearDuration>k__BackingField; // 0x54
	[CompilerGenerated]
	[SerializeField]
	private AnimationCurve <StageStarAppearCurve>k__BackingField; // 0x58
	[SerializeField]
	[CompilerGenerated]
	[Header("Tick Appear On Stage")]
	private float <IslandTickAppearDelay>k__BackingField; // 0x60
	[CompilerGenerated]
	[SerializeField]
	private float <IslandTickAppearDuration>k__BackingField; // 0x64
	[SerializeField]
	[CompilerGenerated]
	private AnimationCurve <IslandTickAppearCurve>k__BackingField; // 0x68
	[SerializeField]
	[CompilerGenerated]
	[Header("Avatar Jump")]
	private float <AvatarJumpDelay>k__BackingField; // 0x70
	[SerializeField]
	[CompilerGenerated]
	[Header("Avatar Jump By Target Island")]
	private List<BoatRushJumpConfigByIslandIndex> <AvatarJumpConfigs>k__BackingField; // 0x78
	[CompilerGenerated]
	[Header("Avatar Jump Shake Values")]
	[SerializeField]
	private float <ShakeClipDelay>k__BackingField; // 0x80
	[SerializeField]
	[CompilerGenerated]
	[Header("Claim View")]
	[Header("Claim Sequence")]
	private float <ClaimButtonAppearDelay>k__BackingField; // 0x84
	[SerializeField]
	[CompilerGenerated]
	private float <ClaimButtonAppearDuration>k__BackingField; // 0x88
	[SerializeField]
	[CompilerGenerated]
	private AnimationCurve <ClaimButtonAppearCurve>k__BackingField; // 0x90
	[CompilerGenerated]
	[SerializeField]
	private float <ClaimButtonDisappearDelay>k__BackingField; // 0x98
	[CompilerGenerated]
	[SerializeField]
	private float <ClaimButtonDisappearDuration>k__BackingField; // 0x9C
	[CompilerGenerated]
	[SerializeField]
	private AnimationCurve <ClaimButtonDisappearCurve>k__BackingField; // 0xA0
	[SerializeField]
	[CompilerGenerated]
	[Header("Moving Medal Bezier Values")]
	private float <MedalFlyToProgressBarDuration>k__BackingField; // 0xA8
	[SerializeField]
	[CompilerGenerated]
	private AnimationCurve <MedalFlyToProgressBarCurve>k__BackingField; // 0xB0
	[SerializeField]
	[CompilerGenerated]
	private AnimationCurve <MedalScaleCurve>k__BackingField; // 0xB8
	[CompilerGenerated]
	[SerializeField]
	private Vector3 <MedalMiddleOffset>k__BackingField; // 0xC0
	[SerializeField]
	[CompilerGenerated]
	private Vector3 <MedalAPoint>k__BackingField; // 0xCC
	[CompilerGenerated]
	[SerializeField]
	private Vector3 <MedalBPoint>k__BackingField; // 0xD8
	[SerializeField]
	[CompilerGenerated]
	private Vector3 <MedalCPoint>k__BackingField; // 0xE4
	[CompilerGenerated]
	[SerializeField]
	private Vector3 <MedalDPoint>k__BackingField; // 0xF0
	[Header("Progress Bar Fill")]
	[CompilerGenerated]
	[SerializeField]
	private float <DelayBeforeProgressBarAnimation>k__BackingField; // 0xFC
	[CompilerGenerated]
	[SerializeField]
	private AnimationCurve <ProgressBarFillCurve>k__BackingField; // 0x100
	[CompilerGenerated]
	[SerializeField]
	private Vector2 <ProgressBarMinMaxFillValue>k__BackingField; // 0x108
	[SerializeField]
	[CompilerGenerated]
	private float <ProgressBarFullWidth>k__BackingField; // 0x110
	[CompilerGenerated]
	[SerializeField]
	private float <ProgressBarFillDuration>k__BackingField; // 0x114
	[SerializeField]
	[CompilerGenerated]
	private float <ProgressBarAppearDelay>k__BackingField; // 0x118
	[SerializeField]
	[Header("Progress Bar Appear & Disappear")]
	[CompilerGenerated]
	private float <ProgressBarAppearDuration>k__BackingField; // 0x11C
	[SerializeField]
	[CompilerGenerated]
	private AnimationCurve <ProgressBarAppearCurve>k__BackingField; // 0x120
	[SerializeField]
	[CompilerGenerated]
	private float <ProgressBarDisappearDuration>k__BackingField; // 0x128
	[SerializeField]
	[CompilerGenerated]
	private AnimationCurve <ProgressBarDisappearCurve>k__BackingField; // 0x130
	[SerializeField]
	[CompilerGenerated]
	private float <ProgressBarDisappearDelay>k__BackingField; // 0x138
	[CompilerGenerated]
	[Header("Progress Bar Hit")]
	[SerializeField]
	private float <CurrencyShrinkScale>k__BackingField; // 0x13C
	[CompilerGenerated]
	[SerializeField]
	private float <CurrencyShrinkDuration>k__BackingField; // 0x140
	[CompilerGenerated]
	[SerializeField]
	private AnimationCurve <CurrencyShrinkCurve>k__BackingField; // 0x148
	[CompilerGenerated]
	[SerializeField]
	private float <CurrencyExpandScale>k__BackingField; // 0x150
	[CompilerGenerated]
	[SerializeField]
	private float <CurrencyExpandDuration>k__BackingField; // 0x154
	[CompilerGenerated]
	[SerializeField]
	private AnimationCurve <CurrencyExpandCurve>k__BackingField; // 0x158

	// Properties
	public float UnseenAnimationsDelay { get; set; }
	public float UserMoveDuration { get; set; }
	public AnimationCurve UserMoveCurve { get; set; }
	public float UserWinMoveDuration { get; set; }
	public AnimationCurve UserWinMoveCurve { get; set; }
	public float UserWinParticleTime { get; set; }
	public float UserWinPositionOffset { get; set; }
	public float StageStarAppearDelay { get; set; }
	public List<float> StageStarAppearedPositions { get; set; }
	public float StageStarDisabledPositionY { get; set; }
	public float StageStarAppearDuration { get; set; }
	public AnimationCurve StageStarAppearCurve { get; set; }
	public float IslandTickAppearDelay { get; set; }
	public float IslandTickAppearDuration { get; set; }
	public AnimationCurve IslandTickAppearCurve { get; set; }
	public float AvatarJumpDelay { get; set; }
	public List<BoatRushJumpConfigByIslandIndex> AvatarJumpConfigs { get; set; }
	public float ShakeClipDelay { get; set; }
	public float ClaimButtonAppearDelay { get; set; }
	public float ClaimButtonAppearDuration { get; set; }
	public AnimationCurve ClaimButtonAppearCurve { get; set; }
	public float ClaimButtonDisappearDelay { get; set; }
	public float ClaimButtonDisappearDuration { get; set; }
	public AnimationCurve ClaimButtonDisappearCurve { get; set; }
	public float MedalFlyToProgressBarDuration { get; set; }
	public AnimationCurve MedalFlyToProgressBarCurve { get; set; }
	public AnimationCurve MedalScaleCurve { get; set; }
	public Vector3 MedalMiddleOffset { get; set; }
	public Vector3 MedalAPoint { get; set; }
	public Vector3 MedalBPoint { get; set; }
	public Vector3 MedalCPoint { get; set; }
	public Vector3 MedalDPoint { get; set; }
	public float DelayBeforeProgressBarAnimation { get; set; }
	public AnimationCurve ProgressBarFillCurve { get; set; }
	public Vector2 ProgressBarMinMaxFillValue { get; set; }
	public float ProgressBarFullWidth { get; set; }
	public float ProgressBarFillDuration { get; set; }
	public float ProgressBarAppearDelay { get; set; }
	public float ProgressBarAppearDuration { get; set; }
	public AnimationCurve ProgressBarAppearCurve { get; set; }
	public float ProgressBarDisappearDuration { get; set; }
	public AnimationCurve ProgressBarDisappearCurve { get; set; }
	public float ProgressBarDisappearDelay { get; set; }
	public float CurrencyShrinkScale { get; set; }
	public float CurrencyShrinkDuration { get; set; }
	public AnimationCurve CurrencyShrinkCurve { get; set; }
	public float CurrencyExpandScale { get; set; }
	public float CurrencyExpandDuration { get; set; }
	public AnimationCurve CurrencyExpandCurve { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x40F53A0 Offset: 0x40F53A0 VA: 0x40F53A0
	public float get_UnseenAnimationsDelay() { }

	[CompilerGenerated]
	// RVA: 0x40F53A8 Offset: 0x40F53A8 VA: 0x40F53A8
	public void set_UnseenAnimationsDelay(float value) { }

	[CompilerGenerated]
	// RVA: 0x40F53B0 Offset: 0x40F53B0 VA: 0x40F53B0
	public float get_UserMoveDuration() { }

	[CompilerGenerated]
	// RVA: 0x40F53B8 Offset: 0x40F53B8 VA: 0x40F53B8
	public void set_UserMoveDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x40F53C0 Offset: 0x40F53C0 VA: 0x40F53C0
	public AnimationCurve get_UserMoveCurve() { }

	[CompilerGenerated]
	// RVA: 0x40F53C8 Offset: 0x40F53C8 VA: 0x40F53C8
	public void set_UserMoveCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x40F53D0 Offset: 0x40F53D0 VA: 0x40F53D0
	public float get_UserWinMoveDuration() { }

	[CompilerGenerated]
	// RVA: 0x40F53D8 Offset: 0x40F53D8 VA: 0x40F53D8
	public void set_UserWinMoveDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x40F53E0 Offset: 0x40F53E0 VA: 0x40F53E0
	public AnimationCurve get_UserWinMoveCurve() { }

	[CompilerGenerated]
	// RVA: 0x40F53E8 Offset: 0x40F53E8 VA: 0x40F53E8
	public void set_UserWinMoveCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x40F53F0 Offset: 0x40F53F0 VA: 0x40F53F0
	public float get_UserWinParticleTime() { }

	[CompilerGenerated]
	// RVA: 0x40F53F8 Offset: 0x40F53F8 VA: 0x40F53F8
	public void set_UserWinParticleTime(float value) { }

	[CompilerGenerated]
	// RVA: 0x40F5400 Offset: 0x40F5400 VA: 0x40F5400
	public float get_UserWinPositionOffset() { }

	[CompilerGenerated]
	// RVA: 0x40F5408 Offset: 0x40F5408 VA: 0x40F5408
	public void set_UserWinPositionOffset(float value) { }

	[CompilerGenerated]
	// RVA: 0x40F5410 Offset: 0x40F5410 VA: 0x40F5410
	public float get_StageStarAppearDelay() { }

	[CompilerGenerated]
	// RVA: 0x40F5418 Offset: 0x40F5418 VA: 0x40F5418
	public void set_StageStarAppearDelay(float value) { }

	[CompilerGenerated]
	// RVA: 0x40F5420 Offset: 0x40F5420 VA: 0x40F5420
	public List<float> get_StageStarAppearedPositions() { }

	[CompilerGenerated]
	// RVA: 0x40F5428 Offset: 0x40F5428 VA: 0x40F5428
	public void set_StageStarAppearedPositions(List<float> value) { }

	[CompilerGenerated]
	// RVA: 0x40F5430 Offset: 0x40F5430 VA: 0x40F5430
	public float get_StageStarDisabledPositionY() { }

	[CompilerGenerated]
	// RVA: 0x40F5438 Offset: 0x40F5438 VA: 0x40F5438
	public void set_StageStarDisabledPositionY(float value) { }

	[CompilerGenerated]
	// RVA: 0x40F5440 Offset: 0x40F5440 VA: 0x40F5440
	public float get_StageStarAppearDuration() { }

	[CompilerGenerated]
	// RVA: 0x40F5448 Offset: 0x40F5448 VA: 0x40F5448
	public void set_StageStarAppearDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x40F5450 Offset: 0x40F5450 VA: 0x40F5450
	public AnimationCurve get_StageStarAppearCurve() { }

	[CompilerGenerated]
	// RVA: 0x40F5458 Offset: 0x40F5458 VA: 0x40F5458
	public void set_StageStarAppearCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x40F5460 Offset: 0x40F5460 VA: 0x40F5460
	public float get_IslandTickAppearDelay() { }

	[CompilerGenerated]
	// RVA: 0x40F5468 Offset: 0x40F5468 VA: 0x40F5468
	public void set_IslandTickAppearDelay(float value) { }

	[CompilerGenerated]
	// RVA: 0x40F5470 Offset: 0x40F5470 VA: 0x40F5470
	public float get_IslandTickAppearDuration() { }

	[CompilerGenerated]
	// RVA: 0x40F5478 Offset: 0x40F5478 VA: 0x40F5478
	public void set_IslandTickAppearDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x40F5480 Offset: 0x40F5480 VA: 0x40F5480
	public AnimationCurve get_IslandTickAppearCurve() { }

	[CompilerGenerated]
	// RVA: 0x40F5488 Offset: 0x40F5488 VA: 0x40F5488
	public void set_IslandTickAppearCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x40F5490 Offset: 0x40F5490 VA: 0x40F5490
	public float get_AvatarJumpDelay() { }

	[CompilerGenerated]
	// RVA: 0x40F5498 Offset: 0x40F5498 VA: 0x40F5498
	public void set_AvatarJumpDelay(float value) { }

	[CompilerGenerated]
	// RVA: 0x40F54A0 Offset: 0x40F54A0 VA: 0x40F54A0
	public List<BoatRushJumpConfigByIslandIndex> get_AvatarJumpConfigs() { }

	[CompilerGenerated]
	// RVA: 0x40F54A8 Offset: 0x40F54A8 VA: 0x40F54A8
	public void set_AvatarJumpConfigs(List<BoatRushJumpConfigByIslandIndex> value) { }

	[CompilerGenerated]
	// RVA: 0x40F54B0 Offset: 0x40F54B0 VA: 0x40F54B0
	public float get_ShakeClipDelay() { }

	[CompilerGenerated]
	// RVA: 0x40F54B8 Offset: 0x40F54B8 VA: 0x40F54B8
	public void set_ShakeClipDelay(float value) { }

	[CompilerGenerated]
	// RVA: 0x40F54C0 Offset: 0x40F54C0 VA: 0x40F54C0
	public float get_ClaimButtonAppearDelay() { }

	[CompilerGenerated]
	// RVA: 0x40F54C8 Offset: 0x40F54C8 VA: 0x40F54C8
	public void set_ClaimButtonAppearDelay(float value) { }

	[CompilerGenerated]
	// RVA: 0x40F54D0 Offset: 0x40F54D0 VA: 0x40F54D0
	public float get_ClaimButtonAppearDuration() { }

	[CompilerGenerated]
	// RVA: 0x40F54D8 Offset: 0x40F54D8 VA: 0x40F54D8
	public void set_ClaimButtonAppearDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x40F54E0 Offset: 0x40F54E0 VA: 0x40F54E0
	public AnimationCurve get_ClaimButtonAppearCurve() { }

	[CompilerGenerated]
	// RVA: 0x40F54E8 Offset: 0x40F54E8 VA: 0x40F54E8
	public void set_ClaimButtonAppearCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x40F54F0 Offset: 0x40F54F0 VA: 0x40F54F0
	public float get_ClaimButtonDisappearDelay() { }

	[CompilerGenerated]
	// RVA: 0x40F54F8 Offset: 0x40F54F8 VA: 0x40F54F8
	public void set_ClaimButtonDisappearDelay(float value) { }

	[CompilerGenerated]
	// RVA: 0x40F5500 Offset: 0x40F5500 VA: 0x40F5500
	public float get_ClaimButtonDisappearDuration() { }

	[CompilerGenerated]
	// RVA: 0x40F5508 Offset: 0x40F5508 VA: 0x40F5508
	public void set_ClaimButtonDisappearDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x40F5510 Offset: 0x40F5510 VA: 0x40F5510
	public AnimationCurve get_ClaimButtonDisappearCurve() { }

	[CompilerGenerated]
	// RVA: 0x40F5518 Offset: 0x40F5518 VA: 0x40F5518
	public void set_ClaimButtonDisappearCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x40F5520 Offset: 0x40F5520 VA: 0x40F5520
	public float get_MedalFlyToProgressBarDuration() { }

	[CompilerGenerated]
	// RVA: 0x40F5528 Offset: 0x40F5528 VA: 0x40F5528
	public void set_MedalFlyToProgressBarDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x40F5530 Offset: 0x40F5530 VA: 0x40F5530
	public AnimationCurve get_MedalFlyToProgressBarCurve() { }

	[CompilerGenerated]
	// RVA: 0x40F5538 Offset: 0x40F5538 VA: 0x40F5538
	public void set_MedalFlyToProgressBarCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x40F5540 Offset: 0x40F5540 VA: 0x40F5540
	public AnimationCurve get_MedalScaleCurve() { }

	[CompilerGenerated]
	// RVA: 0x40F5548 Offset: 0x40F5548 VA: 0x40F5548
	public void set_MedalScaleCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x40F5550 Offset: 0x40F5550 VA: 0x40F5550
	public Vector3 get_MedalMiddleOffset() { }

	[CompilerGenerated]
	// RVA: 0x40F555C Offset: 0x40F555C VA: 0x40F555C
	public void set_MedalMiddleOffset(Vector3 value) { }

	[CompilerGenerated]
	// RVA: 0x40F5568 Offset: 0x40F5568 VA: 0x40F5568
	public Vector3 get_MedalAPoint() { }

	[CompilerGenerated]
	// RVA: 0x40F5574 Offset: 0x40F5574 VA: 0x40F5574
	public void set_MedalAPoint(Vector3 value) { }

	[CompilerGenerated]
	// RVA: 0x40F5580 Offset: 0x40F5580 VA: 0x40F5580
	public Vector3 get_MedalBPoint() { }

	[CompilerGenerated]
	// RVA: 0x40F558C Offset: 0x40F558C VA: 0x40F558C
	public void set_MedalBPoint(Vector3 value) { }

	[CompilerGenerated]
	// RVA: 0x40F5598 Offset: 0x40F5598 VA: 0x40F5598
	public Vector3 get_MedalCPoint() { }

	[CompilerGenerated]
	// RVA: 0x40F55A4 Offset: 0x40F55A4 VA: 0x40F55A4
	public void set_MedalCPoint(Vector3 value) { }

	[CompilerGenerated]
	// RVA: 0x40F55B0 Offset: 0x40F55B0 VA: 0x40F55B0
	public Vector3 get_MedalDPoint() { }

	[CompilerGenerated]
	// RVA: 0x40F55BC Offset: 0x40F55BC VA: 0x40F55BC
	public void set_MedalDPoint(Vector3 value) { }

	[CompilerGenerated]
	// RVA: 0x40F55C8 Offset: 0x40F55C8 VA: 0x40F55C8
	public float get_DelayBeforeProgressBarAnimation() { }

	[CompilerGenerated]
	// RVA: 0x40F55D0 Offset: 0x40F55D0 VA: 0x40F55D0
	public void set_DelayBeforeProgressBarAnimation(float value) { }

	[CompilerGenerated]
	// RVA: 0x40F55D8 Offset: 0x40F55D8 VA: 0x40F55D8
	public AnimationCurve get_ProgressBarFillCurve() { }

	[CompilerGenerated]
	// RVA: 0x40F55E0 Offset: 0x40F55E0 VA: 0x40F55E0
	public void set_ProgressBarFillCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x40F55F0 Offset: 0x40F55F0 VA: 0x40F55F0
	public Vector2 get_ProgressBarMinMaxFillValue() { }

	[CompilerGenerated]
	// RVA: 0x40F55FC Offset: 0x40F55FC VA: 0x40F55FC
	private void set_ProgressBarMinMaxFillValue(Vector2 value) { }

	[CompilerGenerated]
	// RVA: 0x40F5608 Offset: 0x40F5608 VA: 0x40F5608
	public float get_ProgressBarFullWidth() { }

	[CompilerGenerated]
	// RVA: 0x40F5610 Offset: 0x40F5610 VA: 0x40F5610
	private void set_ProgressBarFullWidth(float value) { }

	[CompilerGenerated]
	// RVA: 0x40F5618 Offset: 0x40F5618 VA: 0x40F5618
	public float get_ProgressBarFillDuration() { }

	[CompilerGenerated]
	// RVA: 0x40F5620 Offset: 0x40F5620 VA: 0x40F5620
	public void set_ProgressBarFillDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x40F5628 Offset: 0x40F5628 VA: 0x40F5628
	public float get_ProgressBarAppearDelay() { }

	[CompilerGenerated]
	// RVA: 0x40F5630 Offset: 0x40F5630 VA: 0x40F5630
	public void set_ProgressBarAppearDelay(float value) { }

	[CompilerGenerated]
	// RVA: 0x40F5638 Offset: 0x40F5638 VA: 0x40F5638
	public float get_ProgressBarAppearDuration() { }

	[CompilerGenerated]
	// RVA: 0x40F5640 Offset: 0x40F5640 VA: 0x40F5640
	public void set_ProgressBarAppearDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x40F5648 Offset: 0x40F5648 VA: 0x40F5648
	public AnimationCurve get_ProgressBarAppearCurve() { }

	[CompilerGenerated]
	// RVA: 0x40F5650 Offset: 0x40F5650 VA: 0x40F5650
	public void set_ProgressBarAppearCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x40F5660 Offset: 0x40F5660 VA: 0x40F5660
	public float get_ProgressBarDisappearDuration() { }

	[CompilerGenerated]
	// RVA: 0x40F5668 Offset: 0x40F5668 VA: 0x40F5668
	public void set_ProgressBarDisappearDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x40F5670 Offset: 0x40F5670 VA: 0x40F5670
	public AnimationCurve get_ProgressBarDisappearCurve() { }

	[CompilerGenerated]
	// RVA: 0x40F5678 Offset: 0x40F5678 VA: 0x40F5678
	public void set_ProgressBarDisappearCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x40F5688 Offset: 0x40F5688 VA: 0x40F5688
	public float get_ProgressBarDisappearDelay() { }

	[CompilerGenerated]
	// RVA: 0x40F5690 Offset: 0x40F5690 VA: 0x40F5690
	public void set_ProgressBarDisappearDelay(float value) { }

	[CompilerGenerated]
	// RVA: 0x40F5698 Offset: 0x40F5698 VA: 0x40F5698
	public float get_CurrencyShrinkScale() { }

	[CompilerGenerated]
	// RVA: 0x40F56A0 Offset: 0x40F56A0 VA: 0x40F56A0
	public void set_CurrencyShrinkScale(float value) { }

	[CompilerGenerated]
	// RVA: 0x40F56A8 Offset: 0x40F56A8 VA: 0x40F56A8
	public float get_CurrencyShrinkDuration() { }

	[CompilerGenerated]
	// RVA: 0x40F56B0 Offset: 0x40F56B0 VA: 0x40F56B0
	public void set_CurrencyShrinkDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x40F56B8 Offset: 0x40F56B8 VA: 0x40F56B8
	public AnimationCurve get_CurrencyShrinkCurve() { }

	[CompilerGenerated]
	// RVA: 0x40F56C0 Offset: 0x40F56C0 VA: 0x40F56C0
	public void set_CurrencyShrinkCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x40F56D0 Offset: 0x40F56D0 VA: 0x40F56D0
	public float get_CurrencyExpandScale() { }

	[CompilerGenerated]
	// RVA: 0x40F56D8 Offset: 0x40F56D8 VA: 0x40F56D8
	public void set_CurrencyExpandScale(float value) { }

	[CompilerGenerated]
	// RVA: 0x40F56E0 Offset: 0x40F56E0 VA: 0x40F56E0
	public float get_CurrencyExpandDuration() { }

	[CompilerGenerated]
	// RVA: 0x40F56E8 Offset: 0x40F56E8 VA: 0x40F56E8
	public void set_CurrencyExpandDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x40F56F0 Offset: 0x40F56F0 VA: 0x40F56F0
	public AnimationCurve get_CurrencyExpandCurve() { }

	[CompilerGenerated]
	// RVA: 0x40F56F8 Offset: 0x40F56F8 VA: 0x40F56F8
	public void set_CurrencyExpandCurve(AnimationCurve value) { }

	// RVA: 0x40F5708 Offset: 0x40F5708 VA: 0x40F5708
	public BoatRushJumpConfigByIslandIndex GetJumpConfigByIslandIndex(int islandIndex) { }

	// RVA: 0x40F57B8 Offset: 0x40F57B8 VA: 0x40F57B8
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.BoatRush.Scripts.UI
[Serializable]