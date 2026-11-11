/* IL2CPP: Modules.Contexts.Home.ChampionsLeague.UI.ChampionsLeagueLeaderboardElementView$$RemoveSortingGroup
void Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardElementView__RemoveSortingGroup (Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardElementView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.ChampionsLeague.UI.ChampionsLeagueLeaderboardElementView$$RemoveSortingGroup
   void 
   Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardElementView__RemoveSortingGroup
   (Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardElementView_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardElementView__RemoveSortingGroup_3a76390
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  
  puVar2 = PTR_DAT_05793aa8;
  puVar1 = PTR_DAT_0576c200;
  if ((bRam0000000005c35aa6 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05793aa8);
                    /* try { // try from 03b763c8 to 03c763ef has its CatchHandler @ 03b76540 */
    FUN_012d0dc8(PTR_DAT_0576c200);
    bRam0000000005c35aa6 = 1;
  }
  uVar3 = UnityEngine_Component__GetComponent_object__27205b8(param_1,*(undefined8 *)puVar2);
  lVar5 = *(long *)puVar1;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_0130472c(lVar5);
  }
                    /* try { // try from 03b76408 to 03c76467 has its CatchHandler @ 03b76544 */
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

