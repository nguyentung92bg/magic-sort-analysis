/* IL2CPP: Modules.Contexts.Home.Monetization.ChooseOneSpecialOffer.Scripts.Commands.TryToShowChooseOneSpecialOfferLobbyReturnCommand$$IsSkippable
bool Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_Commands_TryToShowChooseOneSpecialOfferLobbyReturnCommand__IsSkippable (Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_Commands_TryToShowChooseOneSpecialOfferLobbyReturnCommand_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.ChooseOneSpecialOffer.Scripts.Commands.TryToShowChooseOneSpecialOfferLobbyReturnCommand$$IsSkippable
   bool 
   Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_Commands_TryToShowChooseOneSpecialOfferLobbyReturnCommand__IsSkippable
   (Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_Commands_TryToShowChooseOneSpecialOfferLobbyReturnCommand_o*
   __this, const MethodInfo* method); */

uint Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_Commands_TryToShowChooseOneSpecialOfferLobbyReturnCommand__IsSkippable_20b2afc
               (void)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c29538 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057a4fb0);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    bRam0000000005c29538 = 1;
  }
  if (((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
      (lVar3 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar3 != 0)) &&
     (lVar3 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                        (lVar3,*(undefined8 *)PTR_DAT_057a4fb0), lVar3 != 0)) {
    uVar2 = Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferService__ShouldForceShowPopup_20ada98
                      ();
    return ~uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

