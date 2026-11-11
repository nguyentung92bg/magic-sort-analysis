public class RewardedButton : MonoBehaviour // TypeDefIndex: 4916
{
	// Fields
	[SerializeField]
	private LoadingbarView _loadingBarView; // 0x18
	[SerializeField]
	private SpriteRenderer _adSpriteRenderer; // 0x20

	// Methods

	// RVA: 0x4105F18 Offset: 0x4105F18 VA: 0x4105F18
	private void Awake() { }

	// RVA: 0x41060B8 Offset: 0x41060B8 VA: 0x41060B8
	public void OnDestroy() { }

	// RVA: 0x4105FF0 Offset: 0x4105FF0 VA: 0x4105FF0
	private void ShowLoadingBarIfRewardedNotReady() { }

	[AsyncStateMachine(typeof(RewardedButton.<ShowRewarded>d__5))]
	// RVA: 0x4106188 Offset: 0x4106188 VA: 0x4106188
	public Task<bool> ShowRewarded(AdRequestSource source) { }

	// RVA: 0x4106290 Offset: 0x4106290 VA: 0x4106290
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Daily.Scripts.UI