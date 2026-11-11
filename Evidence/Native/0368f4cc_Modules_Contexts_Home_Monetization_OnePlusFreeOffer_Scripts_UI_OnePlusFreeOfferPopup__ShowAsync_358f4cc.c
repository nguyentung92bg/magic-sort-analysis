/* IL2CPP: Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.UI.OnePlusFreeOfferPopup$$ShowAsync
System_Threading_Tasks_Task_o* Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_UI_OnePlusFreeOfferPopup__ShowAsync (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_UI_OnePlusFreeOfferPopup_o* __this, Modules_Infrastructure_UI_Common_Scripts_PopUp_PopUpArguments_o* popUpArguments, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.UI.OnePlusFreeOfferPopup$$ShowAsync
   System_Threading_Tasks_Task_o*
   Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_UI_OnePlusFreeOfferPopup__ShowAsync
   (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_UI_OnePlusFreeOfferPopup_o* __this,
   Modules_Infrastructure_UI_Common_Scripts_PopUp_PopUpArguments_o* popUpArguments, const
   MethodInfo* method); */

undefined8
Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_UI_OnePlusFreeOfferPopup__ShowAsync_358f4cc
          (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
                    /* try { // try from 0368f4dc to 0378f4ef has its CatchHandler @ 0368f874 */
  if ((bRam0000000005c32e1d & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057b3270);
    FUN_012d0dc8(PTR_DAT_057c2a10);
    FUN_012d0dc8(PTR_DAT_058003d8);
                    /* try { // try from 0368f510 to 0378f523 has its CatchHandler @ 0368f870 */
    FUN_012d0dc8(PTR_DAT_057f41b8);
    bRam0000000005c32e1d = 1;
  }
  puVar1 = PTR_DAT_057f41b8;
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 != 0) {
                    /* try { // try from 0368f538 to 0378f54b has its CatchHandler @ 0368f898 */
    System_Threading_Tasks_TaskCompletionSource_bool___SetResult_1db4e50
              (lVar2,0,*(undefined8 *)PTR_DAT_057b3270);
  }
  lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if (lVar2 != 0) {
                    /* try { // try from 0368f564 to 0378f577 has its CatchHandler @ 0368f914 */
    System_Threading_Tasks_TaskCompletionSource_bool____ctor_1db4b60
              (lVar2,*(undefined8 *)PTR_DAT_057c2a10);
    *(long *)(param_1 + 0x20) = lVar2;
                    /* try { // try from 0368f578 to 0378f60b has its CatchHandler @ 0368f030 */
    FUN_012d0d74((long *)(param_1 + 0x20),lVar2);
    Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_UI_OnePlusFreeOfferPopup__Show_358f0bc
              (param_1,param_2);
    if (*(long *)(param_1 + 0x20) != 0) {
      return *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

