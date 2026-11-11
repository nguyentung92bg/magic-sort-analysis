public class TMP_UiFrameRateCounter : MonoBehaviour // TypeDefIndex: 94
{
	// Fields
	public float UpdateInterval; // 0x18
	private float m_LastInterval; // 0x1C
	private int m_Frames; // 0x20
	public TMP_UiFrameRateCounter.FpsCounterAnchorPositions AnchorPosition; // 0x24
	private string htmlColorTag; // 0x28
	private const string fpsLabel = "{0:2}</color> <#8080ff>FPS \n<#FF8000>{1:2} <#8080ff>MS";
	private TextMeshProUGUI m_TextMeshPro; // 0x30
	private RectTransform m_frameCounter_transform; // 0x38
	private TMP_UiFrameRateCounter.FpsCounterAnchorPositions last_AnchorPosition; // 0x40

	// Methods

	// RVA: 0x3AEF770 Offset: 0x3AEF770 VA: 0x3AEF770
	private void Awake() { }

	// RVA: 0x3AEFBCC Offset: 0x3AEFBCC VA: 0x3AEFBCC
	private void Start() { }

	// RVA: 0x3AEFBEC Offset: 0x3AEFBEC VA: 0x3AEFBEC
	private void Update() { }

	// RVA: 0x3AEF994 Offset: 0x3AEF994 VA: 0x3AEF994
	private void Set_FrameCounter_Position(TMP_UiFrameRateCounter.FpsCounterAnchorPositions anchor_position) { }

	// RVA: 0x3AEFD40 Offset: 0x3AEFD40 VA: 0x3AEFD40
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]