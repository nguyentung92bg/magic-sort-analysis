/* IL2CPP: Modules.Contexts.Application.IAP.Scripts.VerificationService.IAPVerificationService$$SendAdjustPurchaseEvent
void Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationService__SendAdjustPurchaseEvent (Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationService_o* __this, Modules_Contexts_Application_IAP_Scripts_VerificationService_VerificationCacheModel_o* verification, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.IAP.Scripts.VerificationService.IAPVerificationService$$SendAdjustPurchaseEvent
   void 
   Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationService__SendAdjustPurchaseEvent
   (Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationService_o* __this,
   Modules_Contexts_Application_IAP_Scripts_VerificationService_VerificationCacheModel_o*
   verification, const MethodInfo* method); */

void Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationService__SendAdjustPurchaseEvent_138ef1c
               (long param_1,long param_2)

{
  ulong uVar1;
  undefined8 uStack_18;
  
  uStack_18 = 0;
  uVar1 = Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationService__IsEnabled_13895c4
                    ();
  if (((uVar1 & 1) != 0) &&
     (uVar1 = Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationService__IsDryRun_138eb28
                        (param_1), (uVar1 & 1) == 0)) {
    if ((param_2 == 0) || (*(long *)(param_1 + 0x28) == 0)) goto LAB_0148efe0;
    Modules_Contexts_Application_TrackingSystems_Scripts_AdjustStatSender__SendIAPStat_3e29dfc
              (*(long *)(param_1 + 0x28),*(undefined8 *)(param_2 + 0x20),0);
  }
  uVar1 = Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationService__IsEnabled_13895c4
                    (param_1);
  if (((uVar1 & 1) == 0) ||
     (uVar1 = Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationService__IsDryRun_138eb28
                        (param_1), (uVar1 & 1) == 0)) {
    return;
  }
  if ((param_2 != 0) && (*(long *)(param_1 + 0x38) != 0)) {
    Modules_Contexts_Application_IAP_Scripts_IAPService__TryGetIAPModel_1386e38
              (*(long *)(param_1 + 0x38),*(undefined8 *)(param_2 + 0x20),&uStack_18);
    if (cRam0000000005c230a8 == '\0') {
      FUN_012d0dc8(PTR_DAT_057ece38);
      cRam0000000005c230a8 = '\x01';
    }
    if (**(long **)(*(long *)PTR_DAT_057ece38 + 0xb8) != 0) {
      Modules_Contexts_Application_Events_Scripts_EventSender__SendIAPVerificationDryRunEvent_144cd18
                (**(long **)(*(long *)PTR_DAT_057ece38 + 0xb8),param_2,uStack_18,0);
      return;
    }
  }
LAB_0148efe0:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

