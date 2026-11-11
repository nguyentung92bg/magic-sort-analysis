public class SnitchBoxView : MonoBehaviour, IDisposable // TypeDefIndex: 1216
{
	// Fields
	[SerializeField]
	private Transform _view; // 0x18
	[SerializeField]
	private SnitchItemView _snitchViewPrefab; // 0x20
	[SerializeField]
	private SnitchAnimationConfig _config; // 0x28
	[SerializeField]
	private Transform[] _redSnitchSpawnPoints; // 0x30
	[SerializeField]
	private Transform[] _normalSnitchSpawnPoints; // 0x38
	[SerializeField]
	private Transform _tutorialEffects; // 0x40
	[SerializeField]
	private Transform _rotationPivot; // 0x48
	[SerializeField]
	private List<SpriteRenderer> _shadows; // 0x50
	private List<SnitchItemView> _redSnitchViews; // 0x58
	private List<SnitchItemView> _normalSnitchViews; // 0x60
	private SnitchInGameManager _snitchInGameManager; // 0x68
	private SnitchBoxView.SnitchAnimationState _currentState; // 0x70
	private bool _isTweenPlaying; // 0x74
	private bool _isSequenceFinished; // 0x75
	private bool _isTutorialChecked; // 0x76
	private bool _isNewBlockerIntroChecked; // 0x77
	private bool _hasNewBlockerToIntroduce; // 0x78

	// Methods

	// RVA: 0x20FA834 Offset: 0x20FA834 VA: 0x20FA834
	public void Initialize(SnitchInGameManager snitchInGameManager) { }

	// RVA: 0x20FA94C Offset: 0x20FA94C VA: 0x20FA94C
	public void OnLevelStart() { }

	// RVA: 0x20FAC40 Offset: 0x20FAC40 VA: 0x20FAC40
	private void Update() { }

	// RVA: 0x20FAEF4 Offset: 0x20FAEF4 VA: 0x20FAEF4
	private void PlayAndWait(Tween tween, bool markComplete = False) { }

	// RVA: 0x20FAC30 Offset: 0x20FAC30 VA: 0x20FAC30
	private void AdvanceState() { }

	// RVA: 0x20FAD54 Offset: 0x20FAD54 VA: 0x20FAD54
	private Tween PlayEntrySequence() { }

	// RVA: 0x20FB964 Offset: 0x20FB964 VA: 0x20FB964
	private Sequence BoxEntryAnimation() { }

	// RVA: 0x20FB04C Offset: 0x20FB04C VA: 0x20FB04C
	private Tween TryPlayRedSnitchesRise() { }

	// RVA: 0x20FBE54 Offset: 0x20FBE54 VA: 0x20FBE54
	private Tween PlayRiseRedSnitchesOnSitSequence() { }

	// RVA: 0x20FBC04 Offset: 0x20FBC04 VA: 0x20FBC04
	private Tween PlayRiseRedSnitchesOnHitSequence() { }

	// RVA: 0x20FB468 Offset: 0x20FB468 VA: 0x20FB468
	private Tween PlayRiseNormalSnitchesSequence() { }

	// RVA: 0x20FB0D8 Offset: 0x20FB0D8 VA: 0x20FB0D8
	private Tween PlayMoveRedSnitchSequence(int index) { }

	// RVA: 0x20FC0A4 Offset: 0x20FC0A4 VA: 0x20FC0A4
	public Vector3 TryGetTargetSnitchTargetHitPosition(AItem targetItem) { }

	// RVA: 0x20FB72C Offset: 0x20FB72C VA: 0x20FB72C
	private Tween PlayMoveNormalSnitchesSequence() { }

	// RVA: 0x20FC2F0 Offset: 0x20FC2F0 VA: 0x20FC2F0
	private Tween PlayMoveNormalSnitchSequence(int index) { }

	// RVA: 0x20FC504 Offset: 0x20FC504 VA: 0x20FC504
	private void CreateSnitchViews() { }

	// RVA: 0x20FC6C0 Offset: 0x20FC6C0 VA: 0x20FC6C0
	private SnitchItemView CreateSnitchView(SnitchItemType itemType, Transform parent, int sortingOffset) { }

	// RVA: 0x20FC914 Offset: 0x20FC914 VA: 0x20FC914
	private void SetSnitchEntryStartValues() { }

	// RVA: 0x20FA970 Offset: 0x20FA970 VA: 0x20FA970
	private void ClearSnitchViews() { }

	// RVA: 0x20FCB60 Offset: 0x20FCB60 VA: 0x20FCB60
	private void Show() { }

	// RVA: 0x20FCB8C Offset: 0x20FCB8C VA: 0x20FCB8C
	private void Hide() { }

	// RVA: 0x20FCBB8 Offset: 0x20FCBB8 VA: 0x20FCBB8
	public void OnTutorialStarted() { }

	// RVA: 0x20FCD1C Offset: 0x20FCD1C VA: 0x20FCD1C
	public void OnTutorialEnd() { }

	// RVA: 0x20FCC70 Offset: 0x20FCC70 VA: 0x20FCC70
	private void SetSorting(Sorting sorting) { }

	// RVA: 0x20FAFF4 Offset: 0x20FAFF4 VA: 0x20FAFF4
	private void CheckTutorialState() { }

	// RVA: 0x20FA854 Offset: 0x20FA854 VA: 0x20FA854
	private void InitializeNewBlockerToIntroduceCheck() { }

	// RVA: 0x20FAD08 Offset: 0x20FAD08 VA: 0x20FAD08
	private void CheckNewBlockerIntroductionState() { }

	// RVA: 0x20FCDEC Offset: 0x20FCDEC VA: 0x20FCDEC
	public void OnNewBlockerIntroductionEnd() { }

	// RVA: 0x20FCE04 Offset: 0x20FCE04 VA: 0x20FCE04
	public bool IsWaitingNewBlockerIntroduction() { }

	// RVA: 0x20FCE14 Offset: 0x20FCE14 VA: 0x20FCE14
	private void OnAllStatesCompleted() { }

	// RVA: 0x20FCE38 Offset: 0x20FCE38 VA: 0x20FCE38 Slot: 4
	public void Dispose() { }

	// RVA: 0x20FCE50 Offset: 0x20FCE50 VA: 0x20FCE50
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x20FCE58 Offset: 0x20FCE58 VA: 0x20FCE58
	private void <BoxEntryAnimation>b__24_0() { }

	[CompilerGenerated]
	// RVA: 0x20FCEA4 Offset: 0x20FCEA4 VA: 0x20FCEA4
	private void <BoxEntryAnimation>b__24_1() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]