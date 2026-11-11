/* IL2CPP: Modules.Contexts.Application.Ads.Scripts.ConfigService.AdConfigService$$TryGetCachedAdConfig
bool Modules_Contexts_Application_Ads_Scripts_ConfigService_AdConfigService__TryGetCachedAdConfig (Modules_Contexts_Application_Ads_Scripts_ConfigService_AdConfigService_o* __this, Modules_Contexts_Application_Ads_Scripts_AdConfigModel_o** adConfigModel, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.Ads.Scripts.ConfigService.AdConfigService$$TryGetCachedAdConfig
   bool Modules_Contexts_Application_Ads_Scripts_ConfigService_AdConfigService__TryGetCachedAdConfig
   (Modules_Contexts_Application_Ads_Scripts_ConfigService_AdConfigService_o* __this,
   Modules_Contexts_Application_Ads_Scripts_AdConfigModel_o** adConfigModel, const MethodInfo*
   method); */

undefined8
Modules_Contexts_Application_Ads_Scripts_ConfigService_AdConfigService__TryGetCachedAdConfig_185c608
          (undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_DAT_058002c8;
  if ((bRam0000000005c25789 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05784a38);
    FUN_012d0dc8(PTR_DAT_058002c8);
    bRam0000000005c25789 = 1;
  }
  *param_2 = 0;
  uVar2 = FUN_012d0d74(param_2,0);
  uVar3 = Modules_Contexts_Application_Ads_Scripts_ConfigService_AdConfigService__IsCached_185c8c0
                    (uVar2,*(undefined8 *)puVar1);
  if ((uVar3 & 1) != 0) {
    lVar4 = Modules_Contexts_Application_Ads_Scripts_ConfigService_AdConfigService__LoadCachedConfig_object__2937124
                      (param_1,*(undefined8 *)puVar1,*(undefined8 *)PTR_DAT_05784a38);
    if (lVar4 == 0) {
      return 0;
    }
    uVar5 = *(undefined8 *)(lVar4 + 0x40);
    uVar2 = UnityEngine_Application__get_version_383aa68(0);
    uVar3 = System_String__op_Equality_1ec12e0(uVar5,uVar2,0);
    if ((uVar3 & 1) != 0) {
      *param_2 = lVar4;
      FUN_012d0d74(param_2,lVar4);
      return 1;
    }
  }
  return 0;
}

