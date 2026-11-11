/* IL2CPP: Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.SpecialOfferService$$ShouldDisplayBeforeStore
bool Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService__ShouldDisplayBeforeStore (Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.SpecialOfferService$$ShouldDisplayBeforeStore
   bool 
   Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService__ShouldDisplayBeforeStore
   (Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService_o* __this, const
   MethodInfo* method); */

bool Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService__ShouldDisplayBeforeStore_35965a4
               (long param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    iVar4 = Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferStateService__GetState_35974f4
                      ();
    if (iVar4 == 3) {
      if ((((*(long *)(param_1 + 0x18) == 0) ||
           (lVar5 = Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferStateService__GetConfig_3595a24
                              (), lVar5 == 0)) || (*(long *)(param_1 + 0x10) == 0)) ||
         (lVar6 = *(long *)(*(long *)(param_1 + 0x10) + 0x18), lVar6 == 0)) goto LAB_03696618;
      iVar1 = *(int *)(lVar6 + 0x20);
      iVar4 = *(int *)(lVar5 + 0x1c);
      iVar2 = 0;
      if (iVar4 != 0) {
        iVar2 = iVar1 / iVar4;
      }
      bVar3 = iVar1 < *(int *)(lVar5 + 0x20) * iVar4 && iVar1 == iVar2 * iVar4;
    }
    else {
      bVar3 = false;
    }
    return bVar3;
  }
LAB_03696618:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

