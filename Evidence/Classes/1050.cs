public class InLevelPlayButton : MonoBehaviour // TypeDefIndex: 1050
{
	// Fields
	[SerializeField]
	private Button _button; // 0x18
	[SerializeField]
	private GameObject _hardTag; // 0x20
	[SerializeField]
	private GameObject _superHardTag; // 0x28

	// Methods

	// RVA: 0x16EB2A0 Offset: 0x16EB2A0 VA: 0x16EB2A0
	public void Awake() { }

	// RVA: 0x16EB340 Offset: 0x16EB340 VA: 0x16EB340
	private void OnEnable() { }

	// RVA: 0x16EB4EC Offset: 0x16EB4EC VA: 0x16EB4EC
	private void ConfigureViewVisibilityBasedOnDifficulty(LevelDifficultyType difficultyType) { }

	[AsyncStateMachine(typeof(InLevelPlayButton.<EnterLevel>d__6))]
	// RVA: 0x16EB56C Offset: 0x16EB56C VA: 0x16EB56C
	private void EnterLevel() { }

	// RVA: 0x16EB604 Offset: 0x16EB604 VA: 0x16EB604
	public void OnDestroy() { }

	// RVA: 0x16EB690 Offset: 0x16EB690 VA: 0x16EB690
	public void .ctor() { }
}

// Namespace: Modules.Contexts.GamePlay.UI.PreLevelPopUpNS.Scripts.NextLevel