/* IL2CPP: Modules.Contexts.Application.IAP.Scripts.IAPManager$$ProcessPurchase
int32_t Modules_Contexts_Application_IAP_Scripts_IAPManager__ProcessPurchase (Modules_Contexts_Application_IAP_Scripts_IAPManager_o* __this, UnityEngine_Purchasing_PurchaseEventArgs_o* args, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.IAP.Scripts.IAPManager$$ProcessPurchase
   int32_t Modules_Contexts_Application_IAP_Scripts_IAPManager__ProcessPurchase
   (Modules_Contexts_Application_IAP_Scripts_IAPManager_o* __this,
   UnityEngine_Purchasing_PurchaseEventArgs_o* args, const MethodInfo* method); */

undefined8
Modules_Contexts_Application_IAP_Scripts_IAPManager__ProcessPurchase_1389530
          (long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x40) != 0) {
    uVar1 = Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationService__IsEnabled_13895c4
                      ();
    if ((uVar1 & 1) != 0) {
      if ((*(long *)(param_1 + 0x40) == 0) ||
         (Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationService__EnqueuePurchase_13895e0
                    (*(long *)(param_1 + 0x40),param_2), *(long *)(param_1 + 0x40) == 0))
      goto LAB_014895c0;
      uVar1 = Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationService__ShouldProceedWithoutLegacyVerification_1389838
                        ();
      if ((uVar1 & 1) != 0) goto LAB_014895a4;
    }
    if (((*(long *)(param_1 + 0x38) != 0) &&
        (lVar2 = *(long *)(*(long *)(param_1 + 0x38) + 0x18), lVar2 != 0)) &&
       (lVar2 = *(long *)(lVar2 + 0x10), lVar2 != 0)) {
      if (*(char *)(lVar2 + 0x30) != '\0') {
        Modules_Contexts_Application_IAP_Scripts_IAPManager__ProcessPurchaseWithVerificationAsync_1389910
                  (param_1,param_2);
        return 1;
      }
LAB_014895a4:
      Modules_Contexts_Application_IAP_Scripts_IAPManager__ProcessPurchaseWithoutVerification_1389868
                (param_1,param_2);
      return 0;
    }
  }
LAB_014895c0:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

