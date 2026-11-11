/* IL2CPP: Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.UI.OnePlusFreeOfferIAPButton$$add_OnIAPButtonClicked
void Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_UI_OnePlusFreeOfferIAPButton__add_OnIAPButtonClicked (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_UI_OnePlusFreeOfferIAPButton_o* __this, System_Action_OnePlusFreeOfferPackageType__o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.UI.OnePlusFreeOfferIAPButton$$add_OnIAPButtonClicked
   void 
   Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_UI_OnePlusFreeOfferIAPButton__add_OnIAPButtonClicked
   (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_UI_OnePlusFreeOfferIAPButton_o*
   __this, System_Action_OnePlusFreeOfferPackageType__o* value, const MethodInfo* method); */

void Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_UI_OnePlusFreeOfferIAPButton__add_OnIAPButtonClicked_358e978
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
                    /* catch() { ... } // from try @ 0368e8d0 with catch @ 0368e978
                       catch() { ... } // from try @ 0368e94c with catch @ 0368e978 */
                    /* try { // try from 0368e980 to 0378e98b has its CatchHandler @ 0368e358 */
                    /* catch() { ... } // from try @ 0368e8b0 with catch @ 0368e988
                       catch() { ... } // from try @ 0368e95c with catch @ 0368e988 */
  if ((bRam0000000005c32e15 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d6500);
    bRam0000000005c32e15 = 1;
  }
  puVar1 = PTR_DAT_057d6500;
  lVar5 = *(long *)(param_1 + 0x48);
  do {
    lVar3 = System_Delegate__Combine_23e3964(lVar5,param_2,0);
    if (lVar3 == 0) {
      lVar4 = 0;
    }
    else {
      uVar6 = *(undefined8 *)puVar1;
      lVar4 = thunk_FUN_01320d5c(lVar3,uVar6);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d1288(lVar3,uVar6);
      }
    }
                    /* try { // try from 0368e9f8 to 0378eaef has its CatchHandler @ 0368e9f8
                       catch() { ... } // from try @ 0368e9f8 with catch @ 0368e9f8
                       catch() { ... } // from try @ 0368edd8 with catch @ 0368e9f8
                       catch() { ... } // from try @ 0368eedc with catch @ 0368e9f8
                       catch() { ... } // from try @ 0368ef50 with catch @ 0368e9f8
                       catch() { ... } // from try @ 0368efb8 with catch @ 0368e9f8 */
    lVar3 = FUN_01351224((long *)(param_1 + 0x48),lVar4,lVar5);
    bVar2 = lVar5 != lVar3;
    lVar5 = lVar3;
  } while (bVar2);
  return;
}

