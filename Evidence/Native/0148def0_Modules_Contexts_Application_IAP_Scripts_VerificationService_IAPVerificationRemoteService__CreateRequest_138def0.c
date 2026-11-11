/* IL2CPP: Modules.Contexts.Application.IAP.Scripts.VerificationService.IAPVerificationRemoteService$$CreateRequest
IapVerifier_V1_VerifyPurchaseRequest_o* Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationRemoteService__CreateRequest (Modules_Contexts_Application_IAP_Scripts_VerificationService_VerificationCacheModel_o* pendingVerification, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.IAP.Scripts.VerificationService.IAPVerificationRemoteService$$CreateRequest
   IapVerifier_V1_VerifyPurchaseRequest_o*
   Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationRemoteService__CreateRequest
   (Modules_Contexts_Application_IAP_Scripts_VerificationService_VerificationCacheModel_o*
   pendingVerification, const MethodInfo* method); */

long Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationRemoteService__CreateRequest_138def0
               (long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_0575e848;
  if ((bRam0000000005c2309e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057c9ca0);
    FUN_012d0dc8(PTR_DAT_0575e848);
    bRam0000000005c2309e = 1;
  }
  lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if ((lVar2 != 0) &&
     (IapVerifier_V1_VerifyPurchaseRequest___ctor_3af744c(lVar2,0), puVar1 = PTR_DAT_057c9ca0,
     param_1 != 0)) {
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 == 0) {
      lVar3 = **(long **)(*(long *)PTR_DAT_057c9ca0 + 0xb8);
    }
    IapVerifier_V1_VerifyPurchaseRequest__set_Platform_3af75dc(lVar2,lVar3,0);
    lVar3 = *(long *)(param_1 + 0x18);
    if (lVar3 == 0) {
      lVar3 = **(long **)(*(long *)puVar1 + 0xb8);
    }
    IapVerifier_V1_VerifyPurchaseRequest__set_UserId_3af7660(lVar2,lVar3,0);
    lVar3 = *(long *)(param_1 + 0x20);
    if (lVar3 == 0) {
      lVar3 = **(long **)(*(long *)puVar1 + 0xb8);
    }
    IapVerifier_V1_VerifyPurchaseRequest__set_ProductId_3af76e4(lVar2,lVar3,0);
    lVar3 = *(long *)(param_1 + 0x28);
    if (lVar3 == 0) {
      lVar3 = **(long **)(*(long *)puVar1 + 0xb8);
    }
    IapVerifier_V1_VerifyPurchaseRequest__set_PurchaseToken_3af7768(lVar2,lVar3,0);
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

