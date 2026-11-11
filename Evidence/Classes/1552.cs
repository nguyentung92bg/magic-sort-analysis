public abstract class AItemPartView : MonoBehaviour, IGameObject // TypeDefIndex: 1552
{
	// Fields
	[CompilerGenerated]
	private ITransform <Root>k__BackingField; // 0x18

	// Properties
	public ITransform Root { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x230514C Offset: 0x230514C VA: 0x230514C Slot: 4
	public ITransform get_Root() { }

	[CompilerGenerated]
	// RVA: 0x2305154 Offset: 0x2305154 VA: 0x2305154
	private void set_Root(ITransform value) { }

	// RVA: 0x230515C Offset: 0x230515C VA: 0x230515C
	private void Awake() { }

	// RVA: -1 Offset: -1 Slot: 5
	public abstract void Initialize();

	// RVA: -1 Offset: -1 Slot: 6
	public abstract void Spawn();

	// RVA: -1 Offset: -1 Slot: 7
	public abstract void Recycle();

	// RVA: 0x23051DC Offset: 0x23051DC VA: 0x23051DC
	protected void .ctor() { }
}

// Namespace: Modules.Contexts.GamePlay.BoardItems.Scripts.Common