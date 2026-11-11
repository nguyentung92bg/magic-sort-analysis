/* IL2CPP: Modules.Contexts.Home.Store.Scripts.StoreScroll.HorizontalOffer.StoreHorizontalOfferViewAdapter$$UpdateView
void Modules_Contexts_Home_Store_Scripts_StoreScroll_HorizontalOffer_StoreHorizontalOfferViewAdapter__UpdateView (Modules_Contexts_Home_Store_Scripts_StoreScroll_HorizontalOffer_StoreHorizontalOfferViewAdapter_o* __this, Modules_Contexts_Home_Store_Scripts_StoreScroll_HorizontalOffer_StoreHorizontalOfferModel_o* offerModel, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Store.Scripts.StoreScroll.HorizontalOffer.StoreHorizontalOfferViewAdapter$$UpdateView
   void 
   Modules_Contexts_Home_Store_Scripts_StoreScroll_HorizontalOffer_StoreHorizontalOfferViewAdapter__UpdateView
   (Modules_Contexts_Home_Store_Scripts_StoreScroll_HorizontalOffer_StoreHorizontalOfferViewAdapter_o*
   __this,
   Modules_Contexts_Home_Store_Scripts_StoreScroll_HorizontalOffer_StoreHorizontalOfferModel_o*
   offerModel, const MethodInfo* method); */

void Modules_Contexts_Home_Store_Scripts_StoreScroll_HorizontalOffer_StoreHorizontalOfferViewAdapter__UpdateView_246c6fc
               (long param_1,long param_2)

{
  if (param_2 == 0) goto LAB_0256c75c;
  if (*(char *)(param_2 + 0x1d) != '\0') {
    if (*(long *)(param_1 + 0x28) == 0) goto LAB_0256c75c;
    Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__MoveTo_400aeec
              (*(long *)(param_1 + 0x28),*(undefined4 *)(param_2 + 0x14),0);
    if (*(long *)(param_1 + 0x40) == 0) goto LAB_0256c75c;
    Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBarIndexClamper__ClampTo_400bac8
              (*(long *)(param_1 + 0x40),*(undefined4 *)(param_2 + 0x14),0);
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    *(undefined1 *)(*(long *)(param_1 + 0x28) + 0x1c) = *(undefined1 *)(param_2 + 0x1c);
    return;
  }
LAB_0256c75c:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

