/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Leaderboard.MagicStreakTournamentLeaderboardSwipeController$$PlugUserViewToIndex
void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardSwipeController__PlugUserViewToIndex (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardSwipeController_o* __this, Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardElement_o* userView, int32_t newRankIndex, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Leaderboard.MagicStreakTournamentLeaderboardSwipeController$$PlugUserViewToIndex
   void 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardSwipeController__PlugUserViewToIndex
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardSwipeController_o*
   __this,
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardElement_o*
   userView, int32_t newRankIndex, const MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardSwipeController__PlugUserViewToIndex_3e1835c
               (long param_1,long param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  if (param_2 != 0) {
    lVar4 = UnityEngine_Component__get_transform_408b444(param_2,0);
    if (((*(long *)(param_1 + 0x20) != 0) &&
        (lVar5 = Modules_Infrastructure_UI_Common_Scripts_Scroll_BasicScrollAdapter__GetContentObject_4007bc4
                           (*(long *)(param_1 + 0x20),0), lVar5 != 0)) &&
       (uVar6 = UnityEngine_GameObject__get_transform_408e25c(lVar5,0), lVar4 != 0)) {
      UnityEngine_Transform__SetParent_409352c(lVar4,uVar6,0);
      lVar4 = UnityEngine_Component__get_transform_408b444(param_2,0);
      if ((*(long *)(param_1 + 0x20) != 0) &&
         (Modules_Infrastructure_UI_Common_Scripts_Scroll_BasicScrollAdapter__GetLocalPositionForScrollElementView_400743c
                    (*(long *)(param_1 + 0x20),param_3,0), lVar4 != 0)) {
        UnityEngine_Transform__set_localPosition_4092ce0(lVar4,0);
        puVar2 = PTR_DAT_05793aa8;
        puVar1 = PTR_DAT_0576c200;
        if ((bRam0000000005c380ae & 1) == 0) {
          FUN_012d0dc8(PTR_DAT_05793aa8);
          FUN_012d0dc8(PTR_DAT_0576c200);
          bRam0000000005c380ae = 1;
        }
        uVar6 = UnityEngine_Component__GetComponent_object__27205b8(param_2,*(undefined8 *)puVar2);
        lVar4 = *(long *)puVar1;
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_0130472c(lVar4);
        }
        uVar3 = UnityEngine_Object__op_Inequality_408e110(uVar6,0,0);
        if ((uVar3 & 1) != 0) {
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_0130472c();
          }
          puVar1 = PTR_DAT_0576c200;
          if ((bRam0000000005c3a4a8 & 1) == 0) {
            FUN_012d0dc8(PTR_DAT_0576c200,0);
            bRam0000000005c3a4a8 = 1;
          }
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_0130472c();
          }
          if (pcRam0000000005c3a4a0 == (code *)0x0) {
            pcRam0000000005c3a4a0 = (code *)FUN_012d0d84(&UNK_043ee61e);
          }
                    /* WARNING: Could not recover jumptable at 0x04191e38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam0000000005c3a4a0)(0,uVar6);
          return;
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

