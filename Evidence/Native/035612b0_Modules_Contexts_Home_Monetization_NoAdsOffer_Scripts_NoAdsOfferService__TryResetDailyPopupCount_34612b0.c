/* IL2CPP: Modules.Contexts.Home.Monetization.NoAdsOffer.Scripts.NoAdsOfferService$$TryResetDailyPopupCount
void Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferService__TryResetDailyPopupCount (Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.NoAdsOffer.Scripts.NoAdsOfferService$$TryResetDailyPopupCount
   void 
   Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferService__TryResetDailyPopupCount
   (Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferService_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferService__TryResetDailyPopupCount_34612b0
               (long param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((bRam0000000005c3266a & 1) == 0) {
                    /* try { // try from 035612d0 to 03661317 has its CatchHandler @ 0356137c */
    FUN_012d0dc8(PTR_DAT_0580b9d0);
    bRam0000000005c3266a = 1;
  }
  puVar1 = PTR_DAT_0580b9d0;
  uStack_30 = 0;
  uStack_28 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) &&
     (lVar4 = *(long *)(*(long *)(param_1 + 0x18) + 0x18), lVar4 != 0)) {
    uStack_28 = *(undefined8 *)(lVar4 + 0x20);
    uStack_30 = Modules_Infrastructure_Utils_TimeProvider__get_Now_3de7294(0);
    lVar4 = *(long *)puVar1;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_0130472c(lVar4);
    }
    iVar2 = System_DateTime__get_DayOfYear_2100200(&uStack_28,0);
    iVar3 = System_DateTime__get_DayOfYear_2100200(&uStack_30,0);
                    /* try { // try from 03561344 to 03661347 has its CatchHandler @ 03561374 */
    if (iVar2 == iVar3) {
                    /* try { // try from 03561348 to 0366135b has its CatchHandler @ 03561378 */
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
                    /* try { // try from 0356135c to 0366136b has its CatchHandler @ 03561110 */
      iVar2 = System_DateTime__get_Year_21007a4(&uStack_28,0);
                    /* try { // try from 0356136c to 0366136f has its CatchHandler @ 03561370 */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0356136c with catch @ 03561370
                       try { // try from 03561370 to 03661393 has its CatchHandler @ 03561110 */
      iVar3 = System_DateTime__get_Year_21007a4(&uStack_30,0);
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 03561344 with catch @ 03561374
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 03561348 with catch @ 03561378
                        */
      if (iVar2 == iVar3) {
        return;
      }
    }
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 035612d0 with catch @ 0356137c
                        */
    lVar4 = *(long *)(param_1 + 0x18);
    if ((lVar4 != 0) && (lVar5 = *(long *)(lVar4 + 0x18), lVar5 != 0)) {
                    /* try { // try from 03561394 to 036613ab has its CatchHandler @ 035613e0 */
      *(undefined4 *)(lVar5 + 0x18) = 0;
      *(undefined8 *)(lVar5 + 0x20) = uStack_30;
      *(undefined1 *)(lVar4 + 0x20) = 1;
                    /* try { // try from 035613ac to 036613cf has its CatchHandler @ 03561110 */
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

