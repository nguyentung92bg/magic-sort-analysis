/* IL2CPP: Modules.Contexts.Application.GrandConfig.Scripts.GrandRemoteRegularLevelsConfigResolver$$FetchAndResolveConfig
System_Threading_Tasks_Task_GrandRemoteRegularLevelsConfigs__o* Modules_Contexts_Application_GrandConfig_Scripts_GrandRemoteRegularLevelsConfigResolver__FetchAndResolveConfig (Modules_Contexts_Application_GrandConfig_Scripts_GrandRemoteRegularLevelsConfigResolver_o* __this, int32_t progress, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.GrandConfig.Scripts.GrandRemoteRegularLevelsConfigResolver$$FetchAndResolveConfig
   System_Threading_Tasks_Task_GrandRemoteRegularLevelsConfigs__o*
   Modules_Contexts_Application_GrandConfig_Scripts_GrandRemoteRegularLevelsConfigResolver__FetchAndResolveConfig
   (Modules_Contexts_Application_GrandConfig_Scripts_GrandRemoteRegularLevelsConfigResolver_o*
   __this, int32_t progress, const MethodInfo* method); */

void Modules_Contexts_Application_GrandConfig_Scripts_GrandRemoteRegularLevelsConfigResolver__FetchAndResolveConfig_1cb7924
               (undefined8 param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
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
  
  puVar2 = PTR_DAT_0579b340;
  if ((bRam0000000005c2774e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05783058);
    FUN_012d0dc8(PTR_DAT_057f1148);
    FUN_012d0dc8(PTR_DAT_057f2fe8);
    FUN_012d0dc8(PTR_DAT_0579b340);
    bRam0000000005c2774e = 1;
  }
  puVar4 = PTR_DAT_057f2fe8;
  puVar3 = PTR_DAT_057f1148;
  puVar1 = PTR_DAT_05783058;
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_object___Create_17b04b0
            (&uStack_98,*(undefined8 *)puVar1);
  uVar5 = (ulong)&uStack_80 | 8;
  uStack_70 = uStack_90;
  uStack_78 = uStack_98;
  uStack_68 = uStack_88;
  FUN_012d0d74(uVar5,0);
  uStack_60 = param_1;
  FUN_012d0d74(&uStack_60,param_1);
  uStack_58 = CONCAT44(uStack_58._4_4_,param_2);
  uStack_80 = CONCAT44(uStack_80._4_4_,0xffffffff);
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_object___Start_GrandRemoteRegularLevelsConfigResolver__FetchAndResolveConfig_d__4__3323fe0
            (uVar5,&uStack_80,*(undefined8 *)puVar3);
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_object___get_Task_17b04c4
            (uVar5,*(undefined8 *)puVar4);
  return;
}

