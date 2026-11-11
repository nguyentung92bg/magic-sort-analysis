/* IL2CPP: Modules.Contexts.Home.Store.Scripts.StoreScroll.HorizontalOffer.StoreHorizontalOfferViewController$$UpdateColliderSize
void Modules_Contexts_Home_Store_Scripts_StoreScroll_HorizontalOffer_StoreHorizontalOfferViewController__UpdateColliderSize (Modules_Contexts_Home_Store_Scripts_StoreScroll_HorizontalOffer_StoreHorizontalOfferViewController_o* __this, int32_t viewModelCount, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Store.Scripts.StoreScroll.HorizontalOffer.StoreHorizontalOfferViewController$$UpdateColliderSize
   void 
   Modules_Contexts_Home_Store_Scripts_StoreScroll_HorizontalOffer_StoreHorizontalOfferViewController__UpdateColliderSize
   (Modules_Contexts_Home_Store_Scripts_StoreScroll_HorizontalOffer_StoreHorizontalOfferViewController_o*
   __this, int32_t viewModelCount, const MethodInfo* method); */

void Modules_Contexts_Home_Store_Scripts_StoreScroll_HorizontalOffer_StoreHorizontalOfferViewController__UpdateColliderSize_246caac
               (long param_1,int param_2)

{
  long lVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  lVar1 = *(long *)(param_1 + 0x30);
  if (param_2 == 1) {
    if (lVar1 != 0) {
      UnityEngine_BoxCollider2D__set_size_2e26350
                (*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54),lVar1,0);
      lVar1 = *(long *)(param_1 + 0x30);
      if (lVar1 != 0) {
        puVar2 = (undefined4 *)(param_1 + 0x4c);
        puVar3 = (undefined4 *)(param_1 + 0x48);
LAB_0256cb04:
        uStack_14 = *puVar2;
        uStack_18 = *puVar3;
        if (pcRam0000000005c30008 == (code *)0x0) {
          pcRam0000000005c30008 = (code *)FUN_012d0d84(&UNK_04397158,0);
        }
        (*pcRam0000000005c30008)(lVar1,&uStack_18);
        return;
      }
    }
  }
  else if (lVar1 != 0) {
    UnityEngine_BoxCollider2D__set_size_2e26350
              (*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44),lVar1,0);
    lVar1 = *(long *)(param_1 + 0x30);
    if (lVar1 != 0) {
      puVar2 = (undefined4 *)(param_1 + 0x3c);
      puVar3 = (undefined4 *)(param_1 + 0x38);
      goto LAB_0256cb04;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

