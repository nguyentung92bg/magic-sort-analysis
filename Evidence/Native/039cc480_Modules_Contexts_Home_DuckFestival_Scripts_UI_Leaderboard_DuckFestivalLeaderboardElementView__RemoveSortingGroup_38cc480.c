/* IL2CPP: Modules.Contexts.Home.DuckFestival.Scripts.UI.Leaderboard.DuckFestivalLeaderboardElementView$$RemoveSortingGroup
void Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardElementView__RemoveSortingGroup (Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardElementView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.DuckFestival.Scripts.UI.Leaderboard.DuckFestivalLeaderboardElementView$$RemoveSortingGroup
   void 
   Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardElementView__RemoveSortingGroup
   (Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardElementView_o*
   __this, const MethodInfo* method); */

void Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardElementView__RemoveSortingGroup_38cc480
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  
  puVar2 = PTR_DAT_05793aa8;
  puVar1 = PTR_DAT_0576c200;
  if ((bRam0000000005c34b79 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05793aa8);
    FUN_012d0dc8(PTR_DAT_0576c200);
    bRam0000000005c34b79 = 1;
  }
  uVar3 = UnityEngine_Component__GetComponent_object__27205b8(param_1,*(undefined8 *)puVar2);
  lVar5 = *(long *)puVar1;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_0130472c(lVar5);
  }
  uVar4 = UnityEngine_Object__op_Inequality_408e110(uVar3,0,0);
  if ((uVar4 & 1) != 0) {
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
    (*pcRam0000000005c3a4a0)(0,uVar3);
    return;
  }
  return;
}

