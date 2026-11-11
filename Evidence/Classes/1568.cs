public abstract class EditorAItemView : MonoBehaviour // TypeDefIndex: 1568
{
	// Fields
	[CompilerGenerated]
	private BasicTransform <Root>k__BackingField; // 0x18

	// Properties
	public BasicTransform Root { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x23079E0 Offset: 0x23079E0 VA: 0x23079E0
	public BasicTransform get_Root() { }

	[CompilerGenerated]
	// RVA: 0x23079E8 Offset: 0x23079E8 VA: 0x23079E8
	private void set_Root(BasicTransform value) { }

	// RVA: 0x23079F0 Offset: 0x23079F0 VA: 0x23079F0
	private void Awake() { }

	// RVA: -1 Offset: -1 Slot: 4
	public abstract void Initialize();

	// RVA: -1 Offset: -1 Slot: 5
	public abstract void Spawn();

	// RVA: -1 Offset: -1 Slot: 6
	public abstract void Recycle();

	// RVA: -1 Offset: -1 Slot: 7
	public abstract void Show();

	// RVA: -1 Offset: -1 Slot: 8
	public abstract void Hide();

	// RVA: 0x2307A70 Offset: 0x2307A70 VA: 0x2307A70
	protected void .ctor() { }
}

// Namespace: Modules.Contexts.GamePlay.BoardItems.Scripts.Common.Objective
[Serializable]