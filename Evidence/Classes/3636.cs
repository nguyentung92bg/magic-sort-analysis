public abstract class MergeMiniGameTutorialBase : MonoBehaviour // TypeDefIndex: 3636
{
	// Fields
	[SerializeField]
	private MergeTutorialType _tutorialType; // 0x18
	[SerializeField]
	private SpriteRenderer _fingerRenderer; // 0x20
	[SerializeField]
	protected MergeBoard MergeBoard; // 0x28
	[SerializeField]
	protected Transform FingerTransform; // 0x30
	[SerializeField]
	protected Animation FingerAnimation; // 0x38
	[SerializeField]
	protected TutorialAnimationConfig TutorialAnimationConfig; // 0x40

	// Methods

	// RVA: 0x3FB6884 Offset: 0x3FB6884 VA: 0x3FB6884
	public MergeTutorialType GetTutorialType() { }

	// RVA: -1 Offset: -1 Slot: 4
	public abstract Task<bool> TryStartTutorial();

	// RVA: 0x3FB3A6C Offset: 0x3FB3A6C VA: 0x3FB3A6C Slot: 5
	public virtual void Initialize() { }

	// RVA: 0x3FB688C Offset: 0x3FB688C VA: 0x3FB688C Slot: 6
	public virtual void Dispose() { }

	// RVA: 0x3FB3134 Offset: 0x3FB3134 VA: 0x3FB3134
	protected Tween PlayFingerFadeIn() { }

	// RVA: 0x3FB2558 Offset: 0x3FB2558 VA: 0x3FB2558
	protected Tween PlayFingerFadeOut() { }

	// RVA: 0x3FB27C0 Offset: 0x3FB27C0 VA: 0x3FB27C0
	protected void .ctor() { }
}

// Namespace: Modules.Contexts.Home.MergeMiniGame.Scripts.UI.Tutorial