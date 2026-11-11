public interface IPopUpService : IService, IInitializable, IDisposable, IHomeIdleInterrupter // TypeDefIndex: 629
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract Task OpenPopupAsync(PopUpArguments popUpArguments);

	// RVA: -1 Offset: -1 Slot: 1
	public abstract Task ClosePopUpAsync();

	// RVA: -1 Offset: -1 Slot: 2
	public abstract Task ClosePopupByNameAsync(string closePopupName);

	// RVA: -1 Offset: -1 Slot: 3
	public abstract bool IsPopUpOpen(string popUpName);

	// RVA: -1 Offset: -1 Slot: 4
	public abstract T GetPopUp<T>();
	/* GenericInstMethod :
	|
	|-RVA: -1 Offset: -1
	|-IPopUpService.GetPopUp<object>
	*/

	// RVA: -1 Offset: -1 Slot: 5
	public abstract void PreloadPopUps();
}

// Namespace: Modules.Infrastructure.UI.Common.Scripts.PopUp