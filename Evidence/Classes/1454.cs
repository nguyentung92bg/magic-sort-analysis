public class WaterItem : AItem // TypeDefIndex: 1454
{
	// Fields
	[CompilerGenerated]
	private int <Height>k__BackingField; // 0x40
	private WaterView _waterView; // 0x48
	private int _waterOrderFromTheTop; // 0x50
	private bool _isVisible; // 0x54
	private bool _isRainbow; // 0x55
	private ColorAndColorId _colorAndColorId; // 0x58
	private int _targetHeight; // 0x60
	private int _watersHeightBelow; // 0x64

	// Properties
	public int Height { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x1E9E118 Offset: 0x1E9E118 VA: 0x1E9E118
	public int get_Height() { }

	[CompilerGenerated]
	// RVA: 0x1E9E120 Offset: 0x1E9E120 VA: 0x1E9E120
	private void set_Height(int value) { }

	// RVA: 0x1E9E128 Offset: 0x1E9E128 VA: 0x1E9E128 Slot: 4
	protected override void OnInitialize() { }

	// RVA: 0x1E9E1D4 Offset: 0x1E9E1D4 VA: 0x1E9E1D4 Slot: 5
	protected override void OnSpawn() { }

	// RVA: 0x1E9E1DC Offset: 0x1E9E1DC VA: 0x1E9E1DC
	public void Prepare(Vector3 viewOffset, int frontSortOrder, int backSortOrder, int bottleHeight, int height, int index, ColorAndColorId colorAndColorId, bool isVisible, int bottlesAndWaterVariant, BottleOutlines bottleOutlines) { }

	// RVA: 0x1E9E338 Offset: 0x1E9E338 VA: 0x1E9E338 Slot: 6
	protected override void OnRecycle() { }

	// RVA: 0x1E9E33C Offset: 0x1E9E33C VA: 0x1E9E33C
	public void SetActiveTopEllipse(bool active) { }

	// RVA: 0x1E90FD4 Offset: 0x1E90FD4 VA: 0x1E90FD4
	public void PlayColor(ColorAndColorId colorAndColorId, float duration) { }

	// RVA: 0x1E9E35C Offset: 0x1E9E35C VA: 0x1E9E35C
	public void PlayColorWithEllipseFade(ColorAndColorId colorAndColorId, float duration) { }

	// RVA: 0x1E9E378 Offset: 0x1E9E378 VA: 0x1E9E378
	public Vector3 GetTopPosition() { }

	// RVA: 0x1E9E394 Offset: 0x1E9E394 VA: 0x1E9E394
	public Vector3 GetTopLocalPosition() { }

	// RVA: 0x1E9E3B0 Offset: 0x1E9E3B0 VA: 0x1E9E3B0
	public void OnBottleSelection(bool hasBlockerInWater) { }

	// RVA: 0x1E9E3D4 Offset: 0x1E9E3D4 VA: 0x1E9E3D4
	public void OnLevelStart() { }

	// RVA: 0x1E9E3F0 Offset: 0x1E9E3F0 VA: 0x1E9E3F0
	public Vector3 GetMidPosition() { }

	// RVA: 0x1E9E428 Offset: 0x1E9E428 VA: 0x1E9E428 Slot: 21
	public override void Hide() { }

	// RVA: 0x1E9E448 Offset: 0x1E9E448 VA: 0x1E9E448
	public void SetEclipseSortOrder(int sortOrder) { }

	// RVA: 0x1E9E464 Offset: 0x1E9E464 VA: 0x1E9E464
	public void PlayDailyBlobBelowWaterShake() { }

	// RVA: 0x1E9E480 Offset: 0x1E9E480 VA: 0x1E9E480
	public void DecreaseHeight(int targetHeight, int watersHeightBelow, int bottleHeight) { }

	// RVA: 0x1E9E580 Offset: 0x1E9E580 VA: 0x1E9E580 Slot: 20
	public override void Show() { }

	// RVA: 0x1E9E5A0 Offset: 0x1E9E5A0 VA: 0x1E9E5A0
	public float GetBottomPivotPosition(int bottleHeight) { }

	// RVA: 0x1E9E5CC Offset: 0x1E9E5CC VA: 0x1E9E5CC
	public void SetPivot(int height, int bottleHeight) { }

	// RVA: 0x1E9E5E8 Offset: 0x1E9E5E8 VA: 0x1E9E5E8
	public Tween PlayRise(int previousHeight, int newTargetHeight, int distanceToBottomOfTheBottle, int bottleHeight, bool isForGenerator = False) { }

	// RVA: 0x1E9E30C Offset: 0x1E9E30C VA: 0x1E9E30C
	public void SetTargetHeight(int targetHeight, int watersHeightBelow, int bottleHeight) { }

	// RVA: 0x1E9E610 Offset: 0x1E9E610 VA: 0x1E9E610
	public Tween PlayDropRatio(float duration, int currentHeight, int nextHeight) { }

	// RVA: 0x1E9E62C Offset: 0x1E9E62C VA: 0x1E9E62C
	public void RotateWaters(float rotation, int waterCountBelow, int bottomHeight, bool waterRotationAnimationExist, Vector2 notReducedTopLeftPosition, Vector2 notReducedTopRightPosition, int bottleHeight, WaterItem previousWater, BottleAnimationConfig bottleAnimationConfig) { }

	// RVA: 0x1E9E658 Offset: 0x1E9E658 VA: 0x1E9E658
	public Vector3 GetWoodBoxKeyPositionValuesForWater(WaterItem previousWater, float rotation, BottleAnimationConfig bottleAnimationConfig, Vector3 bottleRootPosition) { }

	// RVA: 0x1E9E7A4 Offset: 0x1E9E7A4 VA: 0x1E9E7A4
	public WaterRotationAnimation GetWaterRotationAnimation() { }

	// RVA: 0x1E9E7C0 Offset: 0x1E9E7C0 VA: 0x1E9E7C0
	public void SetBackSortOrder(int sortOrder) { }

	// RVA: 0x1E9E7DC Offset: 0x1E9E7DC VA: 0x1E9E7DC
	public void SetDirectionValues(bool isLeftSide) { }

	// RVA: 0x1E9E7FC Offset: 0x1E9E7FC VA: 0x1E9E7FC
	public int GetBelowWaterSortOrder() { }

	// RVA: 0x1E9E818 Offset: 0x1E9E818 VA: 0x1E9E818
	public int GetEllipseSortOrder() { }

	// RVA: 0x1E9E834 Offset: 0x1E9E834 VA: 0x1E9E834
	public void SetWaterOrder(int order) { }

	// RVA: 0x1E9E83C Offset: 0x1E9E83C VA: 0x1E9E83C
	public int GetWaterOrder() { }

	// RVA: 0x1E9E2E8 Offset: 0x1E9E2E8 VA: 0x1E9E2E8
	public void SetHeight(int height) { }

	// RVA: 0x1E9E844 Offset: 0x1E9E844 VA: 0x1E9E844
	public bool IsVisible() { }

	// RVA: 0x1E9E84C Offset: 0x1E9E84C VA: 0x1E9E84C
	public void SetVisible(bool isVisible) { }

	// RVA: 0x1E9E858 Offset: 0x1E9E858 VA: 0x1E9E858
	public bool IsRainbow() { }

	// RVA: 0x1E9E860 Offset: 0x1E9E860 VA: 0x1E9E860
	public void SetRainbow(bool isRainbow) { }

	// RVA: 0x1E9E2F0 Offset: 0x1E9E2F0 VA: 0x1E9E2F0
	public void SetColor(ColorAndColorId colorAndColorId) { }

	// RVA: 0x1E9E8A4 Offset: 0x1E9E8A4 VA: 0x1E9E8A4
	public void SetColorAsEllipseColor(ColorAndColorId colorAndColorId) { }

	// RVA: 0x1E9E8C0 Offset: 0x1E9E8C0 VA: 0x1E9E8C0
	public ColorAndColorId GetColorAndColorId() { }

	// RVA: 0x1E99788 Offset: 0x1E99788 VA: 0x1E99788
	public ColorId GetColorId() { }

	// RVA: 0x1E9E8C8 Offset: 0x1E9E8C8 VA: 0x1E9E8C8 Slot: 8
	public override Vector3 GetSnitchTargetPosition() { }

	// RVA: 0x1E9E8E4 Offset: 0x1E9E8E4 VA: 0x1E9E8E4
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]