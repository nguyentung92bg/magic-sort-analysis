/* IL2CPP: Modules.Contexts.Home.Store.Scripts.StoreScroll.HorizontalOffer.StoreHorizontalOfferSliderViewController$$UpdateView
void Modules_Contexts_Home_Store_Scripts_StoreScroll_HorizontalOffer_StoreHorizontalOfferSliderViewController__UpdateView (Modules_Contexts_Home_Store_Scripts_StoreScroll_HorizontalOffer_StoreHorizontalOfferSliderViewController_o* __this, Modules_Contexts_Home_Store_Scripts_StoreScroll_HorizontalOffer_StoreHorizontalOfferModel_o* model, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Store.Scripts.StoreScroll.HorizontalOffer.StoreHorizontalOfferSliderViewController$$UpdateView
   void 
   Modules_Contexts_Home_Store_Scripts_StoreScroll_HorizontalOffer_StoreHorizontalOfferSliderViewController__UpdateView
   (Modules_Contexts_Home_Store_Scripts_StoreScroll_HorizontalOffer_StoreHorizontalOfferSliderViewController_o*
   __this,
   Modules_Contexts_Home_Store_Scripts_StoreScroll_HorizontalOffer_StoreHorizontalOfferModel_o*
   model, const MethodInfo* method); */

void Modules_Contexts_Home_Store_Scripts_StoreScroll_HorizontalOffer_StoreHorizontalOfferSliderViewController__UpdateView_246c30c
               (long param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  int iVar4;
  float fVar5;
  
  if ((bRam0000000005c2b0f1 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0579c120);
    FUN_012d0dc8(PTR_DAT_057f80a0);
    bRam0000000005c2b0f1 = 1;
  }
  puVar2 = PTR_DAT_057f80a0;
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 != 0) {
    iVar4 = 0;
    do {
      if (*(int *)(lVar3 + 0x18) <= iVar4) {
        return;
      }
      if (param_2 == 0) break;
      if (*(char *)(param_2 + 0x1c) == '\0') {
        lVar3 = System_Collections_Generic_List_object___get_Item_21fc76c
                          (lVar3,iVar4,*(undefined8 *)puVar2);
LAB_0256c3e4:
        if (lVar3 == 0) break;
        Modules_Contexts_Home_Store_Scripts_StoreScroll_HorizontalOffer_StoreHorizontalOfferSliderView__Disable_246c2cc
                  (lVar3);
      }
      else {
        iVar1 = *(int *)(param_2 + 0x18);
        lVar3 = System_Collections_Generic_List_object___get_Item_21fc76c
                          (lVar3,iVar4,*(undefined8 *)puVar2);
        if (iVar1 <= iVar4) goto LAB_0256c3e4;
        if (*(int *)(param_2 + 0x18) < 1) {
          fVar5 = 0.0;
        }
        else {
          fVar5 = *(float *)(param_1 + 0x20) * (float)iVar4 +
                  *(float *)(param_1 + 0x20) * (float)(*(int *)(param_2 + 0x18) + -1) * -0.5 + 0.0;
        }
        if (lVar3 == 0) break;
        Modules_Contexts_Home_Store_Scripts_StoreScroll_HorizontalOffer_StoreHorizontalOfferSliderView__SetPosition_246c250
                  (fVar5,lVar3);
        Modules_Contexts_Home_Store_Scripts_StoreScroll_HorizontalOffer_StoreHorizontalOfferSliderView__Enable_246c288
                  (lVar3);
        if (iVar4 == *(int *)(param_2 + 0x14)) {
          Modules_Contexts_Home_Store_Scripts_StoreScroll_HorizontalOffer_StoreHorizontalOfferSliderView__SetSelected_246c164
                    (lVar3);
        }
        else if (iVar4 == *(int *)(param_2 + 0x10)) {
          Modules_Contexts_Home_Store_Scripts_StoreScroll_HorizontalOffer_StoreHorizontalOfferSliderView__SetSpecial_246c1d0
                    ();
        }
        else {
          Modules_Contexts_Home_Store_Scripts_StoreScroll_HorizontalOffer_StoreHorizontalOfferSliderView__SetEmpty_246c224
                    (lVar3);
        }
      }
      lVar3 = *(long *)(param_1 + 0x18);
      iVar4 = iVar4 + 1;
    } while (lVar3 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

