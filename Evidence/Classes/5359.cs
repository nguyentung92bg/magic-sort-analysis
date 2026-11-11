public class FPSView : MonoBehaviour // TypeDefIndex: 5359
{
	// Fields
	private const float _frameRatio1ThatCountsAsSpike = 55;
	public float _deltaTime1; // 0x18
	public int _spikeCount1; // 0x1C
	[SerializeField]
	private TextMeshPro _textMeshForSpike1; // 0x20
	private const float _frameRatio2ThatCountsAsSpike = 45;
	public float _deltaTime2; // 0x28
	public int _spikeCount2; // 0x2C
	[SerializeField]
	private TextMeshPro _textMeshForSpike2; // 0x30
	[SerializeField]
	private TextMeshPro _textElapsedTime; // 0x38
	private float _timeElapsed; // 0x40

	// Methods

	// RVA: 0x1857C1C Offset: 0x1857C1C VA: 0x1857C1C
	public void Update() { }

	// RVA: 0x1857E50 Offset: 0x1857E50 VA: 0x1857E50
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Application.Ads.Scripts.UI