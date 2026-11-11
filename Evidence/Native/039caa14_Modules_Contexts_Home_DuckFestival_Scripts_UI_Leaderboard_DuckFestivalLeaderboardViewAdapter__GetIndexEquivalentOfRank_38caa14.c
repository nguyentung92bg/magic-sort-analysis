/* IL2CPP: Modules.Contexts.Home.DuckFestival.Scripts.UI.Leaderboard.DuckFestivalLeaderboardViewAdapter$$GetIndexEquivalentOfRank
int32_t Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardViewAdapter__GetIndexEquivalentOfRank (Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardViewAdapter_o* __this, int32_t rank, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.DuckFestival.Scripts.UI.Leaderboard.DuckFestivalLeaderboardViewAdapter$$GetIndexEquivalentOfRank
   int32_t
   Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardViewAdapter__GetIndexEquivalentOfRank
   (Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardViewAdapter_o*
   __this, int32_t rank, const MethodInfo* method); */

int Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardViewAdapter__GetIndexEquivalentOfRank_38caa14
              (long param_1,int param_2)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  
  if ((bRam0000000005c34b85 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0578aca0);
    FUN_012d0dc8(PTR_DAT_057e6c38);
    bRam0000000005c34b85 = 1;
  }
  puVar1 = PTR_DAT_057e6c38;
  lVar2 = *(long *)(param_1 + 0x40);
  if (lVar2 != 0) {
                    /* catch() { ... } // from try @ 039cabb8 with catch @ 039caa60
                       catch() { ... } // from try @ 039cabf4 with catch @ 039caa60
                       catch() { ... } // from try @ 039cac30 with catch @ 039caa60
                       catch() { ... } // from try @ 039cac5c with catch @ 039caa60
                       catch() { ... } // from try @ 039cace0 with catch @ 039caa60 */
    iVar3 = 0;
    do {
      if (*(int *)(lVar2 + 0x18) <= iVar3) {
                    /* try { // try from 039caab4 to 03acabb7 has its CatchHandler @ 039cabc4 */
        return -1;
      }
      lVar2 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (lVar2,iVar3,*(undefined8 *)puVar1);
      if (lVar2 == 0) break;
      if (*(int *)(lVar2 + 0x10) == param_2) {
        return iVar3;
      }
      lVar2 = *(long *)(param_1 + 0x40);
      iVar3 = iVar3 + 1;
                    /* try { // try from 039caa98 to 03acaa9b has its CatchHandler @ 039cabb8 */
    } while (lVar2 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

