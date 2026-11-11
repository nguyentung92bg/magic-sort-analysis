public class SuperChargerProgressView : MonoBehaviour // TypeDefIndex: 2449
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
	private SuperChargerService _superChargerService; // 0x48
	private float _fullDistance; // 0x50
	private List<GameObject> _separators; // 0x58
	private const string info_localization_term = "SuperChargerJoinProgressText";
	private const string info_completed_localization_term = "SuperChargerIsActiveText";

	// Methods

	// RVA: 0x297358C Offset: 0x297358C VA: 0x297358C
	public void Initialize() { }

	// RVA: 0x2974080 Offset: 0x2974080 VA: 0x2974080
	private void UpdateProgress() { }

	// RVA: 0x29744F4 Offset: 0x29744F4 VA: 0x29744F4
	private void UpdateGreenBar(float progressRatio) { }

	// RVA: 0x2974548 Offset: 0x2974548 VA: 0x2974548
	private void UpdateSeparators(int maxProgress) { }

	// RVA: 0x29741B8 Offset: 0x29741B8 VA: 0x29741B8
	private void ClearExistingSeparators() { }

	// RVA: 0x2974820 Offset: 0x2974820 VA: 0x2974820
	private void OnContinueButtonClicked() { }

	// RVA: 0x29743E0 Offset: 0x29743E0 VA: 0x29743E0
	private void SetInProgressText() { }

	// RVA: 0x2974350 Offset: 0x2974350 VA: 0x2974350
	private void SetCompletedText() { }

	// RVA: 0x29739A4 Offset: 0x29739A4 VA: 0x29739A4
	public void Dispose() { }

	// RVA: 0x2974894 Offset: 0x2974894 VA: 0x2974894
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.SuperCharger.Scripts.UI