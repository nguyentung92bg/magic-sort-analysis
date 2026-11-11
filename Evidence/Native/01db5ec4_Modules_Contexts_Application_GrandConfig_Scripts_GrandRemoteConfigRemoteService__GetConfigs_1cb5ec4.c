/* IL2CPP: Modules.Contexts.Application.GrandConfig.Scripts.GrandRemoteConfigRemoteService$$GetConfigs
System_Threading_Tasks_Task_ApiResponse_GrandRemoteConfigResponse___o* Modules_Contexts_Application_GrandConfig_Scripts_GrandRemoteConfigRemoteService__GetConfigs (Modules_Contexts_Application_GrandConfig_Scripts_GrandRemoteConfigRemoteService_o* __this, System_String_o* configName, int32_t configType, int32_t progress, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.GrandConfig.Scripts.GrandRemoteConfigRemoteService$$GetConfigs
   System_Threading_Tasks_Task_ApiResponse_GrandRemoteConfigResponse___o*
   Modules_Contexts_Application_GrandConfig_Scripts_GrandRemoteConfigRemoteService__GetConfigs
   (Modules_Contexts_Application_GrandConfig_Scripts_GrandRemoteConfigRemoteService_o* __this,
   System_String_o* configName, int32_t configType, int32_t progress, const MethodInfo* method); */

void Modules_Contexts_Application_GrandConfig_Scripts_GrandRemoteConfigRemoteService__GetConfigs_1cb5ec4
               (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
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
  
  puVar2 = PTR_DAT_057b8bc8;
  if ((bRam0000000005c27743 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d26a8);
    FUN_012d0dc8(PTR_DAT_05771a08);
    FUN_012d0dc8(PTR_DAT_057c77a8);
    FUN_012d0dc8(PTR_DAT_057b8bc8);
    bRam0000000005c27743 = 1;
  }
  puVar4 = PTR_DAT_057d26a8;
  puVar3 = PTR_DAT_057c77a8;
  puVar1 = PTR_DAT_05771a08;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_object___Create_17b04b0
            (&uStack_a8,*(undefined8 *)puVar4);
  uVar5 = (ulong)&uStack_90 | 8;
  uStack_80 = uStack_a0;
  uStack_88 = uStack_a8;
  uStack_78 = uStack_98;
  FUN_012d0d74(uVar5,0);
  uStack_60 = param_1;
  FUN_012d0d74(&uStack_60,param_1);
  uStack_70 = param_2;
  FUN_012d0d74(&uStack_70,param_2);
  uStack_68 = CONCAT44(param_4,param_3);
  uStack_90 = CONCAT44(uStack_90._4_4_,0xffffffff);
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_object___Start_GrandRemoteConfigRemoteService__GetConfigs_d__3__3323cd4
            (uVar5,&uStack_90,*(undefined8 *)puVar1);
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_object___get_Task_17b04c4
            (uVar5,*(undefined8 *)puVar3);
  return;
}

