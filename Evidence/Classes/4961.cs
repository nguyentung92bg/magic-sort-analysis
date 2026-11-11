public class VibrationConfigs : ScriptableObject // TypeDefIndex: 4961
{
	// Fields
	public Vibration ButtonClick; // 0x18
	public Vibration BottleSelect; // 0x20
	public Vibration BottleFillStart; // 0x28
	public Vibration BottleFillEnd; // 0x30
	public Vibration BottleDeselect; // 0x38
	public Vibration LevelWin; // 0x40
	public Vibration LevelLose; // 0x48
	public Vibration LevelStart; // 0x50
	public Vibration RewardSitToPosition; // 0x58
	public Vibration CauldronSmoke; // 0x60
	public Vibration CauldronBottleWaterFallComplete; // 0x68
	public Vibration CurtainReveal; // 0x70
	public Vibration BlockerBreak; // 0x78
	public Vibration BlockerGenerator; // 0x80
	public Vibration BlockerGeneratorExplosion; // 0x88
	public Vibration DrillStep; // 0x90

	// Methods

	// RVA: 0x3E26F4C Offset: 0x3E26F4C VA: 0x3E26F4C
	public Vibration GetVibration(VibrationType vibrationType) { }

	// RVA: 0x3E26FFC Offset: 0x3E26FFC VA: 0x3E26FFC
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Application.Vibration.Scripts