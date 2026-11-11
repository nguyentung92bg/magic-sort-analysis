/* IL2CPP: Modules.Contexts.Application.IAP.Scripts.VerificationService.IAPVerificationService$$ApplyVerificationResult
void Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationService__ApplyVerificationResult (Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationService_o* __this, Modules_Contexts_Application_IAP_Scripts_VerificationService_VerificationCacheModel_o* pendingVerification, bool isValid, int32_t verificationStatus, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.IAP.Scripts.VerificationService.IAPVerificationService$$ApplyVerificationResult
   void 
   Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationService__ApplyVerificationResult
   (Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationService_o* __this,
   Modules_Contexts_Application_IAP_Scripts_VerificationService_VerificationCacheModel_o*
   pendingVerification, bool isValid, int32_t verificationStatus, const MethodInfo* method); */

void Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationService__ApplyVerificationResult_138edb0
               (long param_1,long param_2,ulong param_3,undefined4 param_4)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  byte abStack_68 [4];
  undefined4 uStack_64;
  
  if ((bRam0000000005c230a4 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_058165a0);
    FUN_012d0dc8(PTR_DAT_05796b38);
    bRam0000000005c230a4 = 1;
  }
  if ((param_2 == 0) || (*(long *)(param_1 + 0x10) == 0)) {
LAB_0148ef18:
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationDataService__TryRemovePendingPurchase_138d9fc
            (*(long *)(param_1 + 0x10),*(undefined8 *)(param_2 + 0x28),
             *(undefined8 *)(param_2 + 0x30));
  if ((param_3 & 1) == 0) {
    System_String__Concat_1ec3580(*(undefined8 *)PTR_DAT_05796b38,*(undefined8 *)(param_2 + 0x20),0)
    ;
    if (cRam0000000005c230a8 == '\0') {
      FUN_012d0dc8(PTR_DAT_057ece38);
      cRam0000000005c230a8 = '\x01';
    }
    lVar14 = **(long **)(*(long *)PTR_DAT_057ece38 + 0xb8);
    lVar10 = Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationService__GetConfig_138eb04
                       (param_1);
    puVar4 = PTR_DAT_057c8a60;
    if ((lVar10 != 0) && (lVar14 != 0)) {
      bVar3 = *(byte *)(lVar10 + 0x11);
      uStack_64 = param_4;
      if ((bRam0000000005c23760 & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_0575f9f0);
        FUN_012d0dc8(PTR_DAT_057b4910);
        FUN_012d0dc8(PTR_DAT_057c8a60);
        FUN_012d0dc8(PTR_DAT_05785e68);
        FUN_012d0dc8(PTR_DAT_05800b30);
        FUN_012d0dc8(PTR_DAT_0578c2f8);
        FUN_012d0dc8(PTR_DAT_0578def0);
        FUN_012d0dc8(PTR_DAT_057f0e38);
        FUN_012d0dc8(PTR_DAT_05768b70);
        FUN_012d0dc8(PTR_DAT_057f6fa0);
        bRam0000000005c23760 = 1;
      }
      lVar10 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
      if ((lVar10 != 0) &&
         (Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                    (lVar10,*(undefined8 *)PTR_DAT_05768b70,0), puVar9 = PTR_DAT_057f6fa0,
         puVar8 = PTR_DAT_057f0e38, puVar7 = PTR_DAT_057b4910, puVar6 = PTR_DAT_0578def0,
         puVar5 = PTR_DAT_0578c2f8, puVar4 = PTR_DAT_05785e68, param_2 != 0)) {
        lVar1 = *(long *)PTR_DAT_057f0e38;
        if (*(long *)(param_2 + 0x20) != 0) {
          lVar1 = *(long *)(param_2 + 0x20);
        }
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar10,*(undefined8 *)PTR_DAT_05800b30,lVar1,0);
        lVar1 = *(long *)puVar8;
        if (*(long *)(param_2 + 0x28) != 0) {
          lVar1 = *(long *)(param_2 + 0x28);
        }
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar10,*(undefined8 *)puVar9,lVar1,0);
        lVar1 = *(long *)puVar8;
        if (*(long *)(param_2 + 0x30) != 0) {
          lVar1 = *(long *)(param_2 + 0x30);
        }
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar10,*(undefined8 *)puVar6,lVar1,0);
        uVar12 = System_Int32__ToString_26c9768(&uStack_64,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar10,*(undefined8 *)puVar4,uVar12,0);
        abStack_68[0] = bVar3 & 1;
        uVar12 = thunk_FUN_01320a8c(*(undefined8 *)puVar7,abStack_68);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar10,*(undefined8 *)puVar5,uVar12,0);
        lVar13 = *(long *)puVar8;
        lVar1 = lVar13;
        if (*(long *)(param_2 + 0x20) != 0) {
          lVar1 = *(long *)(param_2 + 0x20);
        }
        lVar2 = lVar13;
        if (*(long *)(param_2 + 0x28) != 0) {
          lVar2 = *(long *)(param_2 + 0x28);
        }
        if (*(long *)(param_2 + 0x30) != 0) {
          lVar13 = *(long *)(param_2 + 0x30);
        }
        uVar12 = System_Int32__ToString_26c9768(&uStack_64,0);
        uVar12 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__IapVerificationNotVerified_2dbb560
                           (lVar1,lVar2,lVar13,uVar12,bVar3 & 1,0);
        if (*(int *)(*(long *)PTR_DAT_0575f9f0 + 0xe0) == 0) {
          thunk_FUN_0130472c(*(long *)PTR_DAT_0575f9f0);
        }
        GrandSDK_Analytics_Analytics__Track_2b38d30(uVar12,0);
        Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4(lVar14,lVar10);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    goto LAB_0148ef18;
  }
  System_String__Concat_1ec3580(*(undefined8 *)PTR_DAT_058165a0,*(undefined8 *)(param_2 + 0x20),0);
  if (cRam0000000005c230a8 == '\0') {
    FUN_012d0dc8(PTR_DAT_057ece38);
    cRam0000000005c230a8 = '\x01';
  }
  lVar14 = **(long **)(*(long *)PTR_DAT_057ece38 + 0xb8);
  lVar10 = Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationService__GetConfig_138eb04
                     (param_1);
  if ((lVar10 == 0) || (lVar14 == 0)) goto LAB_0148ef18;
  Modules_Contexts_Application_Events_Scripts_EventSender__SendIAPVerificationVerifiedEvent_144c838
            (lVar14,param_2,*(undefined1 *)(lVar10 + 0x11),param_4,0);
  uVar11 = Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationService__IsEnabled_13895c4
                     ();
  if (((uVar11 & 1) != 0) &&
     (uVar11 = Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationService__IsDryRun_138eb28
                         (param_1), (uVar11 & 1) == 0)) {
    if ((param_2 == 0) || (*(long *)(param_1 + 0x28) == 0)) goto LAB_0148efe0;
    Modules_Contexts_Application_TrackingSystems_Scripts_AdjustStatSender__SendIAPStat_3e29dfc
              (*(long *)(param_1 + 0x28),*(undefined8 *)(param_2 + 0x20),0);
  }
  uVar11 = Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationService__IsEnabled_13895c4
                     (param_1);
  if (((uVar11 & 1) == 0) ||
     (uVar11 = Modules_Contexts_Application_IAP_Scripts_VerificationService_IAPVerificationService__IsDryRun_138eb28
                         (param_1), (uVar11 & 1) == 0)) {
    return;
  }
  if ((param_2 != 0) && (*(long *)(param_1 + 0x38) != 0)) {
    Modules_Contexts_Application_IAP_Scripts_IAPService__TryGetIAPModel_1386e38
              (*(long *)(param_1 + 0x38),*(undefined8 *)(param_2 + 0x20),&stack0xffffffffffffffe8);
    if (cRam0000000005c230a8 == '\0') {
      FUN_012d0dc8(PTR_DAT_057ece38);
      cRam0000000005c230a8 = '\x01';
    }
    if (**(long **)(*(long *)PTR_DAT_057ece38 + 0xb8) != 0) {
      Modules_Contexts_Application_Events_Scripts_EventSender__SendIAPVerificationDryRunEvent_144cd18
                (**(long **)(*(long *)PTR_DAT_057ece38 + 0xb8),param_2,0,0);
      return;
    }
  }
LAB_0148efe0:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

