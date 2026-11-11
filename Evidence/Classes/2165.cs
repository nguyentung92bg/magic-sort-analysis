public class HelpSupportRewardView : BasicView // TypeDefIndex: 2165
{
	// Fields
	[SerializeField]
	private float _scaleDuration; // 0x24
	[SerializeField]
	private Ease _scaleEase; // 0x28
	[SerializeField]
	private float _fadeInDuration; // 0x2C
	[SerializeField]
	private float _moveHeight; // 0x30
	[SerializeField]
	private float _moveDuration; // 0x34
	[SerializeField]
	private Ease _moveEase; // 0x38
	[SerializeField]
	private float _moveDelay; // 0x3C
	[SerializeField]
	private float _fadeDelay; // 0x40
	[SerializeField]
	private float _fadeoutDuration; // 0x44
	[SerializeField]
	private TMP_Text _amountText; // 0x48
	[SerializeField]
	private SpriteRenderer _rewardSprite; // 0x50
	[CompilerGenerated]
	private int <Id>k__BackingField; // 0x58

	// Properties
	public override int Id { get; set; }

	// Methods

	// RVA: 0x3453F44 Offset: 0x3453F44 VA: 0x3453F44
	public void PlayAnimation(Vector3 initialPosition, int rewardAmount) { }

	[CompilerGenerated]
	// RVA: 0x34542C4 Offset: 0x34542C4 VA: 0x34542C4 Slot: 5
	public override int get_Id() { }

	[CompilerGenerated]
	// RVA: 0x34542CC Offset: 0x34542CC VA: 0x34542CC Slot: 6
	public override void set_Id(int value) { }

	// RVA: 0x34542D4 Offset: 0x34542D4 VA: 0x34542D4 Slot: 7
	public override void Initialize() { }

	// RVA: 0x3454324 Offset: 0x3454324 VA: 0x3454324 Slot: 8
	public override void Recycle() { }

	// RVA: 0x34543C8 Offset: 0x34543C8 VA: 0x34543C8
	private void OnDisable() { }

	// RVA: 0x3454424 Offset: 0x3454424 VA: 0x3454424
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Teams.Scripts.UI
[CreateAssetMenu(fileName = "HelpSupportRewardViewFactory", menuName = "Factory/HelpSupportRewardViewFactory")]