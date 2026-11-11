/* IL2CPP: Modules.Contexts.Home.MiniGame.Scripts.MiniGameConfigModel$$IsValid
bool Modules_Contexts_Home_MiniGame_Scripts_MiniGameConfigModel__IsValid (Modules_Contexts_Home_MiniGame_Scripts_MiniGameConfigModel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MiniGame.Scripts.MiniGameConfigModel$$IsValid
   bool Modules_Contexts_Home_MiniGame_Scripts_MiniGameConfigModel__IsValid
   (Modules_Contexts_Home_MiniGame_Scripts_MiniGameConfigModel_o* __this, const MethodInfo* method);
    */

uint Modules_Contexts_Home_MiniGame_Scripts_MiniGameConfigModel__IsValid_20b3148(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  
  puVar1 = PTR_DAT_05758928;
  if ((bRam0000000005c2953b & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05758928);
    bRam0000000005c2953b = 1;
  }
  uVar3 = Modules_Contexts_Application_RemoteConfig_Scripts_RemoteConfigValidation__IsNullOrHasNullElement_object__2679cdc
                    (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)puVar1);
  if ((uVar3 & 1) == 0) {
    uVar2 = Modules_Contexts_Application_RemoteConfig_Scripts_RemoteConfigValidation__IsNullOrHasNullElement_object__2679cdc
                      (*(undefined8 *)(param_1 + 0x40),*(undefined8 *)puVar1);
    uVar2 = ~uVar2 & 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

