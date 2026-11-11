public class DailyRewardPopUp : MonoBehaviour, IPopUp // TypeDefIndex: 4495
{
	// Fields
	[SerializeField]
	private SpriteRenderer _rewardCollectBackground; // 0x18
	[SerializeField]
	private BulkRewardAnimationConfig _animationConfig; // 0x20
	[SerializeField]
	private float _rewardsCollectDuration; // 0x28
	[SerializeField]
	private Vector3 _rewardsCollectPosition; // 0x2C
	[SerializeField]
	private AnimationCurve _rewardMoveCurve; // 0x38
	[SerializeField]
	private float _rewardScaleDuration; // 0x40
	[SerializeField]
	private AnimationCurve _rewardScaleCurve; // 0x48
	private DailyRewardService _dailyRewardService; // 0x50
	private TaskCompletionSource<bool> _popupDisplayFlow; // 0x58
	private DailyRewardPopUpHatView[] _hatViews; // 0x60
	private DailyRewardPopUpImpressionSource _impressionSource; // 0x68
	private const string event_ended_text = "Daily Bonus event has ended!";

	// Methods

	// RVA: 0x38D5CA0 Offset: 0x38D5CA0 VA: 0x38D5CA0 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x38D5D54 Offset: 0x38D5D54 VA: 0x38D5D54 Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	[AsyncStateMachine(typeof(DailyRewardPopUp.<OnHatClicked>d__14))]
	// RVA: 0x38D6070 Offset: 0x38D6070 VA: 0x38D6070
	private void OnHatClicked(DailyRewardPopUpHatView hatView, int hatIndex) { }

	// RVA: 0x38D6150 Offset: 0x38D6150 VA: 0x38D6150
	private void DarkenUnselectedHats(DailyRewardPopUpHatView selectedHatView) { }

	// RVA: 0x38D621C Offset: 0x38D621C VA: 0x38D621C
	private Sequence PlayMoveAnimation(CurrencyView currencyView) { }

	// RVA: 0x38D63B8 Offset: 0x38D63B8 VA: 0x38D63B8 Slot: 6
	public Task Hide() { }

	// RVA: 0x38D647C Offset: 0x38D647C VA: 0x38D647C Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x38D6484 Offset: 0x38D6484 VA: 0x38D6484
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]