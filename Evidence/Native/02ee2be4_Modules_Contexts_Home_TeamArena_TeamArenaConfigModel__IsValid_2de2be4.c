/* IL2CPP: Modules.Contexts.Home.TeamArena.TeamArenaConfigModel$$IsValid
bool Modules_Contexts_Home_TeamArena_TeamArenaConfigModel__IsValid (Modules_Contexts_Home_TeamArena_TeamArenaConfigModel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.TeamArena.TeamArenaConfigModel$$IsValid
   bool Modules_Contexts_Home_TeamArena_TeamArenaConfigModel__IsValid
   (Modules_Contexts_Home_TeamArena_TeamArenaConfigModel_o* __this, const MethodInfo* method); */

uint Modules_Contexts_Home_TeamArena_TeamArenaConfigModel__IsValid_2de2be4(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  
  puVar1 = PTR_DAT_0576afb8;
  if ((bRam0000000005c2fd5e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05758928);
    FUN_012d0dc8(PTR_DAT_0576afb8);
    bRam0000000005c2fd5e = 1;
  }
  uVar3 = Modules_Contexts_Application_RemoteConfig_Scripts_RemoteConfigValidation__IsNullOrHasNullElement_object__2679cdc
                    (*(undefined8 *)(param_1 + 0x30),*(undefined8 *)puVar1);
  if (((((uVar3 & 1) == 0) &&
       (uVar3 = Modules_Contexts_Application_RemoteConfig_Scripts_RemoteConfigValidation__IsNullOrHasNullElement_object__2679cdc
                          (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)puVar1),
       puVar1 = PTR_DAT_05758928, (uVar3 & 1) == 0)) &&
      (uVar3 = Modules_Contexts_Application_RemoteConfig_Scripts_RemoteConfigValidation__IsNullOrHasNullElement_object__2679cdc
                         (*(undefined8 *)(param_1 + 0x40),*(undefined8 *)PTR_DAT_05758928),
      (uVar3 & 1) == 0)) &&
     ((uVar3 = Modules_Contexts_Application_RemoteConfig_Scripts_RemoteConfigValidation__IsNullOrHasNullElement_object__2679cdc
                         (*(undefined8 *)(param_1 + 0x48),*(undefined8 *)puVar1), (uVar3 & 1) == 0
      && (uVar3 = Modules_Contexts_Application_RemoteConfig_Scripts_RemoteConfigValidation__IsNullOrHasNullElement_object__2679cdc
                            (*(undefined8 *)(param_1 + 0x50),*(undefined8 *)puVar1),
         (uVar3 & 1) == 0)))) {
    uVar2 = Modules_Contexts_Application_RemoteConfig_Scripts_RemoteConfigValidation__IsNullOrHasNullElement_object__2679cdc
                      (*(undefined8 *)(param_1 + 0x58),*(undefined8 *)puVar1);
    return ~uVar2 & 1;
  }
  return 0;
}

