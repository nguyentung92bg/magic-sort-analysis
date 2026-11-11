/* IL2CPP: Modules.Contexts.Home.Store.Scripts.StoreScroll.HorizontalOffer.StoreHorizontalOfferSliderView$$SetEmpty
void Modules_Contexts_Home_Store_Scripts_StoreScroll_HorizontalOffer_StoreHorizontalOfferSliderView__SetEmpty (Modules_Contexts_Home_Store_Scripts_StoreScroll_HorizontalOffer_StoreHorizontalOfferSliderView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Store.Scripts.StoreScroll.HorizontalOffer.StoreHorizontalOfferSliderView$$SetEmpty
   void 
   Modules_Contexts_Home_Store_Scripts_StoreScroll_HorizontalOffer_StoreHorizontalOfferSliderView__SetEmpty
   (Modules_Contexts_Home_Store_Scripts_StoreScroll_HorizontalOffer_StoreHorizontalOfferSliderView_o*
   __this, const MethodInfo* method); */

void Modules_Contexts_Home_Store_Scripts_StoreScroll_HorizontalOffer_StoreHorizontalOfferSliderView__SetEmpty_246c224
               (long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  UnityEngine_SpriteRenderer__set_sprite_4095b64
            (*(long *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x38),0);
  if (*(long *)(param_1 + 0x28) != 0) {
    UnityEngine_SpriteRenderer__set_color_4095de0(0,0,0,0,*(long *)(param_1 + 0x28),0);
    lVar1 = *(long *)(param_1 + 0x18);
    if (lVar1 != 0) {
      if (pcRam0000000005c28be8 == (code *)0x0) {
        pcRam0000000005c28be8 = (code *)FUN_012d0d84(&UNK_0438d18b);
      }
                    /* WARNING: Could not recover jumptable at 0x02079ea4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000005c28be8)(lVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

