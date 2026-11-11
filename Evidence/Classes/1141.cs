public class TutorialSystem // TypeDefIndex: 1141
{
	// Fields
	private GamePlayUI _gamePlayUI; // 0x10
	private SelectionView _selectionView; // 0x18
	private InLevelTextDisplayer _inLevelTextDisplayer; // 0x20
	private BottleCollections _bottleCollections; // 0x28
	private SelectionSystem _selectionSystem; // 0x30
	private bool _inFirstTutorial; // 0x38
	private bool _inSecondTutorial; // 0x39

	// Methods

	// RVA: 0x160EBA0 Offset: 0x160EBA0 VA: 0x160EBA0
	public void .ctor(BottleCollections bottleCollections, SelectionSystem selectionSystem) { }

	// RVA: 0x160EF28 Offset: 0x160EF28 VA: 0x160EF28
	private void OnPlayLevelEntranceAnimationSignal(int _) { }

	// RVA: 0x160F39C Offset: 0x160F39C VA: 0x160F39C
	private void OnBottleCollectionsEntranceCompleted() { }

	// RVA: 0x160F3E8 Offset: 0x160F3E8 VA: 0x160F3E8
	private void StartFirstTutorial() { }

	// RVA: 0x160F8D4 Offset: 0x160F8D4 VA: 0x160F8D4
	private void OnSelectedOriginBottleForFirstTutorial(BottleItem selectedBottle) { }

	// RVA: 0x160FA7C Offset: 0x160FA7C VA: 0x160FA7C
	private void OnSelectedTargetForFirstTutorial() { }

	// RVA: 0x160EF40 Offset: 0x160EF40 VA: 0x160EF40
	private void CompleteFirstTutorial() { }

	// RVA: 0x160F62C Offset: 0x160F62C VA: 0x160F62C
	private void StartSecondTutorialAsync() { }

	// RVA: 0x160FAAC Offset: 0x160FAAC VA: 0x160FAAC
	private void RecalculateSelections(BottleItem selectedBottle) { }

	// RVA: 0x160FAB0 Offset: 0x160FAB0 VA: 0x160FAB0
	private void RecalculateSelections() { }

	// RVA: 0x160F0E8 Offset: 0x160F0E8 VA: 0x160F0E8
	private void CompleteSecondTutorial() { }

	// RVA: 0x160FE14 Offset: 0x160FE14 VA: 0x160FE14
	public void Deinitialize() { }
}

// Namespace: Modules.Contexts.GamePlay.Systems.Scripts.WinOrStuck