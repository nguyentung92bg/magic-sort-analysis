/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakTournamentConfigModel$$IsValid
bool Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakTournamentConfigModel__IsValid (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakTournamentConfigModel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakTournamentConfigModel$$IsValid
   bool 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakTournamentConfigModel__IsValid
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakTournamentConfigModel_o* __this,
   const MethodInfo* method); */

bool Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakTournamentConfigModel__IsValid_411baf0
               (long param_1)

{
  bool bVar1;
  ulong uVar2;
  
  if ((bRam0000000005c3ac53 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057a0fd8);
    bRam0000000005c3ac53 = 1;
  }
  if ((*(long *)(param_1 + 0x30) == 0) ||
     (uVar2 = Modules_Contexts_Application_RemoteConfig_Scripts_RemoteConfigValidation__IsNullOrHasNullElement_object__2679cdc
                        (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)PTR_DAT_057a0fd8),
     (uVar2 & 1) != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = *(long *)(param_1 + 0x28) != 0;
  }
  return bVar1;
}

