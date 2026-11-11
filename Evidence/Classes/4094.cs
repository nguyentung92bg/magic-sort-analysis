public class JourneyController : MonoBehaviour // TypeDefIndex: 4094
{
	// Fields
	[SerializeField]
	private ScrollBar _scrollBar; // 0x18
	[SerializeField]
	private BasicScrollAdapter _journeyScrollAdapter; // 0x20
	[SerializeField]
	private JourneyScrollViewAdapter _journeyScrollViewAdapter; // 0x28
	[SerializeField]
	private JourneyProgressBarController _journeyProgressBarController; // 0x30
	[SerializeField]
	private JourneyProgressIndicatorController _journeyProgressIndicatorController; // 0x38
	[SerializeField]
	private JourneyBackgroundItemLooper _journeyBackgroundItemLooper; // 0x40
	private JourneyViewModel _journeyViewModel; // 0x48

	// Methods

	[Button]
	// RVA: 0x3A7CA70 Offset: 0x3A7CA70 VA: 0x3A7CA70
	public void Initialize() { }

	// RVA: 0x3A7D12C Offset: 0x3A7D12C VA: 0x3A7D12C
	public void Dispose() { }

	// RVA: 0x3A7D3A0 Offset: 0x3A7D3A0 VA: 0x3A7D3A0
	private void OnPosterSelected(PosterViewModel selectedPosterViewModel) { }

	// RVA: 0x3A7D644 Offset: 0x3A7D644 VA: 0x3A7D644
	private void OnNewRewardsGenerated() { }

	// RVA: 0x3A7D678 Offset: 0x3A7D678 VA: 0x3A7D678
	private void OnJourneyPreProgressUpdate() { }

	// RVA: 0x3A7D6A0 Offset: 0x3A7D6A0 VA: 0x3A7D6A0
	private void OnJourneyProgressUpdated(bool isAnyRewardClaimed) { }

	// RVA: 0x3A7DBC4 Offset: 0x3A7DBC4 VA: 0x3A7DBC4
	public Tween PlayRewardClaimAnimations() { }

	// RVA: 0x3A7E37C Offset: 0x3A7E37C VA: 0x3A7E37C
	public Tween PlayPosterClaimAnimations() { }

	// RVA: 0x3A7D490 Offset: 0x3A7D490 VA: 0x3A7D490
	private void UpdateVisibleViews() { }

	// RVA: 0x3A7CF88 Offset: 0x3A7CF88 VA: 0x3A7CF88
	private void PrepareJourneyProgressBar(float yOffset = 0) { }

	// RVA: 0x3A7EA5C Offset: 0x3A7EA5C VA: 0x3A7EA5C
	public void PrepareJourneyProgressBarForPosterClaim() { }

	// RVA: 0x3A7DA8C Offset: 0x3A7DA8C VA: 0x3A7DA8C
	private void UpdateIndicatorView() { }

	// RVA: 0x3A7D71C Offset: 0x3A7D71C VA: 0x3A7D71C
	private Vector3 CalculateProgressBarPosition(JourneyController.ClaimInfo claimInfo, bool forceStartPos = False, float yOffset = 0) { }

	// RVA: 0x3A7CDD0 Offset: 0x3A7CDD0 VA: 0x3A7CDD0
	private JourneyController.ClaimInfo GetClaimInfo() { }

	// RVA: 0x3A7EBE8 Offset: 0x3A7EBE8 VA: 0x3A7EBE8
	public void Show() { }

	// RVA: 0x3A7EBEC Offset: 0x3A7EBEC VA: 0x3A7EBEC
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Journey.Scripts.UI