public class Tab : UITouchableElement, ISelectable // TypeDefIndex: 3022
{
	// Fields
	[SerializeField]
	protected TouchAnimationConfig _touchAnimationConfig; // 0x28
	public ButtonSfxType buttonSfxType; // 0x30
	[CompilerGenerated]
	private Action<Tab> OnSelectSuccessEvent; // 0x38
	protected bool _isTouchSuccess; // 0x40
	[SerializeField]
	private GameObject _selectedGameObject; // 0x48
	[SerializeField]
	private string _tabName; // 0x50

	// Properties
	public string TabName { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x2AE8530 Offset: 0x2AE8530 VA: 0x2AE8530
	public void add_OnSelectSuccessEvent(Action<Tab> value) { }

	[CompilerGenerated]
	// RVA: 0x2AE8F84 Offset: 0x2AE8F84 VA: 0x2AE8F84
	public void remove_OnSelectSuccessEvent(Action<Tab> value) { }

	// RVA: 0x2AEFDB0 Offset: 0x2AEFDB0 VA: 0x2AEFDB0
	public string get_TabName() { }

	// RVA: 0x2AEFDB8 Offset: 0x2AEFDB8 VA: 0x2AEFDB8
	private SoundType GetSfxTypeForButton() { }

	// RVA: 0x2AEFDE0 Offset: 0x2AEFDE0 VA: 0x2AEFDE0 Slot: 11
	public override void OnTouchDown(Vector2 position) { }

	// RVA: 0x2AEFEA4 Offset: 0x2AEFEA4 VA: 0x2AEFEA4 Slot: 12
	public override void OnTouchUp(Vector2 position) { }

	// RVA: 0x2AEFFF0 Offset: 0x2AEFFF0 VA: 0x2AEFFF0 Slot: 13
	public override void OnTouchCancel(Vector2 position) { }

	// RVA: 0x2AEFF88 Offset: 0x2AEFF88 VA: 0x2AEFF88
	private void EndTouchAnimation() { }

	// RVA: 0x2AF0008 Offset: 0x2AF0008 VA: 0x2AF0008 Slot: 15
	public virtual void OnSelectSuccess() { }

	// RVA: 0x2AF0028 Offset: 0x2AF0028 VA: 0x2AF0028
	public void ClearAllEvents() { }

	// RVA: 0x2AE9F48 Offset: 0x2AE9F48 VA: 0x2AE9F48
	public void Select() { }

	// RVA: 0x2AE989C Offset: 0x2AE989C VA: 0x2AE989C
	public void Deselect() { }

	// RVA: 0x2AF0034 Offset: 0x2AF0034 VA: 0x2AF0034
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.PermanentLeaderboard.Scripts.UI