public class MergeItemSprite // TypeDefIndex: 3599
{
	// Fields
	[SerializeField]
	private int level; // 0x10
	[SerializeField]
	private SpriteRenderer normalRenderer; // 0x18
	[SerializeField]
	private SpriteRenderer lockedRenderer; // 0x20
	[SerializeField]
	private SpriteRenderer largeRenderer; // 0x28

	// Properties
	public int Level { get; }
	public Sprite NormalSprite { get; }
	public Sprite LockedSprite { get; }
	public Sprite LargeSprite { get; }

	// Methods

	// RVA: 0x3FAA944 Offset: 0x3FAA944 VA: 0x3FAA944
	public int get_Level() { }

	// RVA: 0x3FAA7AC Offset: 0x3FAA7AC VA: 0x3FAA7AC
	public Sprite get_NormalSprite() { }

	// RVA: 0x3FAA834 Offset: 0x3FAA834 VA: 0x3FAA834
	public Sprite get_LockedSprite() { }

	// RVA: 0x3FAA724 Offset: 0x3FAA724 VA: 0x3FAA724
	public Sprite get_LargeSprite() { }

	// RVA: 0x3FAA94C Offset: 0x3FAA94C VA: 0x3FAA94C
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.MergeMiniGame.Scripts.UI
[CreateAssetMenu(fileName = "MergeMiniGameAnimationConfig", menuName = "Configs/MergeMiniGameAnimationConfig")]