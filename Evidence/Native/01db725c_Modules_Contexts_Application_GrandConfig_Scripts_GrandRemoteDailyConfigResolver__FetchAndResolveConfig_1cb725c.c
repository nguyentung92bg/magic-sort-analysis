/* IL2CPP: Modules.Contexts.Application.GrandConfig.Scripts.GrandRemoteDailyConfigResolver$$FetchAndResolveConfig
System_Threading_Tasks_Task_GrandRemoteDailyLevelsConfig__o* Modules_Contexts_Application_GrandConfig_Scripts_GrandRemoteDailyConfigResolver__FetchAndResolveConfig (Modules_Contexts_Application_GrandConfig_Scripts_GrandRemoteDailyConfigResolver_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.GrandConfig.Scripts.GrandRemoteDailyConfigResolver$$FetchAndResolveConfig
   System_Threading_Tasks_Task_GrandRemoteDailyLevelsConfig__o*
   Modules_Contexts_Application_GrandConfig_Scripts_GrandRemoteDailyConfigResolver__FetchAndResolveConfig
   (Modules_Contexts_Application_GrandConfig_Scripts_GrandRemoteDailyConfigResolver_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Application_GrandConfig_Scripts_GrandRemoteDailyConfigResolver__FetchAndResolveConfig_1cb725c
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar4 = PTR_DAT_0580a180;
  if ((bRam0000000005c2774a & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576eeb0);
    FUN_012d0dc8(PTR_DAT_058065a8);
    FUN_012d0dc8(PTR_DAT_05808ed0);
    FUN_012d0dc8(PTR_DAT_0580a180);
    bRam0000000005c2774a = 1;
  }
  puVar3 = PTR_DAT_05808ed0;
  puVar2 = PTR_DAT_058065a8;
  puVar1 = PTR_DAT_0576eeb0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_object___Create_17b04b0
            (&uStack_78,*(undefined8 *)puVar1);
  uVar5 = (ulong)&uStack_60 | 8;
  uStack_50 = uStack_70;
  uStack_58 = uStack_78;
  uStack_48 = uStack_68;
  FUN_012d0d74(uVar5,0);
  uStack_40 = param_1;
  FUN_012d0d74(&uStack_40,param_1);
  uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_object___Start_GrandRemoteDailyConfigResolver__FetchAndResolveConfig_d__4__3323edc
            (uVar5,&uStack_60,*(undefined8 *)puVar2);
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_object___get_Task_17b04c4
            (uVar5,*(undefined8 *)puVar3);
  return;
}

