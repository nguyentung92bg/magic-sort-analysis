public class SnitchProgressView : MonoBehaviour // TypeDefIndex: 2629
{
	// Fields
	[SerializeField]
	private Transform _startTransform; // 0x18
	[SerializeField]
	private Transform _endTransform; // 0x20
	[SerializeField]
	private SpriteRenderer _greenBar; // 0x28
	[SerializeField]
	private Button _continueButton; // 0x30
	[SerializeField]
	private TextMeshPro _infoText; // 0x38
	[SerializeField]
	private GameObject _separatorPrefab; // 0x40
	private SnitchService _snitchService; // 0x48
	private float _fullDistance; // 0x50
	private List<GameObject> _separators; // 0x58
	private const string info_localization_term = "SnitchJoinProgressText";
	private const string info_completed_localization_term = "SnitchJoinProgressCompletedText";

	// Methods

	// RVA: 0x246F6D0 Offset: 0x246F6D0 VA: 0x246F6D0
	public void Initialize() { }

	// RVA: 0x2470BDC Offset: 0x2470BDC VA: 0x2470BDC
	private void UpdateProgress() { }

	// RVA: 0x2471048 Offset: 0x2471048 VA: 0x2471048
	private void UpdateGreenBar(float progressRatio) { }

	// RVA: 0x247109C Offset: 0x247109C VA: 0x247109C
	private void UpdateSeparators(int maxProgress) { }

	// RVA: 0x2470D0C Offset: 0x2470D0C VA: 0x2470D0C
	private void ClearExistingSeparators() { }

	// RVA: 0x2471374 Offset: 0x2471374 VA: 0x2471374
	private void OnContinueButtonClicked() { }

	// RVA: 0x2470F34 Offset: 0x2470F34 VA: 0x2470F34
	private void SetInProgressText() { }

	// RVA: 0x2470EA4 Offset: 0x2470EA4 VA: 0x2470EA4
	private void SetCompletedText() { }

	// RVA: 0x246FA88 Offset: 0x246FA88 VA: 0x246FA88
	public void Dispose() { }

	// RVA: 0x24713E8 Offset: 0x24713E8 VA: 0x24713E8
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]