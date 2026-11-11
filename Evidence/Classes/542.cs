public abstract class AsyncMonoInstaller : MonoBehaviour, IAsyncInstaller // TypeDefIndex: 542
{
	// Fields
	private SceneContext _sceneContext; // 0x18

	// Properties
	public SceneContext SceneContext { get; }
	public Container Container { get; }

	// Methods

	// RVA: 0x3D304C0 Offset: 0x3D304C0 VA: 0x3D304C0
	public SceneContext get_SceneContext() { }

	// RVA: 0x3D304C8 Offset: 0x3D304C8 VA: 0x3D304C8
	public Container get_Container() { }

	// RVA: -1 Offset: -1 Slot: 5
	public abstract Task InstallAsync();

	// RVA: -1 Offset: -1 Slot: 6
	public abstract Task OnInstallComplete();

	// RVA: -1 Offset: -1 Slot: 7
	public abstract void OnGameObjectResolutionEnd();

	[AsyncStateMachine(typeof(AsyncMonoInstaller.<Awake>d__8))]
	// RVA: 0x3D304E4 Offset: 0x3D304E4 VA: 0x3D304E4
	public void Awake() { }

	// RVA: 0x3D3059C Offset: 0x3D3059C VA: 0x3D3059C
	private void ResolveAllGameObjectsInScene() { }

	// RVA: 0x3D30740 Offset: 0x3D30740 VA: 0x3D30740
	protected void .ctor() { }
}

// Namespace: Modules.Infrastructure.DI.Install