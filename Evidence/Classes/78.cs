public class TextConsoleSimulator : MonoBehaviour // TypeDefIndex: 78
{
	// Fields
	private TMP_Text m_TextComponent; // 0x18
	private bool hasTextChanged; // 0x20

	// Methods

	// RVA: 0x19FEB04 Offset: 0x19FEB04 VA: 0x19FEB04
	private void Awake() { }

	// RVA: 0x19FEB6C Offset: 0x19FEB6C VA: 0x19FEB6C
	private void Start() { }

	// RVA: 0x19FEC20 Offset: 0x19FEC20 VA: 0x19FEC20
	private void OnEnable() { }

	// RVA: 0x19FECEC Offset: 0x19FECEC VA: 0x19FECEC
	private void OnDisable() { }

	// RVA: 0x19FEDB8 Offset: 0x19FEDB8 VA: 0x19FEDB8
	private void ON_TEXT_CHANGED(Object obj) { }

	[IteratorStateMachine(typeof(TextConsoleSimulator.<RevealCharacters>d__7))]
	// RVA: 0x19FEB90 Offset: 0x19FEB90 VA: 0x19FEB90
	private IEnumerator RevealCharacters(TMP_Text textComponent) { }

	[IteratorStateMachine(typeof(TextConsoleSimulator.<RevealWords>d__8))]
	// RVA: 0x19FEDEC Offset: 0x19FEDEC VA: 0x19FEDEC
	private IEnumerator RevealWords(TMP_Text textComponent) { }

	// RVA: 0x19FEE88 Offset: 0x19FEE88 VA: 0x19FEE88
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]