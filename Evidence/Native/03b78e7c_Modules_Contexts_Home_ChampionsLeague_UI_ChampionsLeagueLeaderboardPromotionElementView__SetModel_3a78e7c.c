/* IL2CPP: Modules.Contexts.Home.ChampionsLeague.UI.ChampionsLeagueLeaderboardPromotionElementView$$SetModel
void Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardPromotionElementView__SetModel (Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardPromotionElementView_o* __this, Modules_Contexts_Home_ChampionsLeague_UI_IChampionsLeagueLeaderboardViewModel_o* championsLeagueLeaderboardViewModel, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.ChampionsLeague.UI.ChampionsLeagueLeaderboardPromotionElementView$$SetModel
   void 
   Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardPromotionElementView__SetModel
   (Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardPromotionElementView_o*
   __this, Modules_Contexts_Home_ChampionsLeague_UI_IChampionsLeagueLeaderboardViewModel_o*
   championsLeagueLeaderboardViewModel, const MethodInfo* method); */

void Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardPromotionElementView__SetModel_3a78e7c
               (long param_1,long *param_2)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  
                    /* try { // try from 03b78e7c to 03c78e8b has its CatchHandler @ 03b78ea4 */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 03b78e24 with catch @ 03b78e90
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 03b78e34 with catch @ 03b78e94
                        */
  if ((bRam0000000005c35aba & 1) == 0) {
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 03b78e4c with catch @ 03b78e98
                        */
    FUN_012d0dc8(PTR_DAT_057f31b8);
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 03b78e08 with catch @ 03b78ea4
                       catch(type#1 @ 054cbd58) { ... } // from try @ 03b78e7c with catch @ 03b78ea4
                        */
    bRam0000000005c35aba = 1;
  }
                    /* try { // try from 03b78eac to 03c78eaf has its CatchHandler @ 03b78f64 */
  if (param_2 != (long *)0x0) {
                    /* try { // try from 03b78eb0 to 03c78ec3 has its CatchHandler @ 03b78cc4 */
                    /* try { // try from 03b78ec4 to 03c78edb has its CatchHandler @ 03b78f54 */
    bVar1 = *(byte *)(*(long *)PTR_DAT_057f31b8 + 300);
                    /* try { // try from 03b78edc to 03c78f43 has its CatchHandler @ 03b78cc4 */
    if ((*(byte *)(*param_2 + 300) < bVar1) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_057f31b8))
    {
                    /* WARNING: Subroutine does not return */
      FUN_012d1288(param_2);
    }
    if (*(long *)(param_1 + 0x38) != 0) {
      UnityEngine_GameObject__SetActive_408e318(*(long *)(param_1 + 0x38),(char)param_2[2],0);
      lVar3 = *(long *)(param_1 + 0x40);
      if (lVar3 != 0) {
        lVar2 = param_2[2];
        if (pcRam0000000005c3a388 == (code *)0x0) {
          pcRam0000000005c3a388 = (code *)FUN_012d0d84(&UNK_043edeb4);
        }
                    /* WARNING: Could not recover jumptable at 0x0418e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000005c3a388)(lVar3,(char)lVar2 == '\0');
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

