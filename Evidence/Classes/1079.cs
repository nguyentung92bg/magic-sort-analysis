public abstract class AreYouSureContainer : MonoBehaviour, IInitializable // TypeDefIndex: 1079
{
	// Fields
	[SerializeField]
	protected int _priority; // 0x18
	[SerializeField]
	private EndGameOfferButtonController _areYouSureButtonController; // 0x20

	// Methods

	// RVA: -1 Offset: -1 Slot: 5
	public abstract void Initialize();

	// RVA: -1 Offset: -1 Slot: 6
	public abstract bool ShouldShow();

	// RVA: -1 Offset: -1 Slot: 7
	public abstract Task<bool> Show();

	// RVA: -1 Offset: -1 Slot: 8
	public abstract void Hide();

	// RVA: 0x16F21C0 Offset: 0x16F21C0 VA: 0x16F21C0
	public int GetPriority() { }

	[AsyncStateMachine(typeof(AreYouSureContainer.<WaitForResponse>d__7))]
	// RVA: 0x16F21C8 Offset: 0x16F21C8 VA: 0x16F21C8
	protected Task<bool> WaitForResponse() { }

	// RVA: 0x16F22DC Offset: 0x16F22DC VA: 0x16F22DC
	protected void .ctor() { }
}

// Namespace: Modules.Contexts.GamePlay.UI.LevelFailPopUpNS.Scripts