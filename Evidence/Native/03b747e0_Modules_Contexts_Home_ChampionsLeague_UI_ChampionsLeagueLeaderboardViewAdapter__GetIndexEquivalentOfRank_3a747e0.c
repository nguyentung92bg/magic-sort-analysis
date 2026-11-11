/* IL2CPP: Modules.Contexts.Home.ChampionsLeague.UI.ChampionsLeagueLeaderboardViewAdapter$$GetIndexEquivalentOfRank
int32_t Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardViewAdapter__GetIndexEquivalentOfRank (Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardViewAdapter_o* __this, int32_t rank, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.ChampionsLeague.UI.ChampionsLeagueLeaderboardViewAdapter$$GetIndexEquivalentOfRank
   int32_t
   Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardViewAdapter__GetIndexEquivalentOfRank
   (Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardViewAdapter_o* __this,
   int32_t rank, const MethodInfo* method); */

int Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardViewAdapter__GetIndexEquivalentOfRank_3a747e0
              (long param_1,int param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  int iVar6;
  
  if ((bRam0000000005c35ac3 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057853c8);
    FUN_012d0dc8(PTR_DAT_05765300);
    FUN_012d0dc8(PTR_DAT_057a6d70);
    bRam0000000005c35ac3 = 1;
  }
  puVar3 = PTR_DAT_057a6d70;
  puVar2 = PTR_DAT_057853c8;
  lVar4 = *(long *)(param_1 + 0x28);
  if (lVar4 != 0) {
    iVar6 = 0;
    do {
      if (*(int *)(lVar4 + 0x18) <= iVar6) {
        return -1;
      }
      plVar5 = (long *)System_Collections_Generic_List_object___get_Item_21fc76c
                                 (lVar4,iVar6,*(undefined8 *)puVar3);
      if (plVar5 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)puVar2 + 300);
        if (((bVar1 <= *(byte *)(*plVar5 + 300)) &&
            (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar2)) &&
           (*(int *)((long)plVar5 + 0x14) == param_2)) {
          return iVar6;
        }
      }
      lVar4 = *(long *)(param_1 + 0x28);
      iVar6 = iVar6 + 1;
    } while (lVar4 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

