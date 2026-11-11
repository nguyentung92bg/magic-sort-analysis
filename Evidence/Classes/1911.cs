public class WheelOfFortuneScrollIndexClamper : MonoBehaviour // TypeDefIndex: 1911
{
	// Fields
	[SerializeField]
	private SimpleScrollBar _scrollBar; // 0x18
	[SerializeField]
	private WheelOfFortuneViewAdapter _viewAdapter; // 0x20
	[SerializeField]
	private WheelOfFortuneAnimationConfig _config; // 0x28
	private int _scrollElementsCount; // 0x30
	private int _activeScrollIndex; // 0x34
	private Action<int> _onSelectedIndexChanged; // 0x38
	private Sequence _clampSequence; // 0x40
	private List<Vector3> _initialLocalPositions; // 0x48

	// Methods

	// RVA: 0x31A23D8 Offset: 0x31A23D8 VA: 0x31A23D8
	public void Initialize() { }

	// RVA: 0x31A26F8 Offset: 0x31A26F8 VA: 0x31A26F8
	private void SetInitialLocalPositions() { }

	// RVA: 0x31A27DC Offset: 0x31A27DC VA: 0x31A27DC
	private void ScrollBarOnOnDragEnd(Direction direction, float distance) { }

	// RVA: 0x31A23A4 Offset: 0x31A23A4 VA: 0x31A23A4
	public void ClampWithAnimation(int index) { }

	// RVA: 0x31A21E8 Offset: 0x31A21E8 VA: 0x31A21E8
	public void ClampInstant(int index) { }

	// RVA: 0x31A2844 Offset: 0x31A2844 VA: 0x31A2844
	private void ClampTo(int newIndex, float duration) { }

	// RVA: 0x31A2998 Offset: 0x31A2998 VA: 0x31A2998
	private void PlayClampAnimation(Vector3 localPosition, float duration) { }

	// RVA: 0x31A25A0 Offset: 0x31A25A0 VA: 0x31A25A0
	public void Dispose() { }

	// RVA: 0x31A2140 Offset: 0x31A2140 VA: 0x31A2140
	public void SubscribeToIndexChange(Action<int> onIndexChange) { }

	// RVA: 0x31A2648 Offset: 0x31A2648 VA: 0x31A2648
	public void UnsubscribeToIndexChange(Action<int> onIndexChange) { }

	// RVA: 0x31A2B8C Offset: 0x31A2B8C VA: 0x31A2B8C
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x31A2C14 Offset: 0x31A2C14 VA: 0x31A2C14
	private void <PlayClampAnimation>b__14_0() { }
}

// Namespace: Modules.Contexts.Home.WheelOfFortune.Scripts.UI