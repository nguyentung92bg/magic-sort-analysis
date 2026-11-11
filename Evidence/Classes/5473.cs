public class LocalizeTarget_UnityStandard_Prefab : LocalizeTarget<GameObject> // TypeDefIndex: 5473
{
	// Methods

	// RVA: 0x1394650 Offset: 0x1394650 VA: 0x1394650
	private static void .cctor() { }

	[RuntimeInitializeOnLoadMethod(1)]
	// RVA: 0x1394654 Offset: 0x1394654 VA: 0x1394654
	private static void AutoRegister() { }

	// RVA: 0x1394704 Offset: 0x1394704 VA: 0x1394704 Slot: 4
	public override bool IsValid(Localize cmp) { }

	// RVA: 0x139470C Offset: 0x139470C VA: 0x139470C Slot: 10
	public override eTermType GetPrimaryTermType(Localize cmp) { }

	// RVA: 0x1394714 Offset: 0x1394714 VA: 0x1394714 Slot: 11
	public override eTermType GetSecondaryTermType(Localize cmp) { }

	// RVA: 0x139471C Offset: 0x139471C VA: 0x139471C Slot: 7
	public override bool CanUseSecondaryTerm() { }

	// RVA: 0x1394724 Offset: 0x1394724 VA: 0x1394724 Slot: 8
	public override bool AllowMainTermToBeRTL() { }

	// RVA: 0x139472C Offset: 0x139472C VA: 0x139472C Slot: 9
	public override bool AllowSecondTermToBeRTL() { }

	// RVA: 0x1394734 Offset: 0x1394734 VA: 0x1394734 Slot: 5
	public override void GetFinalTerms(Localize cmp, string Main, string Secondary, out string primaryTerm, out string secondaryTerm) { }

	// RVA: 0x1394780 Offset: 0x1394780 VA: 0x1394780 Slot: 6
	public override void DoLocalize(Localize cmp, string mainTranslation, string secondaryTranslation) { }

	// RVA: 0x1394984 Offset: 0x1394984 VA: 0x1394984
	private Transform InstantiateNewPrefab(Localize cmp, string mainTranslation) { }

	// RVA: 0x1394B38 Offset: 0x1394B38 VA: 0x1394B38
	public void .ctor() { }
}

// Namespace: I2.Loc