public class RankView : MonoBehaviour // TypeDefIndex: 2896
{
	// Fields
	private Tween _rankChangeTween; // 0x18
	[SerializeField]
	private SpriteRenderer _medalSpriteRenderer; // 0x20
	[SerializeField]
	private Sprite _goldMedalSprite; // 0x28
	[SerializeField]
	private Sprite _silverMedalSprite; // 0x30
	[SerializeField]
	private Sprite _bronzeMedalSprite; // 0x38
	[SerializeField]
	private TextMeshPro _rankText; // 0x40
	[SerializeField]
	private TextMeshPro _myRankText; // 0x48

	// Methods

	// RVA: 0x297FF40 Offset: 0x297FF40 VA: 0x297FF40
	private Sprite GetMedalSprite(LeaderboardMedalType medalType) { }

	// RVA: 0x297FF7C Offset: 0x297FF7C VA: 0x297FF7C
	public void SetRank(int rank, bool isMe) { }

	// RVA: 0x298018C Offset: 0x298018C VA: 0x298018C
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.UI.Common.Scripts