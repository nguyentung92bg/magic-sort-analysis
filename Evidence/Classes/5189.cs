public class IAPVerificationDataService : IRestartableService, IService, IInitializable, IDisposable, ILateUpdate, IDeletable // TypeDefIndex: 5189
{
	// Fields
	private readonly ISaveLoad<IAPVerificationModel> _saveLoad; // 0x10
	private IAPVerificationModel _model; // 0x18
	private bool _isMarkedForLateUpdate; // 0x20

	// Methods

	// RVA: 0x138D3A4 Offset: 0x138D3A4 VA: 0x138D3A4
	public void .ctor(ISaveLoad<IAPVerificationModel> saveLoad) { }

	// RVA: 0x138D3D4 Offset: 0x138D3D4 VA: 0x138D3D4 Slot: 4
	public void Initialize() { }

	// RVA: 0x138D490 Offset: 0x138D490 VA: 0x138D490 Slot: 5
	public void Dispose() { }

	// RVA: 0x138D494 Offset: 0x138D494 VA: 0x138D494 Slot: 6
	public void LateUpdate() { }

	// RVA: 0x138D54C Offset: 0x138D54C VA: 0x138D54C Slot: 7
	public void DeleteData() { }

	// RVA: 0x138D638 Offset: 0x138D638 VA: 0x138D638
	public int GetPendingCount() { }

	// RVA: 0x138D688 Offset: 0x138D688 VA: 0x138D688
	public List<VerificationCacheModel> GetPendingVerifications() { }

	// RVA: 0x138D70C Offset: 0x138D70C VA: 0x138D70C
	public bool TryEnqueue(VerificationCacheModel pendingVerification) { }

	// RVA: 0x138D9FC Offset: 0x138D9FC VA: 0x138D9FC
	public bool TryRemovePendingPurchase(string purchaseToken, string transactionId) { }

	// RVA: 0x138DB94 Offset: 0x138DB94 VA: 0x138DB94
	public int IncrementAttemptCount(string purchaseToken, string transactionId) { }

	// RVA: 0x138D808 Offset: 0x138D808 VA: 0x138D808
	private bool Contains(string token, string transactionId) { }

	// RVA: 0x138DA90 Offset: 0x138DA90 VA: 0x138DA90
	private int GetVerificationIndex(string token, string transactionId) { }

	// RVA: 0x138D9F0 Offset: 0x138D9F0 VA: 0x138D9F0
	private void MarkDataForLateUpdate() { }
}

// Namespace: 
[CompilerGenerated]