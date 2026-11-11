public class MagicStreakTournamentBannerView : MonoBehaviour // TypeDefIndex: 3815
{
	// Fields
	[SerializeField]
	private MagicStreakTournamentBannerAnimationConfig _animationConfig; // 0x18
	[SerializeField]
	private Transform _bannerContainer; // 0x20
	[SerializeField]
	private Transform _bannerContainerOriginalPosition; // 0x28
	[SerializeField]
	private Transform _bannerContainerHidePosition; // 0x30
	[SerializeField]
	private MagicStreakTournamentProgressAnimationView _progressAnimationView; // 0x38
	[SerializeField]
	private MagicStreakTournamentBannerPlaceType _placeType; // 0x40
	private Sequence _sequence; // 0x48

	// Methods

	// RVA: 0x3E19ADC Offset: 0x3E19ADC VA: 0x3E19ADC
	private void Initialize() { }

	[Button]
	// RVA: 0x3E19BCC Offset: 0x3E19BCC VA: 0x3E19BCC
	public void Show() { }

	// RVA: 0x3E19EC8 Offset: 0x3E19EC8 VA: 0x3E19EC8
	public void Hide() { }

	// RVA: 0x3E19BF8 Offset: 0x3E19BF8 VA: 0x3E19BF8
	private void ShowWinAnimation() { }

	// RVA: 0x3E19D5C Offset: 0x3E19D5C VA: 0x3E19D5C
	private void ShowLoseAnimation() { }

	// RVA: 0x3E1A010 Offset: 0x3E1A010 VA: 0x3E1A010
	private Tween ShowContainer() { }

	// RVA: 0x3E1A95C Offset: 0x3E1A95C VA: 0x3E1A95C
	private void OnDestroy() { }

	// RVA: 0x3E1A994 Offset: 0x3E1A994 VA: 0x3E1A994
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]