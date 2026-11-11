public abstract class WaterRiseAnimation : MonoBehaviour, IDisposable // TypeDefIndex: 1477
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 5
	public abstract Tween PlayRise(int previousHeight, int newTargetHeight, int distanceToBottomOfTheBottle, float yPosition, bool isForGenerator, int variant, Action onComplete);

	// RVA: -1 Offset: -1 Slot: 6
	public abstract void Dispose();

	// RVA: 0x248CE20 Offset: 0x248CE20 VA: 0x248CE20
	protected void .ctor() { }
}

// Namespace: Modules.Contexts.GamePlay.BoardItems.Scripts.Water.Animation