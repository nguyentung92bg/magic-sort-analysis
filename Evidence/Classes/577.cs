public abstract class UIRoot : MonoBehaviour, IUIRoot // TypeDefIndex: 577
{
	// Fields
	[SerializeField]
	protected Camera _camera; // 0x18
	[SerializeField]
	protected WorldViewUI _referenceWorldViewUI; // 0x20
	protected WorldViewUI _innerWorldViewUI; // 0x28
	protected WorldViewUI _outerBackgroundWorldViewUI; // 0x30
	protected IScalable[] _scalables; // 0x38

	// Methods

	// RVA: -1 Offset: -1 Slot: 11
	public abstract void Initialize();

	// RVA: -1 Offset: -1 Slot: 12
	public abstract void Dispose();

	[Button]
	// RVA: -1 Offset: -1 Slot: 13
	public abstract void Awake();

	[Button]
	// RVA: 0x40033B4 Offset: 0x40033B4 VA: 0x40033B4
	protected void CacheUIElements() { }

	// RVA: -1 Offset: -1 Slot: 14
	public abstract void Show();

	// RVA: -1 Offset: -1 Slot: 15
	public abstract void Hide();

	// RVA: 0x4003410 Offset: 0x4003410 VA: 0x4003410 Slot: 8
	public void SetInnerAndOuterOrtho(float ortho) { }

	// RVA: 0x4003494 Offset: 0x4003494 VA: 0x4003494 Slot: 10
	public Vector2 GetInnerByReferenceScaleRatio() { }

	// RVA: 0x4003500 Offset: 0x4003500 VA: 0x4003500
	protected void ScaleUIElements() { }

	// RVA: 0x4003624 Offset: 0x4003624 VA: 0x4003624
	protected void ChangeOrthoForSmallScreens() { }

	// RVA: 0x4003658 Offset: 0x4003658 VA: 0x4003658
	private void SetOrthoAndScaleOuter(float newOrtho) { }

	// RVA: 0x4003614 Offset: 0x4003614 VA: 0x4003614 Slot: 9
	public Vector2 GetOuterInnerScaleRatio() { }

	// RVA: 0x40036C8 Offset: 0x40036C8 VA: 0x40036C8
	protected void .ctor() { }
}

// Namespace: Modules.Infrastructure.UI.Common.Scripts