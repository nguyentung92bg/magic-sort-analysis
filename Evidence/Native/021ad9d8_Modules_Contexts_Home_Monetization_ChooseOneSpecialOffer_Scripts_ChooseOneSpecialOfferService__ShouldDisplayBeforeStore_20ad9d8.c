/* IL2CPP: Modules.Contexts.Home.Monetization.ChooseOneSpecialOffer.Scripts.ChooseOneSpecialOfferService$$ShouldDisplayBeforeStore
bool Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferService__ShouldDisplayBeforeStore (Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.ChooseOneSpecialOffer.Scripts.ChooseOneSpecialOfferService$$ShouldDisplayBeforeStore
   bool 
   Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferService__ShouldDisplayBeforeStore
   (Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferService_o*
   __this, const MethodInfo* method); */

bool Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferService__ShouldDisplayBeforeStore_20ad9d8
               (long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    iVar3 = Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferStateService__GetState_20ae644
                      ();
    if (iVar3 != 3) {
      return false;
    }
    if (((*(long *)(param_1 + 0x28) != 0) &&
        (lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 0x18), lVar4 != 0)) &&
       (lVar4 = *(long *)(lVar4 + 0x120), lVar4 != 0)) {
      iVar3 = *(int *)(lVar4 + 0x1c);
      if (iVar3 == 0) {
        return false;
      }
      if (*(int *)(lVar4 + 0x20) == 0) {
        return false;
      }
      if ((*(long *)(param_1 + 0x10) != 0) &&
         (lVar5 = *(long *)(*(long *)(param_1 + 0x10) + 0x18), lVar5 != 0)) {
        iVar1 = *(int *)(lVar5 + 0x20);
        iVar2 = 0;
        if (iVar3 != 0) {
          iVar2 = iVar1 / iVar3;
        }
        return iVar1 < *(int *)(lVar4 + 0x20) * iVar3 && iVar1 == iVar2 * iVar3;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

