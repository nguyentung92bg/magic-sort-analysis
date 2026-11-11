/* IL2CPP: Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.OnePlusFreeOfferService$$.ctor
void Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService___ctor (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService_o* __this, Modules_Infrastructure_DI_CustomUpdater_o* customUpdater, Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferDataService_o* dataService, Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferStateService_o* stateService, Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferRemoteService_o* remoteService, Modules_Contexts_Application_RemoteConfig_Scripts_RemoteConfigs_o* remoteConfigs, Modules_Contexts_Application_Reward_Scripts_RewardService_o* rewardService, Modules_Contexts_Home_UI_Common_Scripts_LobbyEventController_LobbyEventsService_o* lobbyEventsService, Modules_Infrastructure_AssetManagement_AssetManager_o* assetManager, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.OnePlusFreeOfferService$$.ctor
   void Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService___ctor
   (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService_o* __this,
   Modules_Infrastructure_DI_CustomUpdater_o* customUpdater,
   Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferDataService_o*
   dataService,
   Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferStateService_o*
   stateService,
   Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferRemoteService_o*
   remoteService, Modules_Contexts_Application_RemoteConfig_Scripts_RemoteConfigs_o* remoteConfigs,
   Modules_Contexts_Application_Reward_Scripts_RewardService_o* rewardService,
   Modules_Contexts_Home_UI_Common_Scripts_LobbyEventController_LobbyEventsService_o*
   lobbyEventsService, Modules_Infrastructure_AssetManagement_AssetManager_o* assetManager, const
   MethodInfo* method); */

void Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService___ctor_358b7c4
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               undefined8 param_9)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
                    /* try { // try from 0368b7f8 to 0378b803 has its CatchHandler @ 0368b804 */
  System_Object___ctor_23dfe5c(param_1,0);
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0368b798 with catch @ 0368b804
                       catch(type#1 @ 054cbd58) { ... } // from try @ 0368b7f8 with catch @ 0368b804
                       try { // try from 0368b804 to 0378b82f has its CatchHandler @ 0368b750 */
  *(undefined8 *)(param_1 + 0x38) = param_2;
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0368b784 with catch @ 0368b810
                        */
  FUN_012d0d74((undefined8 *)(param_1 + 0x38),param_2);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  FUN_012d0d74((undefined8 *)(param_1 + 0x10),param_3);
  *(undefined8 *)(param_1 + 0x18) = param_4;
                    /* try { // try from 0368b830 to 0378b833 has its CatchHandler @ 0368b88c */
  FUN_012d0d74((undefined8 *)(param_1 + 0x18),param_4);
  *(undefined8 *)(param_1 + 0x20) = param_5;
  FUN_012d0d74((undefined8 *)(param_1 + 0x20),param_5);
                    /* try { // try from 0368b848 to 0378b84f has its CatchHandler @ 0368b8e0 */
  *(undefined8 *)(param_1 + 0x28) = param_6;
                    /* try { // try from 0368b850 to 0378b86f has its CatchHandler @ 0368b750 */
  FUN_012d0d74((undefined8 *)(param_1 + 0x28),param_6);
  *(undefined8 *)(param_1 + 0x30) = param_7;
  FUN_012d0d74((undefined8 *)(param_1 + 0x30),param_7);
  *(undefined8 *)(param_1 + 0x48) = param_8;
                    /* try { // try from 0368b870 to 0378b873 has its CatchHandler @ 0368b898 */
  FUN_012d0d74((undefined8 *)(param_1 + 0x48),param_8);
  puVar4 = (undefined8 *)(param_1 + 0x50);
  *puVar4 = param_9;
                    /* try { // try from 0368b880 to 0378b8cb has its CatchHandler @ 0368b8e0 */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0368b830 with catch @ 0368b88c
                        */
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

