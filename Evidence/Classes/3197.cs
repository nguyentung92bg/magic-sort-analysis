public class TreasureDrillAnimationConfig : ScriptableObject // TypeDefIndex: 3197
{
	// Fields
	[SerializeField]
	[CompilerGenerated]
	private float <DrillStepSize>k__BackingField; // 0x18
	[CompilerGenerated]
	[SerializeField]
	private float <DelayBeforeDrillAnimation>k__BackingField; // 0x1C
	[CompilerGenerated]
	[SerializeField]
	private float <DelayBeforeProgressBarAnimation>k__BackingField; // 0x20
	[CompilerGenerated]
	[SerializeField]
	private float <DrillAnimationStepPassDuration>k__BackingField; // 0x24
	[CompilerGenerated]
	[SerializeField]
	private float <StepThresholdCap>k__BackingField; // 0x28
	[CompilerGenerated]
	[SerializeField]
	private float <ProgressBarAnimationDuration>k__BackingField; // 0x2C
	[SerializeField]
	[CompilerGenerated]
	private AnimationCurve <ProgressBarFillCurve>k__BackingField; // 0x30
	[SerializeField]
	[CompilerGenerated]
	private Vector3 <LockTopStartPosition>k__BackingField; // 0x38
	[CompilerGenerated]
	[SerializeField]
	private Vector3 <LockParentStartPosition>k__BackingField; // 0x44
	[SerializeField]
	[CompilerGenerated]
	private float <LockAnimationStartDelay>k__BackingField; // 0x50
	[SerializeField]
	[CompilerGenerated]
	private float <LockBounceHeight>k__BackingField; // 0x54
	[SerializeField]
	[CompilerGenerated]
	private float <LockAnimationDelayAfterParticle>k__BackingField; // 0x58
	[CompilerGenerated]
	[SerializeField]
	private float <LockBounceDuration>k__BackingField; // 0x5C
	[SerializeField]
	[CompilerGenerated]
	private AnimationCurve <LockBounceEase>k__BackingField; // 0x60
	[CompilerGenerated]
	[SerializeField]
	private float <LockOpenAngle>k__BackingField; // 0x68
	[SerializeField]
	[CompilerGenerated]
	private AnimationCurve <LockUnLockEase>k__BackingField; // 0x70
	[CompilerGenerated]
	[SerializeField]
	private float <LockTopMoveOffsetX>k__BackingField; // 0x78
	[CompilerGenerated]
	[SerializeField]
	private float <LockTopMoveOffsetY>k__BackingField; // 0x7C
	[CompilerGenerated]
	[SerializeField]
	private AnimationCurve <LockTopMoveEase>k__BackingField; // 0x80
	[SerializeField]
	[CompilerGenerated]
	private float <LockFallDistance>k__BackingField; // 0x88
	[SerializeField]
	[CompilerGenerated]
	private float <LockFallDuration>k__BackingField; // 0x8C
	[SerializeField]
	[CompilerGenerated]
	private AnimationCurve <LockFallAnimationCurve>k__BackingField; // 0x90
	[SerializeField]
	[CompilerGenerated]
	private float <LockParticleAnimationDelay>k__BackingField; // 0x98
	[SerializeField]
	[CompilerGenerated]
	private float <LockBounceSideDistance>k__BackingField; // 0x9C
	[SerializeField]
	[CompilerGenerated]
	private float <LockParentRotationAngle>k__BackingField; // 0xA0
	[CompilerGenerated]
	[SerializeField]
	private AnimationCurve <LockParentRotationAngleEase>k__BackingField; // 0xA8
	[SerializeField]
	[CompilerGenerated]
	private Vector3 <TickSmallestScale>k__BackingField; // 0xB0
	[CompilerGenerated]
	[SerializeField]
	private float <TickScaleTime>k__BackingField; // 0xBC
	[SerializeField]
	[CompilerGenerated]
	private float <TickScaleUpDuration>k__BackingField; // 0xC0
	[SerializeField]
	[CompilerGenerated]
	private AnimationCurve <TickScaleUpAnimationCurve>k__BackingField; // 0xC8
	[CompilerGenerated]
	[SerializeField]
	private float <TickParticleAnimationDelay>k__BackingField; // 0xD0
	[CompilerGenerated]
	[SerializeField]
	private float <RevealAnimationDelay>k__BackingField; // 0xD4
	[CompilerGenerated]
	[SerializeField]
	private float <TickAnimationDelay>k__BackingField; // 0xD8
	[CompilerGenerated]
	[SerializeField]
	private AnimationCurve <ProgressAnimationCurve>k__BackingField; // 0xE0
	[SerializeField]
	[CompilerGenerated]
	private Vector3 <BuyButtonTargetScale>k__BackingField; // 0xE8
	[CompilerGenerated]
	[SerializeField]
	private float <BuyButtonScaleDuration>k__BackingField; // 0xF4
	[CompilerGenerated]
	[SerializeField]
	private float <PurchaseWarningTextStartYPosition>k__BackingField; // 0xF8
	[SerializeField]
	public Color CompletedInfoTextOnClaimedColor; // 0xFC
	[SerializeField]
	public Color CompletedInfoTextOnClaimableColor; // 0x10C
	[SerializeField]
	[CompilerGenerated]
	[Header("Are You Sure Offer")]
	private Vector3 <TickFromScale>k__BackingField; // 0x11C
	[CompilerGenerated]
	[SerializeField]
	private float <ButtonScaleStart>k__BackingField; // 0x128
	[SerializeField]
	[CompilerGenerated]
	private float <ButtonScaleDuration>k__BackingField; // 0x12C
	[CompilerGenerated]
	[SerializeField]
	private AnimationCurve <ButtonScaleCurve>k__BackingField; // 0x130
	[CompilerGenerated]
	[SerializeField]
	private Vector3 <ButtonFromScale>k__BackingField; // 0x138
	[SerializeField]
	[CompilerGenerated]
	private Vector3 <ButtonToScale>k__BackingField; // 0x144
	[CompilerGenerated]
	[SerializeField]
	private float <TickScaleStart>k__BackingField; // 0x150
	[CompilerGenerated]
	[SerializeField]
	private float <TickScaleDuration>k__BackingField; // 0x154
	[CompilerGenerated]
	[SerializeField]
	private AnimationCurve <TickScaleCurve>k__BackingField; // 0x158
	[SerializeField]
	[CompilerGenerated]
	private Vector3 <TickToScale>k__BackingField; // 0x160
	[SerializeField]
	[CompilerGenerated]
	private float <TickParticleDelay>k__BackingField; // 0x16C
	[SerializeField]
	[CompilerGenerated]
	private float <ContainerScaleDelay>k__BackingField; // 0x170
	[CompilerGenerated]
	[SerializeField]
	private float <ContainerScaleDuration>k__BackingField; // 0x174
	[CompilerGenerated]
	[SerializeField]
	private AnimationCurve <ContainerScaleCurve>k__BackingField; // 0x178
	[CompilerGenerated]
	[SerializeField]
	private Vector3 <ContainerFromScale>k__BackingField; // 0x180
	[CompilerGenerated]
	[SerializeField]
	private Vector3 <ContainerToScale>k__BackingField; // 0x18C

	// Properties
	public float DrillStepSize { get; set; }
	public float DelayBeforeDrillAnimation { get; set; }
	public float DelayBeforeProgressBarAnimation { get; set; }
	public float DrillAnimationStepPassDuration { get; set; }
	public float StepThresholdCap { get; set; }
	public float ProgressBarAnimationDuration { get; set; }
	public AnimationCurve ProgressBarFillCurve { get; set; }
	public Vector3 LockTopStartPosition { get; set; }
	public Vector3 LockParentStartPosition { get; set; }
	public float LockAnimationStartDelay { get; set; }
	public float LockBounceHeight { get; set; }
	public float LockAnimationDelayAfterParticle { get; set; }
	public float LockBounceDuration { get; set; }
	public AnimationCurve LockBounceEase { get; set; }
	public float LockOpenAngle { get; set; }
	public AnimationCurve LockUnLockEase { get; set; }
	public float LockTopMoveOffsetX { get; set; }
	public float LockTopMoveOffsetY { get; set; }
	public AnimationCurve LockTopMoveEase { get; set; }
	public float LockFallDistance { get; set; }
	public float LockFallDuration { get; set; }
	public AnimationCurve LockFallAnimationCurve { get; set; }
	public float LockParticleAnimationDelay { get; set; }
	public float LockBounceSideDistance { get; set; }
	public float LockParentRotationAngle { get; set; }
	public AnimationCurve LockParentRotationAngleEase { get; set; }
	public Vector3 TickSmallestScale { get; set; }
	public float TickScaleTime { get; set; }
	public float TickScaleUpDuration { get; set; }
	public AnimationCurve TickScaleUpAnimationCurve { get; set; }
	public float TickParticleAnimationDelay { get; set; }
	public float RevealAnimationDelay { get; set; }
	public float TickAnimationDelay { get; set; }
	public AnimationCurve ProgressAnimationCurve { get; set; }
	public Vector3 BuyButtonTargetScale { get; set; }
	public float BuyButtonScaleDuration { get; set; }
	public float PurchaseWarningTextStartYPosition { get; set; }
	public Vector3 TickFromScale { get; set; }
	public float ButtonScaleStart { get; set; }
	public float ButtonScaleDuration { get; set; }
	public AnimationCurve ButtonScaleCurve { get; set; }
	public Vector3 ButtonFromScale { get; set; }
	public Vector3 ButtonToScale { get; set; }
	public float TickScaleStart { get; set; }
	public float TickScaleDuration { get; set; }
	public AnimationCurve TickScaleCurve { get; set; }
	public Vector3 TickToScale { get; set; }
	public float TickParticleDelay { get; set; }
	public float ContainerScaleDelay { get; set; }
	public float ContainerScaleDuration { get; set; }
	public AnimationCurve ContainerScaleCurve { get; set; }
	public Vector3 ContainerFromScale { get; set; }
	public Vector3 ContainerToScale { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x3306E44 Offset: 0x3306E44 VA: 0x3306E44
	public float get_DrillStepSize() { }

	[CompilerGenerated]
	// RVA: 0x3306E4C Offset: 0x3306E4C VA: 0x3306E4C
	public void set_DrillStepSize(float value) { }

	[CompilerGenerated]
	// RVA: 0x3306E54 Offset: 0x3306E54 VA: 0x3306E54
	public float get_DelayBeforeDrillAnimation() { }

	[CompilerGenerated]
	// RVA: 0x3306E5C Offset: 0x3306E5C VA: 0x3306E5C
	public void set_DelayBeforeDrillAnimation(float value) { }

	[CompilerGenerated]
	// RVA: 0x3306E64 Offset: 0x3306E64 VA: 0x3306E64
	public float get_DelayBeforeProgressBarAnimation() { }

	[CompilerGenerated]
	// RVA: 0x3306E6C Offset: 0x3306E6C VA: 0x3306E6C
	public void set_DelayBeforeProgressBarAnimation(float value) { }

	[CompilerGenerated]
	// RVA: 0x3306E74 Offset: 0x3306E74 VA: 0x3306E74
	public float get_DrillAnimationStepPassDuration() { }

	[CompilerGenerated]
	// RVA: 0x3306E7C Offset: 0x3306E7C VA: 0x3306E7C
	public void set_DrillAnimationStepPassDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x3306E84 Offset: 0x3306E84 VA: 0x3306E84
	public float get_StepThresholdCap() { }

	[CompilerGenerated]
	// RVA: 0x3306E8C Offset: 0x3306E8C VA: 0x3306E8C
	public void set_StepThresholdCap(float value) { }

	[CompilerGenerated]
	// RVA: 0x3306E94 Offset: 0x3306E94 VA: 0x3306E94
	public float get_ProgressBarAnimationDuration() { }

	[CompilerGenerated]
	// RVA: 0x3306E9C Offset: 0x3306E9C VA: 0x3306E9C
	public void set_ProgressBarAnimationDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x3306EA4 Offset: 0x3306EA4 VA: 0x3306EA4
	public AnimationCurve get_ProgressBarFillCurve() { }

	[CompilerGenerated]
	// RVA: 0x3306EAC Offset: 0x3306EAC VA: 0x3306EAC
	public void set_ProgressBarFillCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x3306EB4 Offset: 0x3306EB4 VA: 0x3306EB4
	public Vector3 get_LockTopStartPosition() { }

	[CompilerGenerated]
	// RVA: 0x3306EC0 Offset: 0x3306EC0 VA: 0x3306EC0
	public void set_LockTopStartPosition(Vector3 value) { }

	[CompilerGenerated]
	// RVA: 0x3306ECC Offset: 0x3306ECC VA: 0x3306ECC
	public Vector3 get_LockParentStartPosition() { }

	[CompilerGenerated]
	// RVA: 0x3306ED8 Offset: 0x3306ED8 VA: 0x3306ED8
	public void set_LockParentStartPosition(Vector3 value) { }

	[CompilerGenerated]
	// RVA: 0x3306EE4 Offset: 0x3306EE4 VA: 0x3306EE4
	public float get_LockAnimationStartDelay() { }

	[CompilerGenerated]
	// RVA: 0x3306EEC Offset: 0x3306EEC VA: 0x3306EEC
	public void set_LockAnimationStartDelay(float value) { }

	[CompilerGenerated]
	// RVA: 0x3306EF4 Offset: 0x3306EF4 VA: 0x3306EF4
	public float get_LockBounceHeight() { }

	[CompilerGenerated]
	// RVA: 0x3306EFC Offset: 0x3306EFC VA: 0x3306EFC
	public void set_LockBounceHeight(float value) { }

	[CompilerGenerated]
	// RVA: 0x3306F04 Offset: 0x3306F04 VA: 0x3306F04
	public float get_LockAnimationDelayAfterParticle() { }

	[CompilerGenerated]
	// RVA: 0x3306F0C Offset: 0x3306F0C VA: 0x3306F0C
	public void set_LockAnimationDelayAfterParticle(float value) { }

	[CompilerGenerated]
	// RVA: 0x3306F14 Offset: 0x3306F14 VA: 0x3306F14
	public float get_LockBounceDuration() { }

	[CompilerGenerated]
	// RVA: 0x3306F1C Offset: 0x3306F1C VA: 0x3306F1C
	public void set_LockBounceDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x3306F24 Offset: 0x3306F24 VA: 0x3306F24
	public AnimationCurve get_LockBounceEase() { }

	[CompilerGenerated]
	// RVA: 0x3306F2C Offset: 0x3306F2C VA: 0x3306F2C
	public void set_LockBounceEase(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x3306F34 Offset: 0x3306F34 VA: 0x3306F34
	public float get_LockOpenAngle() { }

	[CompilerGenerated]
	// RVA: 0x3306F3C Offset: 0x3306F3C VA: 0x3306F3C
	public void set_LockOpenAngle(float value) { }

	[CompilerGenerated]
	// RVA: 0x3306F44 Offset: 0x3306F44 VA: 0x3306F44
	public AnimationCurve get_LockUnLockEase() { }

	[CompilerGenerated]
	// RVA: 0x3306F4C Offset: 0x3306F4C VA: 0x3306F4C
	public void set_LockUnLockEase(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x3306F54 Offset: 0x3306F54 VA: 0x3306F54
	public float get_LockTopMoveOffsetX() { }

	[CompilerGenerated]
	// RVA: 0x3306F5C Offset: 0x3306F5C VA: 0x3306F5C
	public void set_LockTopMoveOffsetX(float value) { }

	[CompilerGenerated]
	// RVA: 0x3306F64 Offset: 0x3306F64 VA: 0x3306F64
	public float get_LockTopMoveOffsetY() { }

	[CompilerGenerated]
	// RVA: 0x3306F6C Offset: 0x3306F6C VA: 0x3306F6C
	public void set_LockTopMoveOffsetY(float value) { }

	[CompilerGenerated]
	// RVA: 0x3306F74 Offset: 0x3306F74 VA: 0x3306F74
	public AnimationCurve get_LockTopMoveEase() { }

	[CompilerGenerated]
	// RVA: 0x3306F7C Offset: 0x3306F7C VA: 0x3306F7C
	public void set_LockTopMoveEase(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x3306F84 Offset: 0x3306F84 VA: 0x3306F84
	public float get_LockFallDistance() { }

	[CompilerGenerated]
	// RVA: 0x3306F8C Offset: 0x3306F8C VA: 0x3306F8C
	public void set_LockFallDistance(float value) { }

	[CompilerGenerated]
	// RVA: 0x3306F94 Offset: 0x3306F94 VA: 0x3306F94
	public float get_LockFallDuration() { }

	[CompilerGenerated]
	// RVA: 0x3306F9C Offset: 0x3306F9C VA: 0x3306F9C
	public void set_LockFallDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x3306FA4 Offset: 0x3306FA4 VA: 0x3306FA4
	public AnimationCurve get_LockFallAnimationCurve() { }

	[CompilerGenerated]
	// RVA: 0x3306FAC Offset: 0x3306FAC VA: 0x3306FAC
	public void set_LockFallAnimationCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x3306FB4 Offset: 0x3306FB4 VA: 0x3306FB4
	public float get_LockParticleAnimationDelay() { }

	[CompilerGenerated]
	// RVA: 0x3306FBC Offset: 0x3306FBC VA: 0x3306FBC
	public void set_LockParticleAnimationDelay(float value) { }

	[CompilerGenerated]
	// RVA: 0x3306FC4 Offset: 0x3306FC4 VA: 0x3306FC4
	public float get_LockBounceSideDistance() { }

	[CompilerGenerated]
	// RVA: 0x3306FCC Offset: 0x3306FCC VA: 0x3306FCC
	public void set_LockBounceSideDistance(float value) { }

	[CompilerGenerated]
	// RVA: 0x3306FD4 Offset: 0x3306FD4 VA: 0x3306FD4
	public float get_LockParentRotationAngle() { }

	[CompilerGenerated]
	// RVA: 0x3306FDC Offset: 0x3306FDC VA: 0x3306FDC
	public void set_LockParentRotationAngle(float value) { }

	[CompilerGenerated]
	// RVA: 0x3306FE4 Offset: 0x3306FE4 VA: 0x3306FE4
	public AnimationCurve get_LockParentRotationAngleEase() { }

	[CompilerGenerated]
	// RVA: 0x3306FEC Offset: 0x3306FEC VA: 0x3306FEC
	public void set_LockParentRotationAngleEase(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x3306FF4 Offset: 0x3306FF4 VA: 0x3306FF4
	public Vector3 get_TickSmallestScale() { }

	[CompilerGenerated]
	// RVA: 0x3307000 Offset: 0x3307000 VA: 0x3307000
	public void set_TickSmallestScale(Vector3 value) { }

	[CompilerGenerated]
	// RVA: 0x330700C Offset: 0x330700C VA: 0x330700C
	public float get_TickScaleTime() { }

	[CompilerGenerated]
	// RVA: 0x3307014 Offset: 0x3307014 VA: 0x3307014
	public void set_TickScaleTime(float value) { }

	[CompilerGenerated]
	// RVA: 0x330701C Offset: 0x330701C VA: 0x330701C
	public float get_TickScaleUpDuration() { }

	[CompilerGenerated]
	// RVA: 0x3307024 Offset: 0x3307024 VA: 0x3307024
	public void set_TickScaleUpDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x330702C Offset: 0x330702C VA: 0x330702C
	public AnimationCurve get_TickScaleUpAnimationCurve() { }

	[CompilerGenerated]
	// RVA: 0x3307034 Offset: 0x3307034 VA: 0x3307034
	public void set_TickScaleUpAnimationCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x330703C Offset: 0x330703C VA: 0x330703C
	public float get_TickParticleAnimationDelay() { }

	[CompilerGenerated]
	// RVA: 0x3307044 Offset: 0x3307044 VA: 0x3307044
	public void set_TickParticleAnimationDelay(float value) { }

	[CompilerGenerated]
	// RVA: 0x330704C Offset: 0x330704C VA: 0x330704C
	public float get_RevealAnimationDelay() { }

	[CompilerGenerated]
	// RVA: 0x3307054 Offset: 0x3307054 VA: 0x3307054
	public void set_RevealAnimationDelay(float value) { }

	[CompilerGenerated]
	// RVA: 0x330705C Offset: 0x330705C VA: 0x330705C
	public float get_TickAnimationDelay() { }

	[CompilerGenerated]
	// RVA: 0x3307064 Offset: 0x3307064 VA: 0x3307064
	public void set_TickAnimationDelay(float value) { }

	[CompilerGenerated]
	// RVA: 0x330706C Offset: 0x330706C VA: 0x330706C
	public AnimationCurve get_ProgressAnimationCurve() { }

	[CompilerGenerated]
	// RVA: 0x3307074 Offset: 0x3307074 VA: 0x3307074
	private void set_ProgressAnimationCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x330707C Offset: 0x330707C VA: 0x330707C
	public Vector3 get_BuyButtonTargetScale() { }

	[CompilerGenerated]
	// RVA: 0x3307088 Offset: 0x3307088 VA: 0x3307088
	public void set_BuyButtonTargetScale(Vector3 value) { }

	[CompilerGenerated]
	// RVA: 0x3307094 Offset: 0x3307094 VA: 0x3307094
	public float get_BuyButtonScaleDuration() { }

	[CompilerGenerated]
	// RVA: 0x330709C Offset: 0x330709C VA: 0x330709C
	public void set_BuyButtonScaleDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x33070A4 Offset: 0x33070A4 VA: 0x33070A4
	public float get_PurchaseWarningTextStartYPosition() { }

	[CompilerGenerated]
	// RVA: 0x33070AC Offset: 0x33070AC VA: 0x33070AC
	public void set_PurchaseWarningTextStartYPosition(float value) { }

	[CompilerGenerated]
	// RVA: 0x33070B4 Offset: 0x33070B4 VA: 0x33070B4
	public Vector3 get_TickFromScale() { }

	[CompilerGenerated]
	// RVA: 0x33070C4 Offset: 0x33070C4 VA: 0x33070C4
	public void set_TickFromScale(Vector3 value) { }

	[CompilerGenerated]
	// RVA: 0x33070D4 Offset: 0x33070D4 VA: 0x33070D4
	public float get_ButtonScaleStart() { }

	[CompilerGenerated]
	// RVA: 0x33070DC Offset: 0x33070DC VA: 0x33070DC
	public void set_ButtonScaleStart(float value) { }

	[CompilerGenerated]
	// RVA: 0x33070E4 Offset: 0x33070E4 VA: 0x33070E4
	public float get_ButtonScaleDuration() { }

	[CompilerGenerated]
	// RVA: 0x33070EC Offset: 0x33070EC VA: 0x33070EC
	public void set_ButtonScaleDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x33070F4 Offset: 0x33070F4 VA: 0x33070F4
	public AnimationCurve get_ButtonScaleCurve() { }

	[CompilerGenerated]
	// RVA: 0x33070FC Offset: 0x33070FC VA: 0x33070FC
	public void set_ButtonScaleCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x330710C Offset: 0x330710C VA: 0x330710C
	public Vector3 get_ButtonFromScale() { }

	[CompilerGenerated]
	// RVA: 0x330711C Offset: 0x330711C VA: 0x330711C
	public void set_ButtonFromScale(Vector3 value) { }

	[CompilerGenerated]
	// RVA: 0x330712C Offset: 0x330712C VA: 0x330712C
	public Vector3 get_ButtonToScale() { }

	[CompilerGenerated]
	// RVA: 0x330713C Offset: 0x330713C VA: 0x330713C
	public void set_ButtonToScale(Vector3 value) { }

	[CompilerGenerated]
	// RVA: 0x330714C Offset: 0x330714C VA: 0x330714C
	public float get_TickScaleStart() { }

	[CompilerGenerated]
	// RVA: 0x3307154 Offset: 0x3307154 VA: 0x3307154
	public void set_TickScaleStart(float value) { }

	[CompilerGenerated]
	// RVA: 0x330715C Offset: 0x330715C VA: 0x330715C
	public float get_TickScaleDuration() { }

	[CompilerGenerated]
	// RVA: 0x3307164 Offset: 0x3307164 VA: 0x3307164
	public void set_TickScaleDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x330716C Offset: 0x330716C VA: 0x330716C
	public AnimationCurve get_TickScaleCurve() { }

	[CompilerGenerated]
	// RVA: 0x3307174 Offset: 0x3307174 VA: 0x3307174
	public void set_TickScaleCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x3307184 Offset: 0x3307184 VA: 0x3307184
	public Vector3 get_TickToScale() { }

	[CompilerGenerated]
	// RVA: 0x3307194 Offset: 0x3307194 VA: 0x3307194
	public void set_TickToScale(Vector3 value) { }

	[CompilerGenerated]
	// RVA: 0x33071A4 Offset: 0x33071A4 VA: 0x33071A4
	public float get_TickParticleDelay() { }

	[CompilerGenerated]
	// RVA: 0x33071AC Offset: 0x33071AC VA: 0x33071AC
	public void set_TickParticleDelay(float value) { }

	[CompilerGenerated]
	// RVA: 0x33071B4 Offset: 0x33071B4 VA: 0x33071B4
	public float get_ContainerScaleDelay() { }

	[CompilerGenerated]
	// RVA: 0x33071BC Offset: 0x33071BC VA: 0x33071BC
	public void set_ContainerScaleDelay(float value) { }

	[CompilerGenerated]
	// RVA: 0x33071C4 Offset: 0x33071C4 VA: 0x33071C4
	public float get_ContainerScaleDuration() { }

	[CompilerGenerated]
	// RVA: 0x33071CC Offset: 0x33071CC VA: 0x33071CC
	public void set_ContainerScaleDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x33071D4 Offset: 0x33071D4 VA: 0x33071D4
	public AnimationCurve get_ContainerScaleCurve() { }

	[CompilerGenerated]
	// RVA: 0x33071DC Offset: 0x33071DC VA: 0x33071DC
	public void set_ContainerScaleCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x33071EC Offset: 0x33071EC VA: 0x33071EC
	public Vector3 get_ContainerFromScale() { }

	[CompilerGenerated]
	// RVA: 0x33071FC Offset: 0x33071FC VA: 0x33071FC
	public void set_ContainerFromScale(Vector3 value) { }

	[CompilerGenerated]
	// RVA: 0x330720C Offset: 0x330720C VA: 0x330720C
	public Vector3 get_ContainerToScale() { }

	[CompilerGenerated]
	// RVA: 0x330721C Offset: 0x330721C VA: 0x330721C
	public void set_ContainerToScale(Vector3 value) { }

	// RVA: 0x330722C Offset: 0x330722C VA: 0x330722C
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]