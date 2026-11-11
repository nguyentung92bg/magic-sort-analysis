/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.MagicStreakTournamentResultView$$Show
void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakTournamentResultView__Show (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakTournamentResultView_o* __this, System_String_o* rank, Modules_Contexts_Application_Reward_Scripts_RewardModel_o* rewardModel, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.MagicStreakTournamentResultView$$Show
   void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakTournamentResultView__Show
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakTournamentResultView_o*
   __this, System_String_o* rank, Modules_Contexts_Application_Reward_Scripts_RewardModel_o*
   rewardModel, const MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakTournamentResultView__Show_3e10a20
               (long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  
  puVar1 = PTR_DAT_057720a0;
  if ((bRam0000000005c3807d & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057720a0);
    bRam0000000005c3807d = 1;
  }
  plVar4 = *(long **)(param_1 + 0x18);
  uVar2 = System_String__Concat_1ec3580(*(undefined8 *)puVar1,param_2,0);
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x558))(plVar4,uVar2,*(undefined8 *)(*plVar4 + 0x560));
    if (param_3 == 0) {
      lVar3 = *(long *)(param_1 + 0x20);
      if (lVar3 == 0) goto LAB_03f10ad0;
      uVar2 = 1;
    }
    else {
      Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakTournamentResultView__ShowReward_3e10bd0
                (param_1,param_3);
      lVar3 = *(long *)(param_1 + 0x20);
      if (lVar3 == 0) goto LAB_03f10ad0;
      uVar2 = 0;
    }
    if (pcRam0000000005c3a388 == (code *)0x0) {
      pcRam0000000005c3a388 = (code *)FUN_012d0d84(&UNK_043edeb4);
    }
                    /* WARNING: Could not recover jumptable at 0x0418e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000005c3a388)(lVar3,uVar2);
    return;
  }
LAB_03f10ad0:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

