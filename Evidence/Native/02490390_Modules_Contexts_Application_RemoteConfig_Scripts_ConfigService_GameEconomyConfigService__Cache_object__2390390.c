/* IL2CPP: Modules.Contexts.Application.RemoteConfig.Scripts.ConfigService.GameEconomyConfigService$$Cache<object>
void Modules_Contexts_Application_RemoteConfig_Scripts_ConfigService_GameEconomyConfigService__Cache_object_ (Modules_Contexts_Application_RemoteConfig_Scripts_ConfigService_GameEconomyConfigService_o* __this, Il2CppObject* model, System_String_o* fileName, const MethodInfo_2390390* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.RemoteConfig.Scripts.ConfigService.GameEconomyConfigService$$Cache<object>
   void 
   Modules_Contexts_Application_RemoteConfig_Scripts_ConfigService_GameEconomyConfigService__Cache_object_
   (Modules_Contexts_Application_RemoteConfig_Scripts_ConfigService_GameEconomyConfigService_o*
   __this, Il2CppObject* model, System_String_o* fileName, const MethodInfo_2390390* method); */

void Modules_Contexts_Application_RemoteConfig_Scripts_ConfigService_GameEconomyConfigService__Cache_object__2390390
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
                    /* try { // try from 02490390 to 02590393 has its CatchHandler @ 0249039c */
  puVar1 = PTR_DAT_058031d8;
                    /* try { // try from 02490394 to 0259039f has its CatchHandler @ 0249021c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02490390 with catch @ 0249039c
                        */
  if ((bRam0000000005c2aaba & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_058031d8);
    FUN_012d0dc8(PTR_DAT_057c9238);
    bRam0000000005c2aaba = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar2 = Newtonsoft_Json_JsonConvert__SerializeObject_35368d4(param_2,0);
  Modules_Infrastructure_Persistence_PersistentData__Save_3d1e52c
            (uVar2,*(undefined8 *)PTR_DAT_057c9238,param_3,0);
  return;
}

