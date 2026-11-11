/* IL2CPP: Modules.Contexts.Home.Monetization.ChooseOneSpecialOffer.Scripts.ChooseOneSpecialOfferService$$CanShowBeforeStore
bool Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferService__CanShowBeforeStore (Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.ChooseOneSpecialOffer.Scripts.ChooseOneSpecialOfferService$$CanShowBeforeStore
   bool 
   Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferService__CanShowBeforeStore
   (Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferService_o*
   __this, const MethodInfo* method); */

bool Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferService__CanShowBeforeStore_20ad954
               (long param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    iVar2 = Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferStateService__GetState_20ae644
                      ();
    if (iVar2 == 3) {
      if ((((*(long *)(param_1 + 0x28) == 0) ||
           (lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 0x18), lVar3 == 0)) ||
          (lVar3 = *(long *)(lVar3 + 0x120), lVar3 == 0)) ||
         ((*(long *)(param_1 + 0x10) == 0 ||
          (lVar4 = *(long *)(*(long *)(param_1 + 0x10) + 0x18), lVar4 == 0)))) goto LAB_021ad9bc;
      bVar1 = *(int *)(lVar4 + 0x20) < *(int *)(lVar3 + 0x20) * *(int *)(lVar3 + 0x1c);
    }
    else {
      bVar1 = false;
    }
    return bVar1;
  }
LAB_021ad9bc:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

