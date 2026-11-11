/* IL2CPP: Modules.Contexts.Home.Teams.Scripts.UI.TeamLeaderboardViewAdapter$$get_Count
int32_t Modules_Contexts_Home_Teams_Scripts_UI_TeamLeaderboardViewAdapter__get_Count (Modules_Contexts_Home_Teams_Scripts_UI_TeamLeaderboardViewAdapter_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Teams.Scripts.UI.TeamLeaderboardViewAdapter$$get_Count
   int32_t Modules_Contexts_Home_Teams_Scripts_UI_TeamLeaderboardViewAdapter__get_Count
   (Modules_Contexts_Home_Teams_Scripts_UI_TeamLeaderboardViewAdapter_o* __this, const MethodInfo*
   method); */

undefined4
Modules_Contexts_Home_Teams_Scripts_UI_TeamLeaderboardViewAdapter__get_Count_345e7c4(long param_1)

{
  undefined4 uVar1;
  
  if ((bRam0000000005c3261f & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576c6b8);
    bRam0000000005c3261f = 1;
  }
  if (*(long *)(param_1 + 0x28) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x18);
  }
  return uVar1;
}

