/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendGameEconomyFetchedFromBackendEvent
void Modules_Contexts_Application_Events_Scripts_EventSender__SendGameEconomyFetchedFromBackendEvent (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t configType, int64_t lastSeenHierarchy, int64_t remoteHierarchy, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.Events.Scripts.EventSender$$SendGameEconomyFetchedFromBackendEvent
   void 
   Modules_Contexts_Application_Events_Scripts_EventSender__SendGameEconomyFetchedFromBackendEvent
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t configType, int64_t
   lastSeenHierarchy, int64_t remoteHierarchy, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendGameEconomyFetchedFromBackendEvent_14977c8
               (undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uStack_78;
  undefined8 uStack_70;
  int iStack_64;
  
  puVar1 = PTR_DAT_057c8a60;
  if ((bRam0000000005c2388d & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057d6138);
    FUN_012d0dc8(PTR_DAT_05758c20);
    FUN_012d0dc8(PTR_DAT_05759920);
    FUN_012d0dc8(PTR_DAT_058125a8);
    FUN_012d0dc8(PTR_DAT_057950a8);
    bRam0000000005c2388d = 1;
  }
  lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  puVar6 = PTR_DAT_057db748;
  puVar5 = PTR_DAT_057d6138;
  puVar4 = PTR_DAT_057950a8;
  puVar3 = PTR_DAT_0575f9f0;
  puVar2 = PTR_DAT_05759920;
  puVar1 = PTR_DAT_05758c20;
  if (lVar7 != 0) {
    Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
              (lVar7,*(undefined8 *)PTR_DAT_058125a8,0);
    iStack_64 = param_2;
    uVar8 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&iStack_64);
    Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
              (lVar7,*(undefined8 *)puVar2,uVar8,0);
    uStack_70 = param_3;
    uVar8 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_70);
    Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
              (lVar7,*(undefined8 *)puVar4,uVar8,0);
    uStack_78 = param_4;
    uVar8 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_78);
    Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
              (lVar7,*(undefined8 *)puVar1,uVar8,0);
    uVar8 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__GameEconomyFetchedFromBackend_2dbc114
                      ((long)param_2,param_3,param_4,0);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_0130472c(*(long *)puVar3);
    }
    GrandSDK_Analytics_Analytics__Track_2b38d30(uVar8,0);
    Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4(param_1,lVar7);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

