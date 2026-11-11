/* IL2CPP: Modules.Contexts.Home.TowerWinStreak.Scripts.TowerWinStreakConfigModel$$IsValid
bool Modules_Contexts_Home_TowerWinStreak_Scripts_TowerWinStreakConfigModel__IsValid (Modules_Contexts_Home_TowerWinStreak_Scripts_TowerWinStreakConfigModel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.TowerWinStreak.Scripts.TowerWinStreakConfigModel$$IsValid
   bool Modules_Contexts_Home_TowerWinStreak_Scripts_TowerWinStreakConfigModel__IsValid
   (Modules_Contexts_Home_TowerWinStreak_Scripts_TowerWinStreakConfigModel_o* __this, const
   MethodInfo* method); */

uint Modules_Contexts_Home_TowerWinStreak_Scripts_TowerWinStreakConfigModel__IsValid_32e063c
               (long param_1)

{
  undefined *puVar1;
  uint uVar2;
  
  puVar1 = PTR_DAT_057a29e0;
  if ((bRam0000000005c31db4 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057a29e0);
    bRam0000000005c31db4 = 1;
  }
  uVar2 = Modules_Contexts_Application_RemoteConfig_Scripts_RemoteConfigValidation__IsNullOrHasNullElement_object__2679cdc
                    (*(undefined8 *)(param_1 + 0x20),*(undefined8 *)puVar1);
  return ~uVar2 & 1;
}

