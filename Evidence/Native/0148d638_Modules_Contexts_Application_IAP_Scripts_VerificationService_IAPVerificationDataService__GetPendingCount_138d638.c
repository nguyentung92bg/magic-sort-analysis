/* IL2CPP: Modules.Contexts.Application.IAP.Scripts.VerificationService.IAPVerificationDataService$$GetPendingCount
int32_t Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationDataService__GetPendingCount (Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationDataService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.IAP.Scripts.VerificationService.IAPVerificationDataService$$GetPendingCount
   int32_t
   Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationDataService__GetPendingCount
   (Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationDataService_o*
   __this, const MethodInfo* method); */

undefined4
Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationDataService__GetPendingCount_138d638
          (long param_1)

{
  long lVar1;
  
  if ((bRam0000000005c23095 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057ac3b0);
    bRam0000000005c23095 = 1;
  }
  if ((*(long *)(param_1 + 0x18) != 0) &&
     (lVar1 = *(long *)(*(long *)(param_1 + 0x18) + 0x10), lVar1 != 0)) {
    return *(undefined4 *)(lVar1 + 0x18);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

