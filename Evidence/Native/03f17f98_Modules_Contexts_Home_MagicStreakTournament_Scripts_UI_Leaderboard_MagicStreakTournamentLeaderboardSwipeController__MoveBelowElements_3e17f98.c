/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Leaderboard.MagicStreakTournamentLeaderboardSwipeController$$MoveBelowElements
void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardSwipeController__MoveBelowElements (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardSwipeController_o* __this, int32_t clampedDelta, int32_t newRankIndex, System_Collections_Generic_List_MagicStreakTournamentLeaderboardElement__o* belowViewElements, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Leaderboard.MagicStreakTournamentLeaderboardSwipeController$$MoveBelowElements
   void 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardSwipeController__MoveBelowElements
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardSwipeController_o*
   __this, int32_t clampedDelta, int32_t newRankIndex,
   System_Collections_Generic_List_MagicStreakTournamentLeaderboardElement__o* belowViewElements,
   const MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardSwipeController__MoveBelowElements_3e17f98
               (undefined1 param_1 [16],float param_2,long param_3,int param_4,int param_5,
               long param_6)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  float fVar11;
  
  if ((bRam0000000005c380bc & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d7818);
    FUN_012d0dc8(PTR_DAT_057ba1e8);
    FUN_012d0dc8(PTR_DAT_057bd180);
    FUN_012d0dc8(PTR_DAT_0576ec60);
    FUN_012d0dc8(PTR_DAT_05770998);
    bRam0000000005c380bc = 1;
  }
  puVar4 = PTR_DAT_057d7818;
  puVar3 = PTR_DAT_0576ec60;
  if (0 < param_4) {
    do {
      if (*(long *)(param_3 + 0x20) == 0) goto LAB_03f181a4;
      uVar5 = Modules_Infrastructure_UI_Common_Scripts_Scroll_BasicScrollAdapter__IsElementAtIndexVisible_40075cc
                        (*(long *)(param_3 + 0x20),param_5,0);
      if ((uVar5 & 1) != 0) {
        if ((*(long *)(param_3 + 0x20) == 0) ||
           (plVar6 = (long *)Modules_Infrastructure_UI_Common_Scripts_Scroll_BasicScrollAdapter__GetViewAt_4007b6c
                                       (*(long *)(param_3 + 0x20),param_5,0), param_6 == 0))
        goto LAB_03f181a4;
        if (plVar6 == (long *)0x0) {
LAB_03f18070:
          plVar6 = (long *)0x0;
        }
        else {
          bVar1 = *(byte *)(*(long *)puVar3 + 300);
          if (*(byte *)(*plVar6 + 300) < bVar1) goto LAB_03f18070;
          if (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3) {
            plVar6 = (long *)0x0;
          }
        }
        lVar8 = *(long *)(param_6 + 0x10);
        lVar9 = *(long *)puVar4;
        *(int *)(param_6 + 0x1c) = *(int *)(param_6 + 0x1c) + 1;
        if (lVar8 == 0) goto LAB_03f181a4;
        uVar2 = *(uint *)(param_6 + 0x18);
        if (uVar2 < *(uint *)(lVar8 + 0x18)) {
          *(uint *)(param_6 + 0x18) = uVar2 + 1;
          *(long **)(lVar8 + (long)(int)uVar2 * 8 + 0x20) = plVar6;
          FUN_012d0d74();
        }
        else {
          (**(code **)(*(long *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x58) + 8))(param_6);
        }
      }
      param_4 = param_4 + -1;
      param_5 = param_5 + 1;
    } while (param_4 != 0);
  }
  puVar4 = PTR_DAT_057bd180;
  puVar3 = PTR_DAT_05770998;
  if (param_6 == 0) {
LAB_03f181a4:
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if (0 < *(int *)(param_6 + 0x18)) {
    iVar10 = 0;
    do {
      lVar8 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (param_6,iVar10,*(undefined8 *)puVar4);
      if ((lVar8 == 0) ||
         (lVar9 = UnityEngine_Component__get_transform_408b444(lVar8,0), lVar9 == 0))
      goto LAB_03f181a4;
      UnityEngine_Transform__get_localPosition_4092c40(lVar9,0);
      uVar7 = UnityEngine_Component__get_transform_408b444(lVar8,0);
      if (*(long *)(param_3 + 0x30) == 0) goto LAB_03f181a4;
      fVar11 = *(float *)(*(long *)(param_3 + 0x30) + 0x40);
      uVar7 = DG_Tweening_ShortcutExtensions__DOLocalMoveY_1ee5a14
                        (param_2 - *(float *)(param_3 + 0x38),uVar7,0,0);
      DG_Tweening_TweenSettingsExtensions__SetEase_object__2450cc0(uVar7,2,*(undefined8 *)puVar3);
      iVar10 = iVar10 + 1;
      param_2 = fVar11;
    } while (iVar10 < *(int *)(param_6 + 0x18));
  }
  return;
}

