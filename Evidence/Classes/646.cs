public class Button : UITouchableElement, ISelectable // TypeDefIndex: 646
{
	// Fields
	[SerializeField]
	protected TouchAnimationConfig _touchAnimationConfig; // 0x28
	public ButtonSfxType buttonSfxType; // 0x30
	[CompilerGenerated]
	private Action OnSelectSuccessEvent; // 0x38
	protected bool _isTouchSuccess; // 0x40

	// Methods

	[CompilerGenerated]
	// RVA: 0x4005CD8 Offset: 0x4005CD8 VA: 0x4005CD8
	public void add_OnSelectSuccessEvent(Action value) { }

	[CompilerGenerated]
	// RVA: 0x4006260 Offset: 0x4006260 VA: 0x4006260
	public void remove_OnSelectSuccessEvent(Action value) { }

	// RVA: 0x4014124 Offset: 0x4014124 VA: 0x4014124
	protected SoundType GetSfxTypeForButton() { }

	// RVA: 0x401414C Offset: 0x401414C VA: 0x401414C Slot: 11
	public override void OnTouchDown(Vector2 position) { }

	// RVA: 0x4014210 Offset: 0x4014210 VA: 0x4014210 Slot: 12
	public override void OnTouchUp(Vector2 position) { }

	// RVA: 0x4014368 Offset: 0x4014368 VA: 0x4014368 Slot: 13
	public override void OnTouchCancel(Vector2 position) { }

	// RVA: 0x4014300 Offset: 0x4014300 VA: 0x4014300
	protected void EndTouchAnimation() { }

	// RVA: 0x4014380 Offset: 0x4014380 VA: 0x4014380 Slot: 15
	public virtual void OnSelectSuccess() { }

	// RVA: 0x401439C Offset: 0x401439C VA: 0x401439C
	public void ClearAllEvents() { }

	// RVA: 0x40143A8 Offset: 0x40143A8 VA: 0x40143A8
	public void .ctor() { }
}

// Namespace: Modules.Infrastructure.UI.Common.Scripts.ButtonNS