/* IL2CPP: Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.UI.OnePlusFreeOfferPopup$$Hide
System_Threading_Tasks_Task_o* Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_UI_OnePlusFreeOfferPopup__Hide (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_UI_OnePlusFreeOfferPopup_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.UI.OnePlusFreeOfferPopup$$Hide
   System_Threading_Tasks_Task_o*
   Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_UI_OnePlusFreeOfferPopup__Hide
   (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_UI_OnePlusFreeOfferPopup_o* __this,
   const MethodInfo* method); */

undefined8
Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_UI_OnePlusFreeOfferPopup__Hide_358f5a8
          (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  puVar2 = PTR_DAT_057b8520;
  if ((bRam0000000005c32e1e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05818458);
    FUN_012d0dc8(PTR_DAT_057f83f8);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057d5600);
    FUN_012d0dc8(PTR_DAT_05769458);
                    /* try { // try from 0368f60c to 0378f643 has its CatchHandler @ 0368f844 */
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_057fb8d0);
    FUN_012d0dc8(PTR_DAT_057b3270);
    FUN_012d0dc8(PTR_DAT_05798298);
    bRam0000000005c32e1e = 1;
  }
  puVar3 = PTR_DAT_05818458;
  puVar1 = PTR_DAT_05769458;
                    /* try { // try from 0368f658 to 0378f663 has its CatchHandler @ 0368f814 */
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar4 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                    (*(undefined8 *)puVar1);
  lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
                    /* try { // try from 0368f694 to 0378f69b has its CatchHandler @ 0368f818 */
  if ((lVar5 != 0) &&
     (System_Action_bool____ctor_1645204(lVar5,param_1,*(undefined8 *)PTR_DAT_057d5600,0),
     puVar2 = PTR_DAT_0576aae0, lVar4 != 0)) {
                    /* try { // try from 0368f6a0 to 0378f6ab has its CatchHandler @ 0368f810 */
                    /* try { // try from 0368f6b0 to 0378f6bb has its CatchHandler @ 0368f80c */
    Modules_Infrastructure_Common_Scripts_SignalNS_Signal_bool___Unsubscribe_333cb74
              (lVar4,lVar5,*(undefined8 *)PTR_DAT_057fb8d0);
                    /* try { // try from 0368f6d4 to 0378f6db has its CatchHandler @ 0368f7fc */
                    /* try { // try from 0368f6e4 to 0378f6ef has its CatchHandler @ 0368f7f8 */
    if ((**(long **)(*(long *)puVar2 + 0xb8) != 0) &&
       ((lVar4 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18), lVar4 != 0 &&
        (lVar4 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                           (lVar4,*(undefined8 *)PTR_DAT_057f83f8), lVar4 != 0)))) {
      Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService__ResetOngoingTransaction_3161724
                (lVar4,0);
      puVar2 = PTR_DAT_05798298;
      if (*(long *)(param_1 + 0x18) != 0) {
        Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_UI_OnePlusFreeOfferView__Hide_358f780
                  ();
                    /* try { // try from 0368f708 to 0378f70f has its CatchHandler @ 0368f834 */
        if (*(long *)(param_1 + 0x20) != 0) {
          System_Threading_Tasks_TaskCompletionSource_bool___SetResult_1db4e50
                    (*(long *)(param_1 + 0x20),1,*(undefined8 *)PTR_DAT_057b3270);
        }
                    /* try { // try from 0368f720 to 0378f72b has its CatchHandler @ 0368f830 */
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        if (cRam0000000005c244b5 == '\0') {
                    /* try { // try from 0368f744 to 0378f74b has its CatchHandler @ 0368f820 */
          FUN_012d0dc8(PTR_DAT_05798298);
          cRam0000000005c244b5 = '\x01';
        }
        lVar4 = *(long *)puVar2;
        if (*(int *)(lVar4 + 0xe0) == 0) {
                    /* try { // try from 0368f75c to 0378f767 has its CatchHandler @ 0368f81c */
          thunk_FUN_0130472c();
          lVar4 = *(long *)puVar2;
        }
        return *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x30);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

