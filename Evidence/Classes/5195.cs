public static class IAPVerificationTokenValidator // TypeDefIndex: 5195
{
	// Methods

	// RVA: 0x1CB44C8 Offset: 0x1CB44C8 VA: 0x1CB44C8
	public static bool IsValid(string token, string secret, string userId) { }

	// RVA: 0x1CB4528 Offset: 0x1CB4528 VA: 0x1CB4528
	private static string DeriveToken(string secret, string userId) { }

	// RVA: 0x1CB4880 Offset: 0x1CB4880 VA: 0x1CB4880
	private static bool AreEqual(string left, string right) { }
}

// Namespace: Modules.Contexts.Application.GrandConfig.Scripts