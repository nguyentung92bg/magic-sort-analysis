public abstract class ScrollViewAdapter : MonoBehaviour, IInitializable // TypeDefIndex: 609
{
	// Fields
	[SerializeField]
	protected bool _useSizeOfPerPrefab; // 0x18

	// Properties
	public abstract int Count { get; }
	public virtual bool UseSizeOfPerPrefab { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 5
	public abstract int get_Count();

	// RVA: 0x400BDB8 Offset: 0x400BDB8 VA: 0x400BDB8 Slot: 6
	public virtual bool get_UseSizeOfPerPrefab() { }

	// RVA: -1 Offset: -1 Slot: 7
	public abstract void Initialize();

	// RVA: -1 Offset: -1 Slot: 8
	public abstract Vector3 GetElementSize();

	// RVA: 0x400BDC0 Offset: 0x400BDC0 VA: 0x400BDC0 Slot: 9
	public virtual Vector3 GetElementSizeByIndex(int index) { }

	// RVA: -1 Offset: -1 Slot: 10
	public abstract BasicView GetView(int index = -1);

	// RVA: -1 Offset: -1 Slot: 11
	public abstract void UpdateView(BasicView view, int index);

	// RVA: -1 Offset: -1 Slot: 12
	public abstract void UpdateView(BasicView basicView, object viewModel);

	// RVA: -1 Offset: -1 Slot: 13
	public abstract void Reverse();

	// RVA: 0x400BDD0 Offset: 0x400BDD0 VA: 0x400BDD0
	protected void .ctor() { }
}

// Namespace: 
[CompilerGenerated]