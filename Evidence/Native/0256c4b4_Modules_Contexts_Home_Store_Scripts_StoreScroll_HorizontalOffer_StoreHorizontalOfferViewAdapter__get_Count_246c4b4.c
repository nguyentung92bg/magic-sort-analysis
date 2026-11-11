/* IL2CPP: Modules.Contexts.Home.Store.Scripts.StoreScroll.HorizontalOffer.StoreHorizontalOfferViewAdapter$$get_Count
int32_t Modules_Contexts_Home_Store_Scripts_StoreScroll_HorizontalOffer_StoreHorizontalOfferViewAdapter__get_Count (Modules_Contexts_Home_Store_Scripts_StoreScroll_HorizontalOffer_StoreHorizontalOfferViewAdapter_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Store.Scripts.StoreScroll.HorizontalOffer.StoreHorizontalOfferViewAdapter$$get_Count
   int32_t
   Modules_Contexts_Home_Store_Scripts_StoreScroll_HorizontalOffer_StoreHorizontalOfferViewAdapter__get_Count
   (Modules_Contexts_Home_Store_Scripts_StoreScroll_HorizontalOffer_StoreHorizontalOfferViewAdapter_o*
   __this, const MethodInfo* method); */

undefined4
Modules_Contexts_Home_Store_Scripts_StoreScroll_HorizontalOffer_StoreHorizontalOfferViewAdapter__get_Count_246c4b4
          (long param_1)

{
  undefined4 uVar1;
  
  if ((bRam0000000005c2b0f2 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0578b640);
    bRam0000000005c2b0f2 = 1;
  }
  if (*(long *)(param_1 + 0x58) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(long *)(param_1 + 0x58) + 0x18);
  }
  return uVar1;
}

