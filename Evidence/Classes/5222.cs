public class GrandABService // TypeDefIndex: 5222
{
	// Fields
	private const string HoldoutSentinel = "__holdout__";
	private const int LaunchFetchPollMs = 50;
	private readonly Dictionary<string, object> _values; // 0x10
	private readonly Dictionary<string, string> _variants; // 0x18
	private readonly List<ExperimentAssignment> _assignments; // 0x20
	[CompilerGenerated]
	private GrandABStatus <Status>k__BackingField; // 0x28
	[CompilerGenerated]
	private bool <IsDryRun>k__BackingField; // 0x2C
	[CompilerGenerated]
	private string <ConfigHash>k__BackingField; // 0x30
	private const int LateLaunchFetchTimeoutMs = 20000;

	// Properties
	public GrandABStatus Status { get; set; }
	public bool IsDryRun { get; set; }
	public string ConfigHash { get; set; }
	public IReadOnlyList<ExperimentAssignment> Assignments { get; }
	public IReadOnlyCollection<string> Keys { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x1CB9738 Offset: 0x1CB9738 VA: 0x1CB9738
	public GrandABStatus get_Status() { }

	[CompilerGenerated]
	// RVA: 0x1CB9740 Offset: 0x1CB9740 VA: 0x1CB9740
	private void set_Status(GrandABStatus value) { }

	[CompilerGenerated]
	// RVA: 0x1CB9748 Offset: 0x1CB9748 VA: 0x1CB9748
	public bool get_IsDryRun() { }

	[CompilerGenerated]
	// RVA: 0x1CB9750 Offset: 0x1CB9750 VA: 0x1CB9750
	private void set_IsDryRun(bool value) { }

	[CompilerGenerated]
	// RVA: 0x1CB975C Offset: 0x1CB975C VA: 0x1CB975C
	public string get_ConfigHash() { }

	[CompilerGenerated]
	// RVA: 0x1CB9764 Offset: 0x1CB9764 VA: 0x1CB9764
	private void set_ConfigHash(string value) { }

	// RVA: 0x1CB976C Offset: 0x1CB976C VA: 0x1CB976C
	public IReadOnlyList<ExperimentAssignment> get_Assignments() { }

	// RVA: 0x1CB9774 Offset: 0x1CB9774 VA: 0x1CB9774
	public void Initialize(bool useGrandAB, bool dryRun = False) { }

	[AsyncStateMachine(typeof(GrandABService.<InitializeAsync>d__20))]
	// RVA: 0x1CBA1A0 Offset: 0x1CBA1A0 VA: 0x1CBA1A0
	public Task InitializeAsync(bool useGrandAB, bool dryRun, int timeoutMs) { }

	[AsyncStateMachine(typeof(GrandABService.<WaitForAsync>d__21))]
	// RVA: 0x1CBA2B4 Offset: 0x1CBA2B4 VA: 0x1CBA2B4
	public static Task<bool> WaitForAsync(Func<bool> isComplete, int timeoutMs, Func<Task> poll) { }

	[AsyncStateMachine(typeof(GrandABService.<SaveLateLaunchFetchAsync>d__23))]
	// RVA: 0x1CBA3F0 Offset: 0x1CBA3F0 VA: 0x1CBA3F0
	private static Task SaveLateLaunchFetchAsync() { }

	// RVA: 0x1CB9404 Offset: 0x1CB9404 VA: 0x1CB9404
	public bool GetBool(string key, bool fallback = False) { }

	// RVA: 0x1CB9358 Offset: 0x1CB9358 VA: 0x1CB9358
	public string GetString(string key, string fallback = "") { }

	// RVA: 0x1CB94B8 Offset: 0x1CB94B8 VA: 0x1CB94B8
	public int GetInt(string key, int fallback = 0) { }

	// RVA: 0x1CBA4C0 Offset: 0x1CBA4C0 VA: 0x1CBA4C0
	public double GetDouble(string key, double fallback = 0) { }

	// RVA: -1 Offset: -1
	public T Deserialize<T>(string key, T fallback) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2390F3C Offset: 0x2390F3C VA: 0x2390F3C
	|-GrandABService.Deserialize<object>
	*/

	// RVA: 0x1CBA5CC Offset: 0x1CBA5CC VA: 0x1CBA5CC
	public string GetVariant(string experimentId) { }

	// RVA: 0x1CBA684 Offset: 0x1CBA684 VA: 0x1CBA684
	public bool IsHoldout(string experimentId) { }

	// RVA: 0x1CBA724 Offset: 0x1CBA724 VA: 0x1CBA724
	public bool HasKey(string key) { }

	// RVA: 0x1CB8AC0 Offset: 0x1CB8AC0 VA: 0x1CB8AC0
	public IReadOnlyCollection<string> get_Keys() { }

	// RVA: 0x1CBA77C Offset: 0x1CBA77C VA: 0x1CBA77C
	public string DumpSnapshot() { }

	// RVA: 0x1CBAC24 Offset: 0x1CBAC24 VA: 0x1CBAC24
	public string ToJson() { }

	// RVA: 0x1CBB138 Offset: 0x1CBB138 VA: 0x1CBB138
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Application.GameState.Scripts