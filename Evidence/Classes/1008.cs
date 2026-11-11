public abstract class BasicView : MonoBehaviour, IInitializable // TypeDefIndex: 1008
{
	// Fields
	public Action<BasicView> OnRecycleEndEvent; // 0x18
	[CompilerGenerated]
	private bool <IsGameObjectDestroyed>k__BackingField; // 0x20

	// Properties
	public abstract int Id { get; set; }
	public bool IsGameObjectDestroyed { get; set; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 5
	public abstract int get_Id();

	// RVA: -1 Offset: -1 Slot: 6
	public abstract void set_Id(int value);

	// RVA: -1 Offset: -1 Slot: 7
	public abstract void Initialize();

	// RVA: -1 Offset: -1 Slot: 8
	public abstract void Recycle();

	[CompilerGenerated]
	// RVA: 0x40EBF24 Offset: 0x40EBF24 VA: 0x40EBF24
	public bool get_IsGameObjectDestroyed() { }

	[CompilerGenerated]
	// RVA: 0x40EBF2C Offset: 0x40EBF2C VA: 0x40EBF2C
	protected void set_IsGameObjectDestroyed(bool value) { }

	// RVA: 0x40EAF14 Offset: 0x40EAF14 VA: 0x40EAF14
	protected void .ctor() { }
}

// Namespace: Modules.Infrastructure.Common.Scripts.Generation.Basic