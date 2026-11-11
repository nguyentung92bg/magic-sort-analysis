/* IL2CPP: Modules.Contexts.Application.IAP.Scripts.IAPPriceView$$TryFetchPrice
bool Modules_Contexts_Application_IAP_Scripts_IAPPriceView__TryFetchPrice (Modules_Contexts_Application_IAP_Scripts_IAPPriceView_o* __this, System_String_o** priceString, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.IAP.Scripts.IAPPriceView$$TryFetchPrice
   bool Modules_Contexts_Application_IAP_Scripts_IAPPriceView__TryFetchPrice
   (Modules_Contexts_Application_IAP_Scripts_IAPPriceView_o* __this, System_String_o** priceString,
   const MethodInfo* method); */

undefined8
Modules_Contexts_Application_IAP_Scripts_IAPPriceView__TryFetchPrice_138aeb0
          (long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lStack_28;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c23080 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0581b878);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c9ca0);
    bRam0000000005c23080 = 1;
  }
  lStack_28 = 0;
  if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
     (lVar2 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar2 != 0)) {
    lVar2 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                      (lVar2,*(undefined8 *)PTR_DAT_0581b878);
    if ((*(long *)(param_1 + 0x28) != 0) && (lVar2 != 0)) {
      uVar3 = Modules_Contexts_Application_IAP_Scripts_IAPService__TryGetIAPModel_1386e38
                        (lVar2,*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x10),&lStack_28);
      if ((uVar3 & 1) == 0) {
LAB_0148af64:
        *param_2 = **(undefined8 **)(*(long *)PTR_DAT_057c9ca0 + 0xb8);
        FUN_012d0d74(param_2);
        return 0;
      }
      if (lStack_28 != 0) {
        uVar3 = System_String__IsNullOrEmpty_1ed04ac(*(undefined8 *)(lStack_28 + 0x20),0);
        if ((uVar3 & 1) != 0) goto LAB_0148af64;
        if (lStack_28 != 0) {
          *param_2 = *(undefined8 *)(lStack_28 + 0x20);
          FUN_012d0d74(param_2);
          return 1;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

