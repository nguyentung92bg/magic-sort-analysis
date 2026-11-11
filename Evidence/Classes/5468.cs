public class LocalizeTarget_UnityStandard_AudioSource : LocalizeTarget<AudioSource> // TypeDefIndex: 5468
{
	// Methods

	// RVA: 0x1393A18 Offset: 0x1393A18 VA: 0x1393A18
	private static void .cctor() { }

	[RuntimeInitializeOnLoadMethod(1)]
	// RVA: 0x1393A1C Offset: 0x1393A1C VA: 0x1393A1C
	private static void AutoRegister() { }

	// RVA: 0x1393AE4 Offset: 0x1393AE4 VA: 0x1393AE4 Slot: 10
	public override eTermType GetPrimaryTermType(Localize cmp) { }

	// RVA: 0x1393AEC Offset: 0x1393AEC VA: 0x1393AEC Slot: 11
	public override eTermType GetSecondaryTermType(Localize cmp) { }

	// RVA: 0x1393AF4 Offset: 0x1393AF4 VA: 0x1393AF4 Slot: 7
	public override bool CanUseSecondaryTerm() { }

	// RVA: 0x1393AFC Offset: 0x1393AFC VA: 0x1393AFC Slot: 8
	public override bool AllowMainTermToBeRTL() { }

	// RVA: 0x1393B04 Offset: 0x1393B04 VA: 0x1393B04 Slot: 9
	public override bool AllowSecondTermToBeRTL() { }

	// RVA: 0x1393B0C Offset: 0x1393B0C VA: 0x1393B0C Slot: 5
	public override void GetFinalTerms(Localize cmp, string Main, string Secondary, out string primaryTerm, out string secondaryTerm) { }

	// RVA: 0x1393BE8 Offset: 0x1393BE8 VA: 0x1393BE8 Slot: 6
	public override void DoLocalize(Localize cmp, string mainTranslation, string secondaryTranslation) { }

	// RVA: 0x1393D58 Offset: 0x1393D58 VA: 0x1393D58
	public void .ctor() { }
}

// Namespace: I2.Loc