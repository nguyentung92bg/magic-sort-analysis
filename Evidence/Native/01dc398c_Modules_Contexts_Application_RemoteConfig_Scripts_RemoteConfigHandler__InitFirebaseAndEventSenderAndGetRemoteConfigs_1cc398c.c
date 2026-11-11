/* IL2CPP: Modules.Contexts.Application.RemoteConfig.Scripts.RemoteConfigHandler$$InitFirebaseAndEventSenderAndGetRemoteConfigs
System_Threading_Tasks_Task_RemoteConfigs__o* Modules_Contexts_Application_RemoteConfig_Scripts_RemoteConfigHandler__InitFirebaseAndEventSenderAndGetRemoteConfigs (Modules_Contexts_Application_RemoteConfig_Scripts_RemoteConfigHandler_o* __this, Modules_Contexts_Application_GrandbaseNS_Scripts_GrandABService_o* grandABService, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.RemoteConfig.Scripts.RemoteConfigHandler$$InitFirebaseAndEventSenderAndGetRemoteConfigs
   System_Threading_Tasks_Task_RemoteConfigs__o*
   Modules_Contexts_Application_RemoteConfig_Scripts_RemoteConfigHandler__InitFirebaseAndEventSenderAndGetRemoteConfigs
   (Modules_Contexts_Application_RemoteConfig_Scripts_RemoteConfigHandler_o* __this,
   Modules_Contexts_Application_GrandbaseNS_Scripts_GrandABService_o* grandABService, const
   MethodInfo* method); */

void Modules_Contexts_Application_RemoteConfig_Scripts_RemoteConfigHandler__InitFirebaseAndEventSenderAndGetRemoteConfigs_1cc398c
               (undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  puVar3 = PTR_DAT_057bda70;
  if ((bRam0000000005c27792 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05814800);
    FUN_012d0dc8(PTR_DAT_0576f258);
    FUN_012d0dc8(PTR_DAT_05796470);
    FUN_012d0dc8(PTR_DAT_057bda70);
    bRam0000000005c27792 = 1;
  }
  puVar4 = PTR_DAT_05814800;
  puVar2 = PTR_DAT_05796470;
  puVar1 = PTR_DAT_0576f258;
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_object___Create_17b04b0
            (&uStack_c8,*(undefined8 *)puVar4);
  uVar5 = (ulong)&uStack_b0 | 8;
  uStack_a0 = uStack_c0;
  uStack_a8 = uStack_c8;
  uStack_98 = uStack_b8;
  FUN_012d0d74(uVar5,0);
  uStack_90 = param_1;
  FUN_012d0d74(&uStack_90,param_1);
  uStack_88 = param_2;
  FUN_012d0d74(&uStack_88,param_2);
  uStack_b0 = CONCAT44(uStack_b0._4_4_,0xffffffff);
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_object___Start_RemoteConfigHandler__InitFirebaseAndEventSenderAndGetRemoteConfigs_d__9__33282e8
            (uVar5,&uStack_b0,*(undefined8 *)puVar1);
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_object___get_Task_17b04c4
            (uVar5,*(undefined8 *)puVar2);
  return;
}

