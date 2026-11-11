/* IL2CPP: Modules.Contexts.Home.TeamQuest.Scripts.UI.Leaderboard.TeamQuestLeaderboardViewAdapter$$UpdateView
void Modules_Contexts_Home_TeamQuest_Scripts_UI_Leaderboard_TeamQuestLeaderboardViewAdapter__UpdateView (Modules_Contexts_Home_TeamQuest_Scripts_UI_Leaderboard_TeamQuestLeaderboardViewAdapter_o* __this, Modules_Infrastructure_Common_Scripts_Generation_Basic_BasicView_o* view, int32_t index, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.TeamQuest.Scripts.UI.Leaderboard.TeamQuestLeaderboardViewAdapter$$UpdateView
   void 
   Modules_Contexts_Home_TeamQuest_Scripts_UI_Leaderboard_TeamQuestLeaderboardViewAdapter__UpdateView
   (Modules_Contexts_Home_TeamQuest_Scripts_UI_Leaderboard_TeamQuestLeaderboardViewAdapter_o*
   __this, Modules_Infrastructure_Common_Scripts_Generation_Basic_BasicView_o* view, int32_t index,
   const MethodInfo* method); */

void Modules_Contexts_Home_TeamQuest_Scripts_UI_Leaderboard_TeamQuestLeaderboardViewAdapter__UpdateView_2de1128
               (long param_1,long *param_2,undefined4 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((bRam0000000005c2fd4b & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057b70c0);
    FUN_012d0dc8(PTR_DAT_0575db98);
    bRam0000000005c2fd4b = 1;
  }
  if (((*(long *)(param_1 + 0x38) != 0) &&
      (lVar1 = *(long *)(*(long *)(param_1 + 0x38) + 0x10), lVar1 != 0)) &&
     (uVar2 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (lVar1,param_3,*(undefined8 *)PTR_DAT_0575db98), param_2 != (long *)0x0)) {
    lVar1 = *(long *)PTR_DAT_057b70c0;
    if ((*(byte *)(lVar1 + 300) <= *(byte *)(*param_2 + 300)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(lVar1 + 300) * 8 + -8) == lVar1)) {
      lVar3 = *param_2;
      if ((*(byte *)(lVar1 + 300) <= *(byte *)(lVar3 + 300)) &&
         (*(long *)(*(long *)(lVar3 + 200) + (ulong)*(byte *)(lVar1 + 300) * 8 + -8) == lVar1)) {
                    /* WARNING: Could not recover jumptable at 0x02ee120c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar3 + 0x1c8))(param_2,uVar2,*(undefined8 *)(lVar3 + 0x1d0));
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d1288(param_2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

