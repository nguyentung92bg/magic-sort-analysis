public class KeySortTutorialFlow : ISuperChargerTutorialFlow // TypeDefIndex: 2458
{
	// Fields
	private static readonly Vector3 FingerOffsetFromSortKey; // 0x0
	private const float PanelTopPositionY = 5;
	private const float PanelBottomPositionY = -5;
	private const float TopBottleThresholdY = 1.5;
	private const float LeftBottleThresholdX = 0;
	private SuperChargerTutorialView _view; // 0x10
	private Action _requestHide; // 0x18
	private BottleItem _keyBottle; // 0x20
	private SortKeyItem _sortKeyItem; // 0x28
	private int _stepIndex; // 0x30
	private bool _isFingerMirrored; // 0x34

	// Methods

	// RVA: 0x29766B4 Offset: 0x29766B4 VA: 0x29766B4 Slot: 4
	public void Show(SuperChargerTutorialView view, BottleCollections bottleCollections, Action requestHide) { }

	// RVA: 0x2976E58 Offset: 0x2976E58 VA: 0x2976E58 Slot: 5
	public void OnButtonClicked() { }

	// RVA: 0x29770D0 Offset: 0x29770D0 VA: 0x29770D0 Slot: 6
	public void OnHide() { }

	// RVA: 0x2977128 Offset: 0x2977128 VA: 0x2977128
	private void SetFingerMirrored(bool isMirrored) { }

	// RVA: 0x2976EAC Offset: 0x2976EAC VA: 0x2976EAC
	private void ShowUseStep() { }

	// RVA: 0x2976D5C Offset: 0x2976D5C VA: 0x2976D5C
	private static float GetDynamicPanelYPosition(BottleItem bottle) { }

	// RVA: 0x2976DB0 Offset: 0x2976DB0 VA: 0x2976DB0
	private void SetTutorialSorting() { }

	// RVA: 0x2977018 Offset: 0x2977018 VA: 0x2977018
	private void SetDefaultSorting() { }

	// RVA: 0x29768CC Offset: 0x29768CC VA: 0x29768CC
	private void FindSortKeyTarget(BottleCollections bottleCollections) { }

	// RVA: 0x2974F0C Offset: 0x2974F0C VA: 0x2974F0C
	public void .ctor() { }

	// RVA: 0x297722C Offset: 0x297722C VA: 0x297722C
	private static void .cctor() { }
}

// Namespace: Modules.Contexts.Home.SuperCharger.Scripts.UI