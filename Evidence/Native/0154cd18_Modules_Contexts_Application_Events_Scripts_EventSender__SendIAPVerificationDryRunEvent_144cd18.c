/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendIAPVerificationDryRunEvent
void Modules_Contexts_Application_Events_Scripts_EventSender__SendIAPVerificationDryRunEvent (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, Modules_Contexts_Application_IAP_Scripts_VerificationService_VerificationCacheModel_o* verification, Modules_Contexts_Application_IAP_Scripts_IAPModel_o* iapModel, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendIAPVerificationDryRunEvent
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendIAPVerificationDryRunEvent
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this,
   Modules_Contexts_Application_IAP_Scripts_VerificationService_VerificationCacheModel_o*
   verification, Modules_Contexts_Application_IAP_Scripts_IAPModel_o* iapModel, const MethodInfo*
   method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendIAPVerificationDryRunEvent_144cd18
               (undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  puVar4 = PTR_DAT_057c8a60;
  lVar3 = tpidr_el0;
  lStack_68 = *(long *)(lVar3 + 0x28);
  if ((bRam0000000005c23761 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_05765ce8);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_05800b30);
    FUN_012d0dc8(PTR_DAT_0578def0);
    FUN_012d0dc8(PTR_DAT_057f0e38);
    FUN_012d0dc8(PTR_DAT_057c9128);
    FUN_012d0dc8(PTR_DAT_057f6fa0);
    FUN_012d0dc8(PTR_DAT_057d60e0);
    FUN_012d0dc8(PTR_DAT_05812618);
    FUN_012d0dc8(PTR_DAT_057f65a8);
    bRam0000000005c23761 = 1;
  }
  lVar10 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
  if ((lVar10 == 0) ||
     (Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                (lVar10,*(undefined8 *)PTR_DAT_057f65a8,0), puVar9 = PTR_DAT_057f6fa0,
     puVar8 = PTR_DAT_057f0e38, puVar7 = PTR_DAT_057d60e0, puVar6 = PTR_DAT_057c9128,
     puVar5 = PTR_DAT_0578def0, puVar4 = PTR_DAT_05765ce8, param_2 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  lVar11 = *(long *)PTR_DAT_057f0e38;
  if (*(long *)(param_2 + 0x20) != 0) {
    lVar11 = *(long *)(param_2 + 0x20);
  }
  Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
            (lVar10,*(undefined8 *)PTR_DAT_05800b30,lVar11,0);
  lVar11 = *(long *)puVar8;
  if (*(long *)(param_2 + 0x28) != 0) {
    lVar11 = *(long *)(param_2 + 0x28);
  }
  Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
            (lVar10,*(undefined8 *)puVar9,lVar11,0);
  lVar11 = *(long *)puVar8;
  if (*(long *)(param_2 + 0x30) != 0) {
    lVar11 = *(long *)(param_2 + 0x30);
  }
  Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
            (lVar10,*(undefined8 *)puVar5,lVar11,0);
  uVar17 = *(undefined8 *)puVar6;
  if (param_3 == 0) {
    lVar11 = *(long *)puVar4;
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_0130472c();
      lVar11 = *(long *)puVar4;
    }
    puVar16 = *(undefined8 **)(lVar11 + 0xb8);
    puVar14 = puVar16 + 1;
  }
  else {
    lVar11 = *(long *)puVar4;
    puVar16 = (undefined8 *)(param_3 + 0x40);
    puVar14 = (undefined8 *)(param_3 + 0x48);
  }
  puVar5 = PTR_DAT_05812618;
  uStack_70 = *puVar14;
  uStack_78 = *puVar16;
  uVar12 = thunk_FUN_01320a8c(lVar11,&uStack_78);
  Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310(lVar10,uVar17,uVar12,0);
  if (param_3 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = *(long *)(param_3 + 0x38);
  }
  lVar15 = *(long *)puVar5;
  if (lVar11 != 0) {
    lVar15 = lVar11;
  }
  Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
            (lVar10,*(undefined8 *)puVar7,lVar15,0);
  lVar15 = *(long *)puVar8;
  lVar11 = lVar15;
  if (*(long *)(param_2 + 0x20) != 0) {
    lVar11 = *(long *)(param_2 + 0x20);
  }
  lVar1 = lVar15;
  if (*(long *)(param_2 + 0x28) != 0) {
    lVar1 = *(long *)(param_2 + 0x28);
  }
  if (*(long *)(param_2 + 0x30) != 0) {
    lVar15 = *(long *)(param_2 + 0x30);
  }
  if (param_3 == 0) {
    lVar13 = *(long *)puVar4;
    if (*(int *)(lVar13 + 0xe0) == 0) {
      thunk_FUN_0130472c();
      lVar13 = *(long *)puVar4;
    }
    puVar16 = *(undefined8 **)(lVar13 + 0xb8);
    puVar14 = puVar16 + 1;
  }
  else {
    lVar13 = *(long *)puVar4;
    puVar16 = (undefined8 *)(param_3 + 0x40);
    puVar14 = (undefined8 *)(param_3 + 0x48);
  }
  uVar17 = *puVar16;
  uVar12 = *puVar14;
  if (*(int *)(lVar13 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  puVar4 = PTR_DAT_0575f9f0;
  System_Decimal__op_Explicit_2a96218(uVar17,uVar12,0);
  if (param_3 == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = *(long *)(param_3 + 0x38);
  }
  lVar2 = *(long *)puVar5;
  if (lVar13 != 0) {
    lVar2 = lVar13;
  }
  uVar17 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__IapVerificationDryRun_2dbb664
                     (lVar11,lVar1,lVar15,lVar2,0);
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_0130472c(*(long *)puVar4);
  }
  GrandSDK_Analytics_Analytics__Track_2b38d30(uVar17,0);
  Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4(param_1,lVar10);
  if (*(long *)(lVar3 + 0x28) == lStack_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

