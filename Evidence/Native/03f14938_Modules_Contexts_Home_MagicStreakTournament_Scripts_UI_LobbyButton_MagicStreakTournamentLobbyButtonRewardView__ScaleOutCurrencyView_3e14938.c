/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.LobbyButton.MagicStreakTournamentLobbyButtonRewardView$$ScaleOutCurrencyView
DG_Tweening_Tween_o* Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentLobbyButtonRewardView__ScaleOutCurrencyView (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentLobbyButtonRewardView_o* __this, Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView_o* currencyView, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.LobbyButton.MagicStreakTournamentLobbyButtonRewardView$$ScaleOutCurrencyView
   DG_Tweening_Tween_o*
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentLobbyButtonRewardView__ScaleOutCurrencyView
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentLobbyButtonRewardView_o*
   __this, Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView_o* currencyView, const
   MethodInfo* method); */

long Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentLobbyButtonRewardView__ScaleOutCurrencyView_3e14938
               (long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 *puVar6;
  
  if ((bRam0000000005c380a3 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057874c0);
    bRam0000000005c380a3 = 1;
  }
  if (param_2 != 0) {
    uVar4 = UnityEngine_Component__get_transform_408b444(param_2,0);
    if (cRam0000000005c230aa == '\0') {
      FUN_012d0dc8(PTR_DAT_05805c10);
      cRam0000000005c230aa = '\x01';
    }
    if (*(long *)(param_1 + 0x20) != 0) {
      puVar6 = *(undefined4 **)(*(long *)PTR_DAT_05805c10 + 0xb8);
      lVar5 = DG_Tweening_ShortcutExtensions__DOScale_1ee649c
                        (*puVar6,puVar6[1],puVar6[2],
                         *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x58),uVar4,0);
      if (*(long *)(param_1 + 0x20) != 0) {
        uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x60);
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

