/* IL2CPP: Modules.Contexts.Application.IAP.Scripts.PurchaseResult$$Fail
Modules_Contexts_Application_IAP_Scripts_PurchaseResult_o* Modules_Contexts_Application_IAP_Scripts_PurchaseResult__Fail (UnityEngine_Purchasing_Extension_PurchaseFailureDescription_o* purchaseFailureDescription, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.IAP.Scripts.PurchaseResult$$Fail
   Modules_Contexts_Application_IAP_Scripts_PurchaseResult_o*
   Modules_Contexts_Application_IAP_Scripts_PurchaseResult__Fail
   (UnityEngine_Purchasing_Extension_PurchaseFailureDescription_o* purchaseFailureDescription, const
   MethodInfo* method); */

long Modules_Contexts_Application_IAP_Scripts_PurchaseResult__Fail_13882a8(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_0575ac30;
  if ((bRam0000000005c23064 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575ac30);
    bRam0000000005c23064 = 1;
  }
  lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if (lVar2 != 0) {
    System_Object___ctor_23dfe5c(lVar2,0);
    *(undefined1 *)(lVar2 + 0x10) = 0;
    *(undefined1 *)(lVar2 + 0x12) = 1;
    *(undefined8 *)(lVar2 + 0x18) = param_1;
    FUN_012d0d74((undefined8 *)(lVar2 + 0x18),param_1);
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

