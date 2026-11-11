public class TextSequenceAnimator : MonoBehaviour // TypeDefIndex: 357
{
	// Fields
	[SerializeField]
	private TextSequenceAnimationConfig _textSequenceAnimationConfig; // 0x18
	[SerializeField]
	private AnimationCurve _vertexCurve; // 0x20
	[SerializeField]
	private float _yCurveScalingMax; // 0x28
	[SerializeField]
	private float _yCurveScalingMin; // 0x2C
	[SerializeField]
	private List<TextSequenceFonts> _textSequenceFonts; // 0x30
	private List<TextMeshPro> _activeTextMeshes; // 0x38

	// Methods

	// RVA: 0x3DE5768 Offset: 0x3DE5768 VA: 0x3DE5768
	public void ToggleTexts(bool toggle) { }

	[Button]
	// RVA: 0x3DE58D4 Offset: 0x3DE58D4 VA: 0x3DE58D4
	public void SetText(string text, TextSequenceFontType fontType) { }

	// RVA: 0x3DE60D8 Offset: 0x3DE60D8 VA: 0x3DE60D8
	public Sequence MoveAndScale() { }

	// RVA: 0x3DE5B44 Offset: 0x3DE5B44 VA: 0x3DE5B44
	private void WarpText(TextMeshPro textMesh, int textLength) { }

	// RVA: 0x3DE6740 Offset: 0x3DE6740 VA: 0x3DE6740
	public void .ctor() { }
}

// Namespace: Modules.Infrastructure.Utils