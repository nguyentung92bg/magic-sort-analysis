/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Leaderboard.MagicStreakTournamentLeaderboardSwipeController$$ExtractUserViewTween
DG_Tweening_Tween_o* Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardSwipeController__ExtractUserViewTween (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardSwipeController_o* __this, Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardElement_o* userView, UnityEngine_Vector3_o targetCenterPosition, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Leaderboard.MagicStreakTournamentLeaderboardSwipeController$$ExtractUserViewTween
   DG_Tweening_Tween_o*
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardSwipeController__ExtractUserViewTween
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardSwipeController_o*
   __this,
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardElement_o*
   userView, UnityEngine_Vector3_o targetCenterPosition, const MethodInfo* method); */

undefined8
Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardSwipeController__ExtractUserViewTween_3e17bcc
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_057815e0;
  if ((bRam0000000005c380ba & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057874c0);
    bRam0000000005c380ba = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar2 = DG_Tweening_DOTween__Sequence_1eda154(0);
  if (param_5 != 0) {
    uVar3 = UnityEngine_Component__get_transform_408b444(param_5,0);
    lVar4 = *(long *)(param_4 + 0x30);
    if (lVar4 != 0) {
      uVar3 = DG_Tweening_ShortcutExtensions__DOScale_1ee649c
                        (*(undefined4 *)(lVar4 + 0x18),*(undefined4 *)(lVar4 + 0x1c),
                         *(undefined4 *)(lVar4 + 0x20),*(undefined4 *)(lVar4 + 0x24),uVar3,0);
      puVar1 = PTR_DAT_057874c0;
      if (*(long *)(param_4 + 0x30) != 0) {
        uVar3 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                          (uVar3,*(undefined8 *)(*(long *)(param_4 + 0x30) + 0x30),
                           *(undefined8 *)PTR_DAT_057874c0);
        DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar2,uVar3,0);
        uVar3 = UnityEngine_Component__get_transform_408b444(param_5,0);
        if (*(long *)(param_4 + 0x30) != 0) {
          uVar3 = DG_Tweening_ShortcutExtensions__DOMove_1ee4f98
                            (param_1,param_2,param_3,
                             *(undefined4 *)(*(long *)(param_4 + 0x30) + 0x24),uVar3,0,0);
          if (*(long *)(param_4 + 0x30) != 0) {
            uVar3 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                              (uVar3,*(undefined8 *)(*(long *)(param_4 + 0x30) + 0x30),
                               *(undefined8 *)puVar1);
            DG_Tweening_TweenSettingsExtensions__Join_1ee8bcc(uVar2,uVar3,0);
            return uVar2;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

