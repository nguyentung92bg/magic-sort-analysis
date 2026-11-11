/* IL2CPP: Modules.Contexts.Application.IAP.Scripts.VerificationService.IAPVerificationService$$ShouldProceedWithoutLegacyVerification
bool Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationService__ShouldProceedWithoutLegacyVerification (Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.IAP.Scripts.VerificationService.IAPVerificationService$$ShouldProceedWithoutLegacyVerification
   bool 
   Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationService__ShouldProceedWithoutLegacyVerification
   (Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationService_o* __this,
   const MethodInfo* method); */

uint Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationService__ShouldProceedWithoutLegacyVerification_1389838
               (undefined8 param_1)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationService__IsEnabled_13895c4
                    ();
  if ((uVar2 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationService__IsDryRun_138eb28
                      (param_1);
    uVar1 = uVar1 ^ 1;
  }
  return uVar1 & 1;
}

