public class SkyJumpSearchAnimationView : MonoBehaviour // TypeDefIndex: 2804
{
	// Fields
	[SerializeField]
	private List<SkyJumpUserView> _userViews; // 0x18
	[SerializeField]
	private List<RevealAnimation> _userViewsRevealAnimations; // 0x20
	[SerializeField]
	private SkyJumpAnimationConfig _animationConfig; // 0x28
	[SerializeField]
	private TextMeshPro _userCountText; // 0x30
	private Sequence _mainSequence; // 0x38

	// Methods

	// RVA: 0x2F22034 Offset: 0x2F22034 VA: 0x2F22034
	public Tween Initialize(List<SkyJumpLeaderboardPlayerViewModel> viewModels) { }

	// RVA: 0x2F220E8 Offset: 0x2F220E8 VA: 0x2F220E8
	private void DisableViews() { }

	// RVA: 0x2F22184 Offset: 0x2F22184 VA: 0x2F22184
	private void RemoveExcessViewModels(List<SkyJumpLeaderboardPlayerViewModel> viewModels) { }

	// RVA: 0x2F22214 Offset: 0x2F22214 VA: 0x2F22214
	private void SetUserViewModels(List<SkyJumpLeaderboardPlayerViewModel> viewModels) { }

	// RVA: 0x2F223A8 Offset: 0x2F223A8 VA: 0x2F223A8
	public Sequence PlaySearchCountText() { }

	// RVA: 0x2F222EC Offset: 0x2F222EC VA: 0x2F222EC
	public Sequence SearchAnimation(List<SkyJumpLeaderboardPlayerViewModel> viewModels) { }

	// RVA: 0x2F226C8 Offset: 0x2F226C8 VA: 0x2F226C8
	private Sequence RevealTransformsSequence(List<SkyJumpLeaderboardPlayerViewModel> viewModels) { }

	// RVA: 0x2F22810 Offset: 0x2F22810 VA: 0x2F22810
	public void Dispose() { }

	// RVA: 0x2F22820 Offset: 0x2F22820 VA: 0x2F22820
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.SkyJump.Scripts.UI