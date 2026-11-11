/* IL2CPP: Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.UI.SpecialOfferPopup$$ShowAsync
System_Threading_Tasks_Task_o* Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferPopup__ShowAsync (Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferPopup_o* __this, Modules_Infrastructure_UI_Common_Scripts_PopUp_PopUpArguments_o* popUpArguments, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.UI.SpecialOfferPopup$$ShowAsync
   System_Threading_Tasks_Task_o*
   Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferPopup__ShowAsync
   (Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferPopup_o* __this,
   Modules_Infrastructure_UI_Common_Scripts_PopUp_PopUpArguments_o* popUpArguments, const
   MethodInfo* method); */

undefined8
Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferPopup__ShowAsync_359a3c4
          (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  if ((bRam0000000005c32e8c & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057b3270);
    FUN_012d0dc8(PTR_DAT_057c2a10);
    FUN_012d0dc8(PTR_DAT_058003d8);
    FUN_012d0dc8(PTR_DAT_057f41b8);
    bRam0000000005c32e8c = 1;
  }
  puVar1 = PTR_DAT_057f41b8;
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 != 0) {
    System_Threading_Tasks_TaskCompletionSource_bool___SetResult_1db4e50
              (lVar2,0,*(undefined8 *)PTR_DAT_057b3270);
  }
  lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if (lVar2 != 0) {
    System_Threading_Tasks_TaskCompletionSource_bool____ctor_1db4b60
              (lVar2,*(undefined8 *)PTR_DAT_057c2a10);
    *(long *)(param_1 + 0x20) = lVar2;
    FUN_012d0d74((long *)(param_1 + 0x20),lVar2);
    Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferPopup__Show_359a0bc
              (param_1,param_2);
    if (*(long *)(param_1 + 0x20) != 0) {
      return *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

