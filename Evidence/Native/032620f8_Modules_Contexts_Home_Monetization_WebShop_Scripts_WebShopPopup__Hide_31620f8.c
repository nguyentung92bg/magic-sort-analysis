/* IL2CPP: Modules.Contexts.Home.Monetization.WebShop.Scripts.WebShopPopup$$Hide
System_Threading_Tasks_Task_o* Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopPopup__Hide (Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopPopup_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Monetization.WebShop.Scripts.WebShopPopup$$Hide
   System_Threading_Tasks_Task_o*
   Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopPopup__Hide
   (Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopPopup_o* __this, const MethodInfo*
   method); */

undefined8
Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopPopup__Hide_31620f8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  if ((bRam0000000005c31516 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057b3270);
    FUN_012d0dc8(PTR_DAT_057bd0e8);
    FUN_012d0dc8(PTR_DAT_05798298);
    bRam0000000005c31516 = 1;
  }
  if (*(long *)(param_1 + 0x68) != 0) {
    System_Threading_Tasks_TaskCompletionSource_bool___SetResult_1db4e50
              (*(long *)(param_1 + 0x68),1,*(undefined8 *)PTR_DAT_057b3270);
  }
  lVar3 = UnityEngine_Component__get_gameObject_408b480(param_1,0);
  if (lVar3 != 0) {
    UnityEngine_GameObject__SetActive_408e318(lVar3,0,0);
    puVar2 = PTR_DAT_05798298;
    puVar1 = PTR_DAT_057815e0;
    if ((*(long *)(param_1 + 0x60) != 0) &&
       (lVar3 = *(long *)(*(long *)(param_1 + 0x60) + 0x38), lVar3 != 0)) {
      System_Threading_Tasks_TaskCompletionSource_Int32Enum___TrySetResult_1db5978
                (lVar3,*(undefined4 *)(param_1 + 0x70),*(undefined8 *)PTR_DAT_057bd0e8);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      DG_Tweening_DOTween__Kill_1eda9a4(param_1,0,0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      if (cRam0000000005c244b5 == '\0') {
        FUN_012d0dc8(PTR_DAT_05798298);
        cRam0000000005c244b5 = '\x01';
      }
      lVar3 = *(long *)puVar2;
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_0130472c();
        lVar3 = *(long *)puVar2;
      }
      return *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x30);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

