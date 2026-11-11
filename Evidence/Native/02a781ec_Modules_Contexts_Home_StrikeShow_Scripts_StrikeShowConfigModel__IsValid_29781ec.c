/* IL2CPP: Modules.Contexts.Home.StrikeShow.Scripts.StrikeShowConfigModel$$IsValid
bool Modules_Contexts_Home_StrikeShow_Scripts_StrikeShowConfigModel__IsValid (Modules_Contexts_Home_StrikeShow_Scripts_StrikeShowConfigModel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.StrikeShow.Scripts.StrikeShowConfigModel$$IsValid
   bool Modules_Contexts_Home_StrikeShow_Scripts_StrikeShowConfigModel__IsValid
   (Modules_Contexts_Home_StrikeShow_Scripts_StrikeShowConfigModel_o* __this, const MethodInfo*
   method); */

uint Modules_Contexts_Home_StrikeShow_Scripts_StrikeShowConfigModel__IsValid_29781ec(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  
  puVar1 = PTR_DAT_057f4450;
  if ((bRam0000000005c2d711 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057f4450);
    bRam0000000005c2d711 = 1;
  }
  uVar3 = Modules_Contexts_Application_RemoteConfig_Scripts_RemoteConfigValidation__IsNullOrHasNullElement_object__2679cdc
                    (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)puVar1);
  if (((uVar3 & 1) == 0) &&
     (uVar3 = Modules_Contexts_Application_RemoteConfig_Scripts_RemoteConfigValidation__IsNullOrHasNullElement_object__2679cdc
                        (*(undefined8 *)(param_1 + 0x40),*(undefined8 *)puVar1), (uVar3 & 1) == 0))
  {
    uVar2 = Modules_Contexts_Application_RemoteConfig_Scripts_RemoteConfigValidation__IsNullOrHasNullElement_object__2679cdc
                      (*(undefined8 *)(param_1 + 0x48),*(undefined8 *)puVar1);
    uVar2 = ~uVar2 & 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

