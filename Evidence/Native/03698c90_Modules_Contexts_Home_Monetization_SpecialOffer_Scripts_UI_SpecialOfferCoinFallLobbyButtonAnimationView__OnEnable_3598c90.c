/* IL2CPP: Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.UI.SpecialOfferCoinFallLobbyButtonAnimationView$$OnEnable
void Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferCoinFallLobbyButtonAnimationView__OnEnable (Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferCoinFallLobbyButtonAnimationView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.UI.SpecialOfferCoinFallLobbyButtonAnimationView$$OnEnable
   void 
   Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferCoinFallLobbyButtonAnimationView__OnEnable
   (Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferCoinFallLobbyButtonAnimationView_o*
   __this, const MethodInfo* method); */

void Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferCoinFallLobbyButtonAnimationView__OnEnable_3598c90
               (long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x24) = 0;
  if (lVar1 != 0) {
    if (pcRam0000000005c28c08 == (code *)0x0) {
      pcRam0000000005c28c08 = (code *)FUN_012d0d84(&UNK_0438d229,0);
    }
                    /* WARNING: Could not recover jumptable at 0x0207a074. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000005c28c08)(lVar1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

