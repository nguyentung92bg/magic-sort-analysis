public class MagicBottleProgressView : MonoBehaviour // TypeDefIndex: 4059
{
	// Fields
	[SerializeField]
	private Transform _startTransform; // 0x18
	[SerializeField]
	private Transform _endTransform; // 0x20
	[SerializeField]
	private SpriteRenderer _greenBar; // 0x28
	[SerializeField]
	private GameObject _greenSeparatorPrefab; // 0x30
	[SerializeField]
	private GameObject _redSeparatorPrefab; // 0x38
	[SerializeField]
	private Button _continueButton; // 0x40
	[SerializeField]
	private TextMeshPro _infoText; // 0x48
	private float _fullDistance; // 0x50
	private List<GameObject> _separators; // 0x58

	// Methods

	// RVA: 0x3760B64 Offset: 0x3760B64 VA: 0x3760B64
	public void Initialize() { }

	[Button]
	// RVA: 0x3760BF0 Offset: 0x3760BF0 VA: 0x3760BF0
	public void SetProgress(int currentProgress, int maxProgress) { }

	// RVA: 0x3761848 Offset: 0x3761848 VA: 0x3761848
	private void UpdateGreenBar(float progressRatio) { }

	// RVA: 0x3761888 Offset: 0x3761888 VA: 0x3761888
	private void UpdateSeparators(int currentProgress, int maxProgress) { }

	// RVA: 0x37614F0 Offset: 0x37614F0 VA: 0x37614F0
	private void ClearExistingSeparators() { }

	// RVA: 0x3761B04 Offset: 0x3761B04 VA: 0x3761B04
	private void OnContinueButtonClicked() { }

	// RVA: 0x3761718 Offset: 0x3761718 VA: 0x3761718
	private void SetInProgressText() { }

	// RVA: 0x3761688 Offset: 0x3761688 VA: 0x3761688
	private void SetCompletedText() { }

	// RVA: 0x3760ED8 Offset: 0x3760ED8 VA: 0x3760ED8
	public void Dispose() { }

	// RVA: 0x3761B78 Offset: 0x3761B78 VA: 0x3761B78
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]