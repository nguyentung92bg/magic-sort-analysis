/* IL2CPP: Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.Commands.TryToShowNoAdsOfferLobbyReturnCommand$$.ctor
void Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_Commands_TryToShowNoAdsOfferLobbyReturnCommand___ctor (Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_Commands_TryToShowNoAdsOfferLobbyReturnCommand_o* __this, Modules_Contexts_GamePlay_Loop_Scripts_ReturnToHomeSequenceService_o* returnHomeService, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.Commands.TryToShowNoAdsOfferLobbyReturnCommand$$.ctor
   void 
   Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_Commands_TryToShowNoAdsOfferLobbyReturnCommand___ctor
   (Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_Commands_TryToShowNoAdsOfferLobbyReturnCommand_o*
   __this, Modules_Contexts_GamePlay_Loop_Scripts_ReturnToHomeSequenceService_o* returnHomeService,
   const MethodInfo* method); */

void Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_Commands_TryToShowNoAdsOfferLobbyReturnCommand___ctor_3460ce0
               (long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
                    /* try { // try from 03560ce0 to 03660cf3 has its CatchHandler @ 03560d10 */
                    /* try { // try from 03560cf4 to 03660d03 has its CatchHandler @ 03560adc */
  System_Object___ctor_23dfe5c(param_1,0);
  puVar4 = (undefined8 *)(param_1 + 0x18);
  *puVar4 = param_2;
                    /* try { // try from 03560d04 to 03660d07 has its CatchHandler @ 03560d08 */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 03560d04 with catch @ 03560d08
                       try { // try from 03560d08 to 03660d2b has its CatchHandler @ 03560adc */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 03560cdc with catch @ 03560d0c
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

