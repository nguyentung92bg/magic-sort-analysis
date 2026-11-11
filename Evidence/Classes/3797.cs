public class MagicStreakTournamentLeaderboardElementMedalView : MonoBehaviour // TypeDefIndex: 3797
{
	// Fields
	[SerializeField]
	private SpriteRenderer _medalRenderer; // 0x18
	[SerializeField]
	private Sprite _goldMedal; // 0x20
	[SerializeField]
	private Sprite _silverMedal; // 0x28
	[SerializeField]
	private Sprite _bronzeMedal; // 0x30
	[SerializeField]
	private SpriteRenderer _defaultRankRenderer; // 0x38
	[SerializeField]
	private Sprite _otherUserRankSprite; // 0x40
	[SerializeField]
	private Sprite _myRankSprite; // 0x48
	[SerializeField]
	private TextMeshPro _rankText; // 0x50
	[SerializeField]
	private float _singleDigitFontSize; // 0x58
	[SerializeField]
	private float _doubleDigitFontSize; // 0x5C

	// Methods

	// RVA: 0x3E15664 Offset: 0x3E15664 VA: 0x3E15664
	public void Show(int rank, bool isMe) { }

	// RVA: 0x3E15BB0 Offset: 0x3E15BB0 VA: 0x3E15BB0
	public void AnimateRankChange(int currentRewardAmount, int targetRewardAmount, float totalDuration) { }

	// RVA: 0x3E161F4 Offset: 0x3E161F4 VA: 0x3E161F4
	public void SetRank(int rank) { }

	// RVA: 0x3E16304 Offset: 0x3E16304 VA: 0x3E16304
	private void SetRankFontSize(int rank) { }

	// RVA: 0x3E16338 Offset: 0x3E16338 VA: 0x3E16338
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Leaderboard