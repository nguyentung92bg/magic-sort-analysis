/* IL2CPP: Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.UI.OnePlusFreeOfferView$$<PlayIntroAnimationIfNeeded>b__24_0
void Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_UI_OnePlusFreeOfferView___PlayIntroAnimationIfNeeded_b__24_0 (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_UI_OnePlusFreeOfferView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.UI.OnePlusFreeOfferView$$<PlayIntroAnimationIfNeeded>b__24_0
   void 
   Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_UI_OnePlusFreeOfferView___PlayIntroAnimationIfNeeded_b__24_0
   (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_UI_OnePlusFreeOfferView_o* __this,
   const MethodInfo* method); */

long Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_UI_OnePlusFreeOfferView___PlayIntroAnimationIfNeeded_b__24_0_3590ee0
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_057bc5e8;
  if ((bRam0000000005c32e34 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057bc5e8);
    FUN_012d0dc8(PTR_DAT_05777ce8);
    FUN_012d0dc8(PTR_DAT_0579c288);
    bRam0000000005c32e34 = 1;
  }
  puVar2 = PTR_DAT_0579c288;
  lVar4 = *(long *)(param_1 + 0x98);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar3 = Modules_Infrastructure_Utils_GrandStringExtensions__Localize_3de2900
                    (*(undefined8 *)puVar2,0);
  if (lVar4 != 0) {
    Modules_Infrastructure_Utils_TextSequenceAnimator__SetText_3de58d4(lVar4,uVar3,0,0);
    puVar1 = PTR_DAT_05777ce8;
    if (*(long *)(param_1 + 0x98) != 0) {
      lVar4 = Modules_Infrastructure_Utils_TextSequenceAnimator__MoveAndScale_3de60d8
                        (*(long *)(param_1 + 0x98),0);
      uVar3 = *(undefined8 *)puVar1;
      if ((lVar4 != 0) && (*(char *)(lVar4 + 0xe8) != '\0')) {
        *(long *)(lVar4 + 0x30) = param_1;
        FUN_012d0d74((long *)(lVar4 + 0x30),param_1,uVar3);
      }
      return lVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

