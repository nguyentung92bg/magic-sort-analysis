public class EndlessPortalLobbyButtonAnimationConfig : ScriptableObject // TypeDefIndex: 3383
{
	// Fields
	[CompilerGenerated]
	[Header("Coin Spawn")]
	[SerializeField]
	private float <CoinFallDuration>k__BackingField; // 0x18
	[SerializeField]
	[CompilerGenerated]
	private AnimationCurve <CoinFallCurve>k__BackingField; // 0x20
	[SerializeField]
	[CompilerGenerated]
	private float <CoinConsecutiveDelay>k__BackingField; // 0x28
	[SerializeField]
	[CompilerGenerated]
	private Vector3 <CoinShrinkStartTarget>k__BackingField; // 0x2C
	[SerializeField]
	[CompilerGenerated]
	private float <CoinShrinkStartDuration>k__BackingField; // 0x38
	[CompilerGenerated]
	[SerializeField]
	private AnimationCurve <CoinShrinkStartCurve>k__BackingField; // 0x40
	[CompilerGenerated]
	[SerializeField]
	private float <CoinShrinkEndDuration>k__BackingField; // 0x48
	[CompilerGenerated]
	[SerializeField]
	private AnimationCurve <CoinShrinkEndCurve>k__BackingField; // 0x50
	[SerializeField]
	[CompilerGenerated]
	private Vector3 <CoinHidePositionOffset>k__BackingField; // 0x58
	[SerializeField]
	[CompilerGenerated]
	private float <CoinFadeInDuration>k__BackingField; // 0x64
	[SerializeField]
	[CompilerGenerated]
	private float <SaleTextDelay>k__BackingField; // 0x68
	[CompilerGenerated]
	[SerializeField]
	[Header("Coin Hide")]
	private float <CoinHideMoveDuration>k__BackingField; // 0x6C
	[SerializeField]
	[CompilerGenerated]
	private AnimationCurve <CoinHideScaleCurve>k__BackingField; // 0x70
	[SerializeField]
	[CompilerGenerated]
	private float <CoinLoopInterval>k__BackingField; // 0x78
	[SerializeField]
	[CompilerGenerated]
	private Vector2 <RandomStartDelayMinMax>k__BackingField; // 0x7C
	[CompilerGenerated]
	[SerializeField]
	private float <CoinWaitInsideDuration>k__BackingField; // 0x84
	[SerializeField]
	[CompilerGenerated]
	private float <InnerPortalLoopDuration>k__BackingField; // 0x88
	[Header("Sale Text")]
	[SerializeField]
	[CompilerGenerated]
	private float <SaleTextJumpDuration>k__BackingField; // 0x8C
	[CompilerGenerated]
	[SerializeField]
	private AnimationCurve <SaleTextSampleYPosition>k__BackingField; // 0x90
	[SerializeField]
	[CompilerGenerated]
	private AnimationCurve <SaleTextSampleZRotation>k__BackingField; // 0x98
	[SerializeField]
	[CompilerGenerated]
	private AnimationCurve <SaleTextFirstPivotZRotation>k__BackingField; // 0xA0
	[CompilerGenerated]
	[SerializeField]
	private AnimationCurve <SaleTextSecondPivotZRotation>k__BackingField; // 0xA8
	[SerializeField]
	[CompilerGenerated]
	private float <FirstPivotRotationDuration>k__BackingField; // 0xB0
	[CompilerGenerated]
	[SerializeField]
	private float <SecondPivotRotationDuration>k__BackingField; // 0xB4
	[CompilerGenerated]
	[SerializeField]
	private float <FirstPivotRotationMultiplier>k__BackingField; // 0xB8
	[SerializeField]
	[CompilerGenerated]
	private float <SecondPivotRotationMultiplier>k__BackingField; // 0xBC
	[CompilerGenerated]
	[SerializeField]
	private float <CoinMoveOutwardsDuration>k__BackingField; // 0xC0
	[SerializeField]
	[CompilerGenerated]
	private AnimationCurve <CoinMoveOutwardsCurve>k__BackingField; // 0xC8
	[SerializeField]
	[CompilerGenerated]
	private Vector3 <MoveOutwardsTargetRotation>k__BackingField; // 0xD0
	[SerializeField]
	[CompilerGenerated]
	private AnimationCurve <MoveOutwardsRotationCurve>k__BackingField; // 0xE0
	[CompilerGenerated]
	[SerializeField]
	private float <MoveCoinInwardsDuration>k__BackingField; // 0xE8
	[SerializeField]
	[CompilerGenerated]
	private AnimationCurve <MoveCoinInwardsCurve>k__BackingField; // 0xF0
	[CompilerGenerated]
	[SerializeField]
	private float <MoveCoinOutwardsConsecutive>k__BackingField; // 0xF8
	[SerializeField]
	[CompilerGenerated]
	private float <CoinScaleInDuration>k__BackingField; // 0xFC
	[SerializeField]
	[CompilerGenerated]
	private AnimationCurve <CoinScaleInCurve>k__BackingField; // 0x100
	[SerializeField]
	[CompilerGenerated]
	private float <CoinMoveToInitialPositionDuration>k__BackingField; // 0x108
	[SerializeField]
	[CompilerGenerated]
	private AnimationCurve <CoinMoveToInitialPositionCurve>k__BackingField; // 0x110

	// Properties
	public float CoinFallDuration { get; set; }
	public AnimationCurve CoinFallCurve { get; set; }
	public float CoinConsecutiveDelay { get; set; }
	public Vector3 CoinShrinkStartTarget { get; set; }
	public float CoinShrinkStartDuration { get; set; }
	public AnimationCurve CoinShrinkStartCurve { get; set; }
	public float CoinShrinkEndDuration { get; set; }
	public AnimationCurve CoinShrinkEndCurve { get; set; }
	public Vector3 CoinHidePositionOffset { get; set; }
	public float CoinFadeInDuration { get; set; }
	public float SaleTextDelay { get; set; }
	public float CoinHideMoveDuration { get; set; }
	public AnimationCurve CoinHideScaleCurve { get; set; }
	public float CoinLoopInterval { get; set; }
	public Vector2 RandomStartDelayMinMax { get; set; }
	public float CoinWaitInsideDuration { get; set; }
	public float InnerPortalLoopDuration { get; set; }
	public float SaleTextJumpDuration { get; set; }
	public AnimationCurve SaleTextSampleYPosition { get; set; }
	public AnimationCurve SaleTextSampleZRotation { get; set; }
	public AnimationCurve SaleTextFirstPivotZRotation { get; set; }
	public AnimationCurve SaleTextSecondPivotZRotation { get; set; }
	public float FirstPivotRotationDuration { get; set; }
	public float SecondPivotRotationDuration { get; set; }
	public float FirstPivotRotationMultiplier { get; set; }
	public float SecondPivotRotationMultiplier { get; set; }
	public float CoinMoveOutwardsDuration { get; set; }
	public AnimationCurve CoinMoveOutwardsCurve { get; set; }
	public Vector3 MoveOutwardsTargetRotation { get; set; }
	public AnimationCurve MoveOutwardsRotationCurve { get; set; }
	public float MoveCoinInwardsDuration { get; set; }
	public AnimationCurve MoveCoinInwardsCurve { get; set; }
	public float MoveCoinOutwardsConsecutive { get; set; }
	public float CoinScaleInDuration { get; set; }
	public AnimationCurve CoinScaleInCurve { get; set; }
	public float CoinMoveToInitialPositionDuration { get; set; }
	public AnimationCurve CoinMoveToInitialPositionCurve { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x346D624 Offset: 0x346D624 VA: 0x346D624
	public float get_CoinFallDuration() { }

	[CompilerGenerated]
	// RVA: 0x346D62C Offset: 0x346D62C VA: 0x346D62C
	private void set_CoinFallDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x346D634 Offset: 0x346D634 VA: 0x346D634
	public AnimationCurve get_CoinFallCurve() { }

	[CompilerGenerated]
	// RVA: 0x346D63C Offset: 0x346D63C VA: 0x346D63C
	private void set_CoinFallCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x346D644 Offset: 0x346D644 VA: 0x346D644
	public float get_CoinConsecutiveDelay() { }

	[CompilerGenerated]
	// RVA: 0x346D64C Offset: 0x346D64C VA: 0x346D64C
	private void set_CoinConsecutiveDelay(float value) { }

	[CompilerGenerated]
	// RVA: 0x346D654 Offset: 0x346D654 VA: 0x346D654
	public Vector3 get_CoinShrinkStartTarget() { }

	[CompilerGenerated]
	// RVA: 0x346D660 Offset: 0x346D660 VA: 0x346D660
	private void set_CoinShrinkStartTarget(Vector3 value) { }

	[CompilerGenerated]
	// RVA: 0x346D66C Offset: 0x346D66C VA: 0x346D66C
	public float get_CoinShrinkStartDuration() { }

	[CompilerGenerated]
	// RVA: 0x346D674 Offset: 0x346D674 VA: 0x346D674
	private void set_CoinShrinkStartDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x346D67C Offset: 0x346D67C VA: 0x346D67C
	public AnimationCurve get_CoinShrinkStartCurve() { }

	[CompilerGenerated]
	// RVA: 0x346D684 Offset: 0x346D684 VA: 0x346D684
	private void set_CoinShrinkStartCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x346D68C Offset: 0x346D68C VA: 0x346D68C
	public float get_CoinShrinkEndDuration() { }

	[CompilerGenerated]
	// RVA: 0x346D694 Offset: 0x346D694 VA: 0x346D694
	private void set_CoinShrinkEndDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x346D69C Offset: 0x346D69C VA: 0x346D69C
	public AnimationCurve get_CoinShrinkEndCurve() { }

	[CompilerGenerated]
	// RVA: 0x346D6A4 Offset: 0x346D6A4 VA: 0x346D6A4
	private void set_CoinShrinkEndCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x346D6AC Offset: 0x346D6AC VA: 0x346D6AC
	public Vector3 get_CoinHidePositionOffset() { }

	[CompilerGenerated]
	// RVA: 0x346D6B8 Offset: 0x346D6B8 VA: 0x346D6B8
	private void set_CoinHidePositionOffset(Vector3 value) { }

	[CompilerGenerated]
	// RVA: 0x346D6C4 Offset: 0x346D6C4 VA: 0x346D6C4
	public float get_CoinFadeInDuration() { }

	[CompilerGenerated]
	// RVA: 0x346D6CC Offset: 0x346D6CC VA: 0x346D6CC
	private void set_CoinFadeInDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x346D6D4 Offset: 0x346D6D4 VA: 0x346D6D4
	public float get_SaleTextDelay() { }

	[CompilerGenerated]
	// RVA: 0x346D6DC Offset: 0x346D6DC VA: 0x346D6DC
	private void set_SaleTextDelay(float value) { }

	[CompilerGenerated]
	// RVA: 0x346D6E4 Offset: 0x346D6E4 VA: 0x346D6E4
	public float get_CoinHideMoveDuration() { }

	[CompilerGenerated]
	// RVA: 0x346D6EC Offset: 0x346D6EC VA: 0x346D6EC
	private void set_CoinHideMoveDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x346D6F4 Offset: 0x346D6F4 VA: 0x346D6F4
	public AnimationCurve get_CoinHideScaleCurve() { }

	[CompilerGenerated]
	// RVA: 0x346D6FC Offset: 0x346D6FC VA: 0x346D6FC
	private void set_CoinHideScaleCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x346D704 Offset: 0x346D704 VA: 0x346D704
	public float get_CoinLoopInterval() { }

	[CompilerGenerated]
	// RVA: 0x346D70C Offset: 0x346D70C VA: 0x346D70C
	private void set_CoinLoopInterval(float value) { }

	[CompilerGenerated]
	// RVA: 0x346D714 Offset: 0x346D714 VA: 0x346D714
	public Vector2 get_RandomStartDelayMinMax() { }

	[CompilerGenerated]
	// RVA: 0x346D71C Offset: 0x346D71C VA: 0x346D71C
	private void set_RandomStartDelayMinMax(Vector2 value) { }

	[CompilerGenerated]
	// RVA: 0x346D724 Offset: 0x346D724 VA: 0x346D724
	public float get_CoinWaitInsideDuration() { }

	[CompilerGenerated]
	// RVA: 0x346D72C Offset: 0x346D72C VA: 0x346D72C
	private void set_CoinWaitInsideDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x346D734 Offset: 0x346D734 VA: 0x346D734
	public float get_InnerPortalLoopDuration() { }

	[CompilerGenerated]
	// RVA: 0x346D73C Offset: 0x346D73C VA: 0x346D73C
	private void set_InnerPortalLoopDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x346D744 Offset: 0x346D744 VA: 0x346D744
	public float get_SaleTextJumpDuration() { }

	[CompilerGenerated]
	// RVA: 0x346D74C Offset: 0x346D74C VA: 0x346D74C
	private void set_SaleTextJumpDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x346D754 Offset: 0x346D754 VA: 0x346D754
	public AnimationCurve get_SaleTextSampleYPosition() { }

	[CompilerGenerated]
	// RVA: 0x346D75C Offset: 0x346D75C VA: 0x346D75C
	private void set_SaleTextSampleYPosition(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x346D764 Offset: 0x346D764 VA: 0x346D764
	public AnimationCurve get_SaleTextSampleZRotation() { }

	[CompilerGenerated]
	// RVA: 0x346D76C Offset: 0x346D76C VA: 0x346D76C
	private void set_SaleTextSampleZRotation(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x346D774 Offset: 0x346D774 VA: 0x346D774
	public AnimationCurve get_SaleTextFirstPivotZRotation() { }

	[CompilerGenerated]
	// RVA: 0x346D77C Offset: 0x346D77C VA: 0x346D77C
	private void set_SaleTextFirstPivotZRotation(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x346D784 Offset: 0x346D784 VA: 0x346D784
	public AnimationCurve get_SaleTextSecondPivotZRotation() { }

	[CompilerGenerated]
	// RVA: 0x346D78C Offset: 0x346D78C VA: 0x346D78C
	private void set_SaleTextSecondPivotZRotation(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x346D794 Offset: 0x346D794 VA: 0x346D794
	public float get_FirstPivotRotationDuration() { }

	[CompilerGenerated]
	// RVA: 0x346D79C Offset: 0x346D79C VA: 0x346D79C
	private void set_FirstPivotRotationDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x346D7A4 Offset: 0x346D7A4 VA: 0x346D7A4
	public float get_SecondPivotRotationDuration() { }

	[CompilerGenerated]
	// RVA: 0x346D7AC Offset: 0x346D7AC VA: 0x346D7AC
	private void set_SecondPivotRotationDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x346D7B4 Offset: 0x346D7B4 VA: 0x346D7B4
	public float get_FirstPivotRotationMultiplier() { }

	[CompilerGenerated]
	// RVA: 0x346D7BC Offset: 0x346D7BC VA: 0x346D7BC
	private void set_FirstPivotRotationMultiplier(float value) { }

	[CompilerGenerated]
	// RVA: 0x346D7C4 Offset: 0x346D7C4 VA: 0x346D7C4
	public float get_SecondPivotRotationMultiplier() { }

	[CompilerGenerated]
	// RVA: 0x346D7CC Offset: 0x346D7CC VA: 0x346D7CC
	private void set_SecondPivotRotationMultiplier(float value) { }

	[CompilerGenerated]
	// RVA: 0x346D7D4 Offset: 0x346D7D4 VA: 0x346D7D4
	public float get_CoinMoveOutwardsDuration() { }

	[CompilerGenerated]
	// RVA: 0x346D7DC Offset: 0x346D7DC VA: 0x346D7DC
	private void set_CoinMoveOutwardsDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x346D7E4 Offset: 0x346D7E4 VA: 0x346D7E4
	public AnimationCurve get_CoinMoveOutwardsCurve() { }

	[CompilerGenerated]
	// RVA: 0x346D7EC Offset: 0x346D7EC VA: 0x346D7EC
	private void set_CoinMoveOutwardsCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x346D7F4 Offset: 0x346D7F4 VA: 0x346D7F4
	public Vector3 get_MoveOutwardsTargetRotation() { }

	[CompilerGenerated]
	// RVA: 0x346D800 Offset: 0x346D800 VA: 0x346D800
	private void set_MoveOutwardsTargetRotation(Vector3 value) { }

	[CompilerGenerated]
	// RVA: 0x346D80C Offset: 0x346D80C VA: 0x346D80C
	public AnimationCurve get_MoveOutwardsRotationCurve() { }

	[CompilerGenerated]
	// RVA: 0x346D814 Offset: 0x346D814 VA: 0x346D814
	private void set_MoveOutwardsRotationCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x346D81C Offset: 0x346D81C VA: 0x346D81C
	public float get_MoveCoinInwardsDuration() { }

	[CompilerGenerated]
	// RVA: 0x346D824 Offset: 0x346D824 VA: 0x346D824
	private void set_MoveCoinInwardsDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x346D82C Offset: 0x346D82C VA: 0x346D82C
	public AnimationCurve get_MoveCoinInwardsCurve() { }

	[CompilerGenerated]
	// RVA: 0x346D834 Offset: 0x346D834 VA: 0x346D834
	private void set_MoveCoinInwardsCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x346D83C Offset: 0x346D83C VA: 0x346D83C
	public float get_MoveCoinOutwardsConsecutive() { }

	[CompilerGenerated]
	// RVA: 0x346D844 Offset: 0x346D844 VA: 0x346D844
	private void set_MoveCoinOutwardsConsecutive(float value) { }

	[CompilerGenerated]
	// RVA: 0x346D84C Offset: 0x346D84C VA: 0x346D84C
	public float get_CoinScaleInDuration() { }

	[CompilerGenerated]
	// RVA: 0x346D854 Offset: 0x346D854 VA: 0x346D854
	private void set_CoinScaleInDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x346D85C Offset: 0x346D85C VA: 0x346D85C
	public AnimationCurve get_CoinScaleInCurve() { }

	[CompilerGenerated]
	// RVA: 0x346D864 Offset: 0x346D864 VA: 0x346D864
	private void set_CoinScaleInCurve(AnimationCurve value) { }

	[CompilerGenerated]
	// RVA: 0x346D874 Offset: 0x346D874 VA: 0x346D874
	public float get_CoinMoveToInitialPositionDuration() { }

	[CompilerGenerated]
	// RVA: 0x346D87C Offset: 0x346D87C VA: 0x346D87C
	private void set_CoinMoveToInitialPositionDuration(float value) { }

	[CompilerGenerated]
	// RVA: 0x346D884 Offset: 0x346D884 VA: 0x346D884
	public AnimationCurve get_CoinMoveToInitialPositionCurve() { }

	[CompilerGenerated]
	// RVA: 0x346D88C Offset: 0x346D88C VA: 0x346D88C
	private void set_CoinMoveToInitialPositionCurve(AnimationCurve value) { }

	// RVA: 0x346D89C Offset: 0x346D89C VA: 0x346D89C
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]