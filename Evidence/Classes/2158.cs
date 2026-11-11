public class BadgeContainerView : BasicView // TypeDefIndex: 2158
{
	// Fields
	[SerializeField]
	private UIElement _uiElement; // 0x28
	[SerializeField]
	private List<BadgeView> _badgeViews; // 0x30
	[SerializeField]
	private TeamsBadgeConfig _badgeConfig; // 0x38
	[CompilerGenerated]
	private int <Id>k__BackingField; // 0x40

	// Properties
	public override int Id { get; set; }
	public Vector3 Size { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x3452DF4 Offset: 0x3452DF4 VA: 0x3452DF4 Slot: 5
	public override int get_Id() { }

	[CompilerGenerated]
	// RVA: 0x3452DFC Offset: 0x3452DFC VA: 0x3452DFC Slot: 6
	public override void set_Id(int value) { }

	// RVA: 0x3452E04 Offset: 0x3452E04 VA: 0x3452E04
	public Vector3 get_Size() { }

	// RVA: 0x3452E2C Offset: 0x3452E2C VA: 0x3452E2C Slot: 7
	public override void Initialize() { }

	// RVA: 0x3452E30 Offset: 0x3452E30 VA: 0x3452E30 Slot: 8
	public override void Recycle() { }

	// RVA: 0x3452FD4 Offset: 0x3452FD4 VA: 0x3452FD4
	public void SetModel(BadgeContainerViewModel viewModel) { }

	// RVA: 0x34531AC Offset: 0x34531AC VA: 0x34531AC
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Teams.Scripts.UI