public class BoosterButtonAnimationHandler : MonoBehaviour // TypeDefIndex: 1105
{
	// Fields
	[SerializeField]
	private Transform _leftBooster; // 0x18
	[SerializeField]
	private Transform _middleBooster; // 0x20
	[SerializeField]
	private Transform _rightBooster; // 0x28
	[SerializeField]
	private Vector3 _screenBottomPosition; // 0x30
	[SerializeField]
	private Vector3 _screenRightPosition; // 0x3C
	[SerializeField]
	private Vector3 _screenLeftPosition; // 0x48
	[SerializeField]
	private Transform _leftBoosterDefault; // 0x58
	[SerializeField]
	private Transform _middleBoosterDefault; // 0x60
	[SerializeField]
	private Transform _rightBoosterDefault; // 0x68
	[SerializeField]
	private Transform _leftBoosterWithPanel; // 0x70
	[SerializeField]
	private Transform _middleBoosterWithPanel; // 0x78
	[SerializeField]
	private Transform _rightBoosterWithPanel; // 0x80
	[SerializeField]
	private Transform _panel; // 0x88
	[SerializeField]
	private Transform _boostersParent; // 0x90
	[SerializeField]
	private Transform _superChargerButton; // 0x98
	[SerializeField]
	private Transform _superCharger4BoosterParent; // 0xA0
	private FailFlowAnimationConfig _animationConfig; // 0xA8
	private GameUIViewConfig _viewConfig; // 0xB0
	private Vector3 _leftBoosterOriginalPosition; // 0xB8
	private Vector3 _rightBoosterOriginalPosition; // 0xC4
	private Vector3 _middleBoosterOriginalPosition; // 0xD0
	private Sequence _showBoostersSequence; // 0xE0
	private Sequence _hideBoostersSequence; // 0xE8
	private Tween _leftHideBoosterTween; // 0xF0
	private Tween _rightHideBoosterTween; // 0xF8
	private Tween _middleHideBoosterTween; // 0x100
	private Tween _panelHideBoosterTween; // 0x108
	private Tween _leftEnterBoosterTween; // 0x110
	private Tween _rightEnterBoosterTween; // 0x118
	private Tween _middleEnterBoosterTween; // 0x120
	private Tween _panelTween; // 0x128
	private Tween _boostersParentTween; // 0x130

	// Methods

	// RVA: 0x16F76E4 Offset: 0x16F76E4 VA: 0x16F76E4
	private void Awake() { }

	// RVA: 0x16F7E34 Offset: 0x16F7E34 VA: 0x16F7E34
	public void Init(GameUIViewConfig viewConfig, FailFlowAnimationConfig animationConfig) { }

	// RVA: 0x16F7E64 Offset: 0x16F7E64 VA: 0x16F7E64
	private void SetParentInitialPositions(int bottleRowCount) { }

	// RVA: 0x16F800C Offset: 0x16F800C VA: 0x16F800C
	private void OnDestroy() { }

	// RVA: 0x16F8400 Offset: 0x16F8400 VA: 0x16F8400
	private void ShowBoosterButtons() { }

	// RVA: 0x16F8620 Offset: 0x16F8620 VA: 0x16F8620
	private void PlayLevelEntranceAnimation(int bottleRowCount) { }

	// RVA: 0x16F88CC Offset: 0x16F88CC VA: 0x16F88CC
	private void ShowBoosterButtonsWithLevelStartDelay() { }

	// RVA: 0x16F88E8 Offset: 0x16F88E8 VA: 0x16F88E8
	private void ShowBoosterButtonsWithQuitDelay() { }

	// RVA: 0x16F8424 Offset: 0x16F8424 VA: 0x16F8424
	private void ShowBoosterButtonsWithDelay(float delay) { }

	// RVA: 0x16F8904 Offset: 0x16F8904 VA: 0x16F8904
	private void HideBoosterButtonsWithQuitDelay() { }

	// RVA: 0x16F8B68 Offset: 0x16F8B68 VA: 0x16F8B68
	private void HideBoosterButtons() { }

	// RVA: 0x16F88AC Offset: 0x16F88AC VA: 0x16F88AC
	private void HideBoosterButtonsImmediately() { }

	// RVA: 0x16F8B88 Offset: 0x16F8B88 VA: 0x16F8B88
	private void HideLeftBooster() { }

	// RVA: 0x16F8CA8 Offset: 0x16F8CA8 VA: 0x16F8CA8
	private void HideMiddleBooster() { }

	// RVA: 0x16F8E94 Offset: 0x16F8E94 VA: 0x16F8E94
	private void HideRightBooster() { }

	// RVA: 0x16F8FBC Offset: 0x16F8FBC VA: 0x16F8FBC
	private void HideLeftBoosterImmediately() { }

	// RVA: 0x16F9018 Offset: 0x16F9018 VA: 0x16F9018
	private void HideMiddleBoosterImmediately() { }

	// RVA: 0x16F90B8 Offset: 0x16F90B8 VA: 0x16F90B8
	private void HideRightBoosterImmediately() { }

	// RVA: 0x16F911C Offset: 0x16F911C VA: 0x16F911C
	private void HideBoosterButtonsImmediatelyAndKillTweens() { }

	// RVA: 0x16F91E0 Offset: 0x16F91E0 VA: 0x16F91E0
	public void .ctor() { }
}

// Namespace: Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts
[CreateAssetMenu(fileName = "FailFlowAnimationConfig", menuName = "Configs/FailFlowAnimationConfig", order = 1)]