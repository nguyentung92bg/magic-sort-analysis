public class PurchaseClaimResult // TypeDefIndex: 3092
{
	// Fields
	[JsonProperty("purchase_id")]
	public string PurchaseId; // 0x10
	[JsonProperty("status")]
	public string Status; // 0x18
	[JsonProperty("already_claimed")]
	public bool AlreadyClaimed; // 0x20

	// Methods

	// RVA: 0x3169C18 Offset: 0x3169C18 VA: 0x3169C18
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Monetization.WebShop.Scripts