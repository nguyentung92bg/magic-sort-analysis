public class LevelTextAnimationHandler : MonoBehaviour // TypeDefIndex: 1109
{
	// Fields
	[SerializeField]
	private Vector3 _screenTopInitialPosition; // 0x18
	[SerializeField]
	private Vector3 _screenTopLeftInitialPosition; // 0x24
	[SerializeField]
	private Vector3 _screenTopRightInitialPosition; // 0x30
	[SerializeField]
	private Transform _levelTextTransform; // 0x40
	[SerializeField]
	private Transform _leftTopPanelTransform; // 0x48
	[SerializeField]
	private Transform _rightTopPanelTransform; // 0x50
	[SerializeField]
	private bool _isDaily; // 0x58
	private FailFlowAnimationConfig _animationConfig; // 0x60
	private GameUIViewConfig _viewConfig; // 0x68
	private Vector3 _levelTextInitialPosition; // 0x70
	private Vector3 _leftTopPanelInitialPosition; // 0x7C
	private Vector3 _rightTopPanelInitialPosition; // 0x88

	// Methods

	// RVA: 0x16F921C Offset: 0x16F921C VA: 0x16F921C
	private void Awake() { }

	// RVA: 0x16F9610 Offset: 0x16F9610 VA: 0x16F9610
	public void Init(GameUIViewConfig viewConfig, FailFlowAnimationConfig animationConfig) { }

	// RVA: 0x16F9640 Offset: 0x16F9640 VA: 0x16F9640
	private void SetParentInitialPositions(int bottleRowCount) { }

	// RVA: 0x16F96BC Offset: 0x16F96BC VA: 0x16F96BC
	private void OnDestroy() { }

	// RVA: 0x16F9A44 Offset: 0x16F9A44 VA: 0x16F9A44
	private void ShowLevelTextInitial() { }

	// RVA: 0x16F9B7C Offset: 0x16F9B7C VA: 0x16F9B7C
	private void PlayLevelEntranceAnimationSignal(int bottleRowCount) { }

	// RVA: 0x16F9CC4 Offset: 0x16F9CC4 VA: 0x16F9CC4
	private void ShowLevelTextQuit() { }

	// RVA: 0x16F9DFC Offset: 0x16F9DFC VA: 0x16F9DFC
	private void ShowLevelTextStuck() { }

	// RVA: 0x16F9F34 Offset: 0x16F9F34 VA: 0x16F9F34
	private void HideLevelTextQuit() { }

	// RVA: 0x16FA020 Offset: 0x16FA020 VA: 0x16FA020
	private void HideLevelTextStuck() { }

	// RVA: 0x16FA10C Offset: 0x16FA10C VA: 0x16FA10C
	private void HideLevelTextImmediately() { }

	// RVA: 0x16FA168 Offset: 0x16FA168 VA: 0x16FA168
	public void .ctor() { }
}

// Namespace: Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts