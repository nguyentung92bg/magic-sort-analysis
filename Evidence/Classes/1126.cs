public class GameplayConfigService : IService, IInitializable, IDisposable // TypeDefIndex: 1126
{
	// Fields
	public readonly GameplayConfigs GameplayConfigs; // 0x10
	private bool _backgroundAndShelvesEnabled; // 0x18

	// Methods

	// RVA: 0x160C328 Offset: 0x160C328 VA: 0x160C328
	public void .ctor(GameplayConfigs gameplayConfigs) { }

	// RVA: 0x160C358 Offset: 0x160C358 VA: 0x160C358 Slot: 4
	public void Initialize() { }

	// RVA: 0x160C3EC Offset: 0x160C3EC VA: 0x160C3EC
	public BottleCollectionCameraConfig GetBottleCollectionCameraConfig(bool is3Row, bool isFirstLevels, bool isDaily) { }

	// RVA: 0x160C440 Offset: 0x160C440 VA: 0x160C440
	public GameUIViewConfig GetGameUIViewConfig() { }

	// RVA: 0x16070FC Offset: 0x16070FC VA: 0x16070FC
	public FailFlowAnimationConfig GetFailFlowAnimationConfig() { }

	// RVA: 0x160C470 Offset: 0x160C470 VA: 0x160C470
	public IceConfig GetIceConfig() { }

	// RVA: 0x160C48C Offset: 0x160C48C VA: 0x160C48C Slot: 5
	public void Dispose() { }
}

// Namespace: Modules.Contexts.GamePlay.UI.Common.Scripts