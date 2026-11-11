/* IL2CPP: Modules.Contexts.Home.Monetization.NoAdsOffer.Scripts.NoAdsOfferService$$ShouldForceShowPopup
bool Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferService__ShouldForceShowPopup (Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.NoAdsOffer.Scripts.NoAdsOfferService$$ShouldForceShowPopup
   bool 
   Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferService__ShouldForceShowPopup
   (Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferService_o* __this, const
   MethodInfo* method); */

bool Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferService__ShouldForceShowPopup_3460e8c
               (long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    iVar1 = Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferStateService__GetState_3464e4c
                      ();
    if (iVar1 != 3) {
      return false;
    }
    if (*(long *)(param_1 + 0x48) != 0) {
      uVar2 = Modules_Contexts_Application_ServerCommunication_Scripts_RemoteTimeService__IsRemoteDaySameWithLocalDay_3e208a8
                        (*(long *)(param_1 + 0x48),0);
      if ((uVar2 & 1) == 0) {
        return false;
      }
      if ((*(long *)(param_1 + 0x18) != 0) &&
         (lVar3 = *(long *)(*(long *)(param_1 + 0x18) + 0x18), lVar3 != 0)) {
        iVar1 = *(int *)(lVar3 + 0x18);
        lVar3 = Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferService__GetConfig_346430c
                          (param_1);
        if (lVar3 != 0) {
          if (*(int *)(lVar3 + 0x28) <= iVar1) {
            return false;
          }
          if (*(long *)(param_1 + 0x18) != 0) {
            iVar1 = *(int *)(*(long *)(param_1 + 0x18) + 0x24);
            lVar3 = Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferService__GetConfig_346430c
                              (param_1);
            if (lVar3 != 0) {
              if (*(int *)(lVar3 + 0x2c) <= iVar1) {
                return false;
              }
              if ((*(long *)(param_1 + 0x18) != 0) &&
                 (lVar3 = *(long *)(*(long *)(param_1 + 0x18) + 0x18), lVar3 != 0)) {
                iVar1 = *(int *)(lVar3 + 0x28);
                lVar3 = Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferService__GetConfig_346430c
                                  (param_1);
                if (lVar3 != 0) {
                  if (*(int *)(lVar3 + 0x30) <= iVar1) {
                    return false;
                  }
                  return *(int *)(param_1 + 0x44) <= *(int *)(param_1 + 0x40);
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

