/* IL2CPP: Modules.Contexts.Application.IAP.Scripts.PurchaseResult$$UnableToVerify
Modules_Contexts_Application_IAP_Scripts_PurchaseResult_o* Modules_Contexts_Application_IAP_Scripts_PurchaseResult__UnableToVerify (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.IAP.Scripts.PurchaseResult$$UnableToVerify
   Modules_Contexts_Application_IAP_Scripts_PurchaseResult_o*
   Modules_Contexts_Application_IAP_Scripts_PurchaseResult__UnableToVerify (const MethodInfo*
   method); */

long Modules_Contexts_Application_IAP_Scripts_PurchaseResult__UnableToVerify_13883f8(void)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_0575ac30;
  if ((bRam0000000005c23067 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575ac30);
    bRam0000000005c23067 = 1;
  }
  lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if (lVar2 != 0) {
    System_Object___ctor_23dfe5c(lVar2,0);
    *(undefined2 *)(lVar2 + 0x10) = 1;
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

