/* IL2CPP: Modules.Contexts.Application.IAP.Scripts.VerificationService.IAPVerificationService$$HandleFailedVerification
void Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationService__HandleFailedVerification (Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationService_o* __this, Modules_Contexts_Application_IAP_Scripts_VerificationService_VerificationCacheModel_o* pendingVerification, int32_t statusCode, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.IAP.Scripts.VerificationService.IAPVerificationService$$HandleFailedVerification
   void 
   Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationService__HandleFailedVerification
   (Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationService_o* __this,
   Modules_Contexts_Application_IAP_Scripts_VerificationService_VerificationCacheModel_o*
   pendingVerification, int32_t statusCode, const MethodInfo* method); */

void Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationService__HandleFailedVerification_138efe4
               (long param_1,long param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined4 uStack_64;
  int iStack_58;
  undefined4 uStack_54;
  
  if ((bRam0000000005c230a5 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_0575e870);
    FUN_012d0dc8(PTR_DAT_057c6128);
    bRam0000000005c230a5 = 1;
  }
  puVar3 = PTR_DAT_057db748;
  puVar1 = PTR_DAT_0575e870;
  if (param_2 != 0) {
    uVar7 = *(undefined8 *)(param_2 + 0x20);
    uStack_54 = param_3;
    uVar5 = thunk_FUN_01320a8c(*(undefined8 *)PTR_DAT_057db748,&uStack_54);
    System_String__Format_1ed15b8(*(undefined8 *)puVar1,uVar7,uVar5,0);
    if (cRam0000000005c230a8 == '\0') {
      FUN_012d0dc8(PTR_DAT_057ece38);
      cRam0000000005c230a8 = '\x01';
    }
    puVar1 = PTR_DAT_057ece38;
    lVar8 = **(long **)(*(long *)PTR_DAT_057ece38 + 0xb8);
    lVar6 = Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationService__GetConfig_138eb04
                      (param_1);
    if ((lVar6 != 0) && (lVar8 != 0)) {
      Modules_Contexts_Application_Events_Scripts_EventSender__SendIAPVerificationUnableToVerifyEvent_144d054
                (lVar8,param_2,*(undefined1 *)(lVar6 + 0x11),param_3,0);
      if (*(long *)(param_1 + 0x10) != 0) {
        iVar4 = Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationDataService__IncrementAttemptCount_138db94
                          (*(long *)(param_1 + 0x10),*(undefined8 *)(param_2 + 0x28),
                           *(undefined8 *)(param_2 + 0x30));
        puVar2 = PTR_DAT_057c6128;
        if (iVar4 < 5) {
          return;
        }
        iStack_58 = iVar4;
        uVar5 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,&iStack_58);
        uVar9 = *(undefined8 *)(param_2 + 0x20);
        uStack_64 = param_3;
        uVar7 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,&uStack_64);
        System_String__Format_1ed15fc(*(undefined8 *)puVar2,uVar5,uVar9,uVar7,0);
        if (cRam0000000005c230a8 == '\0') {
          FUN_012d0dc8(PTR_DAT_057ece38);
          cRam0000000005c230a8 = '\x01';
        }
        lVar8 = **(long **)(*(long *)puVar1 + 0xb8);
        lVar6 = Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationService__GetConfig_138eb04
                          (param_1);
        if ((lVar6 != 0) && (lVar8 != 0)) {
          Modules_Contexts_Application_Events_Scripts_EventSender__SendIAPVerificationReachedMaxAttemptEvent_144d488
                    (lVar8,param_2,*(undefined1 *)(lVar6 + 0x11),param_3,iVar4,0);
          if (*(long *)(param_1 + 0x10) != 0) {
            Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationDataService__TryRemovePendingPurchase_138d9fc
                      (*(long *)(param_1 + 0x10),*(undefined8 *)(param_2 + 0x28),
                       *(undefined8 *)(param_2 + 0x30));
            Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationService__SendAdjustPurchaseEvent_138ef1c
                      (param_1,param_2);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

