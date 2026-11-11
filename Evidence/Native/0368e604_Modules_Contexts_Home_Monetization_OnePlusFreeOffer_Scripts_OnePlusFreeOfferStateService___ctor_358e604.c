/* IL2CPP: Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.OnePlusFreeOfferStateService$$.ctor
void Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferStateService___ctor (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferStateService_o* __this, Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService_o* onePlusFreeOfferService, Modules_Contexts_Application_RemoteConfig_Scripts_RemoteConfigs_o* remoteConfigs, Modules_Infrastructure_UI_Common_Scripts_PopUp_IPopUpService_o* popUpService, Modules_Contexts_Application_Player_Scripts_IPlayerService_o* playerService, Modules_Contexts_Application_Ads_Scripts_AdService_o* adService, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.OnePlusFreeOfferStateService$$.ctor
   void 
   Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferStateService___ctor
   (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferStateService_o*
   __this, Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService_o*
   onePlusFreeOfferService, Modules_Contexts_Application_RemoteConfig_Scripts_RemoteConfigs_o*
   remoteConfigs, Modules_Infrastructure_UI_Common_Scripts_PopUp_IPopUpService_o* popUpService,
   Modules_Contexts_Application_Player_Scripts_IPlayerService_o* playerService,
   Modules_Contexts_Application_Ads_Scripts_AdService_o* adService, const MethodInfo* method); */

void Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferStateService___ctor_358e604
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
                    /* try { // try from 0368e618 to 0378e61b has its CatchHandler @ 0368e820 */
  *(undefined4 *)(param_1 + 0x30) = 2;
                    /* try { // try from 0368e638 to 0378e63b has its CatchHandler @ 0368e810 */
  System_Object___ctor_23dfe5c(param_1,0);
                    /* try { // try from 0368e640 to 0378e64b has its CatchHandler @ 0368e808 */
  *(undefined8 *)(param_1 + 0x10) = param_2;
  FUN_012d0d74((undefined8 *)(param_1 + 0x10),param_2);
                    /* try { // try from 0368e650 to 0378e65b has its CatchHandler @ 0368e804 */
  *(undefined8 *)(param_1 + 0x20) = param_3;
  FUN_012d0d74((undefined8 *)(param_1 + 0x20),param_3);
  *(undefined8 *)(param_1 + 0x28) = param_4;
  FUN_012d0d74((undefined8 *)(param_1 + 0x28),param_4);
  *(undefined8 *)(param_1 + 0x18) = param_5;
                    /* try { // try from 0368e674 to 0378e67b has its CatchHandler @ 0368e7dc */
  FUN_012d0d74((undefined8 *)(param_1 + 0x18),param_5);
  puVar4 = (undefined8 *)(param_1 + 0x38);
  *puVar4 = param_6;
                    /* try { // try from 0368e688 to 0378e69f has its CatchHandler @ 0368e7e4 */
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

