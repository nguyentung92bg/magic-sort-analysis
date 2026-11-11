/* IL2CPP: Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.Commands.TryToShowOnePlusFreeOfferLobbyReturnCommand$$.ctor
void Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_Commands_TryToShowOnePlusFreeOfferLobbyReturnCommand___ctor (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_Commands_TryToShowOnePlusFreeOfferLobbyReturnCommand_o* __this, Modules_Contexts_GamePlay_Loop_Scripts_ReturnToHomeSequenceService_o* returnHomeService, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.Commands.TryToShowOnePlusFreeOfferLobbyReturnCommand$$.ctor
   void 
   Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_Commands_TryToShowOnePlusFreeOfferLobbyReturnCommand___ctor
   (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_Commands_TryToShowOnePlusFreeOfferLobbyReturnCommand_o*
   __this, Modules_Contexts_GamePlay_Loop_Scripts_ReturnToHomeSequenceService_o* returnHomeService,
   const MethodInfo* method); */

void Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_Commands_TryToShowOnePlusFreeOfferLobbyReturnCommand___ctor_3593030
               (long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  System_Object___ctor_23dfe5c(param_1,0);
  puVar4 = (undefined8 *)(param_1 + 0x18);
  *puVar4 = param_2;
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

