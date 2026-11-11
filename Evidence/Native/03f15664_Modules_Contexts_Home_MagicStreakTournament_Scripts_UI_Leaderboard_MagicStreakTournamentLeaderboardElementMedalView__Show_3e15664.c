/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Leaderboard.MagicStreakTournamentLeaderboardElementMedalView$$Show
void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardElementMedalView__Show (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardElementMedalView_o* __this, int32_t rank, bool isMe, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Leaderboard.MagicStreakTournamentLeaderboardElementMedalView$$Show
   void 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardElementMedalView__Show
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardElementMedalView_o*
   __this, int32_t rank, bool isMe, const MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardElementMedalView__Show_3e15664
               (long param_1,int param_2,ulong param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardElementMedalView__SetRank_3e161f4
            ();
  if (param_2 == 3) {
    lVar1 = *(long *)(param_1 + 0x18);
    if (lVar1 == 0) goto LAB_03f15770;
    uVar2 = *(undefined8 *)(param_1 + 0x30);
  }
  else if (param_2 == 2) {
    lVar1 = *(long *)(param_1 + 0x18);
    if (lVar1 == 0) goto LAB_03f15770;
    uVar2 = *(undefined8 *)(param_1 + 0x28);
  }
  else {
    if (param_2 != 1) {
      if (*(long *)(param_1 + 0x38) == 0) goto LAB_03f15770;
      lVar1 = 0x48;
      if ((param_3 & 1) == 0) {
        lVar1 = 0x40;
      }
      UnityEngine_SpriteRenderer__set_sprite_4095b64
                (*(long *)(param_1 + 0x38),*(undefined8 *)(param_1 + lVar1),0);
      if ((*(long *)(param_1 + 0x38) == 0) ||
         (lVar1 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x38),0),
         lVar1 == 0)) goto LAB_03f15770;
      UnityEngine_GameObject__SetActive_408e318(lVar1,1,0);
      if ((*(long *)(param_1 + 0x18) == 0) ||
         (lVar1 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x18),0),
         lVar1 == 0)) goto LAB_03f15770;
      uVar2 = 0;
      goto LAB_03f15760;
    }
    lVar1 = *(long *)(param_1 + 0x18);
    if (lVar1 == 0) goto LAB_03f15770;
    uVar2 = *(undefined8 *)(param_1 + 0x20);
  }
  UnityEngine_SpriteRenderer__set_sprite_4095b64(lVar1,uVar2,0);
  if ((*(long *)(param_1 + 0x38) != 0) &&
     (lVar1 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x38),0), lVar1 != 0
     )) {
    UnityEngine_GameObject__SetActive_408e318(lVar1,0,0);
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (lVar1 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x18),0),
       lVar1 != 0)) {
      uVar2 = 1;
LAB_03f15760:
      if (pcRam0000000005c3a388 == (code *)0x0) {
        pcRam0000000005c3a388 = (code *)FUN_012d0d84(&UNK_043edeb4);
      }
                    /* WARNING: Could not recover jumptable at 0x0418e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000005c3a388)(lVar1,uVar2);
      return;
    }
  }
LAB_03f15770:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

