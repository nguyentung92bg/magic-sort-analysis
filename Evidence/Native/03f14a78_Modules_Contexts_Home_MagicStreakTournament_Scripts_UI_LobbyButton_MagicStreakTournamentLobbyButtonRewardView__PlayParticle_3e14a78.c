/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.LobbyButton.MagicStreakTournamentLobbyButtonRewardView$$PlayParticle
void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentLobbyButtonRewardView__PlayParticle (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentLobbyButtonRewardView_o* __this, UnityEngine_Vector3_o position, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.LobbyButton.MagicStreakTournamentLobbyButtonRewardView$$PlayParticle
   void 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentLobbyButtonRewardView__PlayParticle
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentLobbyButtonRewardView_o*
   __this, UnityEngine_Vector3_o position, const MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentLobbyButtonRewardView__PlayParticle_3e14a78
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if ((*(long *)(param_4 + 0x38) != 0) &&
     (lVar1 = UnityEngine_Component__get_transform_408b444(*(long *)(param_4 + 0x38),0), lVar1 != 0)
     ) {
    UnityEngine_Transform__set_position_4092ba8(param_1,param_2,param_3,lVar1,0);
    lVar1 = *(long *)(param_4 + 0x38);
    if (lVar1 != 0) {
      if (pcRam0000000005c35e30 == (code *)0x0) {
        pcRam0000000005c35e30 = (code *)FUN_012d0d84(&UNK_043e020e,0);
      }
                    /* WARNING: Could not recover jumptable at 0x03bbc604. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000005c35e30)(lVar1,1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

