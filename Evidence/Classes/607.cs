public class ScrollBarIndexClamper : MonoBehaviour // TypeDefIndex: 607
{
	// Fields
	[SerializeField]
	private ScrollBar _scrollBar; // 0x18
	private IScrollAdapter _scrollAdapter; // 0x20
	private const float JumpDuration = 0.3;
	private const float ScrollCompleteThreshold = 0.75;
	private int _activeScrollIndex; // 0x28
	private Action<int> _onSelectedIndexChanged; // 0x30
	private bool _isInitialized; // 0x38

	// Methods

	// RVA: 0x400B9F0 Offset: 0x400B9F0 VA: 0x400B9F0
	public void Initialize(IScrollAdapter scrollAdapter) { }

	// RVA: 0x400BAA4 Offset: 0x400BAA4 VA: 0x400BAA4
	private void ScrollBarOnOnDragEnd(Direction direction, float distance) { }

	// RVA: 0x400BAC8 Offset: 0x400BAC8 VA: 0x400BAC8
	public void ClampTo(int newIndex) { }

	// RVA: 0x400BBC4 Offset: 0x400BBC4 VA: 0x400BBC4
	public void Recycle() { }

	// RVA: 0x400BC60 Offset: 0x400BC60 VA: 0x400BC60
	public void SubscribeToIndexChange(Action<int> onIndexChange) { }

	// RVA: 0x400BD08 Offset: 0x400BD08 VA: 0x400BD08
	public void UnsubscribeToIndexChange(Action<int> onIndexChange) { }

	// RVA: 0x400BDB0 Offset: 0x400BDB0 VA: 0x400BDB0
	public void .ctor() { }
}

// Namespace: Modules.Infrastructure.UI.Common.Scripts.Scroll