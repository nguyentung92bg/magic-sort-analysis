public class TextMeshProFloatingText : MonoBehaviour // TypeDefIndex: 81
{
	// Fields
	public Font TheFont; // 0x18
	private GameObject m_floatingText; // 0x20
	private TextMeshPro m_textMeshPro; // 0x28
	private TextMesh m_textMesh; // 0x30
	private Transform m_transform; // 0x38
	private Transform m_floatingText_Transform; // 0x40
	private Transform m_cameraTransform; // 0x48
	private Vector3 lastPOS; // 0x50
	private Quaternion lastRotation; // 0x5C
	public int SpawnType; // 0x6C
	public bool IsTextObjectScaleStatic; // 0x70
	private static WaitForEndOfFrame k_WaitForEndOfFrame; // 0x0
	private static WaitForSeconds[] k_WaitForSecondsRandom; // 0x8

	// Methods

	// RVA: 0x19FF28C Offset: 0x19FF28C VA: 0x19FF28C
	private void Awake() { }

	// RVA: 0x19FF374 Offset: 0x19FF374 VA: 0x19FF374
	private void Start() { }

	[IteratorStateMachine(typeof(TextMeshProFloatingText.<DisplayTextMeshProFloatingText>d__15))]
	// RVA: 0x19FF790 Offset: 0x19FF790 VA: 0x19FF790
	public IEnumerator DisplayTextMeshProFloatingText() { }

	[IteratorStateMachine(typeof(TextMeshProFloatingText.<DisplayTextMeshFloatingText>d__16))]
	// RVA: 0x19FF804 Offset: 0x19FF804 VA: 0x19FF804
	public IEnumerator DisplayTextMeshFloatingText() { }

	// RVA: 0x19FF8C8 Offset: 0x19FF8C8 VA: 0x19FF8C8
	public void .ctor() { }

	// RVA: 0x19FF960 Offset: 0x19FF960 VA: 0x19FF960
	private static void .cctor() { }
}

// Namespace: TMPro.Examples