public abstract class AItem // TypeDefIndex: 987
{
	// Fields
	[CompilerGenerated]
	private Action<AItem> OnRecycled; // 0x10
	[CompilerGenerated]
	private ItemType <ItemType>k__BackingField; // 0x18
	[CompilerGenerated]
	private AItemView <View>k__BackingField; // 0x20
	private Vector3 _pivotPosition; // 0x28
	private Vector3 _viewOffset; // 0x34

	// Properties
	public ItemType ItemType { get; set; }
	public ITransform Root { get; }
	protected AItemView View { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x40E9B84 Offset: 0x40E9B84 VA: 0x40E9B84
	public void add_OnRecycled(Action<AItem> value) { }

	[CompilerGenerated]
	// RVA: 0x40E9C34 Offset: 0x40E9C34 VA: 0x40E9C34
	public void remove_OnRecycled(Action<AItem> value) { }

	[CompilerGenerated]
	// RVA: 0x40E9CE4 Offset: 0x40E9CE4 VA: 0x40E9CE4
	public ItemType get_ItemType() { }

	[CompilerGenerated]
	// RVA: 0x40E9CEC Offset: 0x40E9CEC VA: 0x40E9CEC
	private void set_ItemType(ItemType value) { }

	// RVA: 0x40E9CF4 Offset: 0x40E9CF4 VA: 0x40E9CF4
	public ITransform get_Root() { }

	[CompilerGenerated]
	// RVA: 0x40E9D10 Offset: 0x40E9D10 VA: 0x40E9D10
	protected AItemView get_View() { }

	[CompilerGenerated]
	// RVA: 0x40E9D18 Offset: 0x40E9D18 VA: 0x40E9D18
	private void set_View(AItemView value) { }

	// RVA: 0x40E9D20 Offset: 0x40E9D20 VA: 0x40E9D20
	public void SetView(AItemView view) { }

	// RVA: 0x40E9D28 Offset: 0x40E9D28 VA: 0x40E9D28
	public void SetType(ItemType itemType) { }

	// RVA: 0x40E9D30 Offset: 0x40E9D30 VA: 0x40E9D30
	public void Initialize() { }

	// RVA: -1 Offset: -1 Slot: 4
	protected abstract void OnInitialize();

	// RVA: 0x40E9D64 Offset: 0x40E9D64 VA: 0x40E9D64
	public void Spawn() { }

	// RVA: -1 Offset: -1 Slot: 5
	protected abstract void OnSpawn();

	// RVA: 0x40E9D98 Offset: 0x40E9D98 VA: 0x40E9D98
	public void Recycle() { }

	// RVA: -1 Offset: -1 Slot: 6
	protected abstract void OnRecycle();

	// RVA: 0x40E9DF0 Offset: 0x40E9DF0 VA: 0x40E9DF0 Slot: 7
	public virtual void SetPivotPosition(Vector3 localPosition) { }

	// RVA: 0x40E9DFC Offset: 0x40E9DFC VA: 0x40E9DFC
	public void SetViewOffset(Vector3 offset) { }

	// RVA: 0x40E9E08 Offset: 0x40E9E08 VA: 0x40E9E08
	public Vector3 GetItemPivotPosition() { }

	// RVA: 0x40E9E14 Offset: 0x40E9E14 VA: 0x40E9E14
	public Vector3 GetItemLocalPosition() { }

	// RVA: 0x40E9E34 Offset: 0x40E9E34 VA: 0x40E9E34 Slot: 8
	public virtual Vector3 GetSnitchTargetPosition() { }

	// RVA: 0x40E9E54 Offset: 0x40E9E54 VA: 0x40E9E54 Slot: 9
	public virtual void SetLocalPositionToOrigin() { }

	// RVA: 0x40E9F48 Offset: 0x40E9F48 VA: 0x40E9F48
	public void SetParent(ITransform parent) { }

	// RVA: 0x40E9FFC Offset: 0x40E9FFC VA: 0x40E9FFC
	public void SetPosition(Vector3 position) { }

	// RVA: 0x40E9E74 Offset: 0x40E9E74 VA: 0x40E9E74
	public void SetLocalPosition(Vector3 position) { }

	// RVA: 0x40EA0D0 Offset: 0x40EA0D0 VA: 0x40EA0D0 Slot: 10
	public virtual void SetLocalScale(Vector3 scale) { }

	// RVA: 0x40EA1A4 Offset: 0x40EA1A4 VA: 0x40EA1A4
	public void SetLocalRotation(Quaternion rotation) { }

	// RVA: 0x40EA280 Offset: 0x40EA280 VA: 0x40EA280 Slot: 11
	public virtual bool IsSelectableAsOrigin() { }

	// RVA: 0x40EA288 Offset: 0x40EA288 VA: 0x40EA288 Slot: 12
	public virtual bool IsSelectableAsTarget(BottleItem originBottle, ColorId waterColorId) { }

	// RVA: 0x40EA290 Offset: 0x40EA290 VA: 0x40EA290 Slot: 13
	public virtual void PlayLevelEntranceAnimation() { }

	// RVA: 0x40EA294 Offset: 0x40EA294 VA: 0x40EA294 Slot: 14
	public virtual void OnBottleWatersUpdated(WaterItem topWaterItem) { }

	// RVA: 0x40EA298 Offset: 0x40EA298 VA: 0x40EA298 Slot: 15
	public virtual void OnBottleMove(int pourableHeight, bool isLeft, float moveDuration) { }

	// RVA: 0x40EA29C Offset: 0x40EA29C VA: 0x40EA29C Slot: 16
	public virtual void OnOriginBottleReturnToInitialPosition(Selection selection) { }

	// RVA: 0x40EA2A0 Offset: 0x40EA2A0 VA: 0x40EA2A0 Slot: 17
	public virtual void OnBottleCompleted() { }

	// RVA: 0x40EA2A4 Offset: 0x40EA2A4 VA: 0x40EA2A4 Slot: 18
	public virtual void OnNeighbourBottleCompleted() { }

	// RVA: 0x40EA2A8 Offset: 0x40EA2A8 VA: 0x40EA2A8 Slot: 19
	public virtual void OnWaterSortOrderChange(int eclipseSortOrder, int backSortOrder, bool isTopCell, bool isBottomCell) { }

	// RVA: -1 Offset: -1 Slot: 20
	public abstract void Show();

	// RVA: -1 Offset: -1 Slot: 21
	public abstract void Hide();

	// RVA: 0x40E9B7C Offset: 0x40E9B7C VA: 0x40E9B7C
	protected void .ctor() { }
}

// Namespace: Modules.Infrastructure.Common.Scripts.Component