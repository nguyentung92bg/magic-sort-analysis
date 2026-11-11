/* IL2CPP: Modules.Contexts.Home.WeeklyTournament.Scripts.WeeklyTournamentDataService$$GetTournamentId
System_String_o* Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentDataService__GetTournamentId (Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentDataService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.WeeklyTournament.Scripts.WeeklyTournamentDataService$$GetTournamentId
   System_String_o*
   Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentDataService__GetTournamentId
   (Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentDataService_o* __this, const
   MethodInfo* method); */

undefined8
Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentDataService__GetTournamentId_32d5eac
          (long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  if ((bRam0000000005c31d50 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05774390);
    bRam0000000005c31d50 = 1;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 0x28);
    puVar1 = (undefined8 *)PTR_DAT_05774390;
    if (lVar2 != 0) {
      puVar1 = (undefined8 *)(lVar2 + 0x10);
    }
    return *puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

