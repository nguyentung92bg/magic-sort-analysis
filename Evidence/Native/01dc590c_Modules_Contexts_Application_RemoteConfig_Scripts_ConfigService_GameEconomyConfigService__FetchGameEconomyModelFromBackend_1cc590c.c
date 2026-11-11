/* IL2CPP: Modules.Contexts.Application.RemoteConfig.Scripts.ConfigService.GameEconomyConfigService$$FetchGameEconomyModelFromBackend
void Modules_Contexts_Application_RemoteConfig_Scripts_ConfigService_GameEconomyConfigService__FetchGameEconomyModelFromBackend (Modules_Contexts_Application_RemoteConfig_Scripts_ConfigService_GameEconomyConfigService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.RemoteConfig.Scripts.ConfigService.GameEconomyConfigService$$FetchGameEconomyModelFromBackend
   void 
   Modules_Contexts_Application_RemoteConfig_Scripts_ConfigService_GameEconomyConfigService__FetchGameEconomyModelFromBackend
   (Modules_Contexts_Application_RemoteConfig_Scripts_ConfigService_GameEconomyConfigService_o*
   __this, const MethodInfo* method); */

void Modules_Contexts_Application_RemoteConfig_Scripts_ConfigService_GameEconomyConfigService__FetchGameEconomyModelFromBackend_1cc590c
               (undefined8 param_1)

{
  undefined *puVar1;
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
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR_DAT_057789f0;
  if ((bRam0000000005c2779d & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057789f0);
    bRam0000000005c2779d = 1;
  }
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create_2445128(&uStack_b0,0);
  uStack_88 = uStack_a8;
  uStack_90 = uStack_b0;
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  uStack_60 = uStack_a8;
  uStack_68 = uStack_b0;
  uStack_50 = uStack_98;
  uStack_58 = uStack_a0;
  FUN_012d0d74((ulong)&uStack_70 | 8,0);
  uStack_48 = param_1;
  FUN_012d0d74(&uStack_48,param_1);
  uStack_70 = CONCAT44(uStack_70._4_4_,0xffffffff);
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start_GameEconomyConfigService__SendGetRequest_d__12__216da34
            ((ulong)&uStack_70 | 8,&uStack_70,*(undefined8 *)puVar1);
  return;
}

