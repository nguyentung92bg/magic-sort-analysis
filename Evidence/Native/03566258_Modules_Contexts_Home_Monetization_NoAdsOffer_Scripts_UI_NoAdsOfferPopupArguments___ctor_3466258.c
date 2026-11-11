/* IL2CPP: Modules.Contexts.Home.Monetization.NoAdsOffer.Scripts.UI.NoAdsOfferPopupArguments$$.ctor
void Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_UI_NoAdsOfferPopupArguments___ctor (Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_UI_NoAdsOfferPopupArguments_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Monetization.NoAdsOffer.Scripts.UI.NoAdsOfferPopupArguments$$.ctor
   void Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_UI_NoAdsOfferPopupArguments___ctor
   (Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_UI_NoAdsOfferPopupArguments_o* __this,
   const MethodInfo* method); */

void Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_UI_NoAdsOfferPopupArguments___ctor_3466258
               (long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  
  puVar4 = PTR_DAT_05761548;
  if ((bRam0000000005c32678 & 1) == 0) {
                    /* try { // try from 03566278 to 0366627b has its CatchHandler @ 03566284 */
                    /* try { // try from 0356627c to 0366627f has its CatchHandler @ 03566280 */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0356627c with catch @ 03566280
                       try { // try from 03566280 to 036662a3 has its CatchHandler @ 03566058 */
    FUN_012d0dc8(PTR_DAT_05761548);
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 03566278 with catch @ 03566284
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0356611c with catch @ 03566288
                        */
    bRam0000000005c32678 = 1;
  }
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 035660e4 with catch @ 0356628c
                        */
  Modules_Infrastructure_UI_Common_Scripts_PopUp_PopUpArguments___ctor_4001ff0(param_1,0);
  puVar5 = (undefined8 *)(param_1 + 0x10);
  *puVar5 = *(undefined8 *)puVar4;
                    /* try { // try from 035662a4 to 036662bb has its CatchHandler @ 03566344 */
  if (iRam0000000005c3d478 != 0) {
    puVar1 = (ulong *)(((ulong)puVar5 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar5 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}

