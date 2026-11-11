public class SkyJumpWithStageUserView : MonoBehaviour // TypeDefIndex: 2718
{
	// Fields
	[SerializeField]
	private SpriteRenderer _profilePictureRenderer; // 0x18
	[SerializeField]
	private Sprite _userDefaultFrame; // 0x20
	[SerializeField]
	private Sprite _opponentFrame; // 0x28
	[SerializeField]
	private ProfileFrameView _profileFrameView; // 0x30
	[SerializeField]
	private SortingGroup _sortingGroup; // 0x38
	[SerializeField]
	private Transform _leftBottomAnchor; // 0x40
	[SerializeField]
	private Transform _rightBottomAnchor; // 0x48
	[SerializeField]
	private SkyJumpWithStageAnimationConfig _animationConfig; // 0x50
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
	// RVA: 0x2340E9C Offset: 0x2340E9C VA: 0x2340E9C
	public bool get_IsMe() { }

	[CompilerGenerated]
	// RVA: 0x2340EA4 Offset: 0x2340EA4 VA: 0x2340EA4
	private void set_IsMe(bool value) { }

	[CompilerGenerated]
	// RVA: 0x2340EB0 Offset: 0x2340EB0 VA: 0x2340EB0
	public bool get_StepCompletedThisSession() { }

	[CompilerGenerated]
	// RVA: 0x2340EB8 Offset: 0x2340EB8 VA: 0x2340EB8
	public void set_StepCompletedThisSession(bool value) { }

	[CompilerGenerated]
	// RVA: 0x2340EC4 Offset: 0x2340EC4 VA: 0x2340EC4
	public string get_UserID() { }

	[CompilerGenerated]
	// RVA: 0x2340ECC Offset: 0x2340ECC VA: 0x2340ECC
	private void set_UserID(string value) { }

	// RVA: 0x233EFFC Offset: 0x233EFFC VA: 0x233EFFC
	public void SetViewModel(SkyJumpWithStageLeaderboardPlayerViewModel viewModel) { }

	// RVA: 0x2340ED4 Offset: 0x2340ED4 VA: 0x2340ED4
	public void SetSortingGroupOrder(int order) { }

	// RVA: 0x2340EF0 Offset: 0x2340EF0 VA: 0x2340EF0
	public void IncreaseSortingGroupOrder(int amount) { }

	// RVA: 0x2340F2C Offset: 0x2340F2C VA: 0x2340F2C
	public Tween ShrinkStart() { }

	// RVA: 0x2340FA4 Offset: 0x2340FA4 VA: 0x2340FA4
	public Tween Jump(Vector3 targetPosition) { }

	// RVA: 0x2341040 Offset: 0x2341040 VA: 0x2341040
	public Tween JumpFall(Vector3 targetPosition, float yDifference) { }

	// RVA: 0x2341144 Offset: 0x2341144 VA: 0x2341144
	public Tween UserJumpFall(int stepCount) { }

	// RVA: 0x234121C Offset: 0x234121C VA: 0x234121C
	public Tween FallScaleSampled() { }

	// RVA: 0x23412BC Offset: 0x23412BC VA: 0x23412BC
	public Tween MidAirScaleSampled() { }

	// RVA: 0x234135C Offset: 0x234135C VA: 0x234135C
	public Tween MidAirRotationSampled(int sign) { }

	// RVA: 0x2341454 Offset: 0x2341454 VA: 0x2341454
	public Tween SpinRoll(int sign) { }

	// RVA: 0x23414DC Offset: 0x23414DC VA: 0x23414DC
	public Tween RotatePivotSampled(int sign, float duration, AnimationCurve curve) { }

	// RVA: 0x23415FC Offset: 0x23415FC VA: 0x23415FC
	public Tween RelocateSitPosition(Vector3 targetPosition) { }

	// RVA: 0x234169C Offset: 0x234169C VA: 0x234169C
	public Tween FadeOut() { }

	// RVA: 0x23417AC Offset: 0x23417AC VA: 0x23417AC
	public void ResetRotations() { }

	// RVA: 0x2341898 Offset: 0x2341898 VA: 0x2341898
	public void ResetAlpha() { }

	// RVA: 0x2341960 Offset: 0x2341960 VA: 0x2341960
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x2341968 Offset: 0x2341968 VA: 0x2341968
	private void <FallScaleSampled>b__29_0(float value) { }

	[CompilerGenerated]
	// RVA: 0x23419E4 Offset: 0x23419E4 VA: 0x23419E4
	private void <MidAirScaleSampled>b__30_0(float value) { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]