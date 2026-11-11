public class WheelOfFortuneScrollController : MonoBehaviour // TypeDefIndex: 1909
{
	// Fields
	[SerializeField]
	private Button _rightArrowButton; // 0x18
	[SerializeField]
	private Button _leftArrowButton; // 0x20
	[SerializeField]
	private SimpleScrollBar _scrollBar; // 0x28
	[SerializeField]
	private WheelOfFortuneScrollIndexClamper _scrollBarIndexClamper; // 0x30
	[SerializeField]
	private WheelOfFortuneViewAdapter _viewAdapter; // 0x38
	[SerializeField]
	private WheelOfFortuneAnimationConfig _config; // 0x40
	private WheelOfFortuneViewModel _viewModel; // 0x48

	// Methods

	// RVA: 0x319AD34 Offset: 0x319AD34 VA: 0x319AD34
	public void Initialize(WheelOfFortuneViewModel viewModel) { }

	// RVA: 0x31A22C4 Offset: 0x31A22C4 VA: 0x31A22C4
	private void RightArrowButtonClicked() { }

	// RVA: 0x31A2370 Offset: 0x31A2370 VA: 0x31A2370
	private void LeftArrowButtonClicked() { }

	// RVA: 0x31A2358 Offset: 0x31A2358 VA: 0x31A2358
	private void ScrollInstant(int index) { }

	// RVA: 0x319D9F4 Offset: 0x319D9F4 VA: 0x319D9F4
	public void ScrollToStage(int index) { }

	// RVA: 0x31A2060 Offset: 0x31A2060 VA: 0x31A2060
	private void InitializeScrollBar() { }

	// RVA: 0x31A251C Offset: 0x31A251C VA: 0x31A251C
	private void OnSelectedIndexChanged(int index) { }

	// RVA: 0x319DF08 Offset: 0x319DF08 VA: 0x319DF08
	public void Dispose() { }

	// RVA: 0x31A26F0 Offset: 0x31A26F0 VA: 0x31A26F0
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]