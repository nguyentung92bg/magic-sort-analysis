public class WheelOfFortunePopUpConfig : ScriptableObject // TypeDefIndex: 1897
{
	// Fields
	[SerializeField]
	private List<WheelOfFortuneConfigByType> _wheelOfFortuneConfigsByType; // 0x18
	[SerializeField]
	private Material _activeSpinButtonTextMaterial; // 0x20
	[SerializeField]
	private Material _inactiveSpinButtonTextMaterial; // 0x28
	[SerializeField]
	private Sprite _inactiveSpinButtonSprite; // 0x30
	[SerializeField]
	private Sprite _activeSpinButtonSprite; // 0x38
	[SerializeField]
	private Sprite _greenBackground; // 0x40
	[SerializeField]
	private Sprite _greenRightBackground; // 0x48
	[SerializeField]
	private Sprite _beigeBackground; // 0x50
	[SerializeField]
	private Sprite _beigeRightBackground; // 0x58

	// Properties
	public Material ActiveSpinButtonTextMaterial { get; }
	public Material InactiveSpinButtonTextMaterial { get; }
	public Sprite InactiveSpinButtonSprite { get; }
	public Sprite ActiveSpinButtonSprite { get; }
	public Sprite TaskGreenBackground { get; }
	public Sprite TaskGreenRightBackground { get; }
	public Sprite TaskBackground { get; }
	public Sprite TaskRightBackground { get; }

	// Methods

	// RVA: 0x319F65C Offset: 0x319F65C VA: 0x319F65C
	public Material get_ActiveSpinButtonTextMaterial() { }

	// RVA: 0x319F664 Offset: 0x319F664 VA: 0x319F664
	public Material get_InactiveSpinButtonTextMaterial() { }

	// RVA: 0x319F66C Offset: 0x319F66C VA: 0x319F66C
	public Sprite get_InactiveSpinButtonSprite() { }

	// RVA: 0x319F674 Offset: 0x319F674 VA: 0x319F674
	public Sprite get_ActiveSpinButtonSprite() { }

	// RVA: 0x319F67C Offset: 0x319F67C VA: 0x319F67C
	public Sprite get_TaskGreenBackground() { }

	// RVA: 0x319F684 Offset: 0x319F684 VA: 0x319F684
	public Sprite get_TaskGreenRightBackground() { }

	// RVA: 0x319F68C Offset: 0x319F68C VA: 0x319F68C
	public Sprite get_TaskBackground() { }

	// RVA: 0x319F694 Offset: 0x319F694 VA: 0x319F694
	public Sprite get_TaskRightBackground() { }

	// RVA: 0x319F69C Offset: 0x319F69C VA: 0x319F69C
	public WheelOfFortuneConfigByType GetTaskConfigByType(WheelOfFortuneTaskType wheelOfFortuneTaskType) { }

	// RVA: 0x319F828 Offset: 0x319F828 VA: 0x319F828
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.WheelOfFortune.Scripts.UI