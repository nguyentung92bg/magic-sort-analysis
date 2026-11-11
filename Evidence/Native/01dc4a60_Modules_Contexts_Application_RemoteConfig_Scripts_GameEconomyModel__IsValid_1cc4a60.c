/* IL2CPP: Modules.Contexts.Application.RemoteConfig.Scripts.GameEconomyModel$$IsValid
bool Modules_Contexts_Application_RemoteConfig_Scripts_GameEconomyModel__IsValid (Modules_Contexts_Application_RemoteConfig_Scripts_GameEconomyModel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.RemoteConfig.Scripts.GameEconomyModel$$IsValid
   bool Modules_Contexts_Application_RemoteConfig_Scripts_GameEconomyModel__IsValid
   (Modules_Contexts_Application_RemoteConfig_Scripts_GameEconomyModel_o* __this, const MethodInfo*
   method); */

uint Modules_Contexts_Application_RemoteConfig_Scripts_GameEconomyModel__IsValid_1cc4a60
               (long param_1)

{
  undefined *puVar1;
  uint uVar2;
  
  puVar1 = PTR_DAT_05784948;
  if ((bRam0000000005c27796 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05784948);
    bRam0000000005c27796 = 1;
  }
  uVar2 = Modules_Contexts_Application_RemoteConfig_Scripts_RemoteConfigValidation__IsNullOrHasNullElement_object__2679cdc
                    (*(undefined8 *)(param_1 + 0x60),*(undefined8 *)puVar1);
  return ~uVar2 & 1;
}

