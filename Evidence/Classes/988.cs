public abstract class AItemPart // TypeDefIndex: 988
{
	// Fields
	[CompilerGenerated]
	private ItemPartType <ItemPartType>k__BackingField; // 0x10
	[CompilerGenerated]
	private Action<AItemPart> OnRecycled; // 0x18
	[CompilerGenerated]
	private AItemPartView <View>k__BackingField; // 0x20

	// Properties
	public ItemPartType ItemPartType { get; set; }
	public ITransform Root { get; }
	protected AItemPartView View { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x40EA2AC Offset: 0x40EA2AC VA: 0x40EA2AC
	public ItemPartType get_ItemPartType() { }

	[CompilerGenerated]
	// RVA: 0x40EA2B4 Offset: 0x40EA2B4 VA: 0x40EA2B4
	private void set_ItemPartType(ItemPartType value) { }

	[CompilerGenerated]
	// RVA: 0x40EA2BC Offset: 0x40EA2BC VA: 0x40EA2BC
	public void add_OnRecycled(Action<AItemPart> value) { }

	[CompilerGenerated]
	// RVA: 0x40EA36C Offset: 0x40EA36C VA: 0x40EA36C
	public void remove_OnRecycled(Action<AItemPart> value) { }

	// RVA: 0x40EA41C Offset: 0x40EA41C VA: 0x40EA41C
	public ITransform get_Root() { }

	[CompilerGenerated]
	// RVA: 0x40EA438 Offset: 0x40EA438 VA: 0x40EA438
	protected AItemPartView get_View() { }

	[CompilerGenerated]
	// RVA: 0x40EA440 Offset: 0x40EA440 VA: 0x40EA440
	private void set_View(AItemPartView value) { }

	// RVA: 0x40EA448 Offset: 0x40EA448 VA: 0x40EA448
	public void SetView(AItemPartView view) { }

	// RVA: 0x40EA450 Offset: 0x40EA450 VA: 0x40EA450
	public void SetType(ItemPartType itemPartType) { }

	// RVA: 0x40EA458 Offset: 0x40EA458 VA: 0x40EA458
	public void Initialize() { }

	// RVA: -1 Offset: -1 Slot: 4
	protected abstract void OnInitialize();

	// RVA: 0x40EA48C Offset: 0x40EA48C VA: 0x40EA48C
	public void Spawn() { }

	// RVA: -1 Offset: -1 Slot: 5
	protected abstract void OnSpawn();

	// RVA: 0x40EA4C0 Offset: 0x40EA4C0 VA: 0x40EA4C0
	public void Recycle() { }

	// RVA: -1 Offset: -1 Slot: 6
	protected abstract void OnRecycle();

	// RVA: 0x40EA518 Offset: 0x40EA518 VA: 0x40EA518
	public void SetParent(ITransform parent) { }

	// RVA: 0x40EA5CC Offset: 0x40EA5CC VA: 0x40EA5CC
	public Vector3 GetPosition() { }

	// RVA: 0x40EA674 Offset: 0x40EA674 VA: 0x40EA674
	public void SetPosition(Vector3 position) { }

	// RVA: 0x40EA748 Offset: 0x40EA748 VA: 0x40EA748
	public void SetLocalPosition(Vector3 position) { }

	// RVA: 0x40EA81C Offset: 0x40EA81C VA: 0x40EA81C
	public void SetLocalRotation(Quaternion rotation) { }

	// RVA: 0x40EA8F8 Offset: 0x40EA8F8 VA: 0x40EA8F8
	public void SetLocalScale(Vector3 scale) { }

	// RVA: 0x40EA9CC Offset: 0x40EA9CC VA: 0x40EA9CC
	protected void .ctor() { }
}

// Namespace: Modules.Infrastructure.Common.Scripts.Component