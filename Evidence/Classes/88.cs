public class TMP_FrameRateCounter : MonoBehaviour // TypeDefIndex: 88
{
	// Fields
	public float UpdateInterval; // 0x18
	private float m_LastInterval; // 0x1C
	private int m_Frames; // 0x20
	public TMP_FrameRateCounter.FpsCounterAnchorPositions AnchorPosition; // 0x24
	private string htmlColorTag; // 0x28
	private const string fpsLabel = "{0:2}</color> <#8080ff>FPS \n<#FF8000>{1:2} <#8080ff>MS";
	private TextMeshPro m_TextMeshPro; // 0x30
	private Transform m_frameCounter_transform; // 0x38
	private Camera m_camera; // 0x40
	private TMP_FrameRateCounter.FpsCounterAnchorPositions last_AnchorPosition; // 0x48

	// Methods

	// RVA: 0x3AEBCC8 Offset: 0x3AEBCC8 VA: 0x3AEBCC8
	private void Awake() { }

	// RVA: 0x3AEC100 Offset: 0x3AEC100 VA: 0x3AEC100
	private void Start() { }

	// RVA: 0x3AEC120 Offset: 0x3AEC120 VA: 0x3AEC120
	private void Update() { }

	// RVA: 0x3AEBF24 Offset: 0x3AEBF24 VA: 0x3AEBF24
	private void Set_FrameCounter_Position(TMP_FrameRateCounter.FpsCounterAnchorPositions anchor_position) { }

	// RVA: 0x3AEC274 Offset: 0x3AEC274 VA: 0x3AEC274
	public void .ctor() { }
}

// Namespace: TMPro.Examples