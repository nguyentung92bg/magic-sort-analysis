/* IL2CPP: Modules.Contexts.Home.DuckFestival.Scripts.UI.Leaderboard.DuckFestivalLeaderboardElementPlacementController$$PlugUserViewTween
DG_Tweening_Tween_o* Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardElementPlacementController__PlugUserViewTween (Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardElementPlacementController_o* __this, Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardElementView_o* userView, int32_t newRankIndex, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.DuckFestival.Scripts.UI.Leaderboard.DuckFestivalLeaderboardElementPlacementController$$PlugUserViewTween
   DG_Tweening_Tween_o*
   Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardElementPlacementController__PlugUserViewTween
   (Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardElementPlacementController_o*
   __this,
   Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardElementView_o*
   userView, int32_t newRankIndex, const MethodInfo* method); */

undefined8
Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardElementPlacementController__PlugUserViewTween_38cbab0
          (long param_1,long param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  
  puVar2 = PTR_DAT_057815e0;
  if ((bRam0000000005c34b69 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_0579e470);
    FUN_012d0dc8(PTR_DAT_057874c0);
    FUN_012d0dc8(PTR_DAT_05770998);
    FUN_012d0dc8(PTR_DAT_057ceab0);
    FUN_012d0dc8(PTR_DAT_057e8eb8);
    bRam0000000005c34b69 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar3 = DG_Tweening_DOTween__Sequence_1eda154(0);
  if (param_2 != 0) {
    uVar4 = UnityEngine_Component__get_transform_408b444(param_2,0);
    if (cRam0000000005c230a9 == '\0') {
      FUN_012d0dc8(PTR_DAT_05805c10);
      cRam0000000005c230a9 = '\x01';
    }
    if (*(long *)(param_1 + 0x30) != 0) {
      lVar6 = *(long *)(*(long *)PTR_DAT_05805c10 + 0xb8);
      uVar4 = DG_Tweening_ShortcutExtensions__DOScale_1ee649c
                        (*(undefined4 *)(lVar6 + 0xc),*(undefined4 *)(lVar6 + 0x10),
                         *(undefined4 *)(lVar6 + 0x14),
                         *(undefined4 *)(*(long *)(param_1 + 0x30) + 0x28),uVar4,0);
      if (*(long *)(param_1 + 0x30) != 0) {
        uVar4 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                          (uVar4,*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x38),
                           *(undefined8 *)PTR_DAT_057874c0);
        DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar3,uVar4,0);
        uVar4 = UnityEngine_Component__get_transform_408b444(param_2,0);
        if (*(long *)(param_1 + 0x20) != 0) {
          Modules_Infrastructure_UI_Common_Scripts_Scroll_BasicScrollAdapter__GetLocalPositionForScrollElementView_400743c
                    (*(long *)(param_1 + 0x20),param_3,0);
          if (*(long *)(param_1 + 0x30) != 0) {
            uVar4 = DG_Tweening_ShortcutExtensions__DOLocalMove_1ee56a4(uVar4,0,0);
            puVar2 = PTR_DAT_057e8eb8;
            if (*(long *)(param_1 + 0x30) != 0) {
              uVar4 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450cc0
                                (uVar4,*(undefined4 *)(*(long *)(param_1 + 0x30) + 0x50),
                                 *(undefined8 *)PTR_DAT_05770998);
              DG_Tweening_TweenSettingsExtensions__Join_1ee8bcc(uVar3,uVar4,0);
              lVar6 = *(long *)puVar2;
              if (*(int *)(lVar6 + 0xe0) == 0) {
                thunk_FUN_0130472c();
                lVar6 = *(long *)puVar2;
              }
              puVar1 = PTR_DAT_057606c8;
              lVar7 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
              if (lVar7 == 0) {
                if (*(int *)(lVar6 + 0xe0) == 0) {
                  thunk_FUN_0130472c();
                  lVar6 = *(long *)puVar2;
                }
                uVar4 = **(undefined8 **)(lVar6 + 0xb8);
                lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                if (lVar7 == 0) goto LAB_039cbd0c;
                DG_Tweening_TweenCallback___ctor_1ed6da8
                          (lVar7,uVar4,*(undefined8 *)PTR_DAT_057ceab0,0);
                plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
                *plVar5 = lVar7;
                FUN_012d0d74(plVar5,lVar7);
              }
              DG_Tweening_TweenSettingsExtensions__OnComplete_object__24504c4
                        (uVar3,lVar7,*(undefined8 *)PTR_DAT_0579e470);
              return uVar3;
            }
          }
        }
      }
    }
  }
LAB_039cbd0c:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

