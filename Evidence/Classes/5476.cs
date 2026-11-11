public class LocalizeTarget_UnityStandard_VideoPlayer : LocalizeTarget<VideoPlayer> // TypeDefIndex: 5476
{
	// Methods

	// RVA: 0x13953B0 Offset: 0x13953B0 VA: 0x13953B0
	private static void .cctor() { }

	[RuntimeInitializeOnLoadMethod(1)]
	// RVA: 0x13953B4 Offset: 0x13953B4 VA: 0x13953B4
	private static void AutoRegister() { }

	// RVA: 0x139547C Offset: 0x139547C VA: 0x139547C Slot: 10
	public override eTermType GetPrimaryTermType(Localize cmp) { }

	// RVA: 0x1395484 Offset: 0x1395484 VA: 0x1395484 Slot: 11
	public override eTermType GetSecondaryTermType(Localize cmp) { }

	// RVA: 0x139548C Offset: 0x139548C VA: 0x139548C Slot: 7
	public override bool CanUseSecondaryTerm() { }

	// RVA: 0x1395494 Offset: 0x1395494 VA: 0x1395494 Slot: 8
	public override bool AllowMainTermToBeRTL() { }

	// RVA: 0x139549C Offset: 0x139549C VA: 0x139549C Slot: 9
	public override bool AllowSecondTermToBeRTL() { }

	// RVA: 0x13954A4 Offset: 0x13954A4 VA: 0x13954A4 Slot: 5
	public override void GetFinalTerms(Localize cmp, string Main, string Secondary, out string primaryTerm, out string secondaryTerm) { }

	// RVA: 0x1395584 Offset: 0x1395584 VA: 0x1395584 Slot: 6
	public override void DoLocalize(Localize cmp, string mainTranslation, string secondaryTranslation) { }

	// RVA: 0x1395680 Offset: 0x1395680 VA: 0x1395680
	public void .ctor() { }
}

// Namespace: I2.Loc