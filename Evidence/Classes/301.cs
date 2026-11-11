public class EditorLockView : EditorAItemView // TypeDefIndex: 301
{
	// Fields
	[SerializeField]
	private LockAnimationView _soloLockAnimationView; // 0x20
	[SerializeField]
	private LockAnimationView _doubleLockAnimationView; // 0x28
	[SerializeField]
	private LockViewConfig _lockViewConfig; // 0x30
	private LockAnimationView _lockAnimationView; // 0x38

	// Methods

	// RVA: 0x3DD8D14 Offset: 0x3DD8D14 VA: 0x3DD8D14 Slot: 4
	public override void Initialize() { }

	// RVA: 0x3DD8D20 Offset: 0x3DD8D20 VA: 0x3DD8D20 Slot: 5
	public override void Spawn() { }

	// RVA: 0x3DD8D24 Offset: 0x3DD8D24 VA: 0x3DD8D24
	public void SetType(KeyLockType keyLockType, bool isDouble, int bottleHeight) { }

	// RVA: 0x3DD8E48 Offset: 0x3DD8E48 VA: 0x3DD8E48 Slot: 7
	public override void Show() { }

	// RVA: 0x3DD8E6C Offset: 0x3DD8E6C VA: 0x3DD8E6C Slot: 8
	public override void Hide() { }

	// RVA: 0x3DD8E90 Offset: 0x3DD8E90 VA: 0x3DD8E90
	public void SetSortOrder(int sortOrder) { }

	// RVA: 0x3DD8E94 Offset: 0x3DD8E94 VA: 0x3DD8E94
	public void SetSortingLayer(string sortingLayerName) { }

	// RVA: 0x3DD8E98 Offset: 0x3DD8E98 VA: 0x3DD8E98
	public int GetSortOrder() { }

	// RVA: 0x3DD8EA0 Offset: 0x3DD8EA0 VA: 0x3DD8EA0 Slot: 6
	public override void Recycle() { }

	// RVA: 0x3DD8EC8 Offset: 0x3DD8EC8 VA: 0x3DD8EC8
	public void .ctor() { }
}

// Namespace: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.KeyAndLock.Key