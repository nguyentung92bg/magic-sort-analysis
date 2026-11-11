public class WaterRegularRiseAnimation : WaterRiseAnimation // TypeDefIndex: 1476
{
	// Fields
	[SerializeField]
	private WaterRegularRiseConfig _riseConfigVariant0; // 0x18
	[SerializeField]
	private WaterRegularRiseConfig _riseConfigVariant1; // 0x20
	private Tween _scaleTween; // 0x28
	private Tween _riseAnimationTween; // 0x30

	// Methods

	// RVA: 0x248CE4C Offset: 0x248CE4C VA: 0x248CE4C
	private WaterRegularRiseConfig GetVariant(int variant) { }

	// RVA: 0x248CE64 Offset: 0x248CE64 VA: 0x248CE64 Slot: 5
	public override Tween PlayRise(int previousHeight, int targetHeight, int distanceToBottomOfTheBottle, float yPosition, bool isForGenerator, int variant, Action onComplete) { }

	// RVA: 0x248D0B8 Offset: 0x248D0B8 VA: 0x248D0B8
	private DurationsByHeight GetDurationsByHeights(int height, WaterRegularRiseConfig config) { }

	// RVA: 0x248D170 Offset: 0x248D170 VA: 0x248D170 Slot: 6
	public override void Dispose() { }

	// RVA: 0x248D210 Offset: 0x248D210 VA: 0x248D210
	public void .ctor() { }
}

// Namespace: Modules.Contexts.GamePlay.BoardItems.Scripts.Water.Animation