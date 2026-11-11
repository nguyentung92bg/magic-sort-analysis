/* IL2CPP: Modules.Contexts.Home.Monetization.NoAdsOffer.Scripts.NoAdsOfferService$$TryGetIAPModel
bool Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferService__TryGetIAPModel (Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferService_o* __this, System_String_o* productId, Modules_Contexts_Application_IAP_Scripts_IAPConfigModel_o** o, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Monetization.NoAdsOffer.Scripts.NoAdsOfferService$$TryGetIAPModel
   bool Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferService__TryGetIAPModel
   (Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferService_o* __this,
   System_String_o* productId, Modules_Contexts_Application_IAP_Scripts_IAPConfigModel_o** o, const
   MethodInfo* method); */

undefined8
Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferService__TryGetIAPModel_34647e0
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  *param_3 = 0;
  FUN_012d0d74(param_3,0);
  lVar1 = Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferService__GetConfig_346430c
                    (param_1);
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x18) != 0)) {
    uVar2 = System_String__op_Inequality_1ecf400
                      (param_2,*(undefined8 *)(*(long *)(lVar1 + 0x18) + 0x10),0);
    if ((uVar2 & 1) == 0) {
      lVar1 = Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferService__GetConfig_346430c
                        (param_1);
      if (lVar1 == 0) goto LAB_03564860;
      *param_3 = *(undefined8 *)(lVar1 + 0x18);
      FUN_012d0d74(param_3);
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
    return uVar3;
  }
LAB_03564860:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

