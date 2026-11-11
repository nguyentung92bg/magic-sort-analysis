/* IL2CPP: Modules.Contexts.Home.ChampionsLeague.UI.ChampionsLeagueLeaderboardCupView$$SetActive
void Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardCupView__SetActive (Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardCupView_o* __this, int32_t userElo, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.Home.ChampionsLeague.UI.ChampionsLeagueLeaderboardCupView$$SetActive
   void Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardCupView__SetActive
   (Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardCupView_o* __this, int32_t
   userElo, const MethodInfo* method); */

void Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardCupView__SetActive_3a745d4
               (long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar3 = _UNK_04339cd0;
    if (*(int *)(param_1 + 0x30) <= param_2) {
      uVar3 = 0x3f800000;
    }
    UnityEngine_SpriteRenderer__set_color_4095de0
              (0x3f800000,0x3f800000,0x3f800000,uVar3,*(long *)(param_1 + 0x18),0);
    if ((*(long *)(param_1 + 0x38) != 0) &&
       (lVar2 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x38),0),
       lVar2 != 0)) {
      iVar1 = *(int *)(param_1 + 0x30);
      if (pcRam0000000005c3a388 == (code *)0x0) {
        pcRam0000000005c3a388 = (code *)FUN_012d0d84(&UNK_043edeb4);
      }
                    /* WARNING: Could not recover jumptable at 0x0418e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000005c3a388)(lVar2,iVar1 == param_2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

