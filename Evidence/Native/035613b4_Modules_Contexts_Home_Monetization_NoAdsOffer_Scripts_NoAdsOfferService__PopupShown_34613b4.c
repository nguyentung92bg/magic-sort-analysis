/* IL2CPP: Modules.Contexts.Home.Monetization.NoAdsOffer.Scripts.NoAdsOfferService$$PopupShown
void Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferService__PopupShown (Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Monetization.NoAdsOffer.Scripts.NoAdsOfferService$$PopupShown
   void Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferService__PopupShown
   (Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferService_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferService__PopupShown_34613b4
               (long param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferService__TryResetDailyPopupCount_34612b0
            ();
  lVar2 = Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferService__GetConfig_346430c
                    (param_1);
  if (lVar2 != 0) {
    uVar1 = *(undefined4 *)(lVar2 + 0x34);
                    /* try { // try from 035613d0 to 036613df has its CatchHandler @ 035613e0 */
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x44) = uVar1;
    if (*(long *)(param_1 + 0x18) != 0) {
      Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferDataService__IncreasePopupShownCount_3462bb4
                ();
                    /* catch() { ... } // from try @ 03561394 with catch @ 035613e0
                       catch() { ... } // from try @ 035613d0 with catch @ 035613e0 */
      lVar2 = *(long *)(param_1 + 0x18);
                    /* try { // try from 035613e4 to 036613e7 has its CatchHandler @ 035613f0 */
                    /* try { // try from 035613e8 to 036613f3 has its CatchHandler @ 03561110 */
      uVar3 = Modules_Infrastructure_Utils_TimeProvider__get_Now_3de7294(0);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 035613e4 with catch @ 035613f0
                        */
      if ((lVar2 != 0) && (*(long *)(lVar2 + 0x18) != 0)) {
        *(undefined8 *)(*(long *)(lVar2 + 0x18) + 0x20) = uVar3;
        *(undefined1 *)(lVar2 + 0x20) = 1;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

