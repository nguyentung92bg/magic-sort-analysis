public class TikTokInnerManager : MonoBehaviour // TypeDefIndex: 30
{
	// Fields
	private static TikTokInnerManager _instance; // 0x0
	private long _lastTimeStamp; // 0x18
	private string _currentRegexString; // 0x20
	public static Dictionary<string, object> _configParams; // 0x8

	// Methods

	[RuntimeInitializeOnLoadMethod]
	// RVA: 0x19F5188 Offset: 0x19F5188 VA: 0x19F5188
	private static void CreateUIEventListener() { }

	// RVA: 0x19F1DC0 Offset: 0x19F1DC0 VA: 0x19F1DC0
	public string SensigFiltering(string originString) { }

	// RVA: 0x19F52D0 Offset: 0x19F52D0 VA: 0x19F52D0
	private string CalculateSHA256Hash(string input) { }

	// RVA: 0x19F0B48 Offset: 0x19F0B48 VA: 0x19F0B48
	public static TikTokInnerManager Instance() { }

	// RVA: 0x19F5570 Offset: 0x19F5570 VA: 0x19F5570
	public void UpdateConfigFromNative(string message) { }

	// RVA: 0x19F5914 Offset: 0x19F5914 VA: 0x19F5914
	private void ProcessDictionary(Dictionary<string, object> dictionary) { }

	// RVA: 0x19F5D60 Offset: 0x19F5D60 VA: 0x19F5D60
	private void UpdateRegexListIfNeeded() { }

	// RVA: 0x19F61D8 Offset: 0x19F61D8 VA: 0x19F61D8
	public void PrintDictionary(Dictionary<string, object> dictionary) { }

	// RVA: 0x19F63F8 Offset: 0x19F63F8 VA: 0x19F63F8
	public bool IsTTSDKEnable() { }

	// RVA: 0x19F65AC Offset: 0x19F65AC VA: 0x19F65AC
	public bool IsUnityEDPEnable() { }

	// RVA: 0x19F6694 Offset: 0x19F6694 VA: 0x19F6694
	public bool IsUnityEDPClickTrackEnable() { }

	// RVA: 0x19F2994 Offset: 0x19F2994 VA: 0x19F2994
	public bool IsUnityEDPResourceTrackEnable() { }

	// RVA: 0x19F24D8 Offset: 0x19F24D8 VA: 0x19F24D8
	public bool IsUnityEDPSceneTrackEnable() { }

	// RVA: 0x19F1244 Offset: 0x19F1244 VA: 0x19F1244
	public long PageDeepCount() { }

	// RVA: 0x19F677C Offset: 0x19F677C VA: 0x19F677C
	public double ClickTimeDiff() { }

	// RVA: 0x19F68D8 Offset: 0x19F68D8 VA: 0x19F68D8
	public double ReportTimeDiff() { }

	// RVA: 0x19F1114 Offset: 0x19F1114 VA: 0x19F1114
	public bool IsButtonInBlackList(string buttonClassName) { }

	// RVA: 0x19F0BEC Offset: 0x19F0BEC VA: 0x19F0BEC
	public bool ShouldReportClickEvent() { }

	// RVA: 0x19F6000 Offset: 0x19F6000 VA: 0x19F6000
	public Dictionary<string, object> CurrentUnityEDPConfig() { }

	// RVA: 0x19F5568 Offset: 0x19F5568 VA: 0x19F5568
	public void .ctor() { }

	// RVA: 0x19F6A34 Offset: 0x19F6A34 VA: 0x19F6A34
	private static void .cctor() { }
}

// Namespace: SDK