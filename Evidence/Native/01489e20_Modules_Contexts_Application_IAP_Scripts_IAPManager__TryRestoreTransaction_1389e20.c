/* IL2CPP: Modules.Contexts.Application.IAP.Scripts.IAPManager$$TryRestoreTransaction
void Modules_Contexts_Application_IAP_Scripts_IAPManager__TryRestoreTransaction (Modules_Contexts_Application_IAP_Scripts_IAPManager_o* __this, bool result, System_String_o* errorMessage, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.IAP.Scripts.IAPManager$$TryRestoreTransaction
   void Modules_Contexts_Application_IAP_Scripts_IAPManager__TryRestoreTransaction
   (Modules_Contexts_Application_IAP_Scripts_IAPManager_o* __this, bool result, System_String_o*
   errorMessage, const MethodInfo* method); */

void Modules_Contexts_Application_IAP_Scripts_IAPManager__TryRestoreTransaction_1389e20
               (long param_1,ulong param_2,undefined8 param_3)

{
  if ((bRam0000000005c2307a & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057e4158);
    FUN_012d0dc8(PTR_DAT_057d0cb0);
    bRam0000000005c2307a = 1;
  }
  if ((param_2 & 1) == 0) {
    System_String__Concat_1ec3580(*(undefined8 *)PTR_DAT_057e4158,param_3,0);
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  return;
}

