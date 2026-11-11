/* IL2CPP: Modules.Contexts.Home.WeeklyTournament.Scripts.UI.WeeklyTournamentInProgressView$$Initialize
void Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentInProgressView__Initialize (Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentInProgressView_o* __this, System_Collections_Generic_List_WeeklyTournamentLeaderboardPlayerViewModel__o* viewModels, System_Collections_Generic_List_WeeklyTournamentLeaderboardPlayerViewModel__o* degreeViewModels, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.WeeklyTournament.Scripts.UI.WeeklyTournamentInProgressView$$Initialize
   void Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentInProgressView__Initialize
   (Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentInProgressView_o* __this,
   System_Collections_Generic_List_WeeklyTournamentLeaderboardPlayerViewModel__o* viewModels,
   System_Collections_Generic_List_WeeklyTournamentLeaderboardPlayerViewModel__o* degreeViewModels,
   const MethodInfo* method); */

void Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentInProgressView__Initialize_32dcac0
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  *(undefined8 *)(param_1 + 0x38) = param_2;
  FUN_012d0d74();
  puVar4 = (undefined8 *)(param_1 + 0x40);
  *puVar4 = param_3;
  if (iRam0000000005c3d478 != 0) {
    puVar1 = (ulong *)(((ulong)puVar4 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar4 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}

