public class SkyJumpWithStageSearchAnimationView : MonoBehaviour // TypeDefIndex: 2710
{
	// Fields
	[SerializeField]
	private List<SkyJumpWithStageUserView> _userViews; // 0x18
	[SerializeField]
	private List<RevealAnimation> _userViewsRevealAnimations; // 0x20
	[SerializeField]
	private SkyJumpWithStageAnimationConfig _animationConfig; // 0x28
	[SerializeField]
	private TextMeshPro _userCountText; // 0x30
	private Sequence _mainSequence; // 0x38

	// Methods

	// RVA: 0x233EC8C Offset: 0x233EC8C VA: 0x233EC8C
	public Tween Initialize(List<SkyJumpWithStageLeaderboardPlayerViewModel> viewModels) { }

	// RVA: 0x233ED40 Offset: 0x233ED40 VA: 0x233ED40
	private void DisableViews() { }

	// RVA: 0x233EDDC Offset: 0x233EDDC VA: 0x233EDDC
	private void RemoveExcessViewModels(List<SkyJumpWithStageLeaderboardPlayerViewModel> viewModels) { }

	// RVA: 0x233EE6C Offset: 0x233EE6C VA: 0x233EE6C
	private void SetUserViewModels(List<SkyJumpWithStageLeaderboardPlayerViewModel> viewModels) { }

	// RVA: 0x233F0F8 Offset: 0x233F0F8 VA: 0x233F0F8
	public Sequence PlaySearchCountText() { }

	// RVA: 0x233EF40 Offset: 0x233EF40 VA: 0x233EF40
	public Sequence SearchAnimation(List<SkyJumpWithStageLeaderboardPlayerViewModel> viewModels) { }

	// RVA: 0x233F418 Offset: 0x233F418 VA: 0x233F418
	private Sequence RevealTransformsSequence(List<SkyJumpWithStageLeaderboardPlayerViewModel> viewModels) { }

	// RVA: 0x233F560 Offset: 0x233F560 VA: 0x233F560
	public void Dispose() { }

	// RVA: 0x233F570 Offset: 0x233F570 VA: 0x233F570
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.SkyJumpWithStage.Scripts.UI