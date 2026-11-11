/* IL2CPP: Modules.Contexts.Application.IAP.Scripts.VerificationService.IAPVerificationService$$IsDryRun
bool Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationService__IsDryRun (Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.IAP.Scripts.VerificationService.IAPVerificationService$$IsDryRun
   bool 
   Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationService__IsDryRun
   (Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationService_o* __this,
   const MethodInfo* method); */

bool Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationService__IsDryRun_138eb28
               (undefined8 param_1)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationService__GetConfig_138eb04
                    ();
  if (lVar2 != 0) {
    if (*(char *)(lVar2 + 0x10) == '\0') {
      bVar1 = false;
    }
    else {
      lVar2 = Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationService__GetConfig_138eb04
                        (param_1);
      if (lVar2 == 0) goto LAB_0148eb68;
      bVar1 = *(char *)(lVar2 + 0x11) != '\0';
    }
    return bVar1;
  }
LAB_0148eb68:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

