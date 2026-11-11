/* IL2CPP: Modules.Contexts.Application.RemoteConfig.Scripts.ConfigService.GameEconomyConfigRemoteService$$GetGameEconomyConfigModel
System_Threading_Tasks_Task_ApiResponse_GameEconomyConfigResponseModel___o* Modules_Contexts_Application_RemoteConfig_Scripts_ConfigService_GameEconomyConfigRemoteService__GetGameEconomyConfigModel (Modules_Contexts_Application_RemoteConfig_Scripts_ConfigService_GameEconomyConfigRemoteService_o* __this, int32_t configType, int64_t clientHierarchy, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.RemoteConfig.Scripts.ConfigService.GameEconomyConfigRemoteService$$GetGameEconomyConfigModel
   System_Threading_Tasks_Task_ApiResponse_GameEconomyConfigResponseModel___o*
   Modules_Contexts_Application_RemoteConfig_Scripts_ConfigService_GameEconomyConfigRemoteService__GetGameEconomyConfigModel
   (Modules_Contexts_Application_RemoteConfig_Scripts_ConfigService_GameEconomyConfigRemoteService_o*
   __this, int32_t configType, int64_t clientHierarchy, const MethodInfo* method); */

void Modules_Contexts_Application_RemoteConfig_Scripts_ConfigService_GameEconomyConfigRemoteService__GetGameEconomyConfigModel_1cc517c
               (undefined8 param_1,undefined4 param_2,undefined8 param_3)

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
  undefined8 uStack_48;
  
  puVar1 = PTR_DAT_057ce6a0;
  if ((bRam0000000005c2779a & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057dc0b0);
    FUN_012d0dc8(PTR_DAT_0580bc28);
    FUN_012d0dc8(PTR_DAT_057e1478);
    FUN_012d0dc8(PTR_DAT_057ce6a0);
    bRam0000000005c2779a = 1;
  }
  puVar4 = PTR_DAT_0580bc28;
  puVar3 = PTR_DAT_057e1478;
  puVar2 = PTR_DAT_057dc0b0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_object___Create_17b04b0
            (&uStack_98,*(undefined8 *)puVar2);
  uVar5 = (ulong)&uStack_80 | 8;
  uStack_70 = uStack_90;
  uStack_78 = uStack_98;
  uStack_68 = uStack_88;
  FUN_012d0d74(uVar5,0);
  uStack_50 = param_1;
  FUN_012d0d74(&uStack_50,param_1);
  uStack_60 = CONCAT44(uStack_60._4_4_,param_2);
  uStack_80 = CONCAT44(uStack_80._4_4_,0xffffffff);
  uStack_58 = param_3;
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_object___Start_GameEconomyConfigRemoteService__GetGameEconomyConfigModel_d__7__33235b8
            (uVar5,&uStack_80,*(undefined8 *)puVar4);
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_object___get_Task_17b04c4
            (uVar5,*(undefined8 *)puVar3);
  return;
}

