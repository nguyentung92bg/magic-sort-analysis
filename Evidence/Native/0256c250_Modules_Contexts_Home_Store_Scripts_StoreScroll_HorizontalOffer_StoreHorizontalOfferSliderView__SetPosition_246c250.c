/* IL2CPP: Modules.Contexts.Home.Store.Scripts.StoreScroll.HorizontalOffer.StoreHorizontalOfferSliderView$$SetPosition
void Modules_Contexts_Home_Store_Scripts_StoreScroll_HorizontalOffer_StoreHorizontalOfferSliderView__SetPosition (Modules_Contexts_Home_Store_Scripts_StoreScroll_HorizontalOffer_StoreHorizontalOfferSliderView_o* __this, float position, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Store.Scripts.StoreScroll.HorizontalOffer.StoreHorizontalOfferSliderView$$SetPosition
   void 
   Modules_Contexts_Home_Store_Scripts_StoreScroll_HorizontalOffer_StoreHorizontalOfferSliderView__SetPosition
   (Modules_Contexts_Home_Store_Scripts_StoreScroll_HorizontalOffer_StoreHorizontalOfferSliderView_o*
   __this, float position, const MethodInfo* method); */

void Modules_Contexts_Home_Store_Scripts_StoreScroll_HorizontalOffer_StoreHorizontalOfferSliderView__SetPosition_246c250
               (undefined4 param_1,undefined8 param_2)

{
  long lVar1;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  lVar1 = UnityEngine_Component__get_transform_408b444(param_2,0);
  if (lVar1 != 0) {
    uStack_2c = 0;
    uStack_28 = 0;
    uStack_30 = param_1;
    if (pcRam0000000005c3a620 == (code *)0x0) {
      pcRam0000000005c3a620 = (code *)FUN_012d0d84(&UNK_043eef55,0);
    }
    (*pcRam0000000005c3a620)(lVar1,&uStack_30);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

