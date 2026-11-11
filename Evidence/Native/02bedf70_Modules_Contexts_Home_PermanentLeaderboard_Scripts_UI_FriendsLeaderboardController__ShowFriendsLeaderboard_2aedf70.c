/* IL2CPP: Modules.Contexts.Home.PermanentLeaderboard.Scripts.UI.FriendsLeaderboardController$$ShowFriendsLeaderboard
void Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_FriendsLeaderboardController__ShowFriendsLeaderboard (Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_FriendsLeaderboardController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.PermanentLeaderboard.Scripts.UI.FriendsLeaderboardController$$ShowFriendsLeaderboard
   void 
   Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_FriendsLeaderboardController__ShowFriendsLeaderboard
   (Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_FriendsLeaderboardController_o* __this,
   const MethodInfo* method); */

void Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_FriendsLeaderboardController__ShowFriendsLeaderboard_2aedf70
               (long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x80) != 0) {
    *(undefined1 *)(*(long *)(param_1 + 0x80) + 0x28) = 0;
    Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_FriendsLeaderboardNotificationController__UpdateView_2aee1ec
              ();
    if (*(long *)(param_1 + 0x20) != 0) {
      Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_FriendsListView__Show_2aedfd8();
      lVar1 = *(long *)(param_1 + 0x28);
      if (lVar1 != 0) {
        *(undefined1 *)(lVar1 + 0x40) = 0;
        lVar1 = UnityEngine_Component__get_gameObject_408b480(lVar1,0);
        if (lVar1 != 0) {
          if (pcRam0000000005c3a388 == (code *)0x0) {
            pcRam0000000005c3a388 = (code *)FUN_012d0d84(&UNK_043edeb4);
          }
                    /* WARNING: Could not recover jumptable at 0x0418e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam0000000005c3a388)(lVar1,0);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

