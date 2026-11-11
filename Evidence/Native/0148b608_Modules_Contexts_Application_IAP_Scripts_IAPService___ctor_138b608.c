/* IL2CPP: Modules.Contexts.Application.IAP.Scripts.IAPService$$.ctor
void Modules_Contexts_Application_IAP_Scripts_IAPService___ctor (Modules_Contexts_Application_IAP_Scripts_IAPService_o* __this, Modules_Contexts_Application_IAP_Scripts_IAPManager_o* iapManager, Modules_Contexts_Home_Store_Scripts_StoreModelService_o* storeModelService, Modules_Contexts_Home_Monetization_EndlessPortal_Scripts_EndlessPortalService_o* endlessPortalService, Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService_o* specialOfferService, Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferService_o* pawTouchOfferService, Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferService_o* noAdsOfferService, Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferService_o* chooseOneSpecialOfferService, Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService_o* onePlusFreeOfferService, Modules_Contexts_Home_Monetization_TreasureDrill_Scripts_TreasureDrillService_o* treasureDrillService, Modules_Contexts_Home_MagicPass_Scripts_MagicPassService_o* magicPassService, Modules_Contexts_Home_MiniGame_Scripts_MiniGameService_o* minigameService, Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService_o* webShopService, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.IAP.Scripts.IAPService$$.ctor
   void Modules_Contexts_Application_IAP_Scripts_IAPService___ctor
   (Modules_Contexts_Application_IAP_Scripts_IAPService_o* __this,
   Modules_Contexts_Application_IAP_Scripts_IAPManager_o* iapManager,
   Modules_Contexts_Home_Store_Scripts_StoreModelService_o* storeModelService,
   Modules_Contexts_Home_Monetization_EndlessPortal_Scripts_EndlessPortalService_o*
   endlessPortalService,
   Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService_o*
   specialOfferService,
   Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferService_o*
   pawTouchOfferService, Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferService_o*
   noAdsOfferService,
   Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferService_o*
   chooseOneSpecialOfferService,
   Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService_o*
   onePlusFreeOfferService,
   Modules_Contexts_Home_Monetization_TreasureDrill_Scripts_TreasureDrillService_o*
   treasureDrillService, Modules_Contexts_Home_MagicPass_Scripts_MagicPassService_o*
   magicPassService, Modules_Contexts_Home_MiniGame_Scripts_MiniGameService_o* minigameService,
   Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService_o* webShopService, const
   MethodInfo* method); */

void Modules_Contexts_Application_IAP_Scripts_IAPService___ctor_138b608
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
               undefined8 param_13)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  System_Object___ctor_23dfe5c(param_1,0);
  *(undefined8 *)(param_1 + 0x18) = param_2;
  FUN_012d0d74((undefined8 *)(param_1 + 0x18),param_2);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  FUN_012d0d74((undefined8 *)(param_1 + 0x20),param_3);
  *(undefined8 *)(param_1 + 0x28) = param_4;
  FUN_012d0d74((undefined8 *)(param_1 + 0x28),param_4);
  *(undefined8 *)(param_1 + 0x30) = param_5;
  FUN_012d0d74((undefined8 *)(param_1 + 0x30),param_5);
  *(undefined8 *)(param_1 + 0x38) = param_6;
  FUN_012d0d74((undefined8 *)(param_1 + 0x38),param_6);
  *(undefined8 *)(param_1 + 0x40) = param_7;
  FUN_012d0d74((undefined8 *)(param_1 + 0x40),param_7);
  *(undefined8 *)(param_1 + 0x48) = param_8;
  FUN_012d0d74((undefined8 *)(param_1 + 0x48),param_8);
  *(undefined8 *)(param_1 + 0x50) = param_9;
  FUN_012d0d74((undefined8 *)(param_1 + 0x50),param_9);
  *(undefined8 *)(param_1 + 0x58) = param_10;
  FUN_012d0d74((undefined8 *)(param_1 + 0x58),param_10);
  *(undefined8 *)(param_1 + 0x60) = param_11;
  FUN_012d0d74((undefined8 *)(param_1 + 0x60),param_11);
  *(undefined8 *)(param_1 + 0x68) = param_12;
  FUN_012d0d74();
  puVar4 = (undefined8 *)(param_1 + 0x70);
  *puVar4 = param_13;
  if (iRam0000000005c3d478 != 0) {
    puVar1 = (ulong *)(((ulong)puVar4 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar4 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}

