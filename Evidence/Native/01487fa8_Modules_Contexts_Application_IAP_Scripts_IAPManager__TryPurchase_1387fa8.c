/* IL2CPP: Modules.Contexts.Application.IAP.Scripts.IAPManager$$TryPurchase
System_Threading_Tasks_Task_PurchaseResult__o* Modules_Contexts_Application_IAP_Scripts_IAPManager__TryPurchase (Modules_Contexts_Application_IAP_Scripts_IAPManager_o* __this, System_String_o* productId, int32_t iapReason, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.IAP.Scripts.IAPManager$$TryPurchase
   System_Threading_Tasks_Task_PurchaseResult__o*
   Modules_Contexts_Application_IAP_Scripts_IAPManager__TryPurchase
   (Modules_Contexts_Application_IAP_Scripts_IAPManager_o* __this, System_String_o* productId,
   int32_t iapReason, const MethodInfo* method); */

long Modules_Contexts_Application_IAP_Scripts_IAPManager__TryPurchase_1387fa8
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
  if ((bRam0000000005c2306e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057ff8c8);
    FUN_012d0dc8(PTR_DAT_05787e50);
    FUN_012d0dc8(PTR_DAT_05796cf0);
    FUN_012d0dc8(PTR_DAT_05798298);
    FUN_012d0dc8(PTR_DAT_057f6678);
    FUN_012d0dc8(PTR_DAT_05800a90);
    bRam0000000005c2306e = 1;
  }
  puVar3 = PTR_DAT_057d7c80;
  if ((bRam0000000005c2306d & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d7c80);
    bRam0000000005c2306d = 1;
  }
  puVar2 = PTR_DAT_05798298;
  puVar1 = PTR_DAT_05796cf0;
  if ((**(long **)(*(long *)puVar3 + 0xb8) == 0) || ((*(long **)(*(long *)puVar3 + 0xb8))[1] == 0))
  {
    uVar4 = 1;
  }
  else {
    plVar7 = (long *)(param_1 + 0x10);
    if (*plVar7 == 0) {
      lVar6 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057ff8c8);
      if (lVar6 != 0) {
        Modules_Contexts_Application_IAP_Scripts_RequestedIAP___ctor_1388b48(lVar6,param_2);
        *plVar7 = lVar6;
        FUN_012d0d74(plVar7,lVar6);
        if ((*plVar7 != 0) && (lVar6 = *(long *)(*plVar7 + 0x10), lVar6 != 0)) {
          lVar6 = *(long *)(lVar6 + 0x10);
          Modules_Contexts_Application_IAP_Scripts_IAPManager__StartPurchaseProcess_1388bec
                    (param_1,param_2);
          return lVar6;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    uVar4 = 2;
  }
  uVar4 = Modules_Contexts_Application_IAP_Scripts_PurchaseResult__Fail_1388230(uVar4);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c(*(long *)puVar2);
  }
  lVar5 = *(long *)puVar1;
  lVar6 = **(long **)(lVar5 + 0x38);
  if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
    lVar6 = FUN_0131942c(lVar6);
  }
  lVar6 = thunk_FUN_01320e48(lVar6);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(*(long *)(lVar5 + 0x38) + 8) + 8))(lVar6,uVar4);
    return lVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

