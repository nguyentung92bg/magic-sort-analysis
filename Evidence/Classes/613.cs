public class StickyScrollElementsController : MonoBehaviour // TypeDefIndex: 613
{
	// Fields
	[SerializeField]
	private BasicScrollAdapter _basicScrollAdapter; // 0x18
	[SerializeField]
	private ScrollBar _scrollBar; // 0x20
	[SerializeField]
	private ScrollViewAdapter _scrollViewAdapter; // 0x28
	[SerializeField]
	private BasicView _viewOnTheTop; // 0x30
	[SerializeField]
	private BasicView _viewOnTheBottom; // 0x38
	private int _stickyElementIndex; // 0x40
	private object _stickyViewModel; // 0x48
	private bool _initialized; // 0x50

	// Methods

	// RVA: 0x400D10C Offset: 0x400D10C VA: 0x400D10C
	public void Initialize(int stickyElementIndex, object stickyViewModel) { }

	// RVA: 0x400D14C Offset: 0x400D14C VA: 0x400D14C
	private void Hide() { }

	// RVA: 0x400D19C Offset: 0x400D19C VA: 0x400D19C
	public void LateUpdate() { }

	// RVA: 0x400D37C Offset: 0x400D37C VA: 0x400D37C
	private void SetElementVisibilityAtTop(bool shouldShow) { }

	// RVA: 0x400D40C Offset: 0x400D40C VA: 0x400D40C
	private void SetElementVisibilityAtBottom(bool shouldShow) { }

	// RVA: 0x400D49C Offset: 0x400D49C VA: 0x400D49C
	public void Dispose() { }

	// RVA: 0x400D4C0 Offset: 0x400D4C0 VA: 0x400D4C0
	public void .ctor() { }
}

// Namespace: Modules.Infrastructure.UI.Common.Scripts.Scaler