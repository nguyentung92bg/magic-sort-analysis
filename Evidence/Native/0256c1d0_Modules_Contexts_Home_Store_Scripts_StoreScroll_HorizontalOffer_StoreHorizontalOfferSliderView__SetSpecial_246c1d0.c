/* IL2CPP: Modules.Contexts.Home.Store.Scripts.StoreScroll.HorizontalOffer.StoreHorizontalOfferSliderView$$SetSpecial
void Modules_Contexts_Home_Store_Scripts_StoreScroll_HorizontalOffer_StoreHorizontalOfferSliderView__SetSpecial (Modules_Contexts_Home_Store_Scripts_StoreScroll_HorizontalOffer_StoreHorizontalOfferSliderView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Store.Scripts.StoreScroll.HorizontalOffer.StoreHorizontalOfferSliderView$$SetSpecial
   void 
   Modules_Contexts_Home_Store_Scripts_StoreScroll_HorizontalOffer_StoreHorizontalOfferSliderView__SetSpecial
   (Modules_Contexts_Home_Store_Scripts_StoreScroll_HorizontalOffer_StoreHorizontalOfferSliderView_o*
   __this, const MethodInfo* method); */

void Modules_Contexts_Home_Store_Scripts_StoreScroll_HorizontalOffer_StoreHorizontalOfferSliderView__SetSpecial_246c1d0
               (long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    UnityEngine_SpriteRenderer__set_sprite_4095b64
              (*(long *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x38),0);
    if (*(long *)(param_1 + 0x28) != 0) {
      UnityEngine_SpriteRenderer__set_color_4095de0
                (0x3f800000,0x3f800000,0x3f800000,0x3f800000,*(long *)(param_1 + 0x28),0);
      lVar1 = *(long *)(param_1 + 0x18);
      if (lVar1 != 0) {
        if (pcRam0000000005c28c08 == (code *)0x0) {
          pcRam0000000005c28c08 = (code *)FUN_012d0d84(&UNK_0438d229,0);
        }
                    /* WARNING: Could not recover jumptable at 0x0207a074. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000005c28c08)(lVar1,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

