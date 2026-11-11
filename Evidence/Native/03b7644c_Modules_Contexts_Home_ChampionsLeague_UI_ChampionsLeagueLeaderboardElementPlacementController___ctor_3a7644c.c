/* IL2CPP: Modules.Contexts.Home.ChampionsLeague.UI.ChampionsLeagueLeaderboardElementPlacementController$$.ctor
void Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardElementPlacementController___ctor (Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardElementPlacementController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.ChampionsLeague.UI.ChampionsLeagueLeaderboardElementPlacementController$$.ctor
   void 
   Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardElementPlacementController___ctor
   (Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardElementPlacementController_o*
   __this, const MethodInfo* method); */

undefined1  [16]
Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardElementPlacementController___ctor_3a7644c
          (ulong param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  puVar1 = PTR_DAT_0577bf88;
  if ((bRam0000000005c35a9f & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05807d20);
                    /* try { // try from 03b76480 to 03c7648f has its CatchHandler @ 03b7653c */
    FUN_012d0dc8(PTR_DAT_0577bf88);
    bRam0000000005c35a9f = 1;
  }
                    /* try { // try from 03b76490 to 03c76527 has its CatchHandler @ 03b76108 */
  lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if (lVar2 != 0) {
    System_Collections_Generic_List_Vector3____ctor_2275524(lVar2,*(undefined8 *)PTR_DAT_05807d20);
    *(long *)(param_1 + 0x58) = lVar2;
    FUN_012d0d74((long *)(param_1 + 0x58),lVar2);
    puVar1 = PTR_DAT_0576c200;
    if ((bRam0000000005c3a2b8 & 1) == 0) {
      FUN_012d0dc8(PTR_DAT_0576c200,0);
      bRam0000000005c3a2b8 = 1;
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = param_1;
    return auVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

