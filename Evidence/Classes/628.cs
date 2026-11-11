public interface IPopUp // TypeDefIndex: 628
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void Show(PopUpArguments popUpArguments);

	// RVA: -1 Offset: -1 Slot: 1
	public abstract Task ShowAsync(PopUpArguments popUpArguments);

	// RVA: -1 Offset: -1 Slot: 2
	public abstract Task Hide();

	// RVA: -1 Offset: -1 Slot: 3
	public abstract GameObject GetGameObject();
}

// Namespace: Modules.Infrastructure.UI.Common.Scripts.PopUp