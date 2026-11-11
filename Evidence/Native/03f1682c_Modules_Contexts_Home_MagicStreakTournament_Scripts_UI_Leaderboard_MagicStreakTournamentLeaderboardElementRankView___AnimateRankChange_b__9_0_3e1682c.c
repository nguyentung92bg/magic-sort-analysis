/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Leaderboard.MagicStreakTournamentLeaderboardElementRankView$$<AnimateRankChange>b__9_0
void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardElementRankView___AnimateRankChange_b__9_0 (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardElementRankView_o* __this, float value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Leaderboard.MagicStreakTournamentLeaderboardElementRankView$$<AnimateRankChange>b__9_0
   void 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardElementRankView___AnimateRankChange_b__9_0
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardElementRankView_o*
   __this, float value, const MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardElementRankView___AnimateRankChange_b__9_0_3e1682c
               (float param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  double dVar7;
  double dVar8;
  double dStack_18;
  
  if (cRam0000000005c244b9 == '\0') {
    FUN_012d0dc8(PTR_DAT_057d6f00);
    cRam0000000005c244b9 = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_057d6f00 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  dVar8 = (double)param_1;
  dVar7 = (double)FUN_01038b50(dVar8,&dStack_18);
  if (0.0 <= param_1) {
    if (dVar7 == 0.5) {
      dVar7 = 1.0;
      goto LAB_03f168bc;
    }
    dStack_18 = (double)(long)(dVar8 + 0.5);
  }
  else if (dVar7 == -0.5) {
    dVar7 = -1.0;
LAB_03f168bc:
    if (((long)dStack_18 & 1U) != 0) {
      dStack_18 = dStack_18 + dVar7;
    }
  }
  else {
    dStack_18 = (double)(long)(dVar8 + -0.5);
  }
  iVar1 = -0x80000000;
  if (dStack_18 != INFINITY) {
    iVar1 = (int)dStack_18;
  }
  if ((bRam0000000005c380b1 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_0578af90);
    FUN_012d0dc8(PTR_DAT_057e05a0);
    bRam0000000005c380b1 = 1;
  }
  plVar5 = *(long **)(param_2 + 0x38);
  uVar3 = System_Int32__ToString_26c9768(&stack0xffffffffffffffdc,0);
  puVar2 = PTR_DAT_057db748;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x558))(plVar5,uVar3,*(undefined8 *)(*plVar5 + 0x560));
    plVar5 = *(long **)(param_2 + 0x48);
    if (iVar1 < 0x3e9) {
      uVar3 = *(undefined8 *)puVar2;
      puVar4 = &stack0xffffffffffffffd4;
      puVar6 = (undefined8 *)PTR_DAT_0578af90;
    }
    else {
      uVar3 = *(undefined8 *)puVar2;
      puVar4 = &stack0xffffffffffffffd8;
      puVar6 = (undefined8 *)PTR_DAT_057e05a0;
    }
    uVar3 = thunk_FUN_01320a8c(uVar3,puVar4);
    uVar3 = System_String__Format_1ec10a8(*puVar6,uVar3,0);
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x558))(plVar5,uVar3,*(undefined8 *)(*plVar5 + 0x560));
      if (iVar1 < 4) {
        uVar3 = Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardElementRankView__GetMedalSprite_3e16588
                          (param_2);
        if (*(long *)(param_2 + 0x30) == 0) goto LAB_03f16750;
        UnityEngine_SpriteRenderer__set_sprite_4095b64(*(long *)(param_2 + 0x30),uVar3,0);
      }
      if (*(long *)(param_2 + 0x40) != 0) {
        UnityEngine_GameObject__SetActive_408e318(*(long *)(param_2 + 0x40),3 < iVar1,0);
        if (*(long *)(param_2 + 0x28) != 0) {
          UnityEngine_GameObject__SetActive_408e318(*(long *)(param_2 + 0x28),iVar1 < 4,0);
          return;
        }
      }
    }
  }
LAB_03f16750:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

