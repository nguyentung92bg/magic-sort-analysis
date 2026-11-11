public class RainbowWaterSuperChargerStrategy : ISuperChargerStrategy // TypeDefIndex: 1191
{
	// Fields
	private SuperChargerStrategyContext _context; // 0x10
	private RainbowTargetPicker _targetPicker; // 0x18
	private RainbowTarget _pickedTarget; // 0x20
	private bool _isUseInProgress; // 0x28

	// Methods

	// RVA: 0x20EE6E0 Offset: 0x20EE6E0 VA: 0x20EE6E0 Slot: 4
	public void Initialize(SuperChargerStrategyContext context) { }

	// RVA: 0x20EE7B8 Offset: 0x20EE7B8 VA: 0x20EE7B8 Slot: 7
	public bool CanIncreaseProgress() { }

	// RVA: 0x20EE7C0 Offset: 0x20EE7C0 VA: 0x20EE7C0 Slot: 8
	public bool ShouldRetryUseWhenCharged() { }

	// RVA: 0x20EE7C8 Offset: 0x20EE7C8 VA: 0x20EE7C8 Slot: 5
	public void Use(Transform source) { }

	// RVA: 0x20EEAAC Offset: 0x20EEAAC VA: 0x20EEAAC
	private void FinishUse() { }

	// RVA: 0x20EEA74 Offset: 0x20EEA74 VA: 0x20EEA74
	private void LockPickedBottle() { }

	// RVA: 0x20EEB68 Offset: 0x20EEB68 VA: 0x20EEB68
	private void UnlockPickedBottle() { }

	// RVA: 0x20EEBA0 Offset: 0x20EEBA0 VA: 0x20EEBA0
	private void SendSuperChargerUsedEvent() { }

	// RVA: 0x20EEA38 Offset: 0x20EEA38 VA: 0x20EEA38
	private bool TryPickTarget() { }

	// RVA: 0x20EEC8C Offset: 0x20EEC8C VA: 0x20EEC8C
	private List<Vector3> GetTrailTargetPositions() { }

	// RVA: 0x20EEB40 Offset: 0x20EEB40 VA: 0x20EEB40
	private void ApplyRainbow() { }

	// RVA: 0x20EED8C Offset: 0x20EED8C VA: 0x20EED8C Slot: 6
	public void Dispose() { }

	// RVA: 0x20E98A0 Offset: 0x20E98A0 VA: 0x20E98A0
	public void .ctor() { }
}

// Namespace: Modules.Contexts.GamePlay.SuperCharger.Strategies.Rainbow