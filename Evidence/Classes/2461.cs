public class SuperChargerTutorialView // TypeDefIndex: 2461
{
	// Fields
	private static readonly Vector3 FingerOffsetFromBottlePivot; // 0x0
	private readonly object _tweenId; // 0x10
	[CompilerGenerated]
	private readonly SpriteRenderer <BackgroundRenderer>k__BackingField; // 0x18
	[CompilerGenerated]
	private readonly Transform <DescriptionContainer>k__BackingField; // 0x20
	[CompilerGenerated]
	private readonly Transform <DescriptionPanel>k__BackingField; // 0x28
	[CompilerGenerated]
	private readonly SortingGroup <SortingLayer>k__BackingField; // 0x30
	[CompilerGenerated]
	private readonly Button <TutorialButton>k__BackingField; // 0x38
	[CompilerGenerated]
	private readonly TMP_Text <TutorialText>k__BackingField; // 0x40
	[CompilerGenerated]
	private readonly GameObject <TutorialFinger>k__BackingField; // 0x48

	// Properties
	public SpriteRenderer BackgroundRenderer { get; }
	public Transform DescriptionContainer { get; }
	public Transform DescriptionPanel { get; }
	public SortingGroup SortingLayer { get; }
	public Button TutorialButton { get; }
	public TMP_Text TutorialText { get; }
	public GameObject TutorialFinger { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x297807C Offset: 0x297807C VA: 0x297807C
	public SpriteRenderer get_BackgroundRenderer() { }

	[CompilerGenerated]
	// RVA: 0x2978084 Offset: 0x2978084 VA: 0x2978084
	public Transform get_DescriptionContainer() { }

	[CompilerGenerated]
	// RVA: 0x297808C Offset: 0x297808C VA: 0x297808C
	public Transform get_DescriptionPanel() { }

	[CompilerGenerated]
	// RVA: 0x2978094 Offset: 0x2978094 VA: 0x2978094
	public SortingGroup get_SortingLayer() { }

	[CompilerGenerated]
	// RVA: 0x297809C Offset: 0x297809C VA: 0x297809C
	public Button get_TutorialButton() { }

	[CompilerGenerated]
	// RVA: 0x29780A4 Offset: 0x29780A4 VA: 0x29780A4
	public TMP_Text get_TutorialText() { }

	[CompilerGenerated]
	// RVA: 0x29780AC Offset: 0x29780AC VA: 0x29780AC
	public GameObject get_TutorialFinger() { }

	// RVA: 0x2974CD8 Offset: 0x2974CD8 VA: 0x2974CD8
	public void .ctor(object tweenId, SpriteRenderer backgroundRenderer, Transform descriptionContainer, Transform descriptionPanel, SortingGroup sortingLayer, Button tutorialButton, TMP_Text tutorialText, GameObject tutorialFinger) { }

	// RVA: 0x2975C6C Offset: 0x2975C6C VA: 0x2975C6C
	public Sequence PlayIntroSequence(Transform panel) { }

	// RVA: 0x29780B4 Offset: 0x29780B4 VA: 0x29780B4
	public void ShowButton() { }

	// RVA: 0x2976600 Offset: 0x2976600 VA: 0x2976600
	public void DelayedShowButton(float delay) { }

	// RVA: 0x297653C Offset: 0x297653C VA: 0x297653C
	public void ShowFingerAtBottle(Vector3 bottlePivotPosition) { }

	// RVA: 0x29771C4 Offset: 0x29771C4 VA: 0x29771C4
	public void ShowFingerAt(Vector3 worldPosition) { }

	// RVA: 0x29780E0 Offset: 0x29780E0 VA: 0x29780E0
	private static void .cctor() { }
}

// Namespace: Modules.Contexts.Home.StrikeShow.Scripts
[Serializable]