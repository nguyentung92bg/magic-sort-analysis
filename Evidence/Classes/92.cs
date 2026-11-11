public class TMP_TextSelector_B : MonoBehaviour, IPointerEnterHandler, IEventSystemHandler, IPointerExitHandler, IPointerClickHandler, IPointerUpHandler // TypeDefIndex: 92
{
	// Fields
	public RectTransform TextPopup_Prefab_01; // 0x18
	private RectTransform m_TextPopup_RectTransform; // 0x20
	private TextMeshProUGUI m_TextPopup_TMPComponent; // 0x28
	private const string k_LinkText = "You have selected link <#ffff00>";
	private const string k_WordText = "Word Index: <#ffff00>";
	private TextMeshProUGUI m_TextMeshPro; // 0x30
	private Canvas m_Canvas; // 0x38
	private Camera m_Camera; // 0x40
	private bool isHoveringObject; // 0x48
	private int m_selectedWord; // 0x4C
	private int m_selectedLink; // 0x50
	private int m_lastIndex; // 0x54
	private Matrix4x4 m_matrix; // 0x58
	private TMP_MeshInfo[] m_cachedMeshInfoVertexData; // 0x98

	// Methods

	// RVA: 0x3AEDE34 Offset: 0x3AEDE34 VA: 0x3AEDE34
	private void Awake() { }

	// RVA: 0x3AEDFFC Offset: 0x3AEDFFC VA: 0x3AEDFFC
	private void OnEnable() { }

	// RVA: 0x3AEE0C8 Offset: 0x3AEE0C8 VA: 0x3AEE0C8
	private void OnDisable() { }

	// RVA: 0x3AEE194 Offset: 0x3AEE194 VA: 0x3AEE194
	private void ON_TEXT_CHANGED(Object obj) { }

	// RVA: 0x3AEE240 Offset: 0x3AEE240 VA: 0x3AEE240
	private void LateUpdate() { }

	// RVA: 0x3AEF73C Offset: 0x3AEF73C VA: 0x3AEF73C Slot: 4
	public void OnPointerEnter(PointerEventData eventData) { }

	// RVA: 0x3AEF748 Offset: 0x3AEF748 VA: 0x3AEF748 Slot: 5
	public void OnPointerExit(PointerEventData eventData) { }

	// RVA: 0x3AEF750 Offset: 0x3AEF750 VA: 0x3AEF750 Slot: 6
	public void OnPointerClick(PointerEventData eventData) { }

	// RVA: 0x3AEF754 Offset: 0x3AEF754 VA: 0x3AEF754 Slot: 7
	public void OnPointerUp(PointerEventData eventData) { }

	// RVA: 0x3AEEEB8 Offset: 0x3AEEEB8 VA: 0x3AEEEB8
	private void RestoreCachedVertexAttributes(int index) { }

	// RVA: 0x3AEF758 Offset: 0x3AEF758 VA: 0x3AEF758
	public void .ctor() { }
}

// Namespace: 