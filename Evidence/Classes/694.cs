public static class RandomUtil // TypeDefIndex: 694
{
	// Fields
	private static readonly Random _random; // 0x0

	// Methods

	[RuntimeInitializeOnLoadMethod(1)]
	// RVA: 0x40E480C Offset: 0x40E480C VA: 0x40E480C
	private static void Init() { }

	// RVA: 0x40E4864 Offset: 0x40E4864 VA: 0x40E4864
	public static int GetRandomIndex(List<float> weights) { }

	[Extension]
	// RVA: -1 Offset: -1
	public static T GetRandom<T>(List<T> list) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x267772C Offset: 0x267772C VA: 0x267772C
	|-RandomUtil.GetRandom<ValueTuple<object, object>>
	|
	|-RVA: 0x2677800 Offset: 0x2677800 VA: 0x2677800
	|-RandomUtil.GetRandom<Int32Enum>
	|
	|-RVA: 0x26778D4 Offset: 0x26778D4 VA: 0x26778D4
	|-RandomUtil.GetRandom<object>
	*/

	// RVA: 0x40E4A48 Offset: 0x40E4A48 VA: 0x40E4A48
	public static double GetRandom() { }

	// RVA: 0x40E4AB0 Offset: 0x40E4AB0 VA: 0x40E4AB0
	public static int GetRandomFromTo(int from, int to) { }

	// RVA: 0x40E4B30 Offset: 0x40E4B30 VA: 0x40E4B30
	public static double GetRandomFromTo(float min, float max) { }

	// RVA: -1 Offset: -1
	public static T GetRandomIdByProbabilities<T>(Dictionary<T, float> itemProbabilities) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x26779A8 Offset: 0x26779A8 VA: 0x26779A8
	|-RandomUtil.GetRandomIdByProbabilities<object>
	*/

	// RVA: -1 Offset: -1
	public static void Shuffle<T>(List<T> array) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2677BC0 Offset: 0x2677BC0 VA: 0x2677BC0
	|-RandomUtil.Shuffle<Int32Enum>
	|
	|-RVA: 0x2677CF8 Offset: 0x2677CF8 VA: 0x2677CF8
	|-RandomUtil.Shuffle<object>
	*/

	// RVA: 0x40E4BC0 Offset: 0x40E4BC0 VA: 0x40E4BC0
	private static void .cctor() { }
}

// Namespace: Modules.Infrastructure.Common.Scripts