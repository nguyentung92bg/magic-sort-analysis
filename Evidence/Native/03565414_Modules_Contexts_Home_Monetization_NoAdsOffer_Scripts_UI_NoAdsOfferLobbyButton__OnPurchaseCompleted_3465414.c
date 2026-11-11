/* IL2CPP: Modules.Contexts.Home.Monetization.NoAdsOffer.Scripts.UI.NoAdsOfferLobbyButton$$OnPurchaseCompleted
void Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_UI_NoAdsOfferLobbyButton__OnPurchaseCompleted (Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_UI_NoAdsOfferLobbyButton_o* __this, bool isSuccess, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.NoAdsOffer.Scripts.UI.NoAdsOfferLobbyButton$$OnPurchaseCompleted
   void 
   Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_UI_NoAdsOfferLobbyButton__OnPurchaseCompleted
   (Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_UI_NoAdsOfferLobbyButton_o* __this, bool
   isSuccess, const MethodInfo* method); */

void Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_UI_NoAdsOfferLobbyButton__OnPurchaseCompleted_3465414
               (long param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  if ((param_2 & 1) == 0) {
    return;
  }
  if ((bRam0000000005c3266f & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057ffcc8);
    FUN_012d0dc8(PTR_DAT_057b8520);
    bRam0000000005c3266f = 1;
  }
  puVar2 = PTR_DAT_057ffcc8;
  puVar1 = PTR_DAT_057b8520;
  if (*(long *)(param_1 + 0x20) != 0) {
    UnityEngine_GameObject__SetActive_408e318(*(long *)(param_1 + 0x20),0,0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    lVar3 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                      (*(undefined8 *)puVar2);
    if (lVar3 != 0) {
      lVar4 = *(long *)(lVar3 + 0x20);
      if (lVar4 != 0) {
        (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28));
      }
      lVar4 = *(long *)(lVar3 + 0x10);
      if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x041e28e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar4 + 0x18))
                  (*(undefined8 *)(lVar4 + 0x40),lVar3,0,*(undefined8 *)(lVar4 + 0x28));
        return;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

