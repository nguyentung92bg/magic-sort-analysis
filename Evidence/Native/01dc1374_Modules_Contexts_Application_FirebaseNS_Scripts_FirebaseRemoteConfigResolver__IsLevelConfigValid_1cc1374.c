/* IL2CPP: Modules.Contexts.Application.FirebaseNS.Scripts.FirebaseRemoteConfigResolver$$IsLevelConfigValid
bool Modules_Contexts_Application_FirebaseNS_Scripts_FirebaseRemoteConfigResolver__IsLevelConfigValid (Modules_Contexts_Application_FirebaseNS_Scripts_FirebaseRemoteConfigResolver_o* __this, Modules_Contexts_Application_FirebaseNS_Scripts_BELevelConfig_o* levelConfig, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.FirebaseNS.Scripts.FirebaseRemoteConfigResolver$$IsLevelConfigValid
   bool 
   Modules_Contexts_Application_FirebaseNS_Scripts_FirebaseRemoteConfigResolver__IsLevelConfigValid
   (Modules_Contexts_Application_FirebaseNS_Scripts_FirebaseRemoteConfigResolver_o* __this,
   Modules_Contexts_Application_FirebaseNS_Scripts_BELevelConfig_o* levelConfig, const MethodInfo*
   method); */

uint Modules_Contexts_Application_FirebaseNS_Scripts_FirebaseRemoteConfigResolver__IsLevelConfigValid_1cc1374
               (undefined8 param_1,long param_2)

{
  uint uVar1;
  
  if (param_2 != 0) {
    uVar1 = System_String__IsNullOrEmpty_1ed04ac(*(undefined8 *)(param_2 + 0x10),0);
    return ~uVar1 & 1;
  }
  return 0;
}

