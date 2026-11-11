public class MultiplierEventCurrencyView : MonoBehaviour // TypeDefIndex: 2872
{
	// Fields
	[SerializeField]
	private PreGameAnimationConfig _config; // 0x18
	[SerializeField]
	private SpriteRenderer _currencySprite; // 0x20
	[SerializeField]
	private AnimationCurve _scaleCurve; // 0x28
	[SerializeField]
	private TMP_Text _amountText; // 0x30
	[SerializeField]
	private TMP_Text _amountTextMid; // 0x38
	[SerializeField]
	private TMP_Text _amountTextHigh; // 0x40
	private MultiplierEventCurrencyViewModel _viewmodel; // 0x48

	// Methods

	// RVA: 0x2979878 Offset: 0x2979878 VA: 0x2979878
	public void Initialize(MultiplierEventCurrencyViewModel viewmodel, LevelDifficultyType type, Vector3 position, bool playAnimation) { }

	// RVA: 0x2979A68 Offset: 0x2979A68 VA: 0x2979A68
	private void UpdateUi(LevelDifficultyType difficulty) { }

	// RVA: 0x2979854 Offset: 0x2979854 VA: 0x2979854
	public void Hide() { }

	// RVA: 0x2979CB8 Offset: 0x2979CB8 VA: 0x2979CB8
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.UI.Common.Scripts