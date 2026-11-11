public class SessionTracker : MonoBehaviour // TypeDefIndex: 5274
{
	// Fields
	private float _sessionDuration; // 0x18
	private int _session; // 0x1C
	private DateTime _lastQuitTime; // 0x20
	private const string LastApplicationQuitTimeKey = "last_application_quit";
	private const string LastSessionDurationKey = "last_session_duration";
	private readonly TimeSpan SessionTimeout; // 0x28
	private const string SessionCounterKey = "grand_session_counter";

	// Methods

	// RVA: 0x1CCBB14 Offset: 0x1CCBB14 VA: 0x1CCBB14
	private void Awake() { }

	// RVA: 0x1CCBCA0 Offset: 0x1CCBCA0 VA: 0x1CCBCA0
	public void Update() { }

	// RVA: 0x1CCBCCC Offset: 0x1CCBCCC VA: 0x1CCBCCC
	private void OnApplicationFocus(bool hasFocus) { }

	// RVA: 0x1CCBF18 Offset: 0x1CCBF18 VA: 0x1CCBF18
	private void OnApplicationQuit() { }

	// RVA: 0x1CCBD24 Offset: 0x1CCBD24 VA: 0x1CCBD24
	private void CheckAndStartSession() { }

	// RVA: 0x1CCBF1C Offset: 0x1CCBF1C VA: 0x1CCBF1C
	private void StartNewSession() { }

	// RVA: 0x1CCBE24 Offset: 0x1CCBE24 VA: 0x1CCBE24
	private void SaveLastData() { }

	// RVA: 0x1CCBB88 Offset: 0x1CCBB88 VA: 0x1CCBB88
	private void LoadLastData() { }

	// RVA: 0x1CCBFBC Offset: 0x1CCBFBC VA: 0x1CCBFBC
	public int GetSessionDurationInSeconds() { }

	// RVA: 0x1CCBFDC Offset: 0x1CCBFDC VA: 0x1CCBFDC
	public int GetSession() { }

	// RVA: 0x1CCBFE4 Offset: 0x1CCBFE4 VA: 0x1CCBFE4
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Application.Debugger