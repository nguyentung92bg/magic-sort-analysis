/* IL2CPP: Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.OnePlusFreeOfferService$$ToEventCache
Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferEventCache_o* Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__ToEventCache (MagicSort_V1_OnePlusOneOfferResponse_o* response, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.OnePlusFreeOfferService$$ToEventCache
   Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferEventCache_o*
   Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__ToEventCache
   (MagicSort_V1_OnePlusOneOfferResponse_o* response, const MethodInfo* method); */

long Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__ToEventCache_358bf60
               (long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
                    /* try { // try from 0368bf60 to 0378bf77 has its CatchHandler @ 0368bfbc */
  puVar1 = PTR_DAT_057dca40;
                    /* try { // try from 0368bf78 to 0378bfab has its CatchHandler @ 0368bef0 */
  if ((bRam0000000005c32df9 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057dca40);
    bRam0000000005c32df9 = 1;
  }
  lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                    /* try { // try from 0368bfac to 0378bfbb has its CatchHandler @ 0368bfbc */
  if ((lVar2 != 0) && (System_Object___ctor_23dfe5c(lVar2,0), param_1 != 0)) {
    *(undefined8 *)(lVar2 + 0x10) = *(undefined8 *)(param_1 + 0x18);
                    /* catch() { ... } // from try @ 0368bf60 with catch @ 0368bfbc
                       catch() { ... } // from try @ 0368bfac with catch @ 0368bfbc */
    FUN_012d0d74();
                    /* try { // try from 0368bfc0 to 0378bfc3 has its CatchHandler @ 0368bfcc */
    uVar3 = *(undefined8 *)(param_1 + 0x20);
                    /* try { // try from 0368bfc4 to 0378bfcf has its CatchHandler @ 0368bef0 */
    *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(lVar2 + 0x18) = uVar3;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0368bfc0 with catch @ 0368bfcc
                        */
    *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(param_1 + 0x30);
    *(undefined1 *)(lVar2 + 0x30) = *(undefined1 *)(param_1 + 0x38);
    *(undefined1 *)(lVar2 + 0x31) = *(undefined1 *)(param_1 + 0x39);
    *(undefined8 *)(lVar2 + 0x38) = *(undefined8 *)(param_1 + 0x40);
    FUN_012d0d74();
    *(undefined8 *)(lVar2 + 0x40) = *(undefined8 *)(param_1 + 0x48);
    FUN_012d0d74();
    uVar3 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferRewardMapper__ToRewardModels_358b13c
                      (*(undefined8 *)(param_1 + 0x58));
    *(undefined8 *)(lVar2 + 0x48) = uVar3;
    FUN_012d0d74();
    uVar3 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferRewardMapper__ToRewardModels_358b13c
                      (*(undefined8 *)(param_1 + 0x50));
    *(undefined8 *)(lVar2 + 0x50) = uVar3;
    FUN_012d0d74();
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

