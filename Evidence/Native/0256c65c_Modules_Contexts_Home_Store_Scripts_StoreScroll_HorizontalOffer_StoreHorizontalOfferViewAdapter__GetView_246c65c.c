/* IL2CPP: Modules.Contexts.Home.Store.Scripts.StoreScroll.HorizontalOffer.StoreHorizontalOfferViewAdapter$$GetView
Modules_Infrastructure_Common_Scripts_Generation_Basic_BasicView_o* Modules_Contexts_Home_Store_Scripts_StoreScroll_HorizontalOffer_StoreHorizontalOfferViewAdapter__GetView (Modules_Contexts_Home_Store_Scripts_StoreScroll_HorizontalOffer_StoreHorizontalOfferViewAdapter_o* __this, int32_t index, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Store.Scripts.StoreScroll.HorizontalOffer.StoreHorizontalOfferViewAdapter$$GetView
   Modules_Infrastructure_Common_Scripts_Generation_Basic_BasicView_o*
   Modules_Contexts_Home_Store_Scripts_StoreScroll_HorizontalOffer_StoreHorizontalOfferViewAdapter__GetView
   (Modules_Contexts_Home_Store_Scripts_StoreScroll_HorizontalOffer_StoreHorizontalOfferViewAdapter_o*
   __this, int32_t index, const MethodInfo* method); */

long Modules_Contexts_Home_Store_Scripts_StoreScroll_HorizontalOffer_StoreHorizontalOfferViewAdapter__GetView_246c65c
               (long param_1,undefined4 param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  if ((bRam0000000005c2b0f4 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057ba520);
    bRam0000000005c2b0f4 = 1;
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    plVar3 = *(long **)(param_1 + 0x20);
    lVar1 = System_Collections_Generic_List_object___get_Item_21fc76c
                      (*(long *)(param_1 + 0x58),param_2,*(undefined8 *)PTR_DAT_057ba520);
    if ((lVar1 != 0) && (plVar3 != (long *)0x0)) {
      lVar1 = (**(code **)(*plVar3 + 0x1c8))
                        (plVar3,*(undefined4 *)(lVar1 + 0x10),*(undefined8 *)(*plVar3 + 0x1d0));
      if ((lVar1 != 0) &&
         (lVar2 = UnityEngine_Component__get_gameObject_408b480(lVar1,0), lVar2 != 0)) {
        UnityEngine_GameObject__SetActive_408e318(lVar2,1,0);
        return lVar1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

