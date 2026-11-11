/* IL2CPP: Modules.Contexts.Home.Store.Scripts.StoreScroll.HorizontalOffer.StoreHorizontalOfferSliderViewController$$GetDotPositionX
float Modules_Contexts_Home_Store_Scripts_StoreScroll_HorizontalOffer_StoreHorizontalOfferSliderViewController__GetDotPositionX (Modules_Contexts_Home_Store_Scripts_StoreScroll_HorizontalOffer_StoreHorizontalOfferSliderViewController_o* __this, int32_t index, int32_t totalDotCount, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Store.Scripts.StoreScroll.HorizontalOffer.StoreHorizontalOfferSliderViewController$$GetDotPositionX
   float 
   Modules_Contexts_Home_Store_Scripts_StoreScroll_HorizontalOffer_StoreHorizontalOfferSliderViewController__GetDotPositionX
   (Modules_Contexts_Home_Store_Scripts_StoreScroll_HorizontalOffer_StoreHorizontalOfferSliderViewController_o*
   __this, int32_t index, int32_t totalDotCount, const MethodInfo* method); */

float Modules_Contexts_Home_Store_Scripts_StoreScroll_HorizontalOffer_StoreHorizontalOfferSliderViewController__GetDotPositionX_246c468
                (long param_1,int param_2,int param_3)

{
  if (0 < param_3) {
    return *(float *)(param_1 + 0x20) * (float)param_2 +
           *(float *)(param_1 + 0x20) * (float)(param_3 + -1) * -0.5 + 0.0;
  }
  return 0.0;
}

