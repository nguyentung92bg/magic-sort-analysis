public class MergeMiniGameGeneratorButtonTutorial : MergeMiniGameTutorialBase // TypeDefIndex: 3633
{
	// Fields
	[SerializeField]
	private Transform _generatorButtonDefaultParent; // 0x48
	[SerializeField]
	private Transform _generatorButtonTransform; // 0x50
	[SerializeField]
	private Button _generatorButton; // 0x58
	[SerializeField]
	private int _generatorButtonDefaultRaycastOrder; // 0x60
	[SerializeField]
	private int _generatorButtonTutorialRaycastOrder; // 0x64
	[SerializeField]
	private Transform _clickReferencePosition; // 0x68
	[SerializeField]
	private int _spawnItemCount; // 0x70
	[SerializeField]
	private GameObject _generatorTextObj; // 0x78
	private int _spawnedItemCount; // 0x80
	private TaskCompletionSource<bool> _completionSource; // 0x88

	// Methods

	// RVA: 0x3FB3ED8 Offset: 0x3FB3ED8 VA: 0x3FB3ED8 Slot: 4
	public override Task<bool> TryStartTutorial() { }

	// RVA: 0x3FB421C Offset: 0x3FB421C VA: 0x3FB421C
	private void OnMergeMiniGameItemSpawned(MergeBoardCell cell) { }

	// RVA: 0x3FB4268 Offset: 0x3FB4268 VA: 0x3FB4268
	private void Complete() { }

	// RVA: 0x3FB4420 Offset: 0x3FB4420 VA: 0x3FB4420
	private void OnDestroy() { }

	// RVA: 0x3FB4518 Offset: 0x3FB4518 VA: 0x3FB4518
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.MergeMiniGame.Scripts.UI.Tutorial