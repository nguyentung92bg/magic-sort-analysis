/* IL2CPP: Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.SpecialOfferService$$.ctor
void Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService___ctor (Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService_o* __this, Modules_Infrastructure_DI_CustomUpdater_o* customUpdater, Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferDataService_o* dataService, Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferStateService_o* stateService, Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferRemoteService_o* remoteService, Modules_Contexts_Application_Inventory_Scripts_InventoryService_o* inventoryService, Modules_Contexts_Application_RemoteConfig_Scripts_RemoteConfigs_o* remoteConfigs, Modules_Contexts_Application_Reward_Scripts_RewardService_o* rewardService, Modules_Contexts_Home_UI_Common_Scripts_LobbyEventController_LobbyEventsService_o* lobbyEventsService, Modules_Infrastructure_AssetManagement_AssetManager_o* assetManager, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.SpecialOfferService$$.ctor
   void Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService___ctor
   (Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService_o* __this,
   Modules_Infrastructure_DI_CustomUpdater_o* customUpdater,
   Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferDataService_o* dataService,
   Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferStateService_o* stateService,
   Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferRemoteService_o*
   remoteService, Modules_Contexts_Application_Inventory_Scripts_InventoryService_o*
   inventoryService, Modules_Contexts_Application_RemoteConfig_Scripts_RemoteConfigs_o*
   remoteConfigs, Modules_Contexts_Application_Reward_Scripts_RewardService_o* rewardService,
   Modules_Contexts_Home_UI_Common_Scripts_LobbyEventController_LobbyEventsService_o*
   lobbyEventsService, Modules_Infrastructure_AssetManagement_AssetManager_o* assetManager, const
   MethodInfo* method); */

void Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService___ctor_3595454
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               undefined8 param_9,undefined8 param_10)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  System_Object___ctor_23dfe5c(param_1,0);
  *(undefined8 *)(param_1 + 0x40) = param_2;
  FUN_012d0d74((undefined8 *)(param_1 + 0x40),param_2);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  FUN_012d0d74((undefined8 *)(param_1 + 0x10),param_3);
  *(undefined8 *)(param_1 + 0x18) = param_4;
  FUN_012d0d74((undefined8 *)(param_1 + 0x18),param_4);
  *(undefined8 *)(param_1 + 0x38) = param_6;
  FUN_012d0d74((undefined8 *)(param_1 + 0x38),param_6);
  *(undefined8 *)(param_1 + 0x20) = param_5;
  FUN_012d0d74((undefined8 *)(param_1 + 0x20),param_5);
  *(undefined8 *)(param_1 + 0x28) = param_7;
  FUN_012d0d74((undefined8 *)(param_1 + 0x28),param_7);
  *(undefined8 *)(param_1 + 0x30) = param_8;
  FUN_012d0d74((undefined8 *)(param_1 + 0x30),param_8);
  *(undefined8 *)(param_1 + 0x58) = param_9;
  FUN_012d0d74((undefined8 *)(param_1 + 0x58),param_9);
  puVar4 = (undefined8 *)(param_1 + 0x50);
  *puVar4 = param_10;
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

