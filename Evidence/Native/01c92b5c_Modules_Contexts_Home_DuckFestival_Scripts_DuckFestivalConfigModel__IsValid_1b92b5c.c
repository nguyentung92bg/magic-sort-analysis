/* IL2CPP: Modules.Contexts.Home.DuckFestival.Scripts.DuckFestivalConfigModel$$IsValid
bool Modules_Contexts_Home_DuckFestival_Scripts_DuckFestivalConfigModel__IsValid (Modules_Contexts_Home_DuckFestival_Scripts_DuckFestivalConfigModel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.DuckFestival.Scripts.DuckFestivalConfigModel$$IsValid
   bool Modules_Contexts_Home_DuckFestival_Scripts_DuckFestivalConfigModel__IsValid
   (Modules_Contexts_Home_DuckFestival_Scripts_DuckFestivalConfigModel_o* __this, const MethodInfo*
   method); */

uint Modules_Contexts_Home_DuckFestival_Scripts_DuckFestivalConfigModel__IsValid_1b92b5c
               (long param_1)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  
  puVar1 = PTR_DAT_057ad698;
  if ((bRam0000000005c26cfc & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057ad698);
    FUN_012d0dc8(PTR_DAT_05758928);
    bRam0000000005c26cfc = 1;
  }
  uVar3 = Modules_Contexts_Application_RemoteConfig_Scripts_RemoteConfigValidation__IsNullOrHasNullElement_object__2679cdc
                    (*(undefined8 *)(param_1 + 0x10),*(undefined8 *)puVar1);
  if ((((uVar3 & 1) == 0) &&
      (uVar3 = Modules_Contexts_Application_RemoteConfig_Scripts_RemoteConfigValidation__IsNullOrHasNullElement_object__2679cdc
                         (*(undefined8 *)(param_1 + 0x18),*(undefined8 *)puVar1),
      puVar1 = PTR_DAT_05758928, (uVar3 & 1) == 0)) &&
     (uVar3 = Modules_Contexts_Application_RemoteConfig_Scripts_RemoteConfigValidation__IsNullOrHasNullElement_object__2679cdc
                        (*(undefined8 *)(param_1 + 0x30),*(undefined8 *)PTR_DAT_05758928),
     (uVar3 & 1) == 0)) {
    uVar2 = Modules_Contexts_Application_RemoteConfig_Scripts_RemoteConfigValidation__IsNullOrHasNullElement_object__2679cdc
                      (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)puVar1);
    return ~uVar2 & 1;
  }
  return 0;
}

