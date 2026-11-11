/* IL2CPP: Modules.Contexts.Home.TeamQuest.Scripts.UI.Leaderboard.TeamQuestLeaderboardElementView$$Recycle
void Modules_Contexts_Home_TeamQuest_Scripts_UI_Leaderboard_TeamQuestLeaderboardElementView__Recycle (Modules_Contexts_Home_TeamQuest_Scripts_UI_Leaderboard_TeamQuestLeaderboardElementView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.TeamQuest.Scripts.UI.Leaderboard.TeamQuestLeaderboardElementView$$Recycle
   void 
   Modules_Contexts_Home_TeamQuest_Scripts_UI_Leaderboard_TeamQuestLeaderboardElementView__Recycle
   (Modules_Contexts_Home_TeamQuest_Scripts_UI_Leaderboard_TeamQuestLeaderboardElementView_o*
   __this, const MethodInfo* method); */

void Modules_Contexts_Home_TeamQuest_Scripts_UI_Leaderboard_TeamQuestLeaderboardElementView__Recycle_2de0a68
               (long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_0576c200;
  if ((bRam0000000005c2fd45 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576c200);
    bRam0000000005c2fd45 = 1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x78);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar2 = UnityEngine_Object__op_Inequality_408e110(uVar4,0,0);
  if ((uVar2 & 1) != 0) {
    if (*(long *)(param_1 + 0x78) == 0) goto LAB_02ee0b20;
    Modules_Contexts_Home_UI_Common_Scripts_UserProfileView__Dispose_2981380
              (*(long *)(param_1 + 0x78),0);
  }
  lVar3 = UnityEngine_Component__get_transform_408b444(param_1,0);
  if (lVar3 != 0) {
    UnityEngine_Transform__SetParent_409352c(lVar3,0,0);
    lVar3 = *(long *)(param_1 + 0x18);
    if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x02ee0b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar3 + 0x18))
                (*(undefined8 *)(lVar3 + 0x40),param_1,*(undefined8 *)(lVar3 + 0x28));
      return;
    }
    return;
  }
LAB_02ee0b20:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

