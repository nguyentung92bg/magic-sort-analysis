public class MagicStreakGaeMultiplierBarView : MonoBehaviour // TypeDefIndex: 3856
{
	// Fields
	[SerializeField]
	private MagicStreakGaeMultiplierBarAnimationConfig _animationConfig; // 0x18
	[SerializeField]
	private Transform _multiplierEndPosition; // 0x20
	[SerializeField]
	private Transform _multiplierStartPosition; // 0x28
	[SerializeField]
	private Transform _sliderPivot; // 0x30
	[SerializeField]
	private Transform _multiplierPanelPivot; // 0x38
	[SerializeField]
	private Transform _tagTransform; // 0x40
	[SerializeField]
	private TextMeshPro _tagMultiplierText; // 0x48
	[SerializeField]
	private ParticleSystem _multiplierParticle; // 0x50
	[SerializeField]
	private ParticleSystem _tagLastMultiplierParticle; // 0x58
	[SerializeField]
	private ParticleSystem _tagMultiplierChangeParticle; // 0x60
	[SerializeField]
	private List<TextMeshPro> _multiplierTexts; // 0x68
	[SerializeField]
	private List<TextMeshPro> _goldMultiplierTexts; // 0x70
	[SerializeField]
	private List<Transform> _multiplierTargetPositions; // 0x78
	[SerializeField]
	private Animator _tagAnimator; // 0x80
	private Sequence _multiplierChangeSequence; // 0x88
	private Sequence _multiplierToggleSequence; // 0x90

	// Methods

	// RVA: 0x3CF44E8 Offset: 0x3CF44E8 VA: 0x3CF44E8
	public void SetViewModel(int multiplierIndex, int multiplierCount, List<int> multiplierCounts, bool isAllClaimedAndNoAnimation) { }

	// RVA: 0x3CF8790 Offset: 0x3CF8790 VA: 0x3CF8790
	private Tween PlayShowMultiplierBar() { }

	// RVA: 0x3CF8814 Offset: 0x3CF8814 VA: 0x3CF8814
	private Tween PlayHideMultiplierBar() { }

	// RVA: 0x3CF8898 Offset: 0x3CF8898 VA: 0x3CF8898
	private Tween PlayMoveMultiplierToIndex(int index) { }

	// RVA: 0x3CF8944 Offset: 0x3CF8944 VA: 0x3CF8944
	private Tween CheckTextPositionForView(float slideDuration) { }

	[Button]
	// RVA: 0x3CF5B30 Offset: 0x3CF5B30 VA: 0x3CF5B30
	public Sequence PlayMultiplierChange(int multiplierIndex, int multiplierValue, bool isAllClaimed) { }

	// RVA: 0x3CF5FA4 Offset: 0x3CF5FA4 VA: 0x3CF5FA4
	public void HideTagOnProgressbar() { }

	// RVA: 0x3CF89E4 Offset: 0x3CF89E4 VA: 0x3CF89E4
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x3CF89EC Offset: 0x3CF89EC VA: 0x3CF89EC
	private void <CheckTextPositionForView>b__20_0(float value) { }
}

// Namespace: Modules.Contexts.Home.MagicStreakGAE.Scripts