public class PurchaseResult // TypeDefIndex: 5168
{
	// Fields
	[CompilerGenerated]
	private bool <IsSuccess>k__BackingField; // 0x10
	[CompilerGenerated]
	private bool <IsVerified>k__BackingField; // 0x11
	[CompilerGenerated]
	private bool <FailureReasonIsPurchaseFailureDescription>k__BackingField; // 0x12
	[CompilerGenerated]
	private PurchaseFailureDescription <PurchaseFailureDescription>k__BackingField; // 0x18
	[CompilerGenerated]
	private bool <FailureReasonIsPurchaseFailureReason>k__BackingField; // 0x20
	[CompilerGenerated]
	private PurchaseFailureReason <PurchaseFailureReason>k__BackingField; // 0x24
	[CompilerGenerated]
	private bool <FailureReasonIsStorePurchaseFailureReason>k__BackingField; // 0x28
	[CompilerGenerated]
	private StorePurchaseFailureReason <StorePurchaseFailureReason>k__BackingField; // 0x2C

	// Properties
	public bool IsSuccess { get; set; }
	public bool IsVerified { get; set; }
	public bool FailureReasonIsPurchaseFailureDescription { get; set; }
	public PurchaseFailureDescription PurchaseFailureDescription { get; set; }
	public bool FailureReasonIsPurchaseFailureReason { get; set; }
	public PurchaseFailureReason PurchaseFailureReason { get; set; }
	public bool FailureReasonIsStorePurchaseFailureReason { get; set; }
	public StorePurchaseFailureReason StorePurchaseFailureReason { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x138819C Offset: 0x138819C VA: 0x138819C
	public bool get_IsSuccess() { }

	[CompilerGenerated]
	// RVA: 0x13881A4 Offset: 0x13881A4 VA: 0x13881A4
	public void set_IsSuccess(bool value) { }

	[CompilerGenerated]
	// RVA: 0x13881B0 Offset: 0x13881B0 VA: 0x13881B0
	public bool get_IsVerified() { }

	[CompilerGenerated]
	// RVA: 0x13881B8 Offset: 0x13881B8 VA: 0x13881B8
	public void set_IsVerified(bool value) { }

	[CompilerGenerated]
	// RVA: 0x13881C4 Offset: 0x13881C4 VA: 0x13881C4
	public bool get_FailureReasonIsPurchaseFailureDescription() { }

	[CompilerGenerated]
	// RVA: 0x13881CC Offset: 0x13881CC VA: 0x13881CC
	public void set_FailureReasonIsPurchaseFailureDescription(bool value) { }

	[CompilerGenerated]
	// RVA: 0x13881D8 Offset: 0x13881D8 VA: 0x13881D8
	public PurchaseFailureDescription get_PurchaseFailureDescription() { }

	[CompilerGenerated]
	// RVA: 0x13881E0 Offset: 0x13881E0 VA: 0x13881E0
	public void set_PurchaseFailureDescription(PurchaseFailureDescription value) { }

	[CompilerGenerated]
	// RVA: 0x13881E8 Offset: 0x13881E8 VA: 0x13881E8
	public bool get_FailureReasonIsPurchaseFailureReason() { }

	[CompilerGenerated]
	// RVA: 0x13881F0 Offset: 0x13881F0 VA: 0x13881F0
	public void set_FailureReasonIsPurchaseFailureReason(bool value) { }

	[CompilerGenerated]
	// RVA: 0x13881FC Offset: 0x13881FC VA: 0x13881FC
	public PurchaseFailureReason get_PurchaseFailureReason() { }

	[CompilerGenerated]
	// RVA: 0x1388204 Offset: 0x1388204 VA: 0x1388204
	public void set_PurchaseFailureReason(PurchaseFailureReason value) { }

	[CompilerGenerated]
	// RVA: 0x138820C Offset: 0x138820C VA: 0x138820C
	public bool get_FailureReasonIsStorePurchaseFailureReason() { }

	[CompilerGenerated]
	// RVA: 0x1388214 Offset: 0x1388214 VA: 0x1388214
	public void set_FailureReasonIsStorePurchaseFailureReason(bool value) { }

	[CompilerGenerated]
	// RVA: 0x1388220 Offset: 0x1388220 VA: 0x1388220
	public StorePurchaseFailureReason get_StorePurchaseFailureReason() { }

	[CompilerGenerated]
	// RVA: 0x1388228 Offset: 0x1388228 VA: 0x1388228
	public void set_StorePurchaseFailureReason(StorePurchaseFailureReason value) { }

	// RVA: 0x1388230 Offset: 0x1388230 VA: 0x1388230
	public static PurchaseResult Fail(StorePurchaseFailureReason storePurchaseFailureReason) { }

	// RVA: 0x13882A8 Offset: 0x13882A8 VA: 0x13882A8
	public static PurchaseResult Fail(PurchaseFailureDescription purchaseFailureDescription) { }

	// RVA: 0x1388324 Offset: 0x1388324 VA: 0x1388324
	public static PurchaseResult Fail(PurchaseFailureReason purchaseFailureReason) { }

	// RVA: 0x1388394 Offset: 0x1388394 VA: 0x1388394
	public static PurchaseResult Success() { }

	// RVA: 0x13883F8 Offset: 0x13883F8 VA: 0x13883F8
	public static PurchaseResult UnableToVerify() { }

	// RVA: 0x1386EA8 Offset: 0x1386EA8 VA: 0x1386EA8
	public string GetFailReason() { }

	// RVA: 0x13882A0 Offset: 0x13882A0 VA: 0x13882A0
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Application.IAP.Scripts