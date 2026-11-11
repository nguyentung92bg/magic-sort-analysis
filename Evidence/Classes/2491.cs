public abstract class StrikeShowLeaderboardElementView : BasicView // TypeDefIndex: 2491
{
	// Fields
	[SerializeField]
	protected UIElement _uiElement; // 0x28
	[CompilerGenerated]
	private int <Id>k__BackingField; // 0x30

	// Properties
	public Vector3 Size { get; }
	public override int Id { get; set; }

	// Methods

	// RVA: 0x2AFC018 Offset: 0x2AFC018 VA: 0x2AFC018
	public Vector3 get_Size() { }

	[CompilerGenerated]
	// RVA: 0x2AFC040 Offset: 0x2AFC040 VA: 0x2AFC040 Slot: 5
	public override int get_Id() { }

	[CompilerGenerated]
	// RVA: 0x2AFC048 Offset: 0x2AFC048 VA: 0x2AFC048 Slot: 6
	public override void set_Id(int value) { }

	// RVA: 0x2AFC050 Offset: 0x2AFC050 VA: 0x2AFC050 Slot: 7
	public override void Initialize() { }

	// RVA: 0x2AFC054 Offset: 0x2AFC054 VA: 0x2AFC054 Slot: 8
	public override void Recycle() { }

	// RVA: -1 Offset: -1 Slot: 9
	public abstract void SetViewModel(IStrikeShowLeaderboardRowViewModel viewModel);

	// RVA: 0x2AFC010 Offset: 0x2AFC010 VA: 0x2AFC010
	protected void .ctor() { }
}

// Namespace: Modules.Contexts.Home.StrikeShow.Scripts.UI