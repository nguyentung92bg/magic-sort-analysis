/* IL2CPP: Modules.Contexts.Application.Ads.Scripts.ConfigService.AdConfigService$$GetAdConfigModel
Modules_Contexts_Application_Ads_Scripts_AdConfigModel_o* Modules_Contexts_Application_Ads_Scripts_ConfigService_AdConfigService__GetAdConfigModel (Modules_Contexts_Application_Ads_Scripts_ConfigService_AdConfigService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Ads.Scripts.ConfigService.AdConfigService$$GetAdConfigModel
   Modules_Contexts_Application_Ads_Scripts_AdConfigModel_o*
   Modules_Contexts_Application_Ads_Scripts_ConfigService_AdConfigService__GetAdConfigModel
   (Modules_Contexts_Application_Ads_Scripts_ConfigService_AdConfigService_o* __this, const
   MethodInfo* method); */

long Modules_Contexts_Application_Ads_Scripts_ConfigService_AdConfigService__GetAdConfigModel_185c7e8
               (long param_1)

{
  long *plVar1;
  
  if (*(long *)(param_1 + 0x18) == 0) {
    plVar1 = (long *)(param_1 + 0x20);
  }
  else {
    if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    plVar1 = (long *)(param_1 + 0x20);
    if (*(char *)(*(long *)(param_1 + 0x28) + 0x10) != '\0') {
      plVar1 = (long *)(param_1 + 0x18);
    }
  }
  return *plVar1;
}

