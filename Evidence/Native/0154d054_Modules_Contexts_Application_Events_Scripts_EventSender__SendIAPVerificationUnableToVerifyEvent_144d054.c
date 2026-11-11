/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendIAPVerificationUnableToVerifyEvent
void Modules_Contexts_Application_Events_Scripts_EventSender__SendIAPVerificationUnableToVerifyEvent (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, Modules_Contexts_Application_IAP_Scripts_VerificationService_VerificationCacheModel_o* verification, bool isDryRun, int32_t statusCode, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.Events.Scripts.EventSender$$SendIAPVerificationUnableToVerifyEvent
   void 
   Modules_Contexts_Application_Events_Scripts_EventSender__SendIAPVerificationUnableToVerifyEvent
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this,
   Modules_Contexts_Application_IAP_Scripts_VerificationService_VerificationCacheModel_o*
   verification, bool isDryRun, int32_t statusCode, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendIAPVerificationUnableToVerifyEvent_144d054
               (undefined8 param_1,long param_2,byte param_3,int param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  int iStack_68;
  byte abStack_64 [4];
  
  puVar3 = PTR_DAT_057c8a60;
  if ((bRam0000000005c23762 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057b4910);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_05800b30);
    FUN_012d0dc8(PTR_DAT_0578c2f8);
    FUN_012d0dc8(PTR_DAT_0578def0);
    FUN_012d0dc8(PTR_DAT_057f0e38);
    FUN_012d0dc8(PTR_DAT_057aa8d8);
    FUN_012d0dc8(PTR_DAT_057f6fa0);
    FUN_012d0dc8(PTR_DAT_057eb8d0);
    bRam0000000005c23762 = 1;
  }
  lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
  if ((lVar8 != 0) &&
     (Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                (lVar8,*(undefined8 *)PTR_DAT_057eb8d0,0), puVar7 = PTR_DAT_057f6fa0,
     puVar6 = PTR_DAT_057f0e38, puVar5 = PTR_DAT_057b4910, puVar4 = PTR_DAT_0578def0,
     puVar3 = PTR_DAT_0578c2f8, param_2 != 0)) {
    lVar1 = *(long *)PTR_DAT_057f0e38;
    if (*(long *)(param_2 + 0x20) != 0) {
      lVar1 = *(long *)(param_2 + 0x20);
    }
    Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
              (lVar8,*(undefined8 *)PTR_DAT_05800b30,lVar1,0);
    lVar1 = *(long *)puVar6;
    if (*(long *)(param_2 + 0x28) != 0) {
      lVar1 = *(long *)(param_2 + 0x28);
    }
    Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
              (lVar8,*(undefined8 *)puVar7,lVar1,0);
    lVar1 = *(long *)puVar6;
    if (*(long *)(param_2 + 0x30) != 0) {
      lVar1 = *(long *)(param_2 + 0x30);
    }
    Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
              (lVar8,*(undefined8 *)puVar4,lVar1,0);
    abStack_64[0] = param_3 & 1;
    uVar9 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,abStack_64);
    Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
              (lVar8,*(undefined8 *)puVar3,uVar9,0);
    iStack_68 = param_4;
    uVar9 = thunk_FUN_01320a8c(*(undefined8 *)PTR_DAT_057db748,&iStack_68);
    Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
              (lVar8,*(undefined8 *)PTR_DAT_057aa8d8,uVar9,0);
    lVar10 = *(long *)puVar6;
    lVar1 = lVar10;
    if (*(long *)(param_2 + 0x20) != 0) {
      lVar1 = *(long *)(param_2 + 0x20);
    }
    lVar2 = lVar10;
    if (*(long *)(param_2 + 0x28) != 0) {
      lVar2 = *(long *)(param_2 + 0x28);
    }
    if (*(long *)(param_2 + 0x30) != 0) {
      lVar10 = *(long *)(param_2 + 0x30);
    }
    uVar9 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__IapVerificationUnableToVerify_2dbb76c
                      (lVar1,lVar2,lVar10,param_3 & 1,(long)param_4,0);
    if (*(int *)(*(long *)PTR_DAT_0575f9f0 + 0xe0) == 0) {
      thunk_FUN_0130472c(*(long *)PTR_DAT_0575f9f0);
    }
    GrandSDK_Analytics_Analytics__Track_2b38d30(uVar9,0);
    Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4(param_1,lVar8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

