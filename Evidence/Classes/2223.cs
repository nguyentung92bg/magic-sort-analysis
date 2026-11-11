public class TeamTypeToggleView : MonoBehaviour // TypeDefIndex: 2223
{
	// Fields
	[SerializeField]
	private Button _teamTypeToggle; // 0x18
	[SerializeField]
	private Transform _teamTypeToggleTransform; // 0x20
	[SerializeField]
	private Transform _teamTypeOpenTransform; // 0x28
	[SerializeField]
	private Transform _teamTypeClosedTransform; // 0x30
	[SerializeField]
	private SpriteRenderer _toggleSpriteOpen; // 0x38
	[SerializeField]
	private SpriteRenderer _toggleSpriteClosed; // 0x40
	[SerializeField]
	private TMP_Text _openText; // 0x48
	[SerializeField]
	private TMP_Text _closedText; // 0x50
	[CompilerGenerated]
	private bool <IsTeamOpen>k__BackingField; // 0x58

	// Properties
	public bool IsTeamOpen { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x2F02B94 Offset: 0x2F02B94 VA: 0x2F02B94
	public bool get_IsTeamOpen() { }

	[CompilerGenerated]
	// RVA: 0x2F02B9C Offset: 0x2F02B9C VA: 0x2F02B9C
	private void set_IsTeamOpen(bool value) { }

	// RVA: 0x2EFBC48 Offset: 0x2EFBC48 VA: 0x2EFBC48
	public void Initialize() { }

	// RVA: 0x2EFB848 Offset: 0x2EFB848 VA: 0x2EFB848
	public void Dispose() { }

	// RVA: 0x2F02BA8 Offset: 0x2F02BA8 VA: 0x2F02BA8
	private void OnTeamTypeToggleSelected() { }

	// RVA: 0x2EFB8D4 Offset: 0x2EFB8D4 VA: 0x2EFB8D4
	public void SetTeamType(bool isOpen, bool animate = True) { }

	// RVA: 0x2F02BBC Offset: 0x2F02BBC VA: 0x2F02BBC
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x2F02BC4 Offset: 0x2F02BC4 VA: 0x2F02BC4
	private void <SetTeamType>b__15_0() { }
}

// Namespace: Modules.Contexts.Home.Teams.Scripts.UI