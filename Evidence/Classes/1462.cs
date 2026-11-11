public class WaterView : AItemView // TypeDefIndex: 1462
{
	// Fields
	[SerializeField]
	private SpriteRenderer _leftSprite; // 0x20
	[SerializeField]
	private SpriteRenderer _rightSprite; // 0x28
	[SerializeField]
	private SpriteRenderer _belowSprite; // 0x30
	[SerializeField]
	private SpriteRenderer _ellipseBack; // 0x38
	[SerializeField]
	private SpriteRenderer _ellipseBackForRainbow; // 0x40
	[SerializeField]
	private SpriteRenderer _bodySprite; // 0x48
	[SerializeField]
	private WaterShapeRenderer _ellipseFront; // 0x50
	[SerializeField]
	public GameObject _pivot; // 0x58
	[SerializeField]
	private Transform _snitchPivot; // 0x60
	[SerializeField]
	private WaterViewConfig _waterViewConfig; // 0x68
	[SerializeField]
	private WaterViewConfig _waterViewConfigVariant0; // 0x70
	[SerializeField]
	private WaterViewConfig _waterViewConfigVariant1; // 0x78
	[SerializeField]
	private WaterRiseAnimation _waterRiseAnimation; // 0x80
	[SerializeField]
	public WaterRotationAnimation _waterRotationAnimation; // 0x88
	[SerializeField]
	private RainbowWaterView _rainbowWaterView; // 0x90
	private Tween _colorChangeTween1; // 0x98
	private Tween _colorChangeTween2; // 0xA0
	private Tween _colorChangeTween3; // 0xA8
	private Tween _colorChangeTween4; // 0xB0
	private Tween _colorChangeTween5; // 0xB8
	private Tween _rainbowColorChangeTween; // 0xC0
	private int _variant; // 0xC8

	// Methods

	// RVA: 0x248A7F4 Offset: 0x248A7F4 VA: 0x248A7F4 Slot: 5
	public override void Initialize() { }

	// RVA: 0x248A8BC Offset: 0x248A8BC VA: 0x248A8BC Slot: 6
	public override void Spawn() { }

	// RVA: 0x248A8C0 Offset: 0x248A8C0 VA: 0x248A8C0
	public void Prepare(int frontSortOrder, int backSortOrder, int bottleHeight, int bottlesAndWaterVariant, BottleOutlines bottleOutlines, bool isEllipseActivated) { }

	// RVA: 0x248ADC0 Offset: 0x248ADC0 VA: 0x248ADC0 Slot: 7
	public override void Recycle() { }

	// RVA: 0x248AAE8 Offset: 0x248AAE8 VA: 0x248AAE8
	private void SetVariant(int variant) { }

	// RVA: 0x248B0DC Offset: 0x248B0DC VA: 0x248B0DC
	public void OnBottleSelection(bool canPlayAnimation) { }

	// RVA: 0x248B0FC Offset: 0x248B0FC VA: 0x248B0FC
	public void OnLevelStart() { }

	// RVA: 0x248AA2C Offset: 0x248AA2C VA: 0x248AA2C
	public void SetBackSortOrder(int sortOrder) { }

	// RVA: 0x248B118 Offset: 0x248B118 VA: 0x248B118
	public void SetColor(ColorAndColorId colorAndColorId) { }

	// RVA: 0x248B254 Offset: 0x248B254 VA: 0x248B254
	public void SetColorAsEllipseColor(ColorAndColorId colorAndColorId) { }

	// RVA: 0x248B1C8 Offset: 0x248B1C8 VA: 0x248B1C8
	private void KillColorChangeTweens() { }

	// RVA: 0x248B370 Offset: 0x248B370 VA: 0x248B370
	public void PlayColor(ColorAndColorId colorAndColorId, float duration) { }

	// RVA: 0x248B4F4 Offset: 0x248B4F4 VA: 0x248B4F4
	public void PlayColorWithEllipseFade(ColorAndColorId colorAndColorId, float duration) { }

	// RVA: 0x248B3E0 Offset: 0x248B3E0 VA: 0x248B3E0
	private void PlayBodyColors(Color color, float duration) { }

	// RVA: 0x248B660 Offset: 0x248B660 VA: 0x248B660
	public void SetPivot(int height, int bottleHeight) { }

	// RVA: 0x248BA28 Offset: 0x248BA28 VA: 0x248BA28
	public float GetPivotPositionY(int height, int bottleHeight) { }

	// RVA: 0x248AB18 Offset: 0x248AB18 VA: 0x248AB18
	private void SetWaterSpriteConfigsForBottle(int bottleHeight) { }

	// RVA: 0x248BAD4 Offset: 0x248BAD4 VA: 0x248BAD4
	private void SetTransformValuesForSprite(Transform sprite, WaterSpritePositionScale waterSpritePositionScale) { }

	// RVA: 0x248ADA0 Offset: 0x248ADA0 VA: 0x248ADA0
	public void SetActiveTopEllipse(bool active) { }

	// RVA: 0x248BB78 Offset: 0x248BB78 VA: 0x248BB78
	public Vector3 GetTopPosition() { }

	// RVA: 0x248BB94 Offset: 0x248BB94 VA: 0x248BB94
	public Vector3 GetTopLocalPosition() { }

	// RVA: 0x248AA10 Offset: 0x248AA10 VA: 0x248AA10
	public void SetEclipseSortOrder(int sortOrder) { }

	// RVA: 0x248BBB0 Offset: 0x248BBB0 VA: 0x248BBB0
	public int GetBelowWaterSortOrder() { }

	// RVA: 0x248BBCC Offset: 0x248BBCC VA: 0x248BBCC Slot: 9
	public override void Hide() { }

	// RVA: 0x248BBF0 Offset: 0x248BBF0 VA: 0x248BBF0 Slot: 8
	public override void Show() { }

	// RVA: 0x248BC14 Offset: 0x248BC14 VA: 0x248BC14
	public Tween PlayRise(int previousHeight, int newTargetHeight, int distanceToBottomOfTheBottle, int bottleHeight, bool isForGenerator) { }

	// RVA: 0x248BD48 Offset: 0x248BD48 VA: 0x248BD48
	public void RotateWaters(float rotation, int height, int bottomHeight, bool waterRotationAnimationExist, Vector2 notReducedTopLeftPosition, Vector2 notReducedTopRightPosition, int bottleHeight) { }

	// RVA: 0x248C644 Offset: 0x248C644 VA: 0x248C644
	public Tween PlayDropRatio(float duration, int currentHeight, int nextHeight) { }

	// RVA: 0x248C754 Offset: 0x248C754 VA: 0x248C754
	public void SetDirectionValues(bool isLeftSide) { }

	// RVA: 0x248C774 Offset: 0x248C774 VA: 0x248C774
	public WaterRotationAnimation GetWaterRotationAnimation() { }

	// RVA: 0x248C77C Offset: 0x248C77C VA: 0x248C77C
	public void PlayDailyBlobBelowWaterShake() { }

	// RVA: 0x248C79C Offset: 0x248C79C VA: 0x248C79C
	public int GetSortOrder() { }

	// RVA: 0x248C7B8 Offset: 0x248C7B8 VA: 0x248C7B8
	public Vector3 GetSnitchTargetPosition() { }

	// RVA: 0x248AFC0 Offset: 0x248AFC0 VA: 0x248AFC0
	public void UpdateRainbow(bool isRainbow, bool animated = False) { }

	// RVA: 0x248A824 Offset: 0x248A824 VA: 0x248A824
	private bool IsRainbowAssigned() { }

	// RVA: 0x248C7E0 Offset: 0x248C7E0 VA: 0x248C7E0
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x248C7E8 Offset: 0x248C7E8 VA: 0x248C7E8
	private void <PlayColorWithEllipseFade>b__34_0() { }

	[CompilerGenerated]
	// RVA: 0x248C814 Offset: 0x248C814 VA: 0x248C814
	private void <PlayRise>b__47_0() { }

	[CompilerGenerated]
	// RVA: 0x248C834 Offset: 0x248C834 VA: 0x248C834
	private void <UpdateRainbow>b__55_0() { }
}

// Namespace: Modules.Contexts.GamePlay.BoardItems.Scripts.Water.Configs
[CreateAssetMenu(fileName = "WaterDailyRiseConfig", menuName = "Configs/WaterDailyRiseConfig")]