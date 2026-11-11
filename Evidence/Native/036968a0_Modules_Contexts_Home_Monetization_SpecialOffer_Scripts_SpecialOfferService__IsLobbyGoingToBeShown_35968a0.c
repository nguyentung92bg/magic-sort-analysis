/* IL2CPP: Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.SpecialOfferService$$IsLobbyGoingToBeShown
bool Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService__IsLobbyGoingToBeShown (Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.SpecialOfferService$$IsLobbyGoingToBeShown
   bool 
   Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService__IsLobbyGoingToBeShown
   (Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService_o* __this, const
   MethodInfo* method); */

bool Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService__IsLobbyGoingToBeShown_35968a0
               (long param_1)

{
  int iVar1;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    iVar1 = Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferStateService__GetState_35974f4
                      ();
    return iVar1 == 3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

