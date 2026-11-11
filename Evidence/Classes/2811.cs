public class SkyJumpUserView : MonoBehaviour // TypeDefIndex: 2811
{
	// Fields
	[SerializeField]
	private SpriteRenderer _profilePictureRenderer; // 0x18
	[SerializeField]
	private SpriteRenderer _frameRenderer; // 0x20
	[SerializeField]
	private Sprite _userFrame; // 0x28
	[SerializeField]
	private Sprite _opponentFrame; // 0x30
	[SerializeField]
	private SortingGroup _sortingGroup; // 0x38
	[SerializeField]
	private Transform _leftBottomAnchor; // 0x40
	[SerializeField]
	private Transform _rightBottomAnchor; // 0x48
	[SerializeField]
	private SkyJumpAnimationConfig _animationConfig; // 0x50
	[SerializeField]
	private Transform _centerPivot; // 0x58
	[SerializeField]
	private ProfileImageView _profileImageView; // 0x60
	[CompilerGenerated]
	private bool <IsMe>k__BackingField; // 0x68
	[CompilerGenerated]
	private bool <StepCompletedThisSession>k__BackingField; // 0x69
	[CompilerGenerated]
	private string <UserID>k__BackingField; // 0x70

	// Properties
	public bool IsMe { get; set; }
	public bool StepCompletedThisSession { get; set; }
	public string UserID { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x2DC0CCC Offset: 0x2DC0CCC VA: 0x2DC0CCC
	public bool get_IsMe() { }

	[CompilerGenerated]
	// RVA: 0x2DC0CD4 Offset: 0x2DC0CD4 VA: 0x2DC0CD4
	private void set_IsMe(bool value) { }

	[CompilerGenerated]
	// RVA: 0x2DC0CE0 Offset: 0x2DC0CE0 VA: 0x2DC0CE0
	public bool get_StepCompletedThisSession() { }

	[CompilerGenerated]
	// RVA: 0x2DC0CE8 Offset: 0x2DC0CE8 VA: 0x2DC0CE8
	public void set_StepCompletedThisSession(bool value) { }

	[CompilerGenerated]
	// RVA: 0x2DC0CF4 Offset: 0x2DC0CF4 VA: 0x2DC0CF4
	public string get_UserID() { }

	[CompilerGenerated]
	// RVA: 0x2DC0CFC Offset: 0x2DC0CFC VA: 0x2DC0CFC
	private void set_UserID(string value) { }

	// RVA: 0x2DC0D04 Offset: 0x2DC0D04 VA: 0x2DC0D04
	public void SetViewModel(SkyJumpLeaderboardPlayerViewModel viewModel) { }

	// RVA: 0x2DC0DC8 Offset: 0x2DC0DC8 VA: 0x2DC0DC8
	public void SetSortingGroupOrder(int order) { }

	// RVA: 0x2DC0DE4 Offset: 0x2DC0DE4 VA: 0x2DC0DE4
	public void IncreaseSortingGroupOrder(int amount) { }

	// RVA: 0x2DC0E20 Offset: 0x2DC0E20 VA: 0x2DC0E20
	public Tween ShrinkStart() { }

	// RVA: 0x2DC0E98 Offset: 0x2DC0E98 VA: 0x2DC0E98
	public Tween Jump(Vector3 targetPosition) { }

	// RVA: 0x2DC0F34 Offset: 0x2DC0F34 VA: 0x2DC0F34
	public Tween JumpFall(Vector3 targetPosition, float yDifference) { }

	// RVA: 0x2DC1038 Offset: 0x2DC1038 VA: 0x2DC1038
	public Tween UserJumpFall(int stepCount) { }

	// RVA: 0x2DC1110 Offset: 0x2DC1110 VA: 0x2DC1110
	public Tween FallScaleSampled() { }

	// RVA: 0x2DC11B0 Offset: 0x2DC11B0 VA: 0x2DC11B0
	public Tween MidAirScaleSampled() { }

	// RVA: 0x2DC1250 Offset: 0x2DC1250 VA: 0x2DC1250
	public Tween MidAirRotationSampled(int sign) { }

	// RVA: 0x2DC1348 Offset: 0x2DC1348 VA: 0x2DC1348
	public Tween SpinRoll(int sign) { }

	// RVA: 0x2DC13D0 Offset: 0x2DC13D0 VA: 0x2DC13D0
	public Tween RotatePivotSampled(int sign, float duration, AnimationCurve curve) { }

	// RVA: 0x2DC14F0 Offset: 0x2DC14F0 VA: 0x2DC14F0
	public Tween RelocateSitPosition(Vector3 targetPosition) { }

	// RVA: 0x2DC1590 Offset: 0x2DC1590 VA: 0x2DC1590
	public Tween FadeOut() { }

	// RVA: 0x2DC1688 Offset: 0x2DC1688 VA: 0x2DC1688
	public void ResetRotations() { }

	// RVA: 0x2DC1774 Offset: 0x2DC1774 VA: 0x2DC1774
	public void ResetAlpha() { }

	// RVA: 0x2DC17C4 Offset: 0x2DC17C4 VA: 0x2DC17C4
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x2DC17CC Offset: 0x2DC17CC VA: 0x2DC17CC
	private void <FallScaleSampled>b__29_0(float value) { }

	[CompilerGenerated]
	// RVA: 0x2DC1848 Offset: 0x2DC1848 VA: 0x2DC1848
	private void <MidAirScaleSampled>b__30_0(float value) { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]