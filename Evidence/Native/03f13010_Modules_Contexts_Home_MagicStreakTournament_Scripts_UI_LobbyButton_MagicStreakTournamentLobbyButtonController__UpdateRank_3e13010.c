/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.LobbyButton.MagicStreakTournamentLobbyButtonController$$UpdateRank
void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentLobbyButtonController__UpdateRank (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentLobbyButtonController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.LobbyButton.MagicStreakTournamentLobbyButtonController$$UpdateRank
   void 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentLobbyButtonController__UpdateRank
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentLobbyButtonController_o*
   __this, const MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentLobbyButtonController__UpdateRank_3e13010
               (long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 extraout_x1;
  long *plVar2;
  undefined1 auVar3 [16];
  undefined4 uStack_14;
  
  if ((bRam0000000005c38096 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057aec28);
    bRam0000000005c38096 = 1;
    param_2 = extraout_x1;
  }
  uStack_14 = 0;
  uVar1 = 0;
  if (*(long *)(param_1 + 0x48) != 0) {
    plVar2 = *(long **)(param_1 + 0x20);
    auVar3 = Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetRank_411e528
                       (*(long *)(param_1 + 0x48),0);
    param_2 = auVar3._8_8_;
    if (auVar3._0_4_ == 0) {
      param_2 = *(undefined8 *)PTR_DAT_057aec28;
      uVar1 = auVar3._0_8_;
    }
    else {
      uVar1 = 0;
      if (*(long *)(param_1 + 0x48) == 0) goto LAB_03f130b0;
      uStack_14 = Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetRank_411e528
                            (*(long *)(param_1 + 0x48),0);
      param_2 = System_Int32__ToString_26c9768(&uStack_14,0);
      uVar1 = param_2;
    }
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x558))(plVar2,param_2,*(undefined8 *)(*plVar2 + 0x560));
      return;
    }
  }
LAB_03f130b0:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0(uVar1,param_2);
}

