/* IL2CPP: Modules.Contexts.Home.Monetization.NoAdsOffer.Scripts.NoAdsOfferStateService$$.ctor
void Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferStateService___ctor (Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferStateService_o* __this, Modules_Contexts_Application_RemoteConfig_Scripts_RemoteConfigs_o* remoteConfigs, Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferDataService_o* noAdsOfferDataService, Modules_Contexts_Home_Store_Scripts_InAppPurchaseHistoryService_o* inAppPurchaseHistoryService, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Monetization.NoAdsOffer.Scripts.NoAdsOfferStateService$$.ctor
   void Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferStateService___ctor
   (Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferStateService_o* __this,
   Modules_Contexts_Application_RemoteConfig_Scripts_RemoteConfigs_o* remoteConfigs,
   Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferDataService_o*
   noAdsOfferDataService, Modules_Contexts_Home_Store_Scripts_InAppPurchaseHistoryService_o*
   inAppPurchaseHistoryService, const MethodInfo* method); */

void Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferStateService___ctor_3464dec
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  System_Object___ctor_23dfe5c(param_1,0);
  *(undefined8 *)(param_1 + 0x28) = param_2;
  FUN_012d0d74((undefined8 *)(param_1 + 0x28),param_2);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  FUN_012d0d74((undefined8 *)(param_1 + 0x10),param_3);
  puVar4 = (undefined8 *)(param_1 + 0x20);
  *puVar4 = param_4;
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

