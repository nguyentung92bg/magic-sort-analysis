public class WheelOfFortuneTokenContainer : MonoBehaviour // TypeDefIndex: 1927
{
	// Fields
	[SerializeField]
	private ParticleSystem _onCurrencyArrivedParticleSystem; // 0x18
	[SerializeField]
	private Transform _tokenUITransform; // 0x20
	[SerializeField]
	private TextMeshPro _currentTokenAmountText; // 0x28
	[SerializeField]
	private AnimationCurve _punchScaleCurve; // 0x30
	[SerializeField]
	private Vector3 _punchScaleAmount; // 0x38
	[SerializeField]
	private float _punchScaleDuration; // 0x44
	[SerializeField]
	private int _scaleVibrato; // 0x48
	private int _currentAmount; // 0x4C
	private Tween _punchScaleTween; // 0x50
	private WheelOfFortuneViewModel _viewModel; // 0x58

	// Methods

	// RVA: 0x31A3EA4 Offset: 0x31A3EA4 VA: 0x31A3EA4
	public void Initialize(WheelOfFortuneViewModel viewModel) { }

	// RVA: 0x31A7948 Offset: 0x31A7948 VA: 0x31A7948
	public void UpdateViewModel(WheelOfFortuneViewModel newViewModel) { }

	// RVA: 0x31A7950 Offset: 0x31A7950 VA: 0x31A7950
	private void ChangeTokenAmount(int newAmount) { }

	// RVA: 0x31A4F04 Offset: 0x31A4F04 VA: 0x31A4F04
	public void SetCurrentTokenAmount() { }

	// RVA: 0x31A799C Offset: 0x31A799C VA: 0x31A799C
	public Transform GetTargetTransform() { }

	// RVA: 0x31A4DD0 Offset: 0x31A4DD0 VA: 0x31A4DD0
	public void Dispose() { }

	[Button]
	// RVA: 0x31A77E0 Offset: 0x31A77E0 VA: 0x31A77E0
	public void OnCurrencyArrived() { }

	// RVA: 0x31A79A4 Offset: 0x31A79A4 VA: 0x31A79A4
	private void IncrementCurrencyAmount() { }

	// RVA: 0x31A79D0 Offset: 0x31A79D0 VA: 0x31A79D0
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x31A79D8 Offset: 0x31A79D8 VA: 0x31A79D8
	private void <OnCurrencyArrived>b__16_0() { }
}

// Namespace: Modules.Contexts.Home.WheelOfFortune.Scripts.UI