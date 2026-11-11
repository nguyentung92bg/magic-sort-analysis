public abstract class BaseThreadWorker // TypeDefIndex: 3703
{
	// Fields
	private static int _threadIdCounter; // 0x0
	private readonly Queue<QueueItem> _requestQueue; // 0x10

	// Methods

	// RVA: -1 Offset: -1 Slot: 4
	protected abstract object DoWork(EventArgs args);

	// RVA: 0x411AC78 Offset: 0x411AC78 VA: 0x411AC78
	protected void .ctor() { }

	// RVA: 0x411AE04 Offset: 0x411AE04 VA: 0x411AE04
	private void Update() { }

	// RVA: 0x411AEC8 Offset: 0x411AEC8 VA: 0x411AEC8
	public void Execute(EventArgs args) { }

	[AsyncStateMachine(typeof(BaseThreadWorker.<ExecuteAsync>d__6))]
	// RVA: 0x411AFC0 Offset: 0x411AFC0 VA: 0x411AFC0
	public Task<bool> ExecuteAsync(EventArgs args) { }

	[AsyncStateMachine(typeof(BaseThreadWorker.<ExecuteAsync>d__7<T>))]
	// RVA: -1 Offset: -1
	public Task<T> ExecuteAsync<T>(EventArgs args) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2640698 Offset: 0x2640698 VA: 0x2640698
	|-BaseThreadWorker.ExecuteAsync<object>
	*/

	[CompilerGenerated]
	// RVA: 0x411B0F4 Offset: 0x411B0F4 VA: 0x411B0F4
	private void <.ctor>b__3_0() { }
}

// Namespace: Modules.Contexts.Home.MagicStreakTournament.Scripts