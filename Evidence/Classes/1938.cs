public class WheelOfFortuneWheelController : MonoBehaviour // TypeDefIndex: 1938
{
	// Fields
	[SerializeField]
	private Transform _transform; // 0x18
	[SerializeField]
	private List<StageLigths> _stageLigths; // 0x20
	[SerializeField]
	private WheelOfFortuneAnimationConfig _config; // 0x28
	private WheelOfFortuneWheelController.AnimationState currentState; // 0x30
	private int _currentPieceIndex; // 0x34
	private float phaseTimer; // 0x38
	private float accumulatedAngle; // 0x3C
	private float currentAngle; // 0x40
	private WheelOfFortuneWheelController.AnimationParameters parameters; // 0x48
	private float finalStrategyStartAngle; // 0x50
	private float finalStrategyTargetAngle; // 0x54
	private bool isEffectPlayed; // 0x58
	private int indexCount; // 0x5C

	// Methods

	// RVA: 0x31A3FF8 Offset: 0x31A3FF8 VA: 0x31A3FF8
	public void Initialize(WheelOfFortuneStageViewModel stageViewModel) { }

	// RVA: 0x31A4544 Offset: 0x31A4544 VA: 0x31A4544
	public void Reset() { }

	// RVA: 0x31A7EB8 Offset: 0x31A7EB8 VA: 0x31A7EB8
	private void Update() { }

	// RVA: 0x31A849C Offset: 0x31A849C VA: 0x31A849C
	private void StartAnimation(int targetIndex, WheelOfFortuneSpinStrategy spinStrategy) { }

	// RVA: 0x31A8778 Offset: 0x31A8778 VA: 0x31A8778
	private void SpinToSelectedIndex(int index, WheelOfFortuneSpinStrategy spinStrategy, int stageIndex) { }

	// RVA: 0x31A45C0 Offset: 0x31A45C0 VA: 0x31A45C0
	public Sequence StartSpin(int spinIndex, WheelOfFortuneSpinStrategy spinStrategy, int stageIndex) { }

	// RVA: 0x31A8788 Offset: 0x31A8788 VA: 0x31A8788
	private bool IsAnimating() { }

	// RVA: 0x31A7F28 Offset: 0x31A7F28 VA: 0x31A7F28
	private void UpdateAcceleration() { }

	// RVA: 0x31A81B0 Offset: 0x31A81B0 VA: 0x31A81B0
	private void UpdateConstantVelocity() { }

	// RVA: 0x31A824C Offset: 0x31A824C VA: 0x31A824C
	private void UpdateDeceleration() { }

	// RVA: 0x31A831C Offset: 0x31A831C VA: 0x31A831C
	private void UpdateFinalStrategy() { }

	// RVA: 0x31A87DC Offset: 0x31A87DC VA: 0x31A87DC
	private void StartLightBlinkEffect() { }

	[IteratorStateMachine(typeof(WheelOfFortuneWheelController.<LightBlinkCoroutine>d__27))]
	// RVA: 0x31A8804 Offset: 0x31A8804 VA: 0x31A8804
	private IEnumerator LightBlinkCoroutine() { }

	// RVA: 0x31A7FBC Offset: 0x31A7FBC VA: 0x31A7FBC
	private void UpdatePieceLights() { }

	// RVA: 0x31A8AF4 Offset: 0x31A8AF4 VA: 0x31A8AF4
	private void TurnOnLights(int pieceIndex) { }

	// RVA: 0x31A88A0 Offset: 0x31A88A0 VA: 0x31A88A0
	private void TurnOffLights(int pieceIndex) { }

	// RVA: 0x31A7E4C Offset: 0x31A7E4C VA: 0x31A7E4C
	private void TurnOffAllLights() { }

	// RVA: 0x31A8648 Offset: 0x31A8648 VA: 0x31A8648
	private WheelOfFortuneWheelController.AnimationParameters CalculateAnimationParameters(int targetIndex, WheelOfFortuneSpinStrategy spinStrategy) { }

	// RVA: 0x31A87A0 Offset: 0x31A87A0 VA: 0x31A87A0
	private void SetRotation(float angleRadians) { }

	// RVA: 0x31A8D50 Offset: 0x31A8D50 VA: 0x31A8D50
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.WheelOfFortune.UI