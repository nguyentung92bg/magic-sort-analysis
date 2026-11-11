/* IL2CPP: Modules.Contexts.Application.IAP.Scripts.VerificationService.IAPVerificationDataService$$GetPendingVerifications
System_Collections_Generic_List_VerificationCacheModel__o* Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationDataService__GetPendingVerifications (Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationDataService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.IAP.Scripts.VerificationService.IAPVerificationDataService$$GetPendingVerifications
   System_Collections_Generic_List_VerificationCacheModel__o*
   Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationDataService__GetPendingVerifications
   (Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationDataService_o*
   __this, const MethodInfo* method); */

long Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationDataService__GetPendingVerifications_138d688
               (long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((bRam0000000005c23096 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057cb018);
    FUN_012d0dc8(PTR_DAT_05771ff8);
    bRam0000000005c23096 = 1;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10);
    lVar1 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_05771ff8);
    if (lVar1 != 0) {
      System_Collections_Generic_List_object____ctor_21fc324
                (lVar1,uVar2,*(undefined8 *)PTR_DAT_057cb018);
      return lVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

