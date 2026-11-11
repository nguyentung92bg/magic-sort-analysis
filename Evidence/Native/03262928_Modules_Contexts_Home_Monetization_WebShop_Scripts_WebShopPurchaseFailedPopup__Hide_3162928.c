/* IL2CPP: Modules.Contexts.Home.Monetization.WebShop.Scripts.WebShopPurchaseFailedPopup$$Hide
System_Threading_Tasks_Task_o* Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopPurchaseFailedPopup__Hide (Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopPurchaseFailedPopup_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Monetization.WebShop.Scripts.WebShopPurchaseFailedPopup$$Hide
   System_Threading_Tasks_Task_o*
   Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopPurchaseFailedPopup__Hide
   (Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopPurchaseFailedPopup_o* __this, const
   MethodInfo* method); */

undefined8
Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopPurchaseFailedPopup__Hide_3162928
          (long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_0578b048;
  if ((bRam0000000005c3151f & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0578b048);
    FUN_012d0dc8(PTR_DAT_057b3270);
    FUN_012d0dc8(PTR_DAT_05798298);
    FUN_012d0dc8(PTR_DAT_058121e0);
    FUN_012d0dc8(PTR_DAT_058037a8);
    bRam0000000005c3151f = 1;
  }
  lVar3 = *(long *)(param_1 + 0x18);
  lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if ((lVar2 != 0) &&
     (System_Action___ctor_21239bc(lVar2,param_1,*(undefined8 *)PTR_DAT_058037a8,0), lVar3 != 0)) {
    Modules_Infrastructure_UI_Common_Scripts_ButtonNS_Button__remove_OnSelectSuccessEvent_4006260
              (lVar3,lVar2,0);
    lVar3 = *(long *)(param_1 + 0x20);
    lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    if ((lVar2 != 0) &&
       (System_Action___ctor_21239bc(lVar2,param_1,*(undefined8 *)PTR_DAT_058121e0,0), lVar3 != 0))
    {
      Modules_Infrastructure_UI_Common_Scripts_ButtonNS_Button__remove_OnSelectSuccessEvent_4006260
                (lVar3,lVar2,0);
      puVar1 = PTR_DAT_05798298;
      if (*(long *)(param_1 + 0x28) != 0) {
        System_Threading_Tasks_TaskCompletionSource_bool___SetResult_1db4e50
                  (*(long *)(param_1 + 0x28),1,*(undefined8 *)PTR_DAT_057b3270);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        if (cRam0000000005c244b5 == '\0') {
          FUN_012d0dc8(PTR_DAT_05798298);
          cRam0000000005c244b5 = '\x01';
        }
        lVar2 = *(long *)puVar1;
        if (*(int *)(lVar2 + 0xe0) == 0) {
          thunk_FUN_0130472c();
          lVar2 = *(long *)puVar1;
        }
        return *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x30);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

