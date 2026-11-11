public class RainbowWaterTutorialFlow : ISuperChargerTutorialFlow // TypeDefIndex: 2459
{
	// Fields
	private static readonly Vector3 FingerOffsetFromRainbowWater; // 0x0
	private const float PanelTopPositionY = 5;
	private const float PanelBottomPositionY = -5;
	private const float TopBottleThresholdY = 1.5;
	private const float LeftBottleThresholdX = 0;
	private SuperChargerTutorialView _view; // 0x10
	private Action _requestHide; // 0x18
	private BottleItem _rainbowBottle; // 0x20
	private WaterItem _rainbowWater; // 0x28
	private int _stepIndex; // 0x30
	private bool _isFingerMirrored; // 0x34

	// Methods

	// RVA: 0x2977280 Offset: 0x2977280 VA: 0x2977280 Slot: 4
	public void Show(SuperChargerTutorialView view, BottleCollections bottleCollections, Action requestHide) { }

	// RVA: 0x29779E0 Offset: 0x29779E0 VA: 0x29779E0 Slot: 5
	public void OnButtonClicked() { }

	// RVA: 0x2977D0C Offset: 0x2977D0C VA: 0x2977D0C Slot: 6
	public void OnHide() { }

	// RVA: 0x2977D64 Offset: 0x2977D64 VA: 0x2977D64
	private void SetFingerMirrored(bool isMirrored) { }

	// RVA: 0x2977A48 Offset: 0x2977A48 VA: 0x2977A48
	private void ShowUseStep() { }

	// RVA: 0x2977BAC Offset: 0x2977BAC VA: 0x2977BAC
	private void ShowFinalStep() { }

	// RVA: 0x29778E4 Offset: 0x29778E4 VA: 0x29778E4
	private static float GetDynamicPanelYPosition(BottleItem bottle) { }

	// RVA: 0x2977938 Offset: 0x2977938 VA: 0x2977938
	private void SetTutorialSorting() { }

	// RVA: 0x2977C54 Offset: 0x2977C54 VA: 0x2977C54
	private void SetDefaultSorting() { }

	// RVA: 0x2977498 Offset: 0x2977498 VA: 0x2977498
	private void FindRainbowTarget(BottleCollections bottleCollections) { }

	// RVA: 0x2974F04 Offset: 0x2974F04 VA: 0x2974F04
	public void .ctor() { }

	// RVA: 0x2977E00 Offset: 0x2977E00 VA: 0x2977E00
	private static void .cctor() { }
}

// Namespace: Modules.Contexts.Home.SuperCharger.Scripts.UI