public class MergeItemSpriteConfig : MonoBehaviour // TypeDefIndex: 3597
{
	// Fields
	[SerializeField]
	private List<MergeItemSpriteSet> sets; // 0x18
	[SerializeField]
	private SpriteRenderer energyCurrencyRenderer; // 0x20
	[SerializeField]
	private SpriteRenderer coinCurrencyRenderer; // 0x28

	// Properties
	public Sprite energyCurrencySprite { get; }
	public Sprite coinCurrencySprite { get; }

	// Methods

	// RVA: 0x3FAA188 Offset: 0x3FAA188 VA: 0x3FAA188
	public Sprite get_energyCurrencySprite() { }

	// RVA: 0x3FAA210 Offset: 0x3FAA210 VA: 0x3FAA210
	public Sprite get_coinCurrencySprite() { }

	// RVA: 0x3FA7E80 Offset: 0x3FA7E80 VA: 0x3FA7E80
	public Sprite GetSprite(int setId, int level, bool isLocked, bool isLarge = False) { }

	// RVA: 0x3FAA694 Offset: 0x3FAA694 VA: 0x3FAA694
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.MergeMiniGame.Scripts.UI
[Serializable]