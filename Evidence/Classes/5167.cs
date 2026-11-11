public class IAPHandler // TypeDefIndex: 5167
{
	// Methods

	[AsyncStateMachine(typeof(IAPHandler.<OnClickButton>d__0))]
	// RVA: 0x1386904 Offset: 0x1386904 VA: 0x1386904
	public Task<bool> OnClickButton(string productId, IAPOrigin iapOrigin, IAPReason iapReason, IAPContext context, bool giveRewardsWithoutAnimation) { }

	[AsyncStateMachine(typeof(IAPHandler.<PurchaseAsync>d__1))]
	// RVA: 0x1386A64 Offset: 0x1386A64 VA: 0x1386A64
	private Task<bool> PurchaseAsync(string productId, IAPOrigin iapOrigin, IAPReason iapReason, IAPContext context, bool giveRewardsWithoutAnimation) { }

	// RVA: 0x1386BC8 Offset: 0x1386BC8 VA: 0x1386BC8
	private void SendPurchaseFailed(string productId, IAPReason iapReason, PurchaseResult purchaseResult, IAPOrigin iapOrigin) { }

	// RVA: 0x1386F74 Offset: 0x1386F74 VA: 0x1386F74
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Application.IAP.Scripts