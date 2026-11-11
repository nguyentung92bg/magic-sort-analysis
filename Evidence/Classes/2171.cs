public class TeamChatInputController : MonoBehaviour // TypeDefIndex: 2171
{
	// Fields
	[SerializeField]
	private TMP_SpriteAsset _emojiAsset; // 0x18
	[SerializeField]
	private TMP_FontAsset[] _fontAsset; // 0x20
	private string _message; // 0x28
	private TeamsService _teamsService; // 0x30
	private TeamChatService _chatService; // 0x38
	private KeyboardService _keyboardService; // 0x40

	// Methods

	// RVA: 0x3455EF8 Offset: 0x3455EF8 VA: 0x3455EF8
	public void Initialize() { }

	// RVA: 0x345633C Offset: 0x345633C VA: 0x345633C
	public void Dispose() { }

	// RVA: 0x34584F4 Offset: 0x34584F4 VA: 0x34584F4
	private void RegisterToKeyboardService() { }

	// RVA: 0x3458620 Offset: 0x3458620 VA: 0x3458620
	private void UnregisterFromKeyboardService() { }

	// RVA: 0x345874C Offset: 0x345874C VA: 0x345874C
	private void OnInputChanged(string inputText) { }

	// RVA: 0x3458754 Offset: 0x3458754 VA: 0x3458754
	private void OnInputSubmitted(string inputText) { }

	// RVA: 0x34589E8 Offset: 0x34589E8 VA: 0x34589E8
	private void OnInputCanceled(string lastInput) { }

	// RVA: 0x3456B58 Offset: 0x3456B58 VA: 0x3456B58
	public void Activate() { }

	// RVA: 0x345879C Offset: 0x345879C VA: 0x345879C
	private void SendMessage() { }

	// RVA: 0x3458A64 Offset: 0x3458A64 VA: 0x3458A64
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Teams.Scripts.UI
[CreateAssetMenu(fileName = "TeamChatMessageViewFactory", menuName = "Factory/TeamChatMessageViewFactory")]