/* IL2CPP: Modules.Contexts.Home.DuckFestival.Scripts.UI.Leaderboard.DuckFestivalLeaderboardViewAdapter$$UpdateAllViewElementRanks
void Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardViewAdapter__UpdateAllViewElementRanks (Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardViewAdapter_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.DuckFestival.Scripts.UI.Leaderboard.DuckFestivalLeaderboardViewAdapter$$UpdateAllViewElementRanks
   void 
   Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardViewAdapter__UpdateAllViewElementRanks
   (Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardViewAdapter_o*
   __this, const MethodInfo* method); */

void Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardViewAdapter__UpdateAllViewElementRanks_38cb168
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  int iVar4;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  if ((bRam0000000005c34b87 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057b2700);
    FUN_012d0dc8(PTR_DAT_057ce968);
    FUN_012d0dc8(PTR_DAT_05776928);
    FUN_012d0dc8(PTR_DAT_0578b168);
    bRam0000000005c34b87 = 1;
  }
  puVar2 = PTR_DAT_057ce968;
  puVar1 = PTR_DAT_057b2700;
  uStack_30 = 0;
  lStack_28 = 0;
  uStack_38 = 0;
  if (*(long *)(param_1 + 0x40) != 0) {
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&uStack_38,*(long *)(param_1 + 0x40),*(undefined8 *)PTR_DAT_0578b168);
    iVar4 = 1;
    while( true ) {
      uVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                        (&uStack_38,*(undefined8 *)puVar2);
      if ((uVar3 & 1) == 0) {
        System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                  (&uStack_38,*(undefined8 *)puVar1);
        return;
      }
      if (lStack_28 == 0) break;
      *(int *)(lStack_28 + 0x10) = iVar4;
      iVar4 = iVar4 + 1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

