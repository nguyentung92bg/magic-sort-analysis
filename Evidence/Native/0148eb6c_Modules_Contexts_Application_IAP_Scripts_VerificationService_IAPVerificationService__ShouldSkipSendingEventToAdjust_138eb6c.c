/* IL2CPP: Modules.Contexts.Application.IAP.Scripts.VerificationService.IAPVerificationService$$ShouldSkipSendingEventToAdjust
bool Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationService__ShouldSkipSendingEventToAdjust (Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationService_o* __this, bool fromWebShop, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.IAP.Scripts.VerificationService.IAPVerificationService$$ShouldSkipSendingEventToAdjust
   bool 
   Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationService__ShouldSkipSendingEventToAdjust
   (Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationService_o* __this,
   bool fromWebShop, const MethodInfo* method); */

undefined1
Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationService__ShouldSkipSendingEventToAdjust_138eb6c
          (undefined8 param_1,uint param_2)

{
  long lVar1;
  ulong uVar2;
  
  if (((param_2 & 1) == 0) &&
     (uVar2 = Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationService__IsDryRun_138eb28
                        (), (uVar2 & 1) == 0)) {
    lVar1 = Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationService__GetConfig_138eb04
                      (param_1);
    if (lVar1 != 0) {
      return *(undefined1 *)(lVar1 + 0x10);
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  return 0;
}

