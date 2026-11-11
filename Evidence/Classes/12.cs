public class DailyRewardPopUpHatView : MonoBehaviour // TypeDefIndex: 12
{
	// Fields
	[SerializeField]
	private Button _button; // 0x18
	[SerializeField]
	private Transform _rewardParent; // 0x20
	[SerializeField]
	private CurrencyViewFactory _currencyViewFactory; // 0x28
	[SerializeField]
	private Animation _animation; // 0x30
	[SerializeField]
	private AnimationClip _openAnimationClip; // 0x38
	[SerializeField]
	private AnimationClip _openAnimationWithoutDarkeningClip; // 0x40
	[SerializeField]
	private AnimationClip _openImmediateAnimationClip; // 0x48
	[SerializeField]
	private GameObject _unlockParticle; // 0x50
	[CompilerGenerated]
	private RewardModel <RevealedReward>k__BackingField; // 0x58
	[CompilerGenerated]
	private CurrencyView <RevealedRewardCurrencyView>k__BackingField; // 0x60
	[SerializeField]
	private List<SpriteRenderer> _hatSpriteRenderers; // 0x68

	// Properties
	public RewardModel RevealedReward { get; set; }
	public CurrencyView RevealedRewardCurrencyView { get; set; }
	public Button Button { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x19ED6D0 Offset: 0x19ED6D0 VA: 0x19ED6D0
	public RewardModel get_RevealedReward() { }

	[CompilerGenerated]
	// RVA: 0x19ED6D8 Offset: 0x19ED6D8 VA: 0x19ED6D8
	private void set_RevealedReward(RewardModel value) { }

	[CompilerGenerated]
	// RVA: 0x19ED6E0 Offset: 0x19ED6E0 VA: 0x19ED6E0
	public CurrencyView get_RevealedRewardCurrencyView() { }

	[CompilerGenerated]
	// RVA: 0x19ED6E8 Offset: 0x19ED6E8 VA: 0x19ED6E8
	private void set_RevealedRewardCurrencyView(CurrencyView value) { }

	// RVA: 0x19ED6F0 Offset: 0x19ED6F0 VA: 0x19ED6F0
	public Button get_Button() { }

	// RVA: 0x19ED6F8 Offset: 0x19ED6F8 VA: 0x19ED6F8
	public void PlayOpenAnimation(bool darkenRewards = False) { }

	// RVA: 0x19ED770 Offset: 0x19ED770 VA: 0x19ED770
	public void PlayOpenAnimationWithoutDarkening() { }

	// RVA: 0x19ED7A8 Offset: 0x19ED7A8 VA: 0x19ED7A8
	public void DarkenHatViews() { }

	// RVA: 0x19ED954 Offset: 0x19ED954 VA: 0x19ED954
	public float GetClipLength() { }

	// RVA: 0x19ED970 Offset: 0x19ED970 VA: 0x19ED970
	public void OpenImmediate() { }

	// RVA: 0x19ED9C8 Offset: 0x19ED9C8 VA: 0x19ED9C8
	public void RevealReward(RewardModel reward, bool isParticleActive) { }

	// RVA: 0x19EDB1C Offset: 0x19EDB1C VA: 0x19EDB1C
	public Transform GetRewardParent() { }

	// RVA: 0x19EDB24 Offset: 0x19EDB24 VA: 0x19EDB24
	public void .ctor() { }
}

// Namespace: 