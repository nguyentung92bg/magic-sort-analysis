/* IL2CPP: Modules.Contexts.Home.Store.Scripts.StoreScroll.HorizontalOffer.StoreHorizontalOfferViewController$$OnSelectedIndexChanged
void Modules_Contexts_Home_Store_Scripts_StoreScroll_HorizontalOffer_StoreHorizontalOfferViewController__OnSelectedIndexChanged (Modules_Contexts_Home_Store_Scripts_StoreScroll_HorizontalOffer_StoreHorizontalOfferViewController_o* __this, int32_t index, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Store.Scripts.StoreScroll.HorizontalOffer.StoreHorizontalOfferViewController$$OnSelectedIndexChanged
   void 
   Modules_Contexts_Home_Store_Scripts_StoreScroll_HorizontalOffer_StoreHorizontalOfferViewController__OnSelectedIndexChanged
   (Modules_Contexts_Home_Store_Scripts_StoreScroll_HorizontalOffer_StoreHorizontalOfferViewController_o*
   __this, int32_t index, const MethodInfo* method); */

void Modules_Contexts_Home_Store_Scripts_StoreScroll_HorizontalOffer_StoreHorizontalOfferViewController__OnSelectedIndexChanged_246cbc8
               (long param_1,undefined4 param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  float fVar7;
  
  puVar2 = PTR_DAT_05819a60;
  if ((bRam0000000005c2b0fa & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05819a60);
    bRam0000000005c2b0fa = 1;
  }
  lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
  if (lVar4 != 0) {
    System_Object___ctor_23dfe5c(lVar4,0);
    *(undefined4 *)(lVar4 + 0x10) = *(undefined4 *)(param_1 + 0x5c);
    *(undefined4 *)(lVar4 + 0x14) = param_2;
    iVar6 = *(int *)(param_1 + 0x58);
    *(undefined1 *)(lVar4 + 0x1d) = 0;
    *(int *)(lVar4 + 0x18) = iVar6;
    *(bool *)(lVar4 + 0x1c) = 1 < iVar6;
    if (*(long *)(param_1 + 0x18) != 0) {
      Modules_Contexts_Home_Store_Scripts_StoreScroll_HorizontalOffer_StoreHorizontalOfferViewAdapter__UpdateView_246c6fc
                (*(long *)(param_1 + 0x18),lVar4);
      lVar5 = *(long *)(param_1 + 0x20);
      if (lVar5 != 0) {
        if ((bRam0000000005c2b0f1 & 1) == 0) {
          FUN_012d0dc8(PTR_DAT_0579c120);
          FUN_012d0dc8(PTR_DAT_057f80a0);
          bRam0000000005c2b0f1 = 1;
        }
        puVar2 = PTR_DAT_057f80a0;
        lVar3 = *(long *)(lVar5 + 0x18);
        if (lVar3 != 0) {
          iVar6 = 0;
          do {
            if (*(int *)(lVar3 + 0x18) <= iVar6) {
              return;
            }
            if (lVar4 == 0) break;
            if (*(char *)(lVar4 + 0x1c) == '\0') {
              lVar3 = System_Collections_Generic_List_object___get_Item_21fc76c
                                (lVar3,iVar6,*(undefined8 *)puVar2);
LAB_0256c3e4:
              if (lVar3 == 0) break;
              Modules_Contexts_Home_Store_Scripts_StoreScroll_HorizontalOffer_StoreHorizontalOfferSliderView__Disable_246c2cc
                        (lVar3);
            }
            else {
              iVar1 = *(int *)(lVar4 + 0x18);
              lVar3 = System_Collections_Generic_List_object___get_Item_21fc76c
                                (lVar3,iVar6,*(undefined8 *)puVar2);
              if (iVar1 <= iVar6) goto LAB_0256c3e4;
              if (*(int *)(lVar4 + 0x18) < 1) {
                fVar7 = 0.0;
              }
              else {
                fVar7 = *(float *)(lVar5 + 0x20) * (float)iVar6 +
                        *(float *)(lVar5 + 0x20) * (float)(*(int *)(lVar4 + 0x18) + -1) * -0.5 + 0.0
                ;
              }
              if (lVar3 == 0) break;
              Modules_Contexts_Home_Store_Scripts_StoreScroll_HorizontalOffer_StoreHorizontalOfferSliderView__SetPosition_246c250
                        (fVar7,lVar3);
              Modules_Contexts_Home_Store_Scripts_StoreScroll_HorizontalOffer_StoreHorizontalOfferSliderView__Enable_246c288
                        (lVar3);
              if (iVar6 == *(int *)(lVar4 + 0x14)) {
                Modules_Contexts_Home_Store_Scripts_StoreScroll_HorizontalOffer_StoreHorizontalOfferSliderView__SetSelected_246c164
                          (lVar3);
              }
              else if (iVar6 == *(int *)(lVar4 + 0x10)) {
                Modules_Contexts_Home_Store_Scripts_StoreScroll_HorizontalOffer_StoreHorizontalOfferSliderView__SetSpecial_246c1d0
                          ();
              }
              else {
                Modules_Contexts_Home_Store_Scripts_StoreScroll_HorizontalOffer_StoreHorizontalOfferSliderView__SetEmpty_246c224
                          (lVar3);
              }
            }
            lVar3 = *(long *)(lVar5 + 0x18);
            iVar6 = iVar6 + 1;
          } while (lVar3 != 0);
        }
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

