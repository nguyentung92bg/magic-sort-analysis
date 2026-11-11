/* IL2CPP: Modules.Contexts.Home.WeeklyTournament.Scripts.WeeklyTournamentService$$GetStartTimeAsUnix
int64_t Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService__GetStartTimeAsUnix (Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.WeeklyTournament.Scripts.WeeklyTournamentService$$GetStartTimeAsUnix
   int64_t
   Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService__GetStartTimeAsUnix
   (Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService_o* __this, const
   MethodInfo* method); */

undefined8
Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService__GetStartTimeAsUnix_32da644
          (long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((*(long *)(param_1 + 0x20) != 0) &&
     (lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 0x20), lVar2 != 0)) {
    lVar2 = *(long *)(lVar2 + 0x28);
    if (lVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined8 *)(lVar2 + 0x20);
    }
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

