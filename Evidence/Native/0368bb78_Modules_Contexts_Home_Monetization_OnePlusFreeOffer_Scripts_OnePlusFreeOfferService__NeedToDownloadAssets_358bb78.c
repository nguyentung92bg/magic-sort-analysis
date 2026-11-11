/* IL2CPP: Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.OnePlusFreeOfferService$$NeedToDownloadAssets
bool Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__NeedToDownloadAssets (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.OnePlusFreeOfferService$$NeedToDownloadAssets
   bool 
   Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__NeedToDownloadAssets
   (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService_o* __this,
   const MethodInfo* method); */

uint Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__NeedToDownloadAssets_358bb78
               (long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0x18), lVar3 != 0)) {
    uVar1 = 0;
    if (*(long *)(lVar3 + 0x18) != 0) {
      if (*(long *)(param_1 + 0x50) == 0) goto LAB_0368bbdc;
      uVar2 = Modules_Infrastructure_AssetManagement_AssetManager__IsDownloaded_40db3d0
                        (*(long *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),0);
      if ((uVar2 & 1) == 0) {
        uVar1 = 1;
      }
      else {
        if (*(long *)(param_1 + 0x50) == 0) goto LAB_0368bbdc;
        uVar1 = Modules_Infrastructure_AssetManagement_AssetManager__IsLoaded_40db19c
                          (*(long *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),0);
        uVar1 = uVar1 ^ 1;
      }
    }
    return uVar1 & 1;
  }
LAB_0368bbdc:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

