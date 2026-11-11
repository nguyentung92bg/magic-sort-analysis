public class RadioToggle : UITouchableElement, ISelectable // TypeDefIndex: 590
{
	// Fields
	[SerializeField]
	private RadioToggleAnimation _radioToggleAnimation; // 0x28
	private bool _isToggleOn; // 0x30
	private bool _isTouchSuccess; // 0x31
	private bool _isAnimCompleted; // 0x32
	private Tween _animTween; // 0x38
	public Action<bool> OnToggleChanged; // 0x40

	// Methods

	// RVA: 0x40049FC Offset: 0x40049FC VA: 0x40049FC
	private void PlayOnAnimation() { }

	// RVA: 0x4004D04 Offset: 0x4004D04 VA: 0x4004D04
	internal void SetToggle(bool toggle) { }

	// RVA: 0x4004E0C Offset: 0x4004E0C VA: 0x4004E0C
	private void PlayOffAnimation() { }

	// RVA: 0x4005128 Offset: 0x4005128 VA: 0x4005128
	private void UpdateView() { }

	// RVA: 0x400516C Offset: 0x400516C VA: 0x400516C Slot: 13
	public override void OnTouchCancel(Vector2 position) { }

	// RVA: 0x4005174 Offset: 0x4005174 VA: 0x4005174 Slot: 11
	public override void OnTouchDown(Vector2 position) { }

	// RVA: 0x4005180 Offset: 0x4005180 VA: 0x4005180 Slot: 12
	public override void OnTouchUp(Vector2 position) { }

	// RVA: 0x4005190 Offset: 0x4005190 VA: 0x4005190 Slot: 14
	public void OnSelectSuccess() { }

	// RVA: 0x40051D4 Offset: 0x40051D4 VA: 0x40051D4
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x40051E8 Offset: 0x40051E8 VA: 0x40051E8
	private void <PlayOnAnimation>b__6_0() { }

	[CompilerGenerated]
	// RVA: 0x40051F4 Offset: 0x40051F4 VA: 0x40051F4
	private void <PlayOffAnimation>b__8_0() { }
}

// Namespace: Modules.Infrastructure.UI.Common.Scripts.ToggleNS