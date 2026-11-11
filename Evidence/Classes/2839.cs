public class ToolbarButton : Button // TypeDefIndex: 2839
{
	// Fields
	[SerializeField]
	private Transform _toolbarSpawnPivot; // 0x48
	[SerializeField]
	private Transform _toolbarUpwardsSpawnPivot; // 0x50
	[SerializeField]
	private bool _downwardsToolbar; // 0x58
	[SerializeField]
	private ToolbarContext _toolbarContext; // 0x5C
	[SerializeField]
	private ToolbarAssetColor _toolbarAssetColor; // 0x60
	[SerializeField]
	private bool _changeDirectionAccordingToPosition; // 0x64
	[SerializeField]
	private bool _horizontalToolbar; // 0x65
	[SerializeField]
	private bool _rightToolbar; // 0x66
	private bool _canClickToolbar; // 0x67
	private ToolbarModel _toolbarModel; // 0x68

	// Methods

	// RVA: 0x2DCB3AC Offset: 0x2DCB3AC VA: 0x2DCB3AC
	public void SetToolbarModel(string text, RewardModel rewardModel) { }

	// RVA: 0x2DCB4A4 Offset: 0x2DCB4A4 VA: 0x2DCB4A4
	public void OverrideToolbarContext(ToolbarContext context) { }

	// RVA: 0x2DCB4C0 Offset: 0x2DCB4C0 VA: 0x2DCB4C0
	public void SetToolbarAssetColor(ToolbarAssetColor color) { }

	// RVA: 0x2DCB4DC Offset: 0x2DCB4DC VA: 0x2DCB4DC Slot: 11
	public override void OnTouchDown(Vector2 position) { }

	// RVA: 0x2DCB650 Offset: 0x2DCB650 VA: 0x2DCB650 Slot: 12
	public override void OnTouchUp(Vector2 position) { }

	// RVA: 0x2DCB730 Offset: 0x2DCB730 VA: 0x2DCB730
	private void OnSelectSuccessHandler() { }

	// RVA: 0x2DCB734 Offset: 0x2DCB734 VA: 0x2DCB734
	public void OpenToolbar() { }

	// RVA: 0x2DCB9F0 Offset: 0x2DCB9F0 VA: 0x2DCB9F0
	public void ToggleToolbarInteraction(bool toggle) { }

	// RVA: 0x2DCB9FC Offset: 0x2DCB9FC VA: 0x2DCB9FC
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.UI.Toolbar.Scripts
[CreateAssetMenu(fileName = "ToolbarConfig", menuName = "Configs/ToolbarConfig")]