public class StrikeShowEventInProgressView : MonoBehaviour // TypeDefIndex: 2480
{
	// Fields
	[SerializeField]
	private GameObject _tierScreenParent; // 0x18
	[SerializeField]
	private GameObject _bronzeTier; // 0x20
	[SerializeField]
	private GameObject _silverTier; // 0x28
	[SerializeField]
	private GameObject _goldTier; // 0x30
	[SerializeField]
	private GameObject _multiplierParent; // 0x38
	[SerializeField]
	private GameObject _phoneUIAsset; // 0x40
	[SerializeField]
	private ToolbarButton _streakToolbarButton; // 0x48
	[SerializeField]
	private ToolbarButton _tierToolbarButton; // 0x50
	[SerializeField]
	private List<TextMeshPro> _multiplierTexts; // 0x58
	[SerializeField]
	private List<GameObject> _currentMultiplerIndicators; // 0x60
	[SerializeField]
	private StrikeShowPodiumView _podiumView; // 0x68
	[SerializeField]
	private StrikeShowLeaderboardView _leaderboardView; // 0x70
	[SerializeField]
	private GameObject _tierPhoneBg; // 0x78
	[SerializeField]
	private GameObject _tierTabletBg; // 0x80
	private const string MultiplierTerm = "StrikeShowMultiplierToolbarText";
	private const string TierTerm = "StrikeShowTierToolbarText";
	private const float PhoneAspectThreshold = 0.4670853;

	// Methods

	// RVA: 0x2AF9E90 Offset: 0x2AF9E90 VA: 0x2AF9E90
	public void Show(StrikeShowEventPopupArguments args) { }

	// RVA: 0x2AFA52C Offset: 0x2AFA52C VA: 0x2AFA52C
	public void Hide() { }

	// RVA: 0x2AFA550 Offset: 0x2AFA550 VA: 0x2AFA550
	public void Dispose() { }

	// RVA: 0x2AFA5FC Offset: 0x2AFA5FC VA: 0x2AFA5FC
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.StrikeShow.Scripts.UI