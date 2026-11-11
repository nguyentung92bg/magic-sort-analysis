public class TokenSelectionScrollViewAdapter : ScrollViewAdapter // TypeDefIndex: 2993
{
	// Fields
	[SerializeField]
	private TokenSelectionViewFactory _factory; // 0x20
	private List<TokenSelectionRowViewModel> _viewModels; // 0x28
	private string _activeTokenId; // 0x30
	[CompilerGenerated]
	private Action<ProfileTokenSprite> OnTokenSelected; // 0x38

	// Properties
	public override int Count { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x2ADD63C Offset: 0x2ADD63C VA: 0x2ADD63C
	public void add_OnTokenSelected(Action<ProfileTokenSprite> value) { }

	[CompilerGenerated]
	// RVA: 0x2ADD790 Offset: 0x2ADD790 VA: 0x2ADD790
	public void remove_OnTokenSelected(Action<ProfileTokenSprite> value) { }

	// RVA: 0x2AE6E4C Offset: 0x2AE6E4C VA: 0x2AE6E4C Slot: 5
	public override int get_Count() { }

	// RVA: 0x2ADE294 Offset: 0x2ADE294 VA: 0x2ADE294
	public void SetViewModels(List<TokenSelectionRowViewModel> viewModels, string activeTokenId) { }

	// RVA: 0x2AE6E98 Offset: 0x2AE6E98 VA: 0x2AE6E98
	public void SetActiveTokenId(string activeTokenId) { }

	// RVA: 0x2AE6EA0 Offset: 0x2AE6EA0 VA: 0x2AE6EA0 Slot: 7
	public override void Initialize() { }

	// RVA: 0x2AE6EA4 Offset: 0x2AE6EA4 VA: 0x2AE6EA4 Slot: 8
	public override Vector3 GetElementSize() { }

	// RVA: 0x2AE6F10 Offset: 0x2AE6F10 VA: 0x2AE6F10 Slot: 10
	public override BasicView GetView(int index = -1) { }

	// RVA: 0x2AE6F5C Offset: 0x2AE6F5C VA: 0x2AE6F5C Slot: 11
	public override void UpdateView(BasicView view, int index) { }

	// RVA: 0x2AE7074 Offset: 0x2AE7074 VA: 0x2AE7074 Slot: 12
	public override void UpdateView(BasicView basicView, object viewModel) { }

	// RVA: 0x2AE71A8 Offset: 0x2AE71A8 VA: 0x2AE71A8 Slot: 13
	public override void Reverse() { }

	// RVA: 0x2ADD840 Offset: 0x2ADD840 VA: 0x2ADD840
	public void DisposeFactory() { }

	// RVA: 0x2AE7200 Offset: 0x2AE7200 VA: 0x2AE7200
	private void OnTokenFrameSelected(ProfileTokenSprite tokenSprite) { }

	// RVA: 0x2AE721C Offset: 0x2AE721C VA: 0x2AE721C
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Profile.Scripts.TokenSelection
[CreateAssetMenu(fileName = "TokenSelectionViewFactory", menuName = "Factory/TokenSelectionViewFactory")]