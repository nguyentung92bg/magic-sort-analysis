/* IL2CPP: Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.SpecialOfferService$$NeedToDownloadAssets
bool Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService__NeedToDownloadAssets (Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.SpecialOfferService$$NeedToDownloadAssets
   bool 
   Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService__NeedToDownloadAssets
   (Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService_o* __this, const
   MethodInfo* method); */

uint Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService__NeedToDownloadAssets_35968c4
               (long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (lVar4 = *(long *)(*(long *)(param_1 + 0x10) + 0x18), lVar4 != 0)) {
    uVar1 = 0;
    if (*(long *)(lVar4 + 0x18) != 0) {
      uVar2 = Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService__GetBundleId_3596940
                        ();
      if (*(long *)(param_1 + 0x50) == 0) goto LAB_0369693c;
      uVar3 = Modules_Infrastructure_AssetManagement_AssetManager__IsDownloaded_40db3d0
                        (*(long *)(param_1 + 0x50),uVar2,0);
      if ((uVar3 & 1) == 0) {
        uVar1 = 1;
      }
      else {
        if (*(long *)(param_1 + 0x50) == 0) goto LAB_0369693c;
        uVar1 = Modules_Infrastructure_AssetManagement_AssetManager__IsLoaded_40db19c
                          (*(long *)(param_1 + 0x50),uVar2,0);
        uVar1 = uVar1 ^ 1;
      }
    }
    return uVar1 & 1;
  }
LAB_0369693c:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

