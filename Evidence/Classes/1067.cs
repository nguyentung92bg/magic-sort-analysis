public class LevelWinEntranceAnimator : MonoBehaviour // TypeDefIndex: 1067
{
	// Fields
	[SerializeField]
	private Animator _animator; // 0x18
	[SerializeField]
	private string _soloCoinEntranceAnimationKey; // 0x20
	[SerializeField]
	private string _coinWithCauldronEntranceAnimationKey; // 0x28
	[SerializeField]
	private GameObject _oneReward; // 0x30
	[SerializeField]
	private GameObject _twoReward; // 0x38
	[SerializeField]
	private LevelWinCoinRewardView _soloCoinText; // 0x40
	[SerializeField]
	private LevelWinCoinRewardView _coinWithCauldronText; // 0x48
	[SerializeField]
	private TextMeshPro _x2CoinText; // 0x50
	[SerializeField]
	private float _showX2CoinDuration; // 0x58
	[SerializeField]
	private Transform _show2XCoinInitialPosition; // 0x60
	[SerializeField]
	private AnimationCurve _show2XCoinAnimationCurve; // 0x68
	[SerializeField]
	private TextSequenceAnimator _textSequenceAnimator; // 0x70
	[SerializeField]
	private TextSequenceAnimator _textSequenceAnimator2; // 0x78
	[SerializeField]
	private MultiplierController _multiplierController; // 0x80
	private Tween _showX2CoinTween; // 0x88

	// Methods

	// RVA: 0x16EE570 Offset: 0x16EE570 VA: 0x16EE570
	public void PlayAnimation(bool isDaily, int level, bool isFirstTry, int streakCount, bool isHard, bool isSuperHard, bool shouldShowMultiplier) { }

	// RVA: 0x16EEA08 Offset: 0x16EEA08 VA: 0x16EEA08
	public void PlayPerfectText() { }

	// RVA: 0x16EEB84 Offset: 0x16EEB84 VA: 0x16EEB84
	public void OnHide() { }

	// RVA: 0x16EEA00 Offset: 0x16EEA00 VA: 0x16EEA00
	private bool IsWithCauldron() { }

	// RVA: 0x16EE794 Offset: 0x16EE794 VA: 0x16EE794
	private int GetCoinRewardAmount(bool isDaily) { }

	// RVA: 0x16EEB9C Offset: 0x16EEB9C VA: 0x16EEB9C
	private void PlayEarned2XCoinAnimation() { }

	// RVA: 0x16EEE00 Offset: 0x16EEE00 VA: 0x16EEE00
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x16EEE08 Offset: 0x16EEE08 VA: 0x16EEE08
	private void <PlayPerfectText>b__16_0() { }

	[CompilerGenerated]
	// RVA: 0x16EEEF8 Offset: 0x16EEEF8 VA: 0x16EEEF8
	private void <PlayPerfectText>b__16_1() { }
}

// Namespace: Modules.Contexts.GamePlay.UI.LevelWinPopUpNS.Scripts