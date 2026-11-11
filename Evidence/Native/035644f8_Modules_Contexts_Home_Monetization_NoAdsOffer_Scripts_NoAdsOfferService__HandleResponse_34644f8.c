/* IL2CPP: Modules.Contexts.Home.Monetization.NoAdsOffer.Scripts.NoAdsOfferService$$HandleResponse
void Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferService__HandleResponse (Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferService_o* __this, Modules_Contexts_Application_ServerCommunication_Scripts_ApiResponse_NoAdsOfferResponse__o* apiResponse, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Monetization.NoAdsOffer.Scripts.NoAdsOfferService$$HandleResponse
   void Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferService__HandleResponse
   (Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferService_o* __this,
   Modules_Contexts_Application_ServerCommunication_Scripts_ApiResponse_NoAdsOfferResponse__o*
   apiResponse, const MethodInfo* method); */

void Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferService__HandleResponse_34644f8
               (long param_1,long param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  
  if ((bRam0000000005c32667 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057a6d68);
    FUN_012d0dc8(PTR_DAT_057dc7c0);
    FUN_012d0dc8(PTR_DAT_058071a8);
    bRam0000000005c32667 = 1;
  }
  if (param_2 != 0) {
    uVar2 = Modules_Contexts_Application_ServerCommunication_Scripts_ApiResponse_object___get_Success_1bb3518
                      (param_2,*(undefined8 *)PTR_DAT_058071a8);
    if ((uVar2 & 1) == 0) {
      uVar2 = Modules_Contexts_Application_ServerCommunication_Scripts_ApiResponse_object___IsNotAvailable_1bb37b8
                        (param_2,*(undefined8 *)PTR_DAT_057a6d68);
      if ((uVar2 & 1) == 0) {
        return;
      }
      lVar3 = *(long *)(param_1 + 0x18);
      if (lVar3 != 0) {
        if (*(long *)(lVar3 + 0x18) != 0) {
          puVar1 = (undefined8 *)(*(long *)(lVar3 + 0x18) + 0x10);
          *puVar1 = 0;
          FUN_012d0d74(puVar1,0);
          *(undefined1 *)(lVar3 + 0x20) = 1;
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
    }
    else {
      lVar3 = *(long *)(param_1 + 0x18);
      if (lVar3 != 0) {
        if (*(long *)(lVar3 + 0x18) != 0) {
          *(undefined8 *)(*(long *)(lVar3 + 0x18) + 0x10) = *(undefined8 *)(param_2 + 0x20);
          FUN_012d0d74();
          *(undefined1 *)(lVar3 + 0x20) = 1;
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

