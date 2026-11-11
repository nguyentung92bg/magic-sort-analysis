public class EndlessPortalStepCard : BasicView // TypeDefIndex: 3390
{
	// Fields
	[SerializeField]
	private EndlessPortalStepCardRewardContainer _rewardContainer; // 0x28
	[SerializeField]
	private EndlessPortalStepCardLockAnimationView _lockAnimationView; // 0x30
	[SerializeField]
	private EndlessPortalIAPButtonController _iapButtonController; // 0x38
	[SerializeField]
	private Transform _iapButtonContainer; // 0x40
	[SerializeField]
	private Transform _tickContainer; // 0x48
	[SerializeField]
	private ParticleSystem _tickParticle; // 0x50
	[SerializeField]
	private EndlessPortalAnimationConfig _animationConfig; // 0x58
	[CompilerGenerated]
	private int <Id>k__BackingField; // 0x60

	// Properties
	public override int Id { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x346F3F4 Offset: 0x346F3F4 VA: 0x346F3F4 Slot: 5
	public override int get_Id() { }

	[CompilerGenerated]
	// RVA: 0x346F3FC Offset: 0x346F3FC VA: 0x346F3FC Slot: 6
	public override void set_Id(int value) { }

	// RVA: 0x346F404 Offset: 0x346F404 VA: 0x346F404 Slot: 7
	public override void Initialize() { }

	// RVA: 0x346F4A8 Offset: 0x346F4A8 VA: 0x346F4A8 Slot: 8
	public override void Recycle() { }

	// RVA: 0x346CA0C Offset: 0x346CA0C VA: 0x346CA0C
	public void SetStepModel(EndlessPortalRewardStepModel model, bool isUnlocked) { }

	// RVA: 0x346C944 Offset: 0x346C944 VA: 0x346C944
	public Sequence UnlockButtonAndPlayLockFallAnimation() { }

	// RVA: 0x346C6A4 Offset: 0x346C6A4 VA: 0x346C6A4
	public Sequence PlayRewardRevealAnimations(List<RewardModel> rewardModels) { }

	// RVA: 0x346FC34 Offset: 0x346FC34 VA: 0x346FC34
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x346FC3C Offset: 0x346FC3C VA: 0x346FC3C
	private void <PlayRewardRevealAnimations>b__15_0() { }

	[CompilerGenerated]
	// RVA: 0x346FCAC Offset: 0x346FCAC VA: 0x346FCAC
	private void <PlayRewardRevealAnimations>b__15_2() { }
}

// Namespace: Modules.Contexts.Home.Monetization.EndlessPortal.Scripts.UI