/* IL2CPP: Modules.Contexts.Home.PermanentLeaderboard.Scripts.UI.FriendsLeaderboardNotificationController$$FriendListTabSelected
void Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_FriendsLeaderboardNotificationController__FriendListTabSelected (Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_FriendsLeaderboardNotificationController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.PermanentLeaderboard.Scripts.UI.FriendsLeaderboardNotificationController$$FriendListTabSelected
   void 
   Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_FriendsLeaderboardNotificationController__FriendListTabSelected
   (Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_FriendsLeaderboardNotificationController_o*
   __this, const MethodInfo* method); */

void Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_FriendsLeaderboardNotificationController__FriendListTabSelected_2aedfd0
               (long param_1)

{
  byte bVar1;
  long lVar2;
  
  *(undefined1 *)(param_1 + 0x28) = 0;
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 != 0) {
    bVar1 = *(byte *)(param_1 + 0x28);
    if (pcRam0000000005c3a388 == (code *)0x0) {
      pcRam0000000005c3a388 = (code *)FUN_012d0d84(&UNK_043edeb4);
    }
                    /* WARNING: Could not recover jumptable at 0x0418e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000005c3a388)(lVar2,bVar1 & 1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

