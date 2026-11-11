/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.MagicStreakTournamentPopupProgressBarView$$Show
void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakTournamentPopupProgressBarView__Show (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakTournamentPopupProgressBarView_o* __this, Modules_Contexts_Application_Reward_Scripts_RewardModel_o* rewardModel, int32_t currentHat, int32_t maxHat, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.MagicStreakTournamentPopupProgressBarView$$Show
   void 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakTournamentPopupProgressBarView__Show
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakTournamentPopupProgressBarView_o*
   __this, Modules_Contexts_Application_Reward_Scripts_RewardModel_o* rewardModel, int32_t
   currentHat, int32_t maxHat, const MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakTournamentPopupProgressBarView__Show_3e0e8e4
               (long param_1,long param_2,int param_3,int param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  float fVar6;
  int iStack_38;
  int iStack_34;
  
  Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakTournamentPopupProgressBarView__RecycleCurrentCurrencyView_3e1067c
            ();
  if (param_2 == 0) {
    Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakTournamentPopupProgressBarView__ShowCompleted_3e109c8
              (param_1);
    param_3 = 1;
    param_4 = 1;
  }
  else {
    Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakTournamentPopupProgressBarView__ShowInProgress_3e10748
              ();
    Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakTournamentPopupProgressBarView__ShowReward_3e1078c
              (param_1,param_2);
  }
  if ((bRam0000000005c3807a & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057c0628);
    bRam0000000005c3807a = 1;
  }
  puVar2 = PTR_DAT_057db748;
  puVar1 = PTR_DAT_057c0628;
  if (*(long *)(param_1 + 0x28) != 0) {
    fVar6 = 0.0;
    if ((float)param_3 / (float)param_4 != 0.0) {
      fVar6 = *(float *)(param_1 + 0x40) +
              ((float)param_3 / (float)param_4) * (1.0 - *(float *)(param_1 + 0x40));
    }
    UnityEngine_SpriteRenderer__set_size_4095cb8
              (fVar6 * *(float *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54),
               *(long *)(param_1 + 0x28),0);
    plVar5 = *(long **)(param_1 + 0x30);
    iStack_34 = param_3;
    uVar3 = thunk_FUN_01320a8c(*(undefined8 *)puVar2,&iStack_34);
    iStack_38 = param_4;
    uVar4 = thunk_FUN_01320a8c(*(undefined8 *)puVar2,&iStack_38);
    uVar3 = System_String__Format_1ed15b8(*(undefined8 *)puVar1,uVar3,uVar4,0);
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x558))(plVar5,uVar3,*(undefined8 *)(*plVar5 + 0x560));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

