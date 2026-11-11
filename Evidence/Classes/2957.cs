public class ProfileSpriteSelectionFrame : MonoBehaviour // TypeDefIndex: 2957
{
	// Fields
	[SerializeField]
	private Button _button; // 0x18
	[SerializeField]
	public SpriteRenderer _spriteRenderer; // 0x20
	[SerializeField]
	private List<GameObject> activeObjects; // 0x28
	[SerializeField]
	private List<GameObject> deactiveObjects; // 0x30
	[CompilerGenerated]
	private string <Id>k__BackingField; // 0x38
	public Action<string> OnFrameSelected; // 0x40

	// Properties
	public string Id { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x2ADC634 Offset: 0x2ADC634 VA: 0x2ADC634
	public string get_Id() { }

	[CompilerGenerated]
	// RVA: 0x2ADC63C Offset: 0x2ADC63C VA: 0x2ADC63C
	private void set_Id(string value) { }

	// RVA: 0x2ADC644 Offset: 0x2ADC644 VA: 0x2ADC644
	public void Initialize(ProfileSprite profileSprite) { }

	// RVA: 0x2ADC8AC Offset: 0x2ADC8AC VA: 0x2ADC8AC
	private void OnFrameClicked() { }

	// RVA: 0x2ADC8CC Offset: 0x2ADC8CC VA: 0x2ADC8CC
	private void Awake() { }

	// RVA: 0x2ADC958 Offset: 0x2ADC958 VA: 0x2ADC958
	private void OnDestroy() { }

	// RVA: 0x2ADC9E4 Offset: 0x2ADC9E4 VA: 0x2ADC9E4
	public void ActivateGreenFrame() { }

	// RVA: 0x2ADC690 Offset: 0x2ADC690 VA: 0x2ADC690
	public void DeactivateGreenFrame() { }

	// RVA: 0x2ADCC00 Offset: 0x2ADCC00 VA: 0x2ADCC00
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.UI.Profile.Scripts