public class SnitchItemView : AItemView // TypeDefIndex: 1632
{
	// Fields
	[SerializeField]
	private SortingGroup _sortingGroup; // 0x20
	[SerializeField]
	private GameObject _normalSnitch; // 0x28
	[SerializeField]
	private GameObject _redSnitch; // 0x30
	[SerializeField]
	private SnitchAnimationConfig _config; // 0x38
	[SerializeField]
	private Transform _swayRootTransform; // 0x40
	[SerializeField]
	private ParticleSystem _snitchHitFx; // 0x48
	[SerializeField]
	private Transform _yellowSnitchWarpTransform; // 0x50
	[SerializeField]
	private Transform _graySnitchWarpTransform; // 0x58
	[SerializeField]
	private Animator _bodyAnimator; // 0x60
	[SerializeField]
	private Animator _grayWingAnimator; // 0x68
	[SerializeField]
	private Animator _yellowWingAnimator; // 0x70
	[SerializeField]
	private SpriteRenderer _yellowSnitchFrontSprite; // 0x78
	[SerializeField]
	private SpriteRenderer _yellowSnitchSidewaysSprite; // 0x80
	[SerializeField]
	private SpriteRenderer _graySnitchFrontSprite; // 0x88
	[SerializeField]
	private SpriteRenderer _graySnitchSidewaysSprite; // 0x90
	[SerializeField]
	private GameObject _outOfBottleWings; // 0x98
	[SerializeField]
	private ParticleSystem _trailFx; // 0xA0
	[SerializeField]
	private ParticleSystem _blurYellowFx; // 0xA8
	[SerializeField]
	private ParticleSystem _blurGrayFx; // 0xB0
	[SerializeField]
	private ParticleSystem _snitchEnterBlockerFx; // 0xB8
	[SerializeField]
	private SpriteRenderer _snitchGlow; // 0xC0
	private bool _inBackPhase; // 0xC8
	private float _phaseTimer; // 0xCC
	private Vector3 _cachedTargetPosition; // 0xD0
	private bool _swayEnabled; // 0xDC
	private bool _isSecondHitMotion; // 0xDD
	private bool _warpTowardsTargetEnabled; // 0xDE
	private float _warpVerticalElapsedTime; // 0xE0
	private bool _rotateTowardsDirectionEnabled; // 0xE4
	private float _noiseOffsetX; // 0xE8
	private float _noiseOffsetY; // 0xEC
	private float _noiseOffsetR; // 0xF0
	private float _randomSineOffset; // 0xF4
	private float _swayIntensity; // 0xF8
	private bool _swayRotationEnabled; // 0xFC
	private SnitchItemType _snitchType; // 0x100

	// Methods

	// RVA: 0x260E5B4 Offset: 0x260E5B4 VA: 0x260E5B4 Slot: 5
	public override void Initialize() { }

	// RVA: 0x260E5B8 Offset: 0x260E5B8 VA: 0x260E5B8 Slot: 6
	public override void Spawn() { }

	// RVA: 0x260E5C4 Offset: 0x260E5C4 VA: 0x260E5C4 Slot: 7
	public override void Recycle() { }

	// RVA: 0x260E5C8 Offset: 0x260E5C8 VA: 0x260E5C8 Slot: 8
	public override void Show() { }

	// RVA: 0x260E62C Offset: 0x260E62C VA: 0x260E62C Slot: 9
	public override void Hide() { }

	// RVA: 0x260E090 Offset: 0x260E090 VA: 0x260E090
	public bool IsVisible() { }

	// RVA: 0x260DBC8 Offset: 0x260DBC8 VA: 0x260DBC8
	public void Prepare(SnitchItemType type, Sorting sorting) { }

	// RVA: 0x260E6A4 Offset: 0x260E6A4 VA: 0x260E6A4
	private void UpdateView() { }

	// RVA: 0x260E660 Offset: 0x260E660 VA: 0x260E660
	private void SetSorting(Sorting sorting) { }

	// RVA: 0x260E704 Offset: 0x260E704 VA: 0x260E704
	public string GetRiseWarpAnimation(int snitchIndex) { }

	// RVA: 0x260E788 Offset: 0x260E788 VA: 0x260E788
	public string GetRiseWingAnimation(int snitchIndex) { }

	// RVA: 0x260E80C Offset: 0x260E80C VA: 0x260E80C
	public string GetSitRiseAnimation(int snitchIndex) { }

	// RVA: 0x260E890 Offset: 0x260E890 VA: 0x260E890
	private void Update() { }

	// RVA: 0x260EF90 Offset: 0x260EF90 VA: 0x260EF90
	private void RotateTowardsDirection() { }

	// RVA: 0x260F1E0 Offset: 0x260F1E0 VA: 0x260F1E0
	public float GetSnitchDynamicHitDuration(Vector3 targetPos, int snitchIndex) { }

	// RVA: 0x260F2E8 Offset: 0x260F2E8 VA: 0x260F2E8
	public float GetSnitchSitDynamicDuration(Vector3 startPos, Vector3 targetPos) { }

	// RVA: 0x260F3E8 Offset: 0x260F3E8 VA: 0x260F3E8
	public float GetSnitchHitDynamicDuration(Vector3[] path, Vector3 startPos, Vector3 targetPos) { }

	// RVA: 0x260E8D4 Offset: 0x260E8D4 VA: 0x260E8D4
	private void UpdateSway() { }

	// RVA: 0x260EC44 Offset: 0x260EC44 VA: 0x260EC44
	private void UpdateWarpTransform() { }

	// RVA: 0x260F4E8 Offset: 0x260F4E8 VA: 0x260F4E8
	private Transform GetWarpTransform() { }

	// RVA: 0x260F504 Offset: 0x260F504 VA: 0x260F504
	private Tween PlaySwayIntensity(float duration, float intensity, AnimationCurve curve) { }

	// RVA: 0x260F674 Offset: 0x260F674 VA: 0x260F674
	public Sequence PlayRise(int snitchIndex, Vector3 targetPosition) { }

	// RVA: 0x260FB44 Offset: 0x260FB44 VA: 0x260FB44
	public Sequence PlaySitRise(int snitchIndex, Vector3 targetPosition) { }

	// RVA: 0x260FFCC Offset: 0x260FFCC VA: 0x260FFCC
	public Sequence PlaySit(int snitchIndex, AItem targetItem, SnitchSpawnInfo spawnInfo, bool hasValidBlockerForSitFx, Action onComplete) { }

	// RVA: 0x2610660 Offset: 0x2610660 VA: 0x2610660
	public Sequence PlayHit(int snitchIndex, AItem targetMoveItem, Vector3 targetBottleRoot, Action onComplete) { }

	// RVA: 0x2610C94 Offset: 0x2610C94 VA: 0x2610C94
	public Sequence PlaySnitchOutOfBottle(AItem targetItem, BottleItem belongingBottle, int targetBottleRowIndex, Vector3 snitchTargetHitPosition, Action onComplete) { }

	// RVA: 0x260F9AC Offset: 0x260F9AC VA: 0x260F9AC
	private Sequence PlaySnitchRiseMove(int snitchIndex) { }

	// RVA: 0x2610994 Offset: 0x2610994 VA: 0x2610994
	private Sequence PlaySnitchHitMoveFromPosition(Vector3 targetPosition, int index, AItem targetItem) { }

	// RVA: 0x260F90C Offset: 0x260F90C VA: 0x260F90C
	private Tween PlayRiseScale() { }

	// RVA: 0x26108E0 Offset: 0x26108E0 VA: 0x26108E0
	private Tween PlayHitScale(Vector3 targetPosition, int snitchIndex) { }

	// RVA: 0x260E5FC Offset: 0x260E5FC VA: 0x260E5FC
	public void ToggleSnitchContainer(bool toggle) { }

	// RVA: 0x2611A70 Offset: 0x2611A70 VA: 0x2611A70
	public void SetSnitchEntryVisuals(int index) { }

	// RVA: 0x2611CE8 Offset: 0x2611CE8 VA: 0x2611CE8
	private void PlaySnitchWingAnimation(int snitchIndex) { }

	// RVA: 0x2611A04 Offset: 0x2611A04 VA: 0x2611A04
	private ValueTuple<AnimationCurve, AnimationCurve> GetSnitchHitCurvesForPosition(Vector3 startPosition, Vector3 targetPosition) { }

	// RVA: 0x2611D9C Offset: 0x2611D9C VA: 0x2611D9C
	public void SetSortingForIndex(int index) { }

	// RVA: 0x260FE3C Offset: 0x260FE3C VA: 0x260FE3C
	private Tween PlaySitRiseMove(int index) { }

	// RVA: 0x2611DD4 Offset: 0x2611DD4 VA: 0x2611DD4
	private Tween PlaySitMove(Vector3 targetPosition) { }

	// RVA: 0x2610494 Offset: 0x2610494 VA: 0x2610494
	private Tween PlaySitMovePath(Vector3 targetPosition, int snitchIndex) { }

	// RVA: 0x2611524 Offset: 0x2611524 VA: 0x2611524
	private Tween PlayOutOfBottleHitPath(Vector3 targetPosition, BottleItem belongingBottle, int targetBottleRowIndex) { }

	// RVA: 0x2611338 Offset: 0x2611338 VA: 0x2611338
	private float GetDynamicDurationRequiredForSequence(Vector3 targetPosition, BottleItem belongingBottle, int targetBottleRowIndex) { }

	// RVA: 0x261218C Offset: 0x261218C VA: 0x261218C
	private Tween PlayOutOfBottleHitPathCatMullRom(Vector3 targetPosition, BottleItem belongingBottle) { }

	// RVA: 0x2612524 Offset: 0x2612524 VA: 0x2612524
	private void PlaySitRiseClip(int index) { }

	// RVA: 0x260E1CC Offset: 0x260E1CC VA: 0x260E1CC
	public void OnRedSnitchPlaceTarget() { }

	// RVA: 0x260E4B8 Offset: 0x260E4B8 VA: 0x260E4B8
	public void PlaySitAnimation() { }

	// RVA: 0x2612550 Offset: 0x2612550 VA: 0x2612550
	public void SetInsideBottleColor() { }

	// RVA: 0x26125B0 Offset: 0x26125B0 VA: 0x26125B0
	public void SetOutsideBottleColor() { }

	// RVA: 0x2611F38 Offset: 0x2611F38 VA: 0x2611F38
	private ValueTuple<Vector3, Vector3> GetBezierControlPointsForPosition(Vector3 startPosition, Vector3 targetPosition, int startRowIndex, int targetRowIndex) { }

	// RVA: 0x2612600 Offset: 0x2612600 VA: 0x2612600
	public Tween PlayEntranceShakeRotation() { }

	// RVA: 0x26126A0 Offset: 0x26126A0 VA: 0x26126A0
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x26126A8 Offset: 0x26126A8 VA: 0x26126A8
	private float <PlaySwayIntensity>b__56_0() { }

	[CompilerGenerated]
	// RVA: 0x26126B0 Offset: 0x26126B0 VA: 0x26126B0
	private void <PlaySwayIntensity>b__56_1(float x) { }
}

// Namespace: Modules.Contexts.GamePlay.Board.Items.Scripts.Shelf
[CreateAssetMenu(fileName = "ShelfConfig", menuName = "Configs/ShelfConfig")]