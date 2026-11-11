public abstract class MonoInstaller : MonoBehaviour, IInstaller // TypeDefIndex: 546
{
	// Fields
	private SceneContext _sceneContext; // 0x18

	// Properties
	public SceneContext SceneContext { get; }
	public Container Container { get; }

	// Methods

	// RVA: 0x3D30CB4 Offset: 0x3D30CB4 VA: 0x3D30CB4
	public SceneContext get_SceneContext() { }

	// RVA: 0x3D30CBC Offset: 0x3D30CBC VA: 0x3D30CBC
	public Container get_Container() { }

	// RVA: -1 Offset: -1 Slot: 5
	public abstract void Install();

	// RVA: -1 Offset: -1 Slot: 6
	public abstract void OnInstallComplete();

	[AsyncStateMachine(typeof(MonoInstaller.<Awake>d__7))]
	// RVA: 0x3D30CD8 Offset: 0x3D30CD8 VA: 0x3D30CD8
	public void Awake() { }

	// RVA: -1 Offset: -1 Slot: 7
	public abstract void Dispose();

	// RVA: 0x3D30D90 Offset: 0x3D30D90 VA: 0x3D30D90
	protected void .ctor() { }
}

// Namespace: 
[CompilerGenerated]