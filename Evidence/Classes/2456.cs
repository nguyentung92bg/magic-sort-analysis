public class ChargeableBottleTutorialFlow : ISuperChargerTutorialFlow // TypeDefIndex: 2456
{
	// Fields
	private SuperChargerTutorialView _view; // 0x10
	private BottleCollections _bottleCollections; // 0x18
	private Action _requestHide; // 0x20
	private bool _isUseStepShown; // 0x28

	// Methods

	// RVA: 0x2975DB8 Offset: 0x2975DB8 VA: 0x2975DB8 Slot: 4
	public void Show(SuperChargerTutorialView view, BottleCollections bottleCollections, Action requestHide) { }

	// RVA: 0x29763F8 Offset: 0x29763F8 VA: 0x29763F8 Slot: 5
	public void OnButtonClicked() { }

	// RVA: 0x2976538 Offset: 0x2976538 VA: 0x2976538 Slot: 6
	public void OnHide() { }

	// RVA: 0x2976450 Offset: 0x2976450 VA: 0x2976450
	private void ShowUseStep() { }

	// RVA: 0x2975FB4 Offset: 0x2975FB4 VA: 0x2975FB4
	public static ChargeableBottleItem FindChargeableBottleItem(BottleCollections bottleCollections) { }

	// RVA: 0x2974EF4 Offset: 0x2974EF4 VA: 0x2974EF4
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.SuperCharger.Scripts.UI