/* IL2CPP: Modules.Contexts.Home.WeeklyTournament.Scripts.UI.WeeklyTournamentInResultView$$Initialize
void Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentInResultView__Initialize (Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentInResultView_o* __this, System_Collections_Generic_List_WeeklyTournamentLeaderboardPlayerViewModel__o* viewModels, System_Collections_Generic_List_WeeklyTournamentLeaderboardPlayerViewModel__o* degreeViewModels, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.WeeklyTournament.Scripts.UI.WeeklyTournamentInResultView$$Initialize
   void Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentInResultView__Initialize
   (Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentInResultView_o* __this,
   System_Collections_Generic_List_WeeklyTournamentLeaderboardPlayerViewModel__o* viewModels,
   System_Collections_Generic_List_WeeklyTournamentLeaderboardPlayerViewModel__o* degreeViewModels,
   const MethodInfo* method); */

void Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentInResultView__Initialize_32dd31c
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  
  puVar4 = PTR_DAT_0576aae0;
  if ((bRam0000000005c31d94 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05790e10);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    bRam0000000005c31d94 = 1;
  }
  if ((**(long **)(*(long *)puVar4 + 0xb8) != 0) &&
     (lVar5 = *(long *)(**(long **)(*(long *)puVar4 + 0xb8) + 0x18), lVar5 != 0)) {
    uVar6 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                      (lVar5,*(undefined8 *)PTR_DAT_05790e10);
    *(undefined8 *)(param_1 + 0x18) = uVar6;
    FUN_012d0d74();
    *(undefined8 *)(param_1 + 0x38) = param_2;
    FUN_012d0d74((undefined8 *)(param_1 + 0x38),param_2);
    puVar7 = (undefined8 *)(param_1 + 0x40);
    *puVar7 = param_3;
    if (iRam0000000005c3d478 != 0) {
      puVar1 = (ulong *)(((ulong)puVar7 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar7 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

