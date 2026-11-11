public class TeamSystemChatMessage : TeamMessageView // TypeDefIndex: 2182
{
	// Fields
	[SerializeField]
	private SpriteRenderer _messageBg; // 0x38
	[SerializeField]
	private TMP_Text _messageText; // 0x40
	[SerializeField]
	private Sprite _greenBg; // 0x48
	[SerializeField]
	private Sprite _blueBg; // 0x50
	[SerializeField]
	private Color _greenColor; // 0x58
	[SerializeField]
	private Color _blueColor; // 0x68

	// Methods

	// RVA: 0x345C14C Offset: 0x345C14C VA: 0x345C14C Slot: 10
	public override void SetMessage(TeamsChatMessageViewModel message) { }

	// RVA: 0x345C5AC Offset: 0x345C5AC VA: 0x345C5AC
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Teams.Scripts.UI