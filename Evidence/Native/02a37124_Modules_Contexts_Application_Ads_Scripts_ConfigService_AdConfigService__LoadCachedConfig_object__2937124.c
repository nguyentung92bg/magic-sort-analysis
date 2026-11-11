/* IL2CPP: Modules.Contexts.Application.Ads.Scripts.ConfigService.AdConfigService$$LoadCachedConfig<object>
Il2CppObject* Modules_Contexts_Application_Ads_Scripts_ConfigService_AdConfigService__LoadCachedConfig_object_ (Modules_Contexts_Application_Ads_Scripts_ConfigService_AdConfigService_o* __this, System_String_o* fileName, const MethodInfo_2937124* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.Ads.Scripts.ConfigService.AdConfigService$$LoadCachedConfig<object>
   Il2CppObject*
   Modules_Contexts_Application_Ads_Scripts_ConfigService_AdConfigService__LoadCachedConfig_object_
   (Modules_Contexts_Application_Ads_Scripts_ConfigService_AdConfigService_o* __this,
   System_String_o* fileName, const MethodInfo_2937124* method); */

void Modules_Contexts_Application_Ads_Scripts_ConfigService_AdConfigService__LoadCachedConfig_object__2937124
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_38;
  
  puVar2 = PTR_DAT_058031d8;
  puVar1 = PTR_DAT_057c9238;
  if ((bRam0000000005c2d55d & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_058031d8);
    FUN_012d0dc8(PTR_DAT_057c9238);
                    /* try { // try from 02a37174 to 02b371d7 has its CatchHandler @ 02a371d8 */
    bRam0000000005c2d55d = 1;
  }
  uStack_38 = 0;
  Modules_Infrastructure_Persistence_PersistentData__TryLoad_3d1e890
            (*(undefined8 *)puVar1,param_2,&uStack_38,0);
  uVar3 = uStack_38;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  (**(code **)(**(long **)(param_3 + 0x38) + 8))(uVar3);
  return;
}

