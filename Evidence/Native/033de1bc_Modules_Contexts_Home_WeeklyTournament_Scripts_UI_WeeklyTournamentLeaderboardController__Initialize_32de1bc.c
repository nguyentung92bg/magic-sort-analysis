/* IL2CPP: Modules.Contexts.Home.WeeklyTournament.Scripts.UI.WeeklyTournamentLeaderboardController$$Initialize
void Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentLeaderboardController__Initialize (Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentLeaderboardController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.WeeklyTournament.Scripts.UI.WeeklyTournamentLeaderboardController$$Initialize
   void 
   Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentLeaderboardController__Initialize
   (Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentLeaderboardController_o*
   __this, const MethodInfo* method); */

void Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentLeaderboardController__Initialize_32de1bc
               (long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c31d9e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057fbec0);
    FUN_012d0dc8(PTR_DAT_05790e10);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    bRam0000000005c31d9e = 1;
  }
  lVar3 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
  if ((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x18), lVar3 != 0)) {
    uVar2 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                      (lVar3,*(undefined8 *)PTR_DAT_057fbec0);
    *(undefined8 *)(param_1 + 0x60) = uVar2;
    FUN_012d0d74();
    lVar3 = **(long **)(*(long *)puVar1 + 0xb8);
    if ((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x18), lVar3 != 0)) {
      uVar2 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                        (lVar3,*(undefined8 *)PTR_DAT_05790e10);
      *(undefined8 *)(param_1 + 0x18) = uVar2;
      FUN_012d0d74((undefined8 *)(param_1 + 0x18),uVar2);
      *(undefined1 *)(param_1 + 0x58) = 1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

