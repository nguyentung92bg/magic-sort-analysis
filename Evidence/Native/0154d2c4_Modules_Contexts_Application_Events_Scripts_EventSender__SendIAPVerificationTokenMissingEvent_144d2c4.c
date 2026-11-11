/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendIAPVerificationTokenMissingEvent
void Modules_Contexts_Application_Events_Scripts_EventSender__SendIAPVerificationTokenMissingEvent (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, System_String_o* productId, bool isDryRun, System_String_o* transactionId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.Events.Scripts.EventSender$$SendIAPVerificationTokenMissingEvent
   void 
   Modules_Contexts_Application_Events_Scripts_EventSender__SendIAPVerificationTokenMissingEvent
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, System_String_o* productId,
   bool isDryRun, System_String_o* transactionId, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendIAPVerificationTokenMissingEvent_144d2c4
               (undefined8 param_1,undefined8 param_2,byte param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  byte abStack_64 [4];
  
  puVar2 = PTR_DAT_057c8a60;
  if ((bRam0000000005c23763 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057b4910);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057b30b0);
    FUN_012d0dc8(PTR_DAT_05800b30);
    FUN_012d0dc8(PTR_DAT_0578c2f8);
    FUN_012d0dc8(PTR_DAT_0578def0);
    FUN_012d0dc8(PTR_DAT_057f0e38);
    bRam0000000005c23763 = 1;
  }
  lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
  puVar7 = PTR_DAT_05800b30;
  puVar6 = PTR_DAT_057f0e38;
  puVar5 = PTR_DAT_057b4910;
  puVar4 = PTR_DAT_0578def0;
  puVar3 = PTR_DAT_0578c2f8;
  puVar2 = PTR_DAT_0575f9f0;
  if (lVar8 != 0) {
    Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
              (lVar8,*(undefined8 *)PTR_DAT_057b30b0,0);
    Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
              (lVar8,*(undefined8 *)puVar7,param_2,0);
    abStack_64[0] = param_3 & 1;
    uVar9 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,abStack_64);
    Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
              (lVar8,*(undefined8 *)puVar3,uVar9,0);
    lVar1 = param_4;
    if (param_4 == 0) {
      lVar1 = *(long *)puVar6;
    }
    Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
              (lVar8,*(undefined8 *)puVar4,lVar1,0);
    if (param_4 == 0) {
      param_4 = *(long *)puVar6;
    }
    uVar9 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__IapVerificationTokenMissing_2dbb864
                      (param_2,param_3 & 1,param_4,0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_0130472c(*(long *)puVar2);
    }
    GrandSDK_Analytics_Analytics__Track_2b38d30(uVar9,0);
    Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4(param_1,lVar8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

