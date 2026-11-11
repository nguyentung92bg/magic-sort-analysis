public enum VerificationStatus // TypeDefIndex: 118
{
	// Fields
	public int value__; // 0x0
	[OriginalName("VERIFICATION_STATUS_VERIFIED")]
	public const VerificationStatus Verified = 0;
	[OriginalName("VERIFICATION_STATUS_EMPTY_PURCHASE_TOKEN")]
	public const VerificationStatus EmptyPurchaseToken = 1;
	[OriginalName("VERIFICATION_STATUS_EMPTY_USER_ID")]
	public const VerificationStatus EmptyUserId = 2;
	[OriginalName("VERIFICATION_STATUS_EMPTY_PLATFORM")]
	public const VerificationStatus EmptyPlatform = 3;
	[OriginalName("VERIFICATION_STATUS_EMPTY_PRODUCT_ID")]
	public const VerificationStatus EmptyProductId = 4;
	[OriginalName("VERIFICATION_STATUS_FAIL_OPEN")]
	public const VerificationStatus FailOpen = 5;
	[OriginalName("VERIFICATION_STATUS_DEDUP_HIT")]
	public const VerificationStatus DedupHit = 6;
}

// Namespace: 
[CompilerGenerated]
[Serializable]