public class PlayOnManager // TypeDefIndex: 1237
{
	// Fields
	private readonly LevelStats _levelStats; // 0x10

	// Methods

	// RVA: 0x2147CBC Offset: 0x2147CBC VA: 0x2147CBC
	public void .ctor(LevelStats levelStats) { }

	// RVA: 0x2147CEC Offset: 0x2147CEC VA: 0x2147CEC
	public int GetDailyPlayOnPrice() { }

	// RVA: 0x2147DD0 Offset: 0x2147DD0 VA: 0x2147DD0
	public int GetRegularPlayOnPrice() { }

	// RVA: 0x2147F3C Offset: 0x2147F3C VA: 0x2147F3C
	public bool TryUseRegular() { }

	// RVA: 0x21480E4 Offset: 0x21480E4 VA: 0x21480E4
	public bool TryUseDaily() { }

	[AsyncStateMachine(typeof(PlayOnManager.<TryUseWithRewarded>d__6))]
	// RVA: 0x214828C Offset: 0x214828C VA: 0x214828C
	public Task<bool> TryUseWithRewarded() { }

	// RVA: 0x2148384 Offset: 0x2148384 VA: 0x2148384
	public bool IsMultipleBottlePlayOn() { }

	// RVA: 0x2148504 Offset: 0x2148504 VA: 0x2148504
	private PlayOnType GetCurrentPlayOnType() { }

	// RVA: 0x21485E8 Offset: 0x21485E8 VA: 0x21485E8
	public List<PlayOnBehaviourType> GetPlayOnBehaviour(bool oneHeightBottleSolvesStuck, bool twoHeightBottleSolvesStuck) { }
}

// Namespace: Modules.Contexts.GamePlay.PlayOn.Scripts