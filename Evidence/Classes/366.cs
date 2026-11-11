public static class TweenExtensions // TypeDefIndex: 366
{
	// Methods

	[Extension]
	// RVA: 0x3DE73B0 Offset: 0x3DE73B0 VA: 0x3DE73B0
	public static Task AsTask(Tween tween) { }

	[AsyncStateMachine(typeof(TweenExtensions.<AsyncWaitForCompletionWithCancellationToken>d__1))]
	[Extension]
	// RVA: 0x3DE75B8 Offset: 0x3DE75B8 VA: 0x3DE75B8
	public static Task AsyncWaitForCompletionWithCancellationToken(Tween t, CancellationToken cancellationToken) { }

	[Extension]
	// RVA: 0x3DE76BC Offset: 0x3DE76BC VA: 0x3DE76BC
	public static void CompleteActiveTween(Tween t) { }

	[Extension]
	// RVA: 0x3DE76F8 Offset: 0x3DE76F8 VA: 0x3DE76F8
	public static TweenerCore<Vector2, Vector2, VectorOptions> DoSize(SpriteRenderer target, Vector2 endValue, float duration) { }

	[Extension]
	// RVA: 0x3DE7894 Offset: 0x3DE7894 VA: 0x3DE7894
	public static TweenerCore<Vector2, Vector2, VectorOptions> DoSizeY(SpriteRenderer target, float endValue, float duration) { }

	[Extension]
	// RVA: 0x3DE7A38 Offset: 0x3DE7A38 VA: 0x3DE7A38
	public static TweenerCore<Vector2, Vector2, VectorOptions> DoSizeX(SpriteRenderer target, float endValue, float duration) { }
}

// Namespace: Modules.Infrastructure.Utils.VibrationUtils.Scripts