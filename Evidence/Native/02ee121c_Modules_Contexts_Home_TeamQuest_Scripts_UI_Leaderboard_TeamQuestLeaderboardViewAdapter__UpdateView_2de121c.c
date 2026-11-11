/* IL2CPP: Modules.Contexts.Home.TeamQuest.Scripts.UI.Leaderboard.TeamQuestLeaderboardViewAdapter$$UpdateView
void Modules_Contexts_Home_TeamQuest_Scripts_UI_Leaderboard_TeamQuestLeaderboardViewAdapter__UpdateView (Modules_Contexts_Home_TeamQuest_Scripts_UI_Leaderboard_TeamQuestLeaderboardViewAdapter_o* __this, Modules_Infrastructure_Common_Scripts_Generation_Basic_BasicView_o* basicView, Il2CppObject* viewModel, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.TeamQuest.Scripts.UI.Leaderboard.TeamQuestLeaderboardViewAdapter$$UpdateView
   void 
   Modules_Contexts_Home_TeamQuest_Scripts_UI_Leaderboard_TeamQuestLeaderboardViewAdapter__UpdateView
   (Modules_Contexts_Home_TeamQuest_Scripts_UI_Leaderboard_TeamQuestLeaderboardViewAdapter_o*
   __this, Modules_Infrastructure_Common_Scripts_Generation_Basic_BasicView_o* basicView,
   Il2CppObject* viewModel, const MethodInfo* method); */

void Modules_Contexts_Home_TeamQuest_Scripts_UI_Leaderboard_TeamQuestLeaderboardViewAdapter__UpdateView_2de121c
               (undefined8 param_1,long *param_2,long *param_3)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  
  if ((bRam0000000005c2fd4c & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057b70c0);
    FUN_012d0dc8(PTR_DAT_058103e0);
    bRam0000000005c2fd4c = 1;
  }
  if (param_2 != (long *)0x0) {
    lVar2 = *(long *)PTR_DAT_057b70c0;
    if ((*(byte *)(lVar2 + 300) <= *(byte *)(*param_2 + 300)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(lVar2 + 300) * 8 + -8) == lVar2)) {
      lVar3 = *param_2;
      if ((*(byte *)(lVar2 + 300) <= *(byte *)(lVar3 + 300)) &&
         (*(long *)(*(long *)(lVar3 + 200) + (ulong)*(byte *)(lVar2 + 300) * 8 + -8) == lVar2)) {
        if (param_3 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)PTR_DAT_058103e0 + 300);
          if ((*(byte *)(*param_3 + 300) < bVar1) ||
             (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)PTR_DAT_058103e0)) {
                    /* WARNING: Subroutine does not return */
            FUN_012d1288(param_3);
          }
        }
                    /* WARNING: Could not recover jumptable at 0x02ee1304. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar3 + 0x1c8))(param_2,param_3,*(undefined8 *)(lVar3 + 0x1d0));
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d1288(param_2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

