public class OptimizedGameObjectFactory : IService, IInitializable, IDisposable // TypeDefIndex: 1551
{
	// Fields
	private OptimizedGameObjectPool _optimizedGameObjectPool; // 0x10
	private BasicGameObject _optimizedGameObjectsParent; // 0x18

	// Methods

	// RVA: 0x2304CA8 Offset: 0x2304CA8 VA: 0x2304CA8 Slot: 4
	public void Initialize() { }

	// RVA: 0x2304F00 Offset: 0x2304F00 VA: 0x2304F00
	public OptimizedGameObject GetObject(ITransform parent) { }

	// RVA: 0x2305028 Offset: 0x2305028 VA: 0x2305028
	private void ReturnObject(OptimizedGameObject obj) { }

	// RVA: 0x2305140 Offset: 0x2305140 VA: 0x2305140 Slot: 5
	public void Dispose() { }

	// RVA: 0x2305144 Offset: 0x2305144 VA: 0x2305144
	public void .ctor() { }
}

// Namespace: Modules.Contexts.GamePlay.BoardItems.Scripts.Common