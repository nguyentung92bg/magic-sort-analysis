/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.LobbyButton.MagicStreakTournamentLobbyButtonRewardView$$MoveCurrencyView
DG_Tweening_Tween_o* Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentLobbyButtonRewardView__MoveCurrencyView (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentLobbyButtonRewardView_o* __this, Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView_o* currencyView, UnityEngine_Vector3_o position, float duration, UnityEngine_AnimationCurve_o* curve, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.LobbyButton.MagicStreakTournamentLobbyButtonRewardView$$MoveCurrencyView
   DG_Tweening_Tween_o*
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentLobbyButtonRewardView__MoveCurrencyView
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentLobbyButtonRewardView_o*
   __this, Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView_o* currencyView,
   UnityEngine_Vector3_o position, float duration, UnityEngine_AnimationCurve_o* curve, const
   MethodInfo* method); */

long Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentLobbyButtonRewardView__MoveCurrencyView_3e14478
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,long param_6,undefined8 param_7)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((bRam0000000005c3809f & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057874c0);
    bRam0000000005c3809f = 1;
  }
  puVar1 = PTR_DAT_057874c0;
  if (param_6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  uVar4 = UnityEngine_Component__get_transform_408b444(param_6,0);
  lVar5 = DG_Tweening_ShortcutExtensions__DOMove_1ee4f98(param_1,param_2,param_3,param_4,uVar4,0,0);
  if ((bRam0000000005c2b025 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05805638,param_7,*(undefined8 *)puVar1);
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
      DG_Tweening_Core_Easing_EaseCurve___ctor_3336d6c(lVar2,param_7,0);
      lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
      if (lVar3 != 0) {
        DG_Tweening_EaseFunction___ctor_1ed6eb4(lVar3,lVar2,*(undefined8 *)PTR_DAT_05805638,0);
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

