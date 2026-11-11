public class TokenSelectionRowView : BasicView // TypeDefIndex: 2990
{
	// Fields
	[SerializeField]
	private UIElement _uiElement; // 0x28
	[SerializeField]
	private List<ProfileTokenSpriteSelectionFrame> _frames; // 0x30
	private Action<ProfileTokenSprite> _onTokenSelected; // 0x38
	[CompilerGenerated]
	private int <Id>k__BackingField; // 0x40

	// Properties
	public override int Id { get; set; }
	public Vector3 Size { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x2AE65CC Offset: 0x2AE65CC VA: 0x2AE65CC Slot: 5
	public override int get_Id() { }

	[CompilerGenerated]
	// RVA: 0x2AE65D4 Offset: 0x2AE65D4 VA: 0x2AE65D4 Slot: 6
	public override void set_Id(int value) { }

	// RVA: 0x2AE65DC Offset: 0x2AE65DC VA: 0x2AE65DC
	public Vector3 get_Size() { }

	// RVA: 0x2AE6604 Offset: 0x2AE6604 VA: 0x2AE6604
	private void Awake() { }

	// RVA: 0x2AE6838 Offset: 0x2AE6838 VA: 0x2AE6838
	private void OnDestroy() { }

	// RVA: 0x2AE6A70 Offset: 0x2AE6A70 VA: 0x2AE6A70 Slot: 7
	public override void Initialize() { }

	// RVA: 0x2AE6A74 Offset: 0x2AE6A74 VA: 0x2AE6A74
	public void SetModel(TokenSelectionRowViewModel viewModel, string activeTokenId, Action<ProfileTokenSprite> onTokenSelected) { }

	// RVA: 0x2AE6BDC Offset: 0x2AE6BDC VA: 0x2AE6BDC
	private void OnFrameSelected(string id) { }

	// RVA: 0x2AE6D3C Offset: 0x2AE6D3C VA: 0x2AE6D3C Slot: 8
	public override void Recycle() { }

	// RVA: 0x2AE6DB4 Offset: 0x2AE6DB4 VA: 0x2AE6DB4
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Profile.Scripts.TokenSelection