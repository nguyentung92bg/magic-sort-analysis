/* IL2CPP: Modules.Contexts.Home.PermanentLeaderboard.Scripts.UI.FriendsListView$$CheckContentIsEmpty
bool Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_FriendsListView__CheckContentIsEmpty (Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_FriendsListView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.PermanentLeaderboard.Scripts.UI.FriendsListView$$CheckContentIsEmpty
   bool Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_FriendsListView__CheckContentIsEmpty
   (Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_FriendsListView_o* __this, const
   MethodInfo* method); */

uint Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_FriendsListView__CheckContentIsEmpty_2aee780
               (long param_1)

{
  uint uVar1;
  ulong uVar2;
  
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02bee764 with catch @ 02bee780
                        */
  if (*(long *)(param_1 + 0x40) != 0) {
    uVar2 = Modules_Contexts_Home_Friends_Scripts_FriendsService__HasAnyFriends_1c7a97c
                      (*(long *)(param_1 + 0x40),0);
                    /* try { // try from 02bee798 to 02cee79b has its CatchHandler @ 02bee7c8 */
    if ((uVar2 & 1) == 0) {
      if (*(long *)(param_1 + 0x40) == 0) goto LAB_02bee7c4;
      uVar1 = Modules_Contexts_Home_Friends_Scripts_FriendsService__HasAnyRequests_1c7aaf8
                        (*(long *)(param_1 + 0x40),0);
      uVar1 = uVar1 ^ 1;
    }
    else {
                    /* try { // try from 02bee79c to 02cee7cb has its CatchHandler @ 02bee74c */
      uVar1 = 0;
    }
    return uVar1 & 1;
  }
LAB_02bee7c4:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

