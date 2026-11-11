public class SnitchInGameManager : MonoBehaviour, IDisposable // TypeDefIndex: 1223
{
	// Fields
	[SerializeField]
	private SnitchBoxView _boxView; // 0x18
	private SnitchService _snitchService; // 0x20
	private SnitchTargetFinder _targetFinder; // 0x28
	private BottleCollections _bottleCollections; // 0x30
	private List<ExternalSnitchObject> _externalSnitches; // 0x38
	private List<SnitchSpawnInfo> _levelSnitchSpawnInfos; // 0x40
	private bool _placedToNoQuestionMarkCell; // 0x48
	private Action _onLevelStartCompleteAction; // 0x50

	// Methods

	// RVA: 0x214007C Offset: 0x214007C VA: 0x214007C
	public void Initialize(BottleCollections bottleCollections) { }

	// RVA: 0x2140414 Offset: 0x2140414 VA: 0x2140414
	public void OnLevelStart(List<ExternalSnitchObject> externalSnitches, List<SnitchSpawnInfo> levelSnitchInfo, Action onComplete) { }

	// RVA: 0x2140470 Offset: 0x2140470 VA: 0x2140470
	public RedSnitchMoveTarget GetRedSnitchMoveTargetByIndex(int index) { }

	// RVA: 0x21414CC Offset: 0x21414CC VA: 0x21414CC
	public NormalSnitchMoveTarget GetNormalSnitchMoveTargetForIndex(int index) { }

	// RVA: 0x21419E0 Offset: 0x21419E0 VA: 0x21419E0
	public void PerformSnitch(SnitchItem snitchItem) { }

	// RVA: 0x2141A44 Offset: 0x2141A44 VA: 0x2141A44
	private void PerformNormalSnitch(SnitchItem normalSnitch) { }

	// RVA: 0x213FFB8 Offset: 0x213FFB8 VA: 0x213FFB8
	public void OnNormalSnitchHitTarget(SnitchTarget snitchTarget) { }

	// RVA: 0x214001C Offset: 0x214001C VA: 0x214001C
	public void OnNormalSnitchPlaceTarget(SnitchSpawnInfo spawnInfo) { }

	// RVA: 0x2141B74 Offset: 0x2141B74 VA: 0x2141B74
	private void PerformRedSnitch(SnitchItem redSnitch) { }

	// RVA: 0x2141CD4 Offset: 0x2141CD4 VA: 0x2141CD4
	private Tween MoveSnitchItemToTarget(SnitchItem snitchItem, AItem targetItem, Action onComplete) { }

	// RVA: 0x2142474 Offset: 0x2142474 VA: 0x2142474
	private int GetTargetItemRowIndex(AItem targetItem) { }

	// RVA: 0x213FD2C Offset: 0x213FD2C VA: 0x213FD2C
	public void OnRedSnitchHitTarget(AItem targetItem) { }

	// RVA: 0x213FE6C Offset: 0x213FE6C VA: 0x213FE6C
	public void OnRedSnitchPlaceTarget(SnitchSpawnInfo spawnInfo) { }

	// RVA: 0x2141EAC Offset: 0x2141EAC VA: 0x2141EAC
	private void RevealCell(Cell targetCell, BottleItem targetBottle) { }

	// RVA: 0x21425B4 Offset: 0x21425B4 VA: 0x21425B4
	private void RevealBottleCells(BottleItem bottle) { }

	// RVA: 0x21421FC Offset: 0x21421FC VA: 0x21421FC
	private void ChangeSnitchWaterColor(WaterItem water) { }

	// RVA: 0x214245C Offset: 0x214245C VA: 0x214245C
	public void LockTarget(AItem targetItem) { }

	// RVA: 0x213FE04 Offset: 0x213FE04 VA: 0x213FE04
	public void UnlockTarget(AItem targetItem) { }

	// RVA: 0x2141434 Offset: 0x2141434 VA: 0x2141434
	private void MarkTargetItemAsSelected(AItem targetItem) { }

	// RVA: 0x2142A4C Offset: 0x2142A4C VA: 0x2142A4C
	public bool ShouldShowTutorial() { }

	// RVA: 0x2142A68 Offset: 0x2142A68 VA: 0x2142A68
	public void StartTutorial() { }

	// RVA: 0x2142B84 Offset: 0x2142B84 VA: 0x2142B84
	public void OnTutorialStarted() { }

	// RVA: 0x2142C0C Offset: 0x2142C0C VA: 0x2142C0C
	public void OnTutorialEnd() { }

	// RVA: 0x2142C94 Offset: 0x2142C94 VA: 0x2142C94
	private void OnNewBlockerIntroductionStarted() { }

	// RVA: 0x2142D9C Offset: 0x2142D9C VA: 0x2142D9C
	private void OnNewBlockerIntroductionEnd() { }

	// RVA: 0x2142E58 Offset: 0x2142E58 VA: 0x2142E58
	public void OnAllStatesCompleted() { }

	// RVA: 0x2140A68 Offset: 0x2140A68 VA: 0x2140A68
	private bool IsFallbackPremiumHitActive() { }

	// RVA: 0x2142E74 Offset: 0x2142E74 VA: 0x2142E74
	public bool IsLevelSnitchSpawnActive() { }

	// RVA: 0x21422C4 Offset: 0x21422C4 VA: 0x21422C4
	private void AnimationLockTargetBottle(AItem targetItem) { }

	// RVA: 0x2142EF0 Offset: 0x2142EF0 VA: 0x2142EF0
	private void AnimationUnlockTargetBottle(AItem targetItem) { }

	// RVA: 0x2143040 Offset: 0x2143040 VA: 0x2143040 Slot: 4
	public void Dispose() { }

	// RVA: 0x2143054 Offset: 0x2143054 VA: 0x2143054
	public void .ctor() { }
}

// Namespace: Modules.Contexts.GamePlay.Snitch.Scripts