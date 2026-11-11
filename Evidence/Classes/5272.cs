public class FpsTracker : MonoBehaviour // TypeDefIndex: 5272
{
	// Fields
	private const float TimeWindow = 30;
	private const int FpsSpikeThreshold = 25;
	private Queue<float> _fpsSamples; // 0x18
	private Queue<float> _sampleTimestamps; // 0x20
	private int _last30SecondSpykeCount; // 0x28
	private int _last30SecondAvarageFps; // 0x2C

	// Methods

	// RVA: 0x1CCB348 Offset: 0x1CCB348 VA: 0x1CCB348
	private void Awake() { }

	// RVA: 0x1CCB3B4 Offset: 0x1CCB3B4 VA: 0x1CCB3B4
	private void Update() { }

	// RVA: 0x1CCB6FC Offset: 0x1CCB6FC VA: 0x1CCB6FC
	public int GetLast30SecondSpikeCount() { }

	// RVA: 0x1CCB704 Offset: 0x1CCB704 VA: 0x1CCB704
	public int GetLast30SecondAverageFps() { }

	// RVA: 0x1CCB70C Offset: 0x1CCB70C VA: 0x1CCB70C
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Application.Events.Scripts.Sessions