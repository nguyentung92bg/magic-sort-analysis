public class AndroidVibration : IDisposable // TypeDefIndex: 367
{
	// Fields
	private AndroidJavaObject _androidVibrationJavaObject; // 0x10
	private IntPtr _performHapticFeedbackMethodId; // 0x18
	private object[] _args; // 0x20
	private jvalue[] _jniArgArray; // 0x28

	// Methods

	// RVA: 0x3DE80FC Offset: 0x3DE80FC VA: 0x3DE80FC
	public void .ctor() { }

	// RVA: 0x3DE8500 Offset: 0x3DE8500 VA: 0x3DE8500
	public void VibrateWaveform(long[] pattern, int[] amplitudes, int repeat) { }

	// RVA: 0x3DE8674 Offset: 0x3DE8674 VA: 0x3DE8674
	public void VibrateOneshot(long milliseconds, int amplitude) { }

	// RVA: 0x3DE87E0 Offset: 0x3DE87E0 VA: 0x3DE87E0
	public void PerformHapticFeedback(int type) { }

	// RVA: 0x3DE88A8 Offset: 0x3DE88A8 VA: 0x3DE88A8 Slot: 4
	public void Dispose() { }
}

// Namespace: Modules.Infrastructure.Utils.TermsAndConditionsUtils.Scripts