/* IL2CPP: Modules.Contexts.GamePlay.Loop.Scripts.TryShowWeeklyTournamentCommand$$ShouldOpenAutomaticallyOnLobbyReturn
bool Modules_Contexts_GamePlay_Loop_Scripts_TryShowWeeklyTournamentCommand__ShouldOpenAutomaticallyOnLobbyReturn (Modules_Contexts_GamePlay_Loop_Scripts_TryShowWeeklyTournamentCommand_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Loop.Scripts.TryShowWeeklyTournamentCommand$$ShouldOpenAutomaticallyOnLobbyReturn
   bool 
   Modules_Contexts_GamePlay_Loop_Scripts_TryShowWeeklyTournamentCommand__ShouldOpenAutomaticallyOnLobbyReturn
   (Modules_Contexts_GamePlay_Loop_Scripts_TryShowWeeklyTournamentCommand_o* __this, const
   MethodInfo* method); */

byte Modules_Contexts_GamePlay_Loop_Scripts_TryShowWeeklyTournamentCommand__ShouldOpenAutomaticallyOnLobbyReturn_1f07a24
               (void)

{
  char cVar1;
  undefined *puVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  
  puVar2 = PTR_DAT_0576aae0;
  if ((bRam0000000005c285bc & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05790e10);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    bRam0000000005c285bc = 1;
  }
  if ((((**(long **)(*(long *)puVar2 + 0xb8) != 0) &&
       (lVar5 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18), lVar5 != 0)) &&
      (lVar5 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                         (lVar5,*(undefined8 *)PTR_DAT_05790e10), lVar5 != 0)) &&
     (lVar5 = *(long *)(lVar5 + 0x18), lVar5 != 0)) {
    iVar4 = Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentStateService__GetLeaderboardState_32db8a0
                      (lVar5,0);
    if (((*(long *)(lVar5 + 0x30) != 0) &&
        (lVar6 = *(long *)(*(long *)(lVar5 + 0x30) + 0x18), lVar6 != 0)) &&
       (lVar6 = *(long *)(lVar6 + 0x38), lVar6 != 0)) {
      cVar1 = *(char *)(lVar6 + 0x20);
      bVar3 = Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentStateService__IsNotIntroducedAndVisible_32d6cd4
                        (lVar5);
      return bVar3 & 1 | (iVar4 == 1 && cVar1 != '\0');
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

