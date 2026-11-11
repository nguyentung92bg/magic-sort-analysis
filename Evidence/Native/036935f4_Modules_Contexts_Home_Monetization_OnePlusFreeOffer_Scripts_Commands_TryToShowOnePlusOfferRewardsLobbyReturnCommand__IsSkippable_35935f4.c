/* IL2CPP: Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.Commands.TryToShowOnePlusOfferRewardsLobbyReturnCommand$$IsSkippable
bool Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_Commands_TryToShowOnePlusOfferRewardsLobbyReturnCommand__IsSkippable (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_Commands_TryToShowOnePlusOfferRewardsLobbyReturnCommand_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.Commands.TryToShowOnePlusOfferRewardsLobbyReturnCommand$$IsSkippable
   bool 
   Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_Commands_TryToShowOnePlusOfferRewardsLobbyReturnCommand__IsSkippable
   (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_Commands_TryToShowOnePlusOfferRewardsLobbyReturnCommand_o*
   __this, const MethodInfo* method); */

uint Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_Commands_TryToShowOnePlusOfferRewardsLobbyReturnCommand__IsSkippable_35935f4
               (void)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c32e47 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05815878);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    bRam0000000005c32e47 = 1;
  }
  if (((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
      (lVar3 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar3 != 0)) &&
     (lVar3 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                        (lVar3,*(undefined8 *)PTR_DAT_05815878), lVar3 != 0)) {
    uVar2 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__HasPendingRewards_358da10
                      ();
    return ~uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

