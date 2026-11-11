public class FireworkView : AItemView // TypeDefIndex: 1714
{
	// Fields
	[SerializeField]
	private FireworkAnimationConfig _config; // 0x20
	[SerializeField]
	private FireworkView.FireworkMovingTransform[] _fireworks; // 0x28
	[SerializeField]
	private SortingGroup _baseSortingGroup; // 0x30
	[SerializeField]
	private GameObject _baseObject; // 0x38
	[SerializeField]
	private ParticleSystem _baseDestroyParticle; // 0x40
	[SerializeField]
	private GameObject[] _fireworkLids; // 0x48
	private List<FireworkView.FireworkMovingTransform> _activeFireworks; // 0x50
	private List<FireworkView.FireworkMovingTransform> _launchedFireworks; // 0x58

	// Properties
	public FireworkAnimationConfig Config { get; }

	// Methods

	// RVA: 0x2755348 Offset: 0x2755348 VA: 0x2755348
	public FireworkAnimationConfig get_Config() { }

	// RVA: 0x2755350 Offset: 0x2755350 VA: 0x2755350 Slot: 5
	public override void Initialize() { }

	// RVA: 0x2755354 Offset: 0x2755354 VA: 0x2755354 Slot: 6
	public override void Spawn() { }

	// RVA: 0x2752FE4 Offset: 0x2752FE4 VA: 0x2752FE4
	public void Prepare(Sorting sorting, int fireworkCount) { }

	// RVA: 0x27558A8 Offset: 0x27558A8 VA: 0x27558A8 Slot: 7
	public override void Recycle() { }

	// RVA: 0x2755904 Offset: 0x2755904 VA: 0x2755904 Slot: 8
	public override void Show() { }

	// RVA: 0x2755928 Offset: 0x2755928 VA: 0x2755928 Slot: 9
	public override void Hide() { }

	// RVA: 0x275545C Offset: 0x275545C VA: 0x275545C
	public void SetSorting(Sorting sorting) { }

	// RVA: 0x27536E0 Offset: 0x27536E0 VA: 0x27536E0
	public Sequence PlayCompleteAnimation() { }

	// RVA: 0x27545E8 Offset: 0x27545E8 VA: 0x27545E8
	public Sequence SendFireworkToTarget(Vector3 targetPosition) { }

	// RVA: 0x2755954 Offset: 0x2755954 VA: 0x2755954
	private float TangentToAngle(Vector3 tangent) { }

	// RVA: 0x2755988 Offset: 0x2755988 VA: 0x2755988
	private Vector3 EvaluateCubicBezier(Vector3 p0, Vector3 p1, Vector3 p2, Vector3 p3, float t) { }

	// RVA: 0x2755A24 Offset: 0x2755A24 VA: 0x2755A24
	private Vector3 EvaluateCubicBezierTangent(Vector3 p0, Vector3 p1, Vector3 p2, Vector3 p3, float t) { }

	// RVA: 0x2754D9C Offset: 0x2754D9C VA: 0x2754D9C
	public void HideIdleFireworks() { }

	// RVA: 0x27554A0 Offset: 0x27554A0 VA: 0x27554A0
	private void SetActiveFireworks(int fireworkCount) { }

	// RVA: 0x27557D0 Offset: 0x27557D0 VA: 0x27557D0
	private void InitializeLids(int fireworkCount) { }

	// RVA: 0x2755ACC Offset: 0x2755ACC VA: 0x2755ACC
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x2755B84 Offset: 0x2755B84 VA: 0x2755B84
	private void <PlayCompleteAnimation>b__17_0() { }
}

// Namespace: Modules.Contexts.GamePlay.Board.Items.Scripts.Duck
[Serializable]