public class NewItemFoundPopUp : MonoBehaviour // TypeDefIndex: 3628
{
	// Fields
	[SerializeField]
	private SpriteRenderer _itemSprite; // 0x18
	[SerializeField]
	private SpriteRenderer _background; // 0x20
	[SerializeField]
	private Button _closeButton; // 0x28
	[SerializeField]
	private MergeItemSpriteConfig _spriteConfig; // 0x30
	[SerializeField]
	private WatchAndWinDynamicRewardView _rewardView; // 0x38
	[SerializeField]
	private MergeMiniGameAnimationConfig _animationConfig; // 0x40
	[SerializeField]
	private Transform _particleParent; // 0x48
	[SerializeField]
	private Transform _rewardParent; // 0x50
	[SerializeField]
	private Transform _claimTextParent; // 0x58
	[SerializeField]
	private Transform _titleTextParent; // 0x60
	private Vector3 _itemPosition; // 0x68
	private Action _onClosed; // 0x78

	// Methods

	// RVA: 0x3FB0CF8 Offset: 0x3FB0CF8 VA: 0x3FB0CF8
	private void Awake() { }

	// RVA: 0x3FB0D84 Offset: 0x3FB0D84 VA: 0x3FB0D84
	public Sequence Show(int level, RewardModel reward, Vector3 fromPosition, Action onClosed) { }

	// RVA: 0x3FB0F08 Offset: 0x3FB0F08 VA: 0x3FB0F08
	private Sequence ShowAnimation(int level, RewardModel reward, Vector3 fromPosition) { }

	// RVA: 0x3FB1570 Offset: 0x3FB1570 VA: 0x3FB1570
	private Sequence HideAnimation(Vector3 fromPosition) { }

	// RVA: 0x3FB1534 Offset: 0x3FB1534 VA: 0x3FB1534
	private void SetItem(int setID, int level) { }

	// RVA: 0x3FB18B0 Offset: 0x3FB18B0 VA: 0x3FB18B0
	private void CloseButtonOnSelectSuccessEvent() { }

	// RVA: 0x3FB19E0 Offset: 0x3FB19E0 VA: 0x3FB19E0
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x3FB19E8 Offset: 0x3FB19E8 VA: 0x3FB19E8
	private void <ShowAnimation>b__14_0() { }
}

// Namespace: Modules.Contexts.Home.MergeMiniGame.Scripts.UI.Tutorial