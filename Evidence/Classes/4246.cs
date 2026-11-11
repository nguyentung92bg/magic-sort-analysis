public class JetpackRaceAreYouSureView : AreYouSureContainer // TypeDefIndex: 4246
{
	// Fields
	[SerializeField]
	private JetpackRaceWithStageAreYouSureAnimationView _animationView; // 0x28
	[SerializeField]
	private TextMeshPro _rankText; // 0x30
	[SerializeField]
	private TextMeshPro _totalRankText; // 0x38
	private JetpackRaceService _jetpackRaceService; // 0x40

	// Methods

	// RVA: 0x1C66C68 Offset: 0x1C66C68 VA: 0x1C66C68 Slot: 5
	public override void Initialize() { }

	// RVA: 0x1C66CEC Offset: 0x1C66CEC VA: 0x1C66CEC Slot: 6
	public override bool ShouldShow() { }

	[AsyncStateMachine(typeof(JetpackRaceAreYouSureView.<Show>d__6))]
	// RVA: 0x1C66D10 Offset: 0x1C66D10 VA: 0x1C66D10 Slot: 7
	public override Task<bool> Show() { }

	// RVA: 0x1C66E24 Offset: 0x1C66E24 VA: 0x1C66E24
	private void SetStickerRankText() { }

	// RVA: 0x1C66F60 Offset: 0x1C66F60 VA: 0x1C66F60 Slot: 8
	public override void Hide() { }

	// RVA: 0x1C66F9C Offset: 0x1C66F9C VA: 0x1C66F9C
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.JetpackRace.Scripts.UI
[CreateAssetMenu(fileName = "JetpackRaceBannerAnimationConfig", menuName = "Configs/JetpackRaceBannerAnimationConfig")]