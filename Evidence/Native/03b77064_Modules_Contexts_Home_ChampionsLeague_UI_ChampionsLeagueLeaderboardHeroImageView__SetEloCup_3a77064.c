/* IL2CPP: Modules.Contexts.Home.ChampionsLeague.UI.ChampionsLeagueLeaderboardHeroImageView$$SetEloCup
void Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardHeroImageView__SetEloCup (Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardHeroImageView_o* __this, int32_t eloIndex, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.ChampionsLeague.UI.ChampionsLeagueLeaderboardHeroImageView$$SetEloCup
   void Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardHeroImageView__SetEloCup
   (Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardHeroImageView_o* __this,
   int32_t eloIndex, const MethodInfo* method); */

void Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardHeroImageView__SetEloCup_3a77064
               (long param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((bRam0000000005c35aa8 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057e9700);
    FUN_012d0dc8(PTR_DAT_057d3a18);
    bRam0000000005c35aa8 = 1;
  }
  if (param_2 < 0) {
    return;
  }
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x18) <= param_2) {
      return;
    }
    lVar3 = *(long *)(param_1 + 0x20);
    uVar2 = System_Collections_Generic_List_object___get_Item_21fc76c
                      (lVar1,param_2,*(undefined8 *)PTR_DAT_057d3a18);
    if (lVar3 != 0) {
      if (pcRam0000000005c3a730 == (code *)0x0) {
        pcRam0000000005c3a730 = (code *)FUN_012d0d84(&UNK_043ef929);
      }
                    /* WARNING: Could not recover jumptable at 0x04195ba4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000005c3a730)(lVar3,uVar2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

