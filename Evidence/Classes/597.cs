public class AutoScrollToMaxMinPosition : MonoBehaviour // TypeDefIndex: 597
{
	// Fields
	[SerializeField]
	private ScrollBar _scrollBar; // 0x18
	[SerializeField]
	private Button _button; // 0x20
	[SerializeField]
	private ScrollViewAdapter _scrollViewAdapter; // 0x28
	[SerializeField]
	private ButtonDirection _buttonDirection; // 0x30
	[SerializeField]
	private SpriteRenderer _spriteRenderer; // 0x38
	[SerializeField]
	private TextMeshPro _textMeshPro; // 0x40
	private bool _isShowing; // 0x48
	private float _remainingDuration; // 0x4C
	private float _showDuration; // 0x50
	private Color _initialSpriteRendererColor; // 0x54
	private Color _initialTextColor; // 0x64
	private Tween _spriteRendererTween; // 0x78
	private Tween _textMeshProTween; // 0x80

	// Methods

	// RVA: 0x4005B64 Offset: 0x4005B64 VA: 0x4005B64
	private void Awake() { }

	// RVA: 0x4005EAC Offset: 0x4005EAC VA: 0x4005EAC
	private void OnDrag() { }

	// RVA: 0x4005EB0 Offset: 0x4005EB0 VA: 0x4005EB0
	private void Show() { }

	// RVA: 0x4005F60 Offset: 0x4005F60 VA: 0x4005F60
	public void Update() { }

	// RVA: 0x4005FAC Offset: 0x4005FAC VA: 0x4005FAC
	private void HideSlowly() { }

	// RVA: 0x40060E8 Offset: 0x40060E8 VA: 0x40060E8
	private void Hide() { }

	// RVA: 0x4006140 Offset: 0x4006140 VA: 0x4006140
	private void OnDestroy() { }

	// RVA: 0x4006434 Offset: 0x4006434 VA: 0x4006434
	public void OnButtonClick() { }

	// RVA: 0x4006450 Offset: 0x4006450 VA: 0x4006450
	private void MoveToTop() { }

	// RVA: 0x4006480 Offset: 0x4006480 VA: 0x4006480
	private void MoveToBottom() { }

	// RVA: 0x4006814 Offset: 0x4006814 VA: 0x4006814
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x4006824 Offset: 0x4006824 VA: 0x4006824
	private void <HideSlowly>b__17_0() { }
}

// Namespace: Modules.Infrastructure.UI.Common.Scripts.Scroll