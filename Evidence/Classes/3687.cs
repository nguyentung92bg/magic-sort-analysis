public class MergeItemsSpriteLibrary : MonoBehaviour // TypeDefIndex: 3687
{
	// Fields
	[SerializeField]
	private List<MergeItemSet> _sets; // 0x18
	[TupleElementNames(new[] { "setId", "level" })]
	private Dictionary<ValueTuple<int, int>, SpriteRenderer> _lookup; // 0x20

	// Methods

	// RVA: 0x410D584 Offset: 0x410D584 VA: 0x410D584
	public Sprite GetSprite(int setId, int level) { }

	// RVA: 0x411351C Offset: 0x411351C VA: 0x411351C
	private Dictionary<ValueTuple<int, int>, SpriteRenderer> BuildLookup() { }

	// RVA: 0x4113840 Offset: 0x4113840 VA: 0x4113840
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.MergeMiniGame.Scripts.Board
[Serializable]