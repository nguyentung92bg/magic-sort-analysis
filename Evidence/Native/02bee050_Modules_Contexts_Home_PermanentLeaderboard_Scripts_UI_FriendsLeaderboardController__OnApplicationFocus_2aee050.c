/* IL2CPP: Modules.Contexts.Home.PermanentLeaderboard.Scripts.UI.FriendsLeaderboardController$$OnApplicationFocus
void Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_FriendsLeaderboardController__OnApplicationFocus (Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_FriendsLeaderboardController_o* __this, bool hasFocus, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.PermanentLeaderboard.Scripts.UI.FriendsLeaderboardController$$OnApplicationFocus
   void 
   Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_FriendsLeaderboardController__OnApplicationFocus
   (Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_FriendsLeaderboardController_o* __this,
   bool hasFocus, const MethodInfo* method); */

void Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_FriendsLeaderboardController__OnApplicationFocus_2aee050
               (long param_1,ulong param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  double dVar3;
  undefined8 uStack_28;
  
  if ((bRam0000000005c2eb90 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0580b9d0);
    FUN_012d0dc8(PTR_DAT_0576c1b8);
    bRam0000000005c2eb90 = 1;
  }
  uStack_28 = 0;
  if (*(char *)(param_1 + 0x98) != '\0') {
    if (*(int *)(*(long *)PTR_DAT_0580b9d0 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar2 = System_DateTime__get_Now_2100510(0);
    puVar1 = PTR_DAT_0576c1b8;
    if ((param_2 & 1) == 0) {
      *(undefined8 *)(param_1 + 0xa0) = uVar2;
    }
    else {
      uStack_28 = System_DateTime__op_Subtraction_2101f60(uVar2,*(undefined8 *)(param_1 + 0xa0),0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_0130472c(*(long *)puVar1);
      }
      dVar3 = (double)System_TimeSpan__get_TotalSeconds_26999ac(&uStack_28,0);
      if (15.0 < dVar3) {
        if (*(long *)(param_1 + 0x90) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        Modules_Contexts_Home_Friends_Scripts_FriendsService__Refresh_1c7c5c8
                  (*(long *)(param_1 + 0x90),0);
      }
    }
  }
  return;
}

