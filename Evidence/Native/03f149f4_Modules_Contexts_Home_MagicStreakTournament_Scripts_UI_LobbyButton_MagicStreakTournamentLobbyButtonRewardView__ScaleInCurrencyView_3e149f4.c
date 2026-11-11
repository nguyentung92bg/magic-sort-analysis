/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.LobbyButton.MagicStreakTournamentLobbyButtonRewardView$$ScaleInCurrencyView
DG_Tweening_Tween_o* Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentLobbyButtonRewardView__ScaleInCurrencyView (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentLobbyButtonRewardView_o* __this, Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView_o* currencyView, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.LobbyButton.MagicStreakTournamentLobbyButtonRewardView$$ScaleInCurrencyView
   DG_Tweening_Tween_o*
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentLobbyButtonRewardView__ScaleInCurrencyView
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentLobbyButtonRewardView_o*
   __this, Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView_o* currencyView, const
   MethodInfo* method); */

long Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentLobbyButtonRewardView__ScaleInCurrencyView_3e149f4
               (long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((bRam0000000005c380a4 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057874c0);
    bRam0000000005c380a4 = 1;
  }
  if (param_2 != 0) {
    uVar4 = UnityEngine_Component__get_transform_408b444(param_2,0);
    lVar5 = *(long *)(param_1 + 0x20);
    if (lVar5 != 0) {
      lVar5 = DG_Tweening_ShortcutExtensions__DOScale_1ee649c
                        (*(undefined4 *)(lVar5 + 0x68),*(undefined4 *)(lVar5 + 0x6c),
                         *(undefined4 *)(lVar5 + 0x70),*(undefined4 *)(lVar5 + 0x4c),uVar4,0);
      if (*(long *)(param_1 + 0x20) != 0) {
        uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50);
        if ((bRam0000000005c2b025 & 1) == 0) {
          FUN_012d0dc8(PTR_DAT_05805638,uVar4,*(undefined8 *)PTR_DAT_057874c0);
          FUN_012d0dc8(PTR_DAT_05776a80);
          FUN_012d0dc8(PTR_DAT_0580b108);
          bRam0000000005c2b025 = 1;
        }
        puVar1 = PTR_DAT_05776a80;
        if ((lVar5 != 0) && (*(char *)(lVar5 + 0xe8) != '\0')) {
          *(undefined4 *)(lVar5 + 0xb4) = 0x25;
          lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
          puVar1 = PTR_DAT_0580b108;
          if (lVar2 != 0) {
            DG_Tweening_Core_Easing_EaseCurve___ctor_3336d6c(lVar2,uVar4,0);
            lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
            if (lVar3 != 0) {
              DG_Tweening_EaseFunction___ctor_1ed6eb4(lVar3,lVar2,*(undefined8 *)PTR_DAT_05805638,0)
              ;
              *(long *)(lVar5 + 0xb8) = lVar3;
              FUN_012d0d74((long *)(lVar5 + 0xb8),lVar3);
              return lVar5;
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        return lVar5;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

