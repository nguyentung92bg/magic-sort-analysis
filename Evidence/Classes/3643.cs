public class MergeMiniGameTutorialController : MonoBehaviour // TypeDefIndex: 3643
{
	// Fields
	[SerializeField]
	private TutorialAnimationConfig _tutorialAnimationConfig; // 0x18
	[SerializeField]
	private SpriteRenderer _backgroundRenderer; // 0x20
	[SerializeField]
	private MergeMiniGameTutorialBase[] _tutorials; // 0x28
	private bool _isPlaying; // 0x30

	// Methods

	[AsyncStateMachine(typeof(MergeMiniGameTutorialController.<ShowEventStartTutorial>d__4))]
	[Button]
	// RVA: 0x3FAF658 Offset: 0x3FAF658 VA: 0x3FAF658
	public Task ShowEventStartTutorial() { }

	[AsyncStateMachine(typeof(MergeMiniGameTutorialController.<ShowGeneratorItemTutorial>d__5))]
	[Button]
	// RVA: 0x3FB6890 Offset: 0x3FB6890 VA: 0x3FB6890
	public Task ShowGeneratorItemTutorial() { }

	[AsyncStateMachine(typeof(MergeMiniGameTutorialController.<ShowRewardedItemTutorial>d__6))]
	[Button]
	// RVA: 0x3FB6980 Offset: 0x3FB6980 VA: 0x3FB6980
	public Task ShowRewardedItemTutorial(MergeBoardCell cell) { }

	[AsyncStateMachine(typeof(MergeMiniGameTutorialController.<ShowEventInfoTutorial>d__7))]
	// RVA: 0x3FAF56C Offset: 0x3FAF56C VA: 0x3FAF56C
	public Task ShowEventInfoTutorial() { }

	[Button]
	[AsyncStateMachine(typeof(MergeMiniGameTutorialController.<ShowBubbleItemTutorial>d__8))]
	// RVA: 0x3FB6A80 Offset: 0x3FB6A80 VA: 0x3FB6A80
	public Task ShowBubbleItemTutorial(MergeBoardCell cell1, MergeBoardCell cell2) { }

	// RVA: 0x3FB6BA0 Offset: 0x3FB6BA0 VA: 0x3FB6BA0
	private MergeMiniGameTutorialBase GetTutorial(MergeTutorialType tutorialType) { }

	// RVA: 0x3FB6BF0 Offset: 0x3FB6BF0 VA: 0x3FB6BF0
	private Tween FadeInBackground() { }

	// RVA: 0x3FB6C94 Offset: 0x3FB6C94 VA: 0x3FB6C94
	private Tween FadeOutBackground() { }

	// RVA: 0x3FB6D28 Offset: 0x3FB6D28 VA: 0x3FB6D28
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x3FB6D30 Offset: 0x3FB6D30 VA: 0x3FB6D30
	private void <ShowEventStartTutorial>b__4_0() { }

	[CompilerGenerated]
	// RVA: 0x3FB6D60 Offset: 0x3FB6D60 VA: 0x3FB6D60
	private void <ShowGeneratorItemTutorial>b__5_0() { }

	[CompilerGenerated]
	// RVA: 0x3FB6D88 Offset: 0x3FB6D88 VA: 0x3FB6D88
	private void <ShowRewardedItemTutorial>b__6_0() { }

	[CompilerGenerated]
	// RVA: 0x3FB6DB0 Offset: 0x3FB6DB0 VA: 0x3FB6DB0
	private void <ShowBubbleItemTutorial>b__8_0() { }
}

// Namespace: Modules.Contexts.Home.MergeMiniGame.Scripts.UI.Tutorial
[CreateAssetMenu(fileName = "MergeMiniGameTutorialAnimationConfig", menuName = "Configs/MergeMiniGameTutorialAnimationConfig")]