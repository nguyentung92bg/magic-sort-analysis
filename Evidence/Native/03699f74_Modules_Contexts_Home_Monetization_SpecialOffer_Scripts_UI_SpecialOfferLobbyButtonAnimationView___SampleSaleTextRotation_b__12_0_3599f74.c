/* IL2CPP: Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.UI.SpecialOfferLobbyButtonAnimationView$$<SampleSaleTextRotation>b__12_0
void Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferLobbyButtonAnimationView___SampleSaleTextRotation_b__12_0 (Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferLobbyButtonAnimationView_o* __this, float value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.UI.SpecialOfferLobbyButtonAnimationView$$<SampleSaleTextRotation>b__12_0
   void 
   Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferLobbyButtonAnimationView___SampleSaleTextRotation_b__12_0
   (Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferLobbyButtonAnimationView_o*
   __this, float value, const MethodInfo* method); */

void Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferLobbyButtonAnimationView___SampleSaleTextRotation_b__12_0_3599f74
               (long param_1)

{
  long lVar1;
  long lVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 in_s3;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  float fStack_28;
  undefined4 uStack_24;
  
  if ((*(long *)(param_1 + 0x30) != 0) &&
     (lVar1 = *(long *)(*(long *)(param_1 + 0x30) + 0x28), lVar1 != 0)) {
    lVar2 = *(long *)(param_1 + 0x18);
    fVar3 = (float)UnityEngine_AnimationCurve__Evaluate_4084894(lVar1,0);
    fVar3 = fVar3 * _UNK_04339bec;
    uVar4 = 0;
    uStack_30 = UnityEngine_Quaternion__Internal_FromEulerRad_3831834(0,0);
    if (lVar2 != 0) {
      uStack_2c = uVar4;
      fStack_28 = fVar3;
      uStack_24 = in_s3;
      if (pcRam0000000005c3a640 == (code *)0x0) {
        pcRam0000000005c3a640 = (code *)FUN_012d0d84(&UNK_043ef074,0);
      }
      (*pcRam0000000005c3a640)(lVar2,&uStack_30);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

