public class Toggle : UITouchableElement, ISelectable // TypeDefIndex: 594
{
	// Fields
	[SerializeField]
	private Transform _toggleOnPosition; // 0x28
	[SerializeField]
	private Transform _toggleOffPosition; // 0x30
	[SerializeField]
	private Transform _toggleButton; // 0x38
	[CompilerGenerated]
	private Action<bool> OnToggleChanged; // 0x40
	private bool _isTouchSuccess; // 0x48
	private bool _isToggleOn; // 0x49

	// Methods

	[CompilerGenerated]
	// RVA: 0x4005630 Offset: 0x4005630 VA: 0x4005630
	public void add_OnToggleChanged(Action<bool> value) { }

	[CompilerGenerated]
	// RVA: 0x40056E0 Offset: 0x40056E0 VA: 0x40056E0
	public void remove_OnToggleChanged(Action<bool> value) { }

	// RVA: 0x4005790 Offset: 0x4005790 VA: 0x4005790 Slot: 11
	public override void OnTouchDown(Vector2 position) { }

	// RVA: 0x400579C Offset: 0x400579C VA: 0x400579C Slot: 12
	public override void OnTouchUp(Vector2 position) { }

	// RVA: 0x400586C Offset: 0x400586C VA: 0x400586C Slot: 13
	public override void OnTouchCancel(Vector2 position) { }

	// RVA: 0x40057C4 Offset: 0x40057C4 VA: 0x40057C4
	private void EndTouchAnimation() { }

	// RVA: 0x400582C Offset: 0x400582C VA: 0x400582C Slot: 14
	public void OnSelectSuccess() { }

	// RVA: 0x40058E4 Offset: 0x40058E4 VA: 0x40058E4
	public void SetToggle(bool isToggleOn) { }

	// RVA: 0x4005884 Offset: 0x4005884 VA: 0x4005884
	private void UpdateView() { }

	// RVA: 0x40058F0 Offset: 0x40058F0 VA: 0x40058F0
	public void ClearAllEvents() { }

	// RVA: 0x40058FC Offset: 0x40058FC VA: 0x40058FC
	public void .ctor() { }
}

// Namespace: Modules.Infrastructure.UI.Common.Scripts.Text
[RequireComponent(typeof(TextMeshPro))]