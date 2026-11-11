/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.LobbyButton.MagicStreakTournamentLobbyButtonRewardView$$SetFrontBarZero
void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentLobbyButtonRewardView__SetFrontBarZero (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentLobbyButtonRewardView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.LobbyButton.MagicStreakTournamentLobbyButtonRewardView$$SetFrontBarZero
   void 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentLobbyButtonRewardView__SetFrontBarZero
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentLobbyButtonRewardView_o*
   __this, const MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentLobbyButtonRewardView__SetFrontBarZero_3e141ac
               (undefined1 param_1 [16],undefined4 param_2,long param_3)

{
  long lVar1;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  lVar1 = *(long *)(param_3 + 0x30);
  if (lVar1 != 0) {
    UnityEngine_SpriteRenderer__get_size_4095c28(lVar1,0);
    uStack_18 = 0;
    uStack_14 = param_2;
    if (pcRam0000000005c3a778 == (code *)0x0) {
      pcRam0000000005c3a778 = (code *)FUN_012d0d84(&UNK_043efb27,0);
    }
    (*pcRam0000000005c3a778)(lVar1,&uStack_18);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

