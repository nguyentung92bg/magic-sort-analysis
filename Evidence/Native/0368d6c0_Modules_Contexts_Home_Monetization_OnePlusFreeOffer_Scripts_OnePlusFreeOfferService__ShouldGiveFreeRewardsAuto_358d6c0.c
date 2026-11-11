/* IL2CPP: Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.OnePlusFreeOfferService$$ShouldGiveFreeRewardsAuto
bool Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__ShouldGiveFreeRewardsAuto (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.OnePlusFreeOfferService$$ShouldGiveFreeRewardsAuto
   bool 
   Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__ShouldGiveFreeRewardsAuto
   (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService_o* __this,
   const MethodInfo* method); */

bool Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__ShouldGiveFreeRewardsAuto_358d6c0
               (long param_1)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    iVar2 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferStateService__GetState_358e738
                      ();
    if (iVar2 == 6) {
      if (*(long *)(param_1 + 0x10) == 0) goto LAB_0368d704;
      uVar3 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferDataService__IsFreeClaimed_358a838
                        ();
      if ((uVar3 & 1) == 0) {
        if ((bRam0000000005c32e0b & 1) == 0) {
          FUN_012d0dc8(PTR_DAT_0580b9d0);
          bRam0000000005c32e0b = 1;
        }
        puVar1 = PTR_DAT_0580b9d0;
        if ((*(long *)(param_1 + 0x10) != 0) &&
           (lVar5 = *(long *)(*(long *)(param_1 + 0x10) + 0x18), lVar5 != 0)) {
          if (*(long *)(lVar5 + 0x18) != 0) {
            uVar3 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__GetEndDate_358c140
                              (param_1);
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_0130472c(*(long *)puVar1);
            }
            uVar4 = System_DateTime__get_UtcNow_2100638(0);
            puVar1 = PTR_DAT_0580b9d0;
            if ((bRam0000000005c297fd & 1) == 0) {
              FUN_012d0dc8(PTR_DAT_0580b9d0,uVar4,0);
              bRam0000000005c297fd = 1;
            }
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_0130472c();
            }
            return (uVar3 & 0x3fffffffffffffff) <= (uVar4 & 0x3fffffffffffffff);
          }
          return false;
        }
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
    }
    return false;
  }
LAB_0368d704:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

