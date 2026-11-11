/* IL2CPP: Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.UI.OnePlusFreeOfferView$$Hide
void Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_UI_OnePlusFreeOfferView__Hide (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_UI_OnePlusFreeOfferView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x01fda9f0) */
/* WARNING: Removing unreachable block (ram,0x01fdaa04) */
/* WARNING: Removing unreachable block (ram,0x01fdaa08) */
/* IL2CPP: Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.UI.OnePlusFreeOfferView$$Hide
   void Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_UI_OnePlusFreeOfferView__Hide
   (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_UI_OnePlusFreeOfferView_o* __this,
   const MethodInfo* method); */

undefined4
Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_UI_OnePlusFreeOfferView__Hide_358f780
          (long param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  
                    /* try { // try from 0368f788 to 0378f7ab has its CatchHandler @ 0368f878 */
  if ((bRam0000000005c32e2b & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    bRam0000000005c32e2b = 1;
  }
                    /* try { // try from 0368f7b4 to 0378f7b7 has its CatchHandler @ 0368f7e4 */
                    /* try { // try from 0368f7b8 to 0378f7bf has its CatchHandler @ 0368f914 */
  if ((*(long *)(param_1 + 0x20) != 0) &&
     (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_UI_OnePlusFreeOfferRewardColumnView__Recycle_358ff18
                (), *(long *)(param_1 + 0x28) != 0)) {
                    /* try { // try from 0368f7c0 to 0378f7c3 has its CatchHandler @ 0368f7f4 */
    Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_UI_OnePlusFreeOfferRewardColumnView__Recycle_358ff18
              ();
                    /* try { // try from 0368f7c4 to 0378f7c7 has its CatchHandler @ 0368f7f0 */
                    /* try { // try from 0368f7c8 to 0378f7cb has its CatchHandler @ 0368f7ec */
                    /* try { // try from 0368f7cc to 0378f7d3 has its CatchHandler @ 0368f914 */
    lVar3 = UnityEngine_Component__get_gameObject_408b480(param_1,0);
    puVar1 = PTR_DAT_057815e0;
    if (lVar3 != 0) {
                    /* try { // try from 0368f7d4 to 0378f7d7 has its CatchHandler @ 0368f7e8 */
                    /* try { // try from 0368f7d8 to 0378f7db has its CatchHandler @ 0368f7e0 */
                    /* try { // try from 0368f7dc to 0378f7df has its CatchHandler @ 0368f818 */
                    /* catch() { ... } // from try @ 0368f7d8 with catch @ 0368f7e0
                       try { // try from 0368f7e0 to 0378f8bb has its CatchHandler @ 0368f030 */
                    /* catch() { ... } // from try @ 0368f7b4 with catch @ 0368f7e4 */
      UnityEngine_GameObject__SetActive_408e318(lVar3,0,0);
                    /* catch() { ... } // from try @ 0368f7d4 with catch @ 0368f7e8 */
                    /* catch() { ... } // from try @ 0368f7c8 with catch @ 0368f7ec */
                    /* catch() { ... } // from try @ 0368f7c4 with catch @ 0368f7f0 */
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                    /* catch() { ... } // from try @ 0368f7c0 with catch @ 0368f7f4 */
        thunk_FUN_0130472c();
      }
      if ((bRam0000000005c28433 & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_057815e0,0,0);
        FUN_012d0dc8(PTR_DAT_058163b8);
        bRam0000000005c28433 = 1;
      }
      if (param_1 == 0) {
        uVar2 = 0;
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_058163b8 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        uVar2 = DG_Tweening_Core_TweenManager__FilteredOperation_3331d1c(0,1,1,param_1,0,0,0,0);
      }
      return uVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0368f6a0 with catch @ 0368f810 */
  FUN_012d0ef0();
}

