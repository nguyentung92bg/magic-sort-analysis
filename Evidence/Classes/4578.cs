public class CollectionCardReceivedPopUp : MonoBehaviour, IPopUp // TypeDefIndex: 4578
{
	// Fields
	[SerializeField]
	private ReceivedCardInfoView[] _receivedCardInfoViews; // 0x18
	[SerializeField]
	private TextSequenceAnimator _textSequenceAnimator; // 0x20
	[SerializeField]
	private Button _continueButton; // 0x28
	[SerializeField]
	private SpriteRenderer _background; // 0x30
	[SerializeField]
	private TextMeshPro _bottomText; // 0x38
	[SerializeField]
	private BulkRewardAnimationConfig _bulkAnimationConfig; // 0x40
	[SerializeField]
	private CollectionAnimationConfig _animationConfig; // 0x48
	[SerializeField]
	private Transform _layoutsParent; // 0x50
	[SerializeField]
	private Transform _duplicatedStarsMoveTransform; // 0x58
	[SerializeField]
	private CollectionCardStarView _starViewPrefab; // 0x60
	private List<CollectionCardStarView> _starViews; // 0x68
	private CollectionService _service; // 0x70
	private TaskCompletionSource<bool> _popupDisplayFlow; // 0x78

	// Methods

	// RVA: 0x3776890 Offset: 0x3776890 VA: 0x3776890 Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x3776D30 Offset: 0x3776D30 VA: 0x3776D30
	private Transform GetTargetLayoutTransform(int cardIndex, int totalCardCount) { }

	// RVA: 0x3776DA4 Offset: 0x3776DA4 VA: 0x3776DA4
	private void PlayCardReceivedAnimations() { }

	// RVA: 0x3777288 Offset: 0x3777288 VA: 0x3777288
	private void OnContinueButtonDown() { }

	// RVA: 0x37775D4 Offset: 0x37775D4 VA: 0x37775D4
	private Tween ScaleOutDuplicatedCards() { }

	// RVA: 0x3778208 Offset: 0x3778208 VA: 0x3778208
	private void CreateDuplicatedCarStarView(CollectionCardView cardView) { }

	// RVA: 0x377700C Offset: 0x377700C VA: 0x377700C
	private Tween SetTextAndPlayTextSequence() { }

	// RVA: 0x3777154 Offset: 0x3777154 VA: 0x3777154
	private Tween BottomTextScaleIn() { }

	// RVA: 0x37774A0 Offset: 0x37774A0 VA: 0x37774A0
	private Tween BottomTextScaleOut() { }

	// RVA: 0x37770A8 Offset: 0x37770A8 VA: 0x37770A8
	private Tween FadeInBackground() { }

	// RVA: 0x3778114 Offset: 0x3778114 VA: 0x3778114
	private Tween FadeOutBackground() { }

	// RVA: 0x3778484 Offset: 0x3778484 VA: 0x3778484 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x3778560 Offset: 0x3778560 VA: 0x3778560 Slot: 6
	public Task Hide() { }

	// RVA: 0x3778614 Offset: 0x3778614 VA: 0x3778614 Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x377861C Offset: 0x377861C VA: 0x377861C
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x3778624 Offset: 0x3778624 VA: 0x3778624
	private void <PlayCardReceivedAnimations>b__15_1() { }

	[CompilerGenerated]
	// RVA: 0x37786BC Offset: 0x37786BC VA: 0x37786BC
	private void <ScaleOutDuplicatedCards>b__17_10() { }

	[CompilerGenerated]
	// RVA: 0x3778A30 Offset: 0x3778A30 VA: 0x3778A30
	private void <ScaleOutDuplicatedCards>b__17_3() { }

	[CompilerGenerated]
	// RVA: 0x3778AA0 Offset: 0x3778AA0 VA: 0x3778AA0
	private void <ScaleOutDuplicatedCards>b__17_4() { }

	[CompilerGenerated]
	// RVA: 0x3778AD0 Offset: 0x3778AD0 VA: 0x3778AD0
	private void <ScaleOutDuplicatedCards>b__17_5() { }

	[CompilerGenerated]
	// RVA: 0x3778B54 Offset: 0x3778B54 VA: 0x3778B54
	private void <BottomTextScaleOut>b__21_0() { }

	[CompilerGenerated]
	// RVA: 0x3778B80 Offset: 0x3778B80 VA: 0x3778B80
	private void <FadeOutBackground>b__23_0() { }
}

// Namespace: Modules.Contexts.Home.Collection.Scripts.UI
[Serializable]