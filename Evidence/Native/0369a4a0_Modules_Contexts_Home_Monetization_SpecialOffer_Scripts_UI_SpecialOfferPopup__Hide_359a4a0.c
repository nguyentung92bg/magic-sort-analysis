/* IL2CPP: Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.UI.SpecialOfferPopup$$Hide
System_Threading_Tasks_Task_o* Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferPopup__Hide (Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferPopup_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.UI.SpecialOfferPopup$$Hide
   System_Threading_Tasks_Task_o*
   Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferPopup__Hide
   (Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferPopup_o* __this, const
   MethodInfo* method); */

undefined8
Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferPopup__Hide_359a4a0
          (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c32e8d & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05818458);
    FUN_012d0dc8(PTR_DAT_057f83f8);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_05769458);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_057fb8d0);
    FUN_012d0dc8(PTR_DAT_0575d2a8);
    FUN_012d0dc8(PTR_DAT_057b3270);
    FUN_012d0dc8(PTR_DAT_05798298);
    bRam0000000005c32e8d = 1;
  }
  if (((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
      (lVar4 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar4 != 0)) &&
     (lVar4 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                        (lVar4,*(undefined8 *)PTR_DAT_057f83f8), puVar3 = PTR_DAT_05818458,
     puVar2 = PTR_DAT_057b8520, puVar1 = PTR_DAT_05769458, lVar4 != 0)) {
    Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService__ResetOngoingTransaction_3161724
              (lVar4,0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    lVar4 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                      (*(undefined8 *)puVar1);
    lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
    if ((lVar5 != 0) &&
       (System_Action_bool____ctor_1645204(lVar5,param_1,*(undefined8 *)PTR_DAT_0575d2a8,0),
       lVar4 != 0)) {
      Modules_Infrastructure_Common_Scripts_SignalNS_Signal_bool___Unsubscribe_333cb74
                (lVar4,lVar5,*(undefined8 *)PTR_DAT_057fb8d0);
      puVar1 = PTR_DAT_05798298;
      if (*(long *)(param_1 + 0x18) != 0) {
        Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferController__Hide_3598f24
                  ();
        if (*(long *)(param_1 + 0x20) != 0) {
          System_Threading_Tasks_TaskCompletionSource_bool___SetResult_1db4e50
                    (*(long *)(param_1 + 0x20),1,*(undefined8 *)PTR_DAT_057b3270);
        }
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        if (cRam0000000005c244b5 == '\0') {
          FUN_012d0dc8(PTR_DAT_05798298);
          cRam0000000005c244b5 = '\x01';
        }
        lVar4 = *(long *)puVar1;
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_0130472c();
          lVar4 = *(long *)puVar1;
        }
        return *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x30);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

