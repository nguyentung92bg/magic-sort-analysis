public class TeamMessageView : BasicView // TypeDefIndex: 2178
{
	// Fields
	[SerializeField]
	protected UIElement _uiElement; // 0x28
	[CompilerGenerated]
	private int <Id>k__BackingField; // 0x30

	// Properties
	public override int Id { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x345A798 Offset: 0x345A798 VA: 0x345A798 Slot: 5
	public override int get_Id() { }

	[CompilerGenerated]
	// RVA: 0x345A7A0 Offset: 0x345A7A0 VA: 0x345A7A0 Slot: 6
	public override void set_Id(int value) { }

	// RVA: 0x345A7A8 Offset: 0x345A7A8 VA: 0x345A7A8 Slot: 7
	public override void Initialize() { }

	// RVA: 0x34597D8 Offset: 0x34597D8 VA: 0x34597D8 Slot: 8
	public override void Recycle() { }

	// RVA: 0x345A7AC Offset: 0x345A7AC VA: 0x345A7AC Slot: 9
	public virtual Vector3 GetSizeByContent(TeamsChatMessageViewModel message) { }

	// RVA: 0x34594F0 Offset: 0x34594F0 VA: 0x34594F0 Slot: 10
	public virtual void SetMessage(TeamsChatMessageViewModel message) { }

	// RVA: 0x345A7D4 Offset: 0x345A7D4 VA: 0x345A7D4 Slot: 11
	public virtual Task RefreshView() { }

	// RVA: 0x34592C0 Offset: 0x34592C0 VA: 0x34592C0
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Teams.Scripts.UI