/* IL2CPP: Modules.Contexts.Home.PermanentLeaderboard.Scripts.LeaderboardController$$Hide
void Modules_Contexts_Home_PermanentLeaderboard_Scripts_LeaderboardController__Hide (Modules_Contexts_Home_PermanentLeaderboard_Scripts_LeaderboardController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.PermanentLeaderboard.Scripts.LeaderboardController$$Hide
   void Modules_Contexts_Home_PermanentLeaderboard_Scripts_LeaderboardController__Hide
   (Modules_Contexts_Home_PermanentLeaderboard_Scripts_LeaderboardController_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_PermanentLeaderboard_Scripts_LeaderboardController__Hide_2ae972c
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
                    /* try { // try from 02be972c to 02ce9757 has its CatchHandler @ 02be9588 */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02be9728 with catch @ 02be9734
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02be963c with catch @ 02be9738
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02be9630 with catch @ 02be973c
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02be9678 with catch @ 02be9740
                        */
  if ((bRam0000000005c2eb6a & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057fcc38);
                    /* try { // try from 02be9758 to 02ce975b has its CatchHandler @ 02be97d4 */
    FUN_012d0dc8(PTR_DAT_057ff728);
    FUN_012d0dc8(PTR_DAT_057b82d8);
    FUN_012d0dc8(PTR_DAT_05796750);
    bRam0000000005c2eb6a = 1;
  }
  puVar2 = PTR_DAT_057ff728;
  puVar1 = PTR_DAT_057fcc38;
  uStack_30 = 0;
  lStack_28 = 0;
  uStack_38 = 0;
  if (*(long *)(param_1 + 0x18) != 0) {
                    /* try { // try from 02be9798 to 02ce97bf has its CatchHandler @ 02be97e0 */
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&uStack_38,*(long *)(param_1 + 0x18),*(undefined8 *)PTR_DAT_05796750);
    while( true ) {
      uVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                        (&uStack_38,*(undefined8 *)puVar2);
                    /* try { // try from 02be97c0 to 02ce97cb has its CatchHandler @ 02be9588 */
      if ((uVar3 & 1) == 0) {
                    /* catch() { ... } // from try @ 02be9758 with catch @ 02be97d4 */
        System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                  (&uStack_38,*(undefined8 *)puVar1);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02be9798 with catch @ 02be97e0
                       catch(type#2 @ 00000000) { ... } // from try @ 02be97cc with catch @ 02be97e0
                        */
        if (*(long *)(param_1 + 0x28) != 0) {
          Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_PlayersLeaderboardController__Hide_2ae98bc
                    ();
        }
        if (*(long *)(param_1 + 0x20) != 0) {
          Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentLeaderboardController__Hide_32de4fc
                    (*(long *)(param_1 + 0x20),0);
        }
        if (*(long *)(param_1 + 0x30) != 0) {
          Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_TeamsLeaderboardController__Hide_2ae9904
                    ();
        }
        return;
      }
      if (lStack_28 == 0) break;
                    /* try { // try from 02be97cc to 02ce97d3 has its CatchHandler @ 02be97e0 */
      Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_Tab__Deselect_2ae989c();
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

