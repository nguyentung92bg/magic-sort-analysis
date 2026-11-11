public class SimpleToggle : UITouchableElement, ISelectable // TypeDefIndex: 593
{
	// Fields
	[SerializeField]
	private Transform _toggleButton; // 0x28
	[CompilerGenerated]
	private Action<bool> OnToggleChanged; // 0x30
	private bool _isTouchSuccess; // 0x38
	private bool _isToggleOn; // 0x39
	[SerializeField]
	private GameObject _toggleOffGameObject; // 0x40

	// Methods

	[CompilerGenerated]
	// RVA: 0x4005388 Offset: 0x4005388 VA: 0x4005388
	public void add_OnToggleChanged(Action<bool> value) { }

	[CompilerGenerated]
	// RVA: 0x4005438 Offset: 0x4005438 VA: 0x4005438
	public void remove_OnToggleChanged(Action<bool> value) { }

	// RVA: 0x40054E8 Offset: 0x40054E8 VA: 0x40054E8 Slot: 11
	public override void OnTouchDown(Vector2 position) { }

	// RVA: 0x40054F4 Offset: 0x40054F4 VA: 0x40054F4 Slot: 12
	public override void OnTouchUp(Vector2 position) { }

	// RVA: 0x40055C4 Offset: 0x40055C4 VA: 0x40055C4 Slot: 13
	public override void OnTouchCancel(Vector2 position) { }

	// RVA: 0x400551C Offset: 0x400551C VA: 0x400551C
	private void EndTouchAnimation() { }

	// RVA: 0x4005584 Offset: 0x4005584 VA: 0x4005584 Slot: 14
	public void OnSelectSuccess() { }

	// RVA: 0x4005608 Offset: 0x4005608 VA: 0x4005608
	public void SetToggle(bool isToggleOn) { }

	// RVA: 0x40055DC Offset: 0x40055DC VA: 0x40055DC
	private void UpdateView() { }

	// RVA: 0x4005614 Offset: 0x4005614 VA: 0x4005614
	public void ClearAllEvents() { }

	// RVA: 0x4005620 Offset: 0x4005620 VA: 0x4005620
	public void .ctor() { }
}

// Namespace: Modules.Infrastructure.UI.Common.Scripts.ToggleNS