public class TeamTextChatMessageView : TeamMessageView // TypeDefIndex: 2183
{
	// Fields
	[SerializeField]
	private TMP_Text _messageText; // 0x38
	[SerializeField]
	private TMP_Text _timeText; // 0x40
	[SerializeField]
	private UserProfileView _profileView; // 0x48
	[SerializeField]
	private float _baseHeight; // 0x50
	[SerializeField]
	private float _heightPerLine; // 0x54
	[SerializeField]
	private float _spacing; // 0x58
	[SerializeField]
	private RectTransform _contentHolder; // 0x60
	[SerializeField]
	private SpriteRenderer _messageBg; // 0x68
	[SerializeField]
	private RectTransform _messageRect; // 0x70
	[SerializeField]
	private TeamChatTextMessageViewAnimationConfig _animConfig; // 0x78
	private Vector3 _size; // 0x80
	private TeamsChatMessageViewModel _viewModel; // 0x90

	// Methods

	// RVA: 0x345C5B4 Offset: 0x345C5B4 VA: 0x345C5B4 Slot: 9
	public override Vector3 GetSizeByContent(TeamsChatMessageViewModel message) { }

	// RVA: 0x345C6CC Offset: 0x345C6CC VA: 0x345C6CC Slot: 10
	public override void SetMessage(TeamsChatMessageViewModel message) { }

	// RVA: 0x345C8C0 Offset: 0x345C8C0 VA: 0x345C8C0
	private static string FormatTime(TimeSpan timeSpan) { }

	// RVA: 0x345CB1C Offset: 0x345CB1C VA: 0x345CB1C Slot: 8
	public override void Recycle() { }

	[Button]
	// RVA: 0x345CBA8 Offset: 0x345CBA8 VA: 0x345CBA8
	private void SetHeight(int lineCount) { }

	[Button]
	// RVA: 0x345783C Offset: 0x345783C VA: 0x345783C
	public void PlayIntroAnimation(bool setDelay = False) { }

	// RVA: 0x345CC48 Offset: 0x345CC48 VA: 0x345CC48
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x345CC68 Offset: 0x345CC68 VA: 0x345CC68
	private void <PlayIntroAnimation>b__17_0() { }
}

// Namespace: Modules.Contexts.Home.Teams.Scripts.UI