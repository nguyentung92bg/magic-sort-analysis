public class AreYouSurePopUp : MonoBehaviour // TypeDefIndex: 190
{
	// Fields
	private TaskCompletionSource<AreYouSurePopUpResult> _taskCompletionSource; // 0x18
	[SerializeField]
	private TextMeshProUGUI _textMeshProUGUI; // 0x20
	[SerializeField]
	private TextMeshProUGUI _yesTextMeshProUGUI; // 0x28
	[SerializeField]
	private TextMeshProUGUI _noTextMeshProUGUI; // 0x30
	[SerializeField]
	private TextMeshProUGUI _cancelTextMeshProUGUI; // 0x38

	// Methods

	[AsyncStateMachine(typeof(AreYouSurePopUp.<Ask>d__5))]
	// RVA: 0x379C510 Offset: 0x379C510 VA: 0x379C510
	public Task<AreYouSurePopUpResult> Ask(string message, string yesText, string noText, string cancelText) { }

	// RVA: 0x379C680 Offset: 0x379C680 VA: 0x379C680
	public void Yes() { }

	// RVA: 0x379C6F0 Offset: 0x379C6F0 VA: 0x379C6F0
	public void No() { }

	// RVA: 0x379C760 Offset: 0x379C760 VA: 0x379C760
	public void Cancel() { }

	// RVA: 0x379C7D0 Offset: 0x379C7D0 VA: 0x379C7D0
	public void .ctor() { }
}

// Namespace: Modules.LevelEditor.WaterSort.UI.Scripts