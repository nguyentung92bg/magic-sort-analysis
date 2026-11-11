public class BadgeSelectionView : MonoBehaviour // TypeDefIndex: 2162
{
	// Fields
	[SerializeField]
	private TeamsBadgeConfig _badgeConfig; // 0x18
	[SerializeField]
	private Button[] _closeButtons; // 0x20
	[SerializeField]
	private ScrollBar _scrollBar; // 0x28
	[SerializeField]
	private BasicScrollAdapter _scrollAdapter; // 0x30
	[SerializeField]
	private BadgeContainerViewAdapter _containerViewAdapter; // 0x38
	private const int ItemPerLine = 4;
	[CompilerGenerated]
	private Action OnClosed; // 0x40

	// Methods

	[CompilerGenerated]
	// RVA: 0x3453520 Offset: 0x3453520 VA: 0x3453520
	public void add_OnClosed(Action value) { }

	[CompilerGenerated]
	// RVA: 0x34535BC Offset: 0x34535BC VA: 0x34535BC
	public void remove_OnClosed(Action value) { }

	// RVA: 0x3453658 Offset: 0x3453658 VA: 0x3453658
	private void Awake() { }

	// RVA: 0x3453730 Offset: 0x3453730 VA: 0x3453730
	private void OnDestroy() { }

	// RVA: 0x3453808 Offset: 0x3453808 VA: 0x3453808
	public void Show(int selectedBadgeId = -1) { }

	// RVA: 0x3453AE8 Offset: 0x3453AE8 VA: 0x3453AE8
	private void OnCloseButtonSelected() { }

	// RVA: 0x3453848 Offset: 0x3453848 VA: 0x3453848
	private void InitializeScrollView(int selectedBadgeId = -1) { }

	// RVA: 0x3453B30 Offset: 0x3453B30 VA: 0x3453B30
	public void Hide() { }

	// RVA: 0x3453B34 Offset: 0x3453B34 VA: 0x3453B34
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Teams.Scripts.UI