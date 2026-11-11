/* IL2CPP: Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.UI.ThemedSpecialOfferPopup$$ClosePopupAfterPurchase
void Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_ThemedSpecialOfferPopup__ClosePopupAfterPurchase (Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_ThemedSpecialOfferPopup_o* __this, bool isSuccess, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.UI.ThemedSpecialOfferPopup$$ClosePopupAfterPurchase
   void 
   Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_ThemedSpecialOfferPopup__ClosePopupAfterPurchase
   (Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_ThemedSpecialOfferPopup_o* __this,
   bool isSuccess, const MethodInfo* method); */

void Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_ThemedSpecialOfferPopup__ClosePopupAfterPurchase_34609cc
               (undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  if ((bRam0000000005c3263f & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057e7410);
    FUN_012d0dc8(PTR_DAT_057b8520);
    bRam0000000005c3263f = 1;
  }
  puVar1 = PTR_DAT_057e7410;
  if ((param_2 & 1) == 0) {
    return;
  }
  if (*(int *)(*(long *)PTR_DAT_057b8520 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar2 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                    (*(undefined8 *)puVar1);
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar2 + 0x20);
    if (lVar3 != 0) {
      (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
    }
    lVar3 = *(long *)(lVar2 + 0x10);
    if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x041e28e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar3 + 0x18))
                (*(undefined8 *)(lVar3 + 0x40),lVar2,0,*(undefined8 *)(lVar3 + 0x28));
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

