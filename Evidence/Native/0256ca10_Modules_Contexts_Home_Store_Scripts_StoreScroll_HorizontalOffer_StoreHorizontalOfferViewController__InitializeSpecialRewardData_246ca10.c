/* IL2CPP: Modules.Contexts.Home.Store.Scripts.StoreScroll.HorizontalOffer.StoreHorizontalOfferViewController$$InitializeSpecialRewardData
void Modules_Contexts_Home_Store_Scripts_StoreScroll_HorizontalOffer_StoreHorizontalOfferViewController__InitializeSpecialRewardData (Modules_Contexts_Home_Store_Scripts_StoreScroll_HorizontalOffer_StoreHorizontalOfferViewController_o* __this, System_Collections_Generic_List_StoreViewModel__o* storeViewModels, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Store.Scripts.StoreScroll.HorizontalOffer.StoreHorizontalOfferViewController$$InitializeSpecialRewardData
   void 
   Modules_Contexts_Home_Store_Scripts_StoreScroll_HorizontalOffer_StoreHorizontalOfferViewController__InitializeSpecialRewardData
   (Modules_Contexts_Home_Store_Scripts_StoreScroll_HorizontalOffer_StoreHorizontalOfferViewController_o*
   __this, System_Collections_Generic_List_StoreViewModel__o* storeViewModels, const MethodInfo*
   method); */

void Modules_Contexts_Home_Store_Scripts_StoreScroll_HorizontalOffer_StoreHorizontalOfferViewController__InitializeSpecialRewardData_246ca10
               (long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  
  if ((bRam0000000005c2b0f9 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057ba520);
    bRam0000000005c2b0f9 = 1;
  }
  puVar1 = PTR_DAT_057ba520;
  if (0 < *(int *)(param_1 + 0x58)) {
    if (param_2 == 0) {
LAB_0256caa8:
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    iVar3 = 0;
    do {
      lVar2 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (param_2,iVar3,*(undefined8 *)puVar1);
      if (lVar2 == 0) goto LAB_0256caa8;
      if (*(int *)(lVar2 + 0x10) == 8) goto LAB_0256ca94;
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x58));
  }
  iVar3 = -1;
LAB_0256ca94:
  *(int *)(param_1 + 0x5c) = iVar3;
  return;
}

