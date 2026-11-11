public class Benchmark01_UGUI : MonoBehaviour // TypeDefIndex: 60
{
	// Fields
	public int BenchmarkType; // 0x18
	public Canvas canvas; // 0x20
	public TMP_FontAsset TMProFont; // 0x28
	public Font TextMeshFont; // 0x30
	private TextMeshProUGUI m_textMeshPro; // 0x38
	private Text m_textMesh; // 0x40
	private const string label01 = "The <#0050FF>count is: </color>";
	private const string label02 = "The <color=#0050FF>count is: </color>";
	private Material m_material01; // 0x48
	private Material m_material02; // 0x50

	// Methods

	[IteratorStateMachine(typeof(Benchmark01_UGUI.<Start>d__10))]
	// RVA: 0x19FAF5C Offset: 0x19FAF5C VA: 0x19FAF5C
	private IEnumerator Start() { }

	// RVA: 0x19FAFF8 Offset: 0x19FAFF8 VA: 0x19FAFF8
	public void .ctor() { }
}

// Namespace: TMPro.Examples