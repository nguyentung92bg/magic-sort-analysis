public class TMP_TextEventHandler : MonoBehaviour, IPointerEnterHandler, IEventSystemHandler, IPointerExitHandler // TypeDefIndex: 56
{
	// Fields
	[SerializeField]
	private TMP_TextEventHandler.CharacterSelectionEvent m_OnCharacterSelection; // 0x18
	[SerializeField]
	private TMP_TextEventHandler.SpriteSelectionEvent m_OnSpriteSelection; // 0x20
	[SerializeField]
	private TMP_TextEventHandler.WordSelectionEvent m_OnWordSelection; // 0x28
	[SerializeField]
	private TMP_TextEventHandler.LineSelectionEvent m_OnLineSelection; // 0x30
	[SerializeField]
	private TMP_TextEventHandler.LinkSelectionEvent m_OnLinkSelection; // 0x38
	private TMP_Text m_TextComponent; // 0x40
	private Camera m_Camera; // 0x48
	private Canvas m_Canvas; // 0x50
	private int m_selectedLink; // 0x58
	private int m_lastCharIndex; // 0x5C
	private int m_lastWordIndex; // 0x60
	private int m_lastLineIndex; // 0x64

	// Properties
	public TMP_TextEventHandler.CharacterSelectionEvent onCharacterSelection { get; set; }
	public TMP_TextEventHandler.SpriteSelectionEvent onSpriteSelection { get; set; }
	public TMP_TextEventHandler.WordSelectionEvent onWordSelection { get; set; }
	public TMP_TextEventHandler.LineSelectionEvent onLineSelection { get; set; }
	public TMP_TextEventHandler.LinkSelectionEvent onLinkSelection { get; set; }

	// Methods

	// RVA: 0x19F9D10 Offset: 0x19F9D10 VA: 0x19F9D10
	public TMP_TextEventHandler.CharacterSelectionEvent get_onCharacterSelection() { }

	// RVA: 0x19F9D18 Offset: 0x19F9D18 VA: 0x19F9D18
	public void set_onCharacterSelection(TMP_TextEventHandler.CharacterSelectionEvent value) { }

	// RVA: 0x19F9D20 Offset: 0x19F9D20 VA: 0x19F9D20
	public TMP_TextEventHandler.SpriteSelectionEvent get_onSpriteSelection() { }

	// RVA: 0x19F9D28 Offset: 0x19F9D28 VA: 0x19F9D28
	public void set_onSpriteSelection(TMP_TextEventHandler.SpriteSelectionEvent value) { }

	// RVA: 0x19F9D30 Offset: 0x19F9D30 VA: 0x19F9D30
	public TMP_TextEventHandler.WordSelectionEvent get_onWordSelection() { }

	// RVA: 0x19F9D38 Offset: 0x19F9D38 VA: 0x19F9D38
	public void set_onWordSelection(TMP_TextEventHandler.WordSelectionEvent value) { }

	// RVA: 0x19F9D40 Offset: 0x19F9D40 VA: 0x19F9D40
	public TMP_TextEventHandler.LineSelectionEvent get_onLineSelection() { }

	// RVA: 0x19F9D48 Offset: 0x19F9D48 VA: 0x19F9D48
	public void set_onLineSelection(TMP_TextEventHandler.LineSelectionEvent value) { }

	// RVA: 0x19F9D50 Offset: 0x19F9D50 VA: 0x19F9D50
	public TMP_TextEventHandler.LinkSelectionEvent get_onLinkSelection() { }

	// RVA: 0x19F9D58 Offset: 0x19F9D58 VA: 0x19F9D58
	public void set_onLinkSelection(TMP_TextEventHandler.LinkSelectionEvent value) { }

	// RVA: 0x19F9D60 Offset: 0x19F9D60 VA: 0x19F9D60
	private void Awake() { }

	// RVA: 0x19F9F18 Offset: 0x19F9F18 VA: 0x19F9F18
	private void LateUpdate() { }

	// RVA: 0x19FA5EC Offset: 0x19FA5EC VA: 0x19FA5EC Slot: 4
	public void OnPointerEnter(PointerEventData eventData) { }

	// RVA: 0x19FA5F0 Offset: 0x19FA5F0 VA: 0x19FA5F0 Slot: 5
	public void OnPointerExit(PointerEventData eventData) { }

	// RVA: 0x19FA390 Offset: 0x19FA390 VA: 0x19FA390
	private void SendOnCharacterSelection(char character, int characterIndex) { }

	// RVA: 0x19FA404 Offset: 0x19FA404 VA: 0x19FA404
	private void SendOnSpriteSelection(char character, int characterIndex) { }

	// RVA: 0x19FA478 Offset: 0x19FA478 VA: 0x19FA478
	private void SendOnWordSelection(string word, int charIndex, int length) { }

	// RVA: 0x19FA4F4 Offset: 0x19FA4F4 VA: 0x19FA4F4
	private void SendOnLineSelection(string line, int charIndex, int length) { }

	// RVA: 0x19FA570 Offset: 0x19FA570 VA: 0x19FA570
	private void SendOnLinkSelection(string linkID, string linkText, int linkIndex) { }

	// RVA: 0x19FA5F4 Offset: 0x19FA5F4 VA: 0x19FA5F4
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]