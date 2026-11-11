/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.LobbyButton.MagicStreakTournamentLobbyButtonRewardView$$SetCurrencyViewPosition
void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentLobbyButtonRewardView__SetCurrencyViewPosition (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentLobbyButtonRewardView_o* __this, Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView_o* currencyView, UnityEngine_Vector3_o position, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.LobbyButton.MagicStreakTournamentLobbyButtonRewardView$$SetCurrencyViewPosition
   void 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentLobbyButtonRewardView__SetCurrencyViewPosition
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentLobbyButtonRewardView_o*
   __this, Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView_o* currencyView,
   UnityEngine_Vector3_o position, const MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentLobbyButtonRewardView__SetCurrencyViewPosition_3e14514
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
               long param_5)

{
  long lVar1;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  if ((param_5 != 0) &&
     (lVar1 = UnityEngine_Component__get_transform_408b444(param_5,0), lVar1 != 0)) {
    uStack_30 = param_1;
    uStack_2c = param_2;
    uStack_28 = param_3;
    if (pcRam0000000005c3a610 == (code *)0x0) {
      pcRam0000000005c3a610 = (code *)FUN_012d0d84(&UNK_043eeeca,0);
    }
    (*pcRam0000000005c3a610)(lVar1,&uStack_30);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

