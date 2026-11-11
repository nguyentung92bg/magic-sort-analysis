/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendIAPVerificationVerifiedEvent
void Modules_Contexts_Application_Events_Scripts_EventSender__SendIAPVerificationVerifiedEvent (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, Modules_Contexts_Application_IAP_Scripts_VerificationService_VerificationCacheModel_o* productId, bool isDryRun, int32_t verificationStatus, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendIAPVerificationVerifiedEvent
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendIAPVerificationVerifiedEvent
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this,
   Modules_Contexts_Application_IAP_Scripts_VerificationService_VerificationCacheModel_o* productId,
   bool isDryRun, int32_t verificationStatus, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendIAPVerificationVerifiedEvent_144c838
               (undefined8 param_1,long param_2,byte param_3,undefined4 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  byte abStack_68 [4];
  undefined4 uStack_64;
  
  puVar3 = PTR_DAT_057c8a60;
  uStack_64 = param_4;
  if ((bRam0000000005c2375f & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057b4910);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_05785e68);
    FUN_012d0dc8(PTR_DAT_05800b30);
    FUN_012d0dc8(PTR_DAT_0578c2f8);
    FUN_012d0dc8(PTR_DAT_0578def0);
    FUN_012d0dc8(PTR_DAT_057f0e38);
    FUN_012d0dc8(PTR_DAT_057d8590);
    FUN_012d0dc8(PTR_DAT_057f6fa0);
    bRam0000000005c2375f = 1;
  }
  lVar9 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
  if ((lVar9 != 0) &&
     (Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                (lVar9,*(undefined8 *)PTR_DAT_057d8590,0), puVar8 = PTR_DAT_057f6fa0,
     puVar7 = PTR_DAT_057f0e38, puVar6 = PTR_DAT_057b4910, puVar5 = PTR_DAT_0578def0,
     puVar4 = PTR_DAT_0578c2f8, puVar3 = PTR_DAT_05785e68, param_2 != 0)) {
    lVar1 = *(long *)PTR_DAT_057f0e38;
    if (*(long *)(param_2 + 0x20) != 0) {
      lVar1 = *(long *)(param_2 + 0x20);
    }
    Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
              (lVar9,*(undefined8 *)PTR_DAT_05800b30,lVar1,0);
    lVar1 = *(long *)puVar7;
    if (*(long *)(param_2 + 0x28) != 0) {
      lVar1 = *(long *)(param_2 + 0x28);
    }
    Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
              (lVar9,*(undefined8 *)puVar8,lVar1,0);
    lVar1 = *(long *)puVar7;
    if (*(long *)(param_2 + 0x30) != 0) {
      lVar1 = *(long *)(param_2 + 0x30);
    }
    Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
              (lVar9,*(undefined8 *)puVar5,lVar1,0);
    uVar10 = System_Int32__ToString_26c9768(&uStack_64,0);
    Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
              (lVar9,*(undefined8 *)puVar3,uVar10,0);
    abStack_68[0] = param_3 & 1;
    uVar10 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,abStack_68);
    Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
              (lVar9,*(undefined8 *)puVar4,uVar10,0);
    lVar11 = *(long *)puVar7;
    lVar1 = lVar11;
    if (*(long *)(param_2 + 0x20) != 0) {
      lVar1 = *(long *)(param_2 + 0x20);
    }
    lVar2 = lVar11;
    if (*(long *)(param_2 + 0x28) != 0) {
      lVar2 = *(long *)(param_2 + 0x28);
    }
    if (*(long *)(param_2 + 0x30) != 0) {
      lVar11 = *(long *)(param_2 + 0x30);
    }
    uVar10 = System_Int32__ToString_26c9768(&uStack_64,0);
    uVar10 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__IapVerificationVerified_2dbb45c
                       (lVar1,lVar2,lVar11,uVar10,param_3 & 1,0);
    if (*(int *)(*(long *)PTR_DAT_0575f9f0 + 0xe0) == 0) {
      thunk_FUN_0130472c(*(long *)PTR_DAT_0575f9f0);
    }
    GrandSDK_Analytics_Analytics__Track_2b38d30(uVar10,0);
    Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4(param_1,lVar9);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

