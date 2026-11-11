/* IL2CPP: Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.UI.SpecialOfferLobbyButtonAnimationView$$<SampleSaleTextPosition>b__14_0
void Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferLobbyButtonAnimationView___SampleSaleTextPosition_b__14_0 (Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferLobbyButtonAnimationView_o* __this, float value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.UI.SpecialOfferLobbyButtonAnimationView$$<SampleSaleTextPosition>b__14_0
   void 
   Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferLobbyButtonAnimationView___SampleSaleTextPosition_b__14_0
   (Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferLobbyButtonAnimationView_o*
   __this, float value, const MethodInfo* method); */

void Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferLobbyButtonAnimationView___SampleSaleTextPosition_b__14_0_3599fcc
               (undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_2 + 0x18);
  if (lVar2 != 0) {
    UnityEngine_Transform__get_localPosition_4092c40(lVar2,0);
    if ((*(long *)(param_2 + 0x30) != 0) &&
       (lVar1 = *(long *)(*(long *)(param_2 + 0x30) + 0x20), lVar1 != 0)) {
      UnityEngine_AnimationCurve__Evaluate_4084894(param_1,lVar1,0);
      if (*(long *)(param_2 + 0x18) != 0) {
        UnityEngine_Transform__get_localPosition_4092c40(*(long *)(param_2 + 0x18),0);
        if (pcRam0000000005c3a620 == (code *)0x0) {
          pcRam0000000005c3a620 = (code *)FUN_012d0d84(&UNK_043eef55,0);
        }
        (*pcRam0000000005c3a620)(lVar2,&stack0xffffffffffffffd0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

