public abstract class FriendsElementViewBase : BasicView // TypeDefIndex: 4362
{
	// Fields
	[CompilerGenerated]
	private int <Id>k__BackingField; // 0x24

	// Properties
	public override int Id { get; set; }
	public abstract Vector3 Size { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x1B8F0A8 Offset: 0x1B8F0A8 VA: 0x1B8F0A8 Slot: 5
	public override int get_Id() { }

	[CompilerGenerated]
	// RVA: 0x1B8F0B0 Offset: 0x1B8F0B0 VA: 0x1B8F0B0 Slot: 6
	public override void set_Id(int value) { }

	// RVA: -1 Offset: -1 Slot: 9
	public abstract Vector3 get_Size();

	// RVA: -1 Offset: -1 Slot: 10
	public abstract void SetViewModel(IFriendScrollElementViewModel viewModel);

	// RVA: 0x1B8F0B8 Offset: 0x1B8F0B8 VA: 0x1B8F0B8 Slot: 8
	public override void Recycle() { }

	// RVA: 0x1B8F0A0 Offset: 0x1B8F0A0 VA: 0x1B8F0A0
	protected void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Friends.Scripts.UI