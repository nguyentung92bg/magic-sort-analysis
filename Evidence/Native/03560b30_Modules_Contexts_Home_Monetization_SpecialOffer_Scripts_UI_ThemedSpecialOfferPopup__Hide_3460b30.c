/* IL2CPP: Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.UI.ThemedSpecialOfferPopup$$Hide
System_Threading_Tasks_Task_o* Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_ThemedSpecialOfferPopup__Hide (Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_ThemedSpecialOfferPopup_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.UI.ThemedSpecialOfferPopup$$Hide
   System_Threading_Tasks_Task_o*
   Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_ThemedSpecialOfferPopup__Hide
   (Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_ThemedSpecialOfferPopup_o* __this,
   const MethodInfo* method); */

undefined8
Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_ThemedSpecialOfferPopup__Hide_3460b30
          (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  puVar2 = PTR_DAT_057b8520;
  if ((bRam0000000005c32641 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05818458);
    FUN_012d0dc8(PTR_DAT_05769458);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_057fb8d0);
    FUN_012d0dc8(PTR_DAT_057b3270);
    FUN_012d0dc8(PTR_DAT_05798298);
    FUN_012d0dc8(PTR_DAT_05819fe0);
    bRam0000000005c32641 = 1;
  }
  puVar3 = PTR_DAT_05818458;
  puVar1 = PTR_DAT_05769458;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar4 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                    (*(undefined8 *)puVar1);
  lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
  if ((lVar5 != 0) &&
     (System_Action_bool____ctor_1645204(lVar5,param_1,*(undefined8 *)PTR_DAT_05819fe0,0),
     lVar4 != 0)) {
    Modules_Infrastructure_Common_Scripts_SignalNS_Signal_bool___Unsubscribe_333cb74
              (lVar4,lVar5,*(undefined8 *)PTR_DAT_057fb8d0);
    puVar2 = PTR_DAT_05798298;
    if (*(long *)(param_1 + 0x18) != 0) {
      Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferThemeController__Hide_345fc20
                ();
      if (*(long *)(param_1 + 0x20) != 0) {
        System_Threading_Tasks_TaskCompletionSource_bool___SetResult_1db4e50
                  (*(long *)(param_1 + 0x20),1,*(undefined8 *)PTR_DAT_057b3270);
      }
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      if (cRam0000000005c244b5 == '\0') {
        FUN_012d0dc8(PTR_DAT_05798298);
        cRam0000000005c244b5 = '\x01';
      }
      lVar4 = *(long *)puVar2;
      if (*(int *)(lVar4 + 0xe0) == 0) {
                    /* try { // try from 03560c8c to 03660cb3 has its CatchHandler @ 03560d14 */
        thunk_FUN_0130472c();
        lVar4 = *(long *)puVar2;
      }
      return *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x30);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

