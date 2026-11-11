public abstract class AItemView : MonoBehaviour, IGameObject // TypeDefIndex: 1553
{
	// Fields
	[CompilerGenerated]
	private ITransform <Root>k__BackingField; // 0x18

	// Properties
	public ITransform Root { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x23051E4 Offset: 0x23051E4 VA: 0x23051E4 Slot: 4
	public ITransform get_Root() { }

	[CompilerGenerated]
	// RVA: 0x23051EC Offset: 0x23051EC VA: 0x23051EC
	private void set_Root(ITransform value) { }

	// RVA: 0x23051F4 Offset: 0x23051F4 VA: 0x23051F4
	private void Awake() { }

	// RVA: -1 Offset: -1 Slot: 5
	public abstract void Initialize();

	// RVA: -1 Offset: -1 Slot: 6
	public abstract void Spawn();

	// RVA: -1 Offset: -1 Slot: 7
	public abstract void Recycle();

	// RVA: -1 Offset: -1 Slot: 8
	public abstract void Show();

	// RVA: -1 Offset: -1 Slot: 9
	public abstract void Hide();

	// RVA: 0x22FE35C Offset: 0x22FE35C VA: 0x22FE35C
	protected void .ctor() { }
}

// Namespace: Modules.Contexts.GamePlay.BoardItems.Scripts.Common