/* IL2CPP: Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.UI.SpecialOfferLobbyButtonAnimationView$$<IconScale>b__10_0
void Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferLobbyButtonAnimationView___IconScale_b__10_0 (Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferLobbyButtonAnimationView_o* __this, float value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.UI.SpecialOfferLobbyButtonAnimationView$$<IconScale>b__10_0
   void 
   Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferLobbyButtonAnimationView___IconScale_b__10_0
   (Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferLobbyButtonAnimationView_o*
   __this, float value, const MethodInfo* method); */

void Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferLobbyButtonAnimationView___IconScale_b__10_0_3599f34
               (long param_1)

{
  long lVar1;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  if ((*(long *)(param_1 + 0x30) != 0) &&
     (lVar1 = *(long *)(*(long *)(param_1 + 0x30) + 0x60), lVar1 != 0)) {
    uStack_30 = UnityEngine_AnimationCurve__Evaluate_4084894(lVar1,0);
    lVar1 = *(long *)(param_1 + 0x38);
    if (lVar1 != 0) {
      uStack_2c = uStack_30;
      uStack_28 = uStack_30;
      if (pcRam0000000005c3a650 == (code *)0x0) {
        pcRam0000000005c3a650 = (code *)FUN_012d0d84(&UNK_043ef104,0);
      }
      (*pcRam0000000005c3a650)(lVar1,&uStack_30);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

