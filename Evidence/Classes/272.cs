public abstract class EditorAItem // TypeDefIndex: 272
{
	// Fields
	[CompilerGenerated]
	private Action<EditorAItem> OnRecycled; // 0x10
	[CompilerGenerated]
	private ItemType <ItemType>k__BackingField; // 0x18
	[CompilerGenerated]
	private EditorAItemView <View>k__BackingField; // 0x20

	// Properties
	public ItemType ItemType { get; set; }
	public ITransform Root { get; }
	protected EditorAItemView View { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x37AE064 Offset: 0x37AE064 VA: 0x37AE064
	public void add_OnRecycled(Action<EditorAItem> value) { }

	[CompilerGenerated]
	// RVA: 0x37AE114 Offset: 0x37AE114 VA: 0x37AE114
	public void remove_OnRecycled(Action<EditorAItem> value) { }

	[CompilerGenerated]
	// RVA: 0x37AE1C4 Offset: 0x37AE1C4 VA: 0x37AE1C4
	public ItemType get_ItemType() { }

	[CompilerGenerated]
	// RVA: 0x37AE1CC Offset: 0x37AE1CC VA: 0x37AE1CC
	private void set_ItemType(ItemType value) { }

	// RVA: 0x37AC100 Offset: 0x37AC100 VA: 0x37AC100
	public ITransform get_Root() { }

	[CompilerGenerated]
	// RVA: 0x37AE1D4 Offset: 0x37AE1D4 VA: 0x37AE1D4
	protected EditorAItemView get_View() { }

	[CompilerGenerated]
	// RVA: 0x37AE1DC Offset: 0x37AE1DC VA: 0x37AE1DC
	private void set_View(EditorAItemView value) { }

	// RVA: 0x37AE1E4 Offset: 0x37AE1E4 VA: 0x37AE1E4
	public void SetView(EditorAItemView view) { }

	// RVA: 0x37AE1EC Offset: 0x37AE1EC VA: 0x37AE1EC
	public void SetType(ItemType itemType) { }

	// RVA: 0x37AE1F4 Offset: 0x37AE1F4 VA: 0x37AE1F4
	public void Initialize() { }

	// RVA: -1 Offset: -1 Slot: 4
	protected abstract void OnInitialize();

	// RVA: 0x37AE228 Offset: 0x37AE228 VA: 0x37AE228
	public void Spawn() { }

	// RVA: -1 Offset: -1 Slot: 5
	protected abstract void OnSpawn();

	// RVA: 0x37A3848 Offset: 0x37A3848 VA: 0x37A3848
	public void Recycle() { }

	// RVA: -1 Offset: -1 Slot: 6
	protected abstract void OnRecycle();

	// RVA: 0x37AC850 Offset: 0x37AC850 VA: 0x37AC850
	public void SetParent(ITransform parent) { }

	// RVA: 0x37A649C Offset: 0x37A649C VA: 0x37A649C
	public void SetPosition(Vector3 position) { }

	// RVA: 0x37ACAC8 Offset: 0x37ACAC8 VA: 0x37ACAC8
	public void SetLocalPosition(Vector3 position) { }

	// RVA: 0x37AE25C Offset: 0x37AE25C VA: 0x37AE25C
	public Vector3 GetLocalPosition() { }

	// RVA: 0x37AC904 Offset: 0x37AC904 VA: 0x37AC904
	public void SetLocalScale(Vector3 scale) { }

	// RVA: 0x37AE308 Offset: 0x37AE308 VA: 0x37AE308
	public void SetLocalRotation(Quaternion rotation) { }

	// RVA: 0x37AE3E4 Offset: 0x37AE3E4 VA: 0x37AE3E4 Slot: 7
	public virtual bool IsSelectableAsOrigin() { }

	// RVA: -1 Offset: -1 Slot: 8
	public abstract void Show();

	// RVA: -1 Offset: -1 Slot: 9
	public abstract void Hide();

	// RVA: 0x37AE05C Offset: 0x37AE05C VA: 0x37AE05C
	protected void .ctor() { }
}

// Namespace: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems