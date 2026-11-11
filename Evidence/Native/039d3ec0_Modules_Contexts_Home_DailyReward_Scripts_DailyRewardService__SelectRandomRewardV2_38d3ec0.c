/* IL2CPP: Modules.Contexts.Home.DailyReward.Scripts.DailyRewardService$$SelectRandomRewardV2
Modules_Contexts_Application_Reward_Scripts_RewardModel_o* Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService__SelectRandomRewardV2 (Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService_o* __this, int32_t selectedRewardIndex, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.DailyReward.Scripts.DailyRewardService$$SelectRandomRewardV2
   Modules_Contexts_Application_Reward_Scripts_RewardModel_o*
   Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService__SelectRandomRewardV2
   (Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService_o* __this, int32_t
   selectedRewardIndex, const MethodInfo* method); */

long Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService__SelectRandomRewardV2_38d3ec0
               (long param_1,undefined4 param_2)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  uVar5 = Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService__GetTargetProbabilitiesForV2_38d3ef8
                    ();
  lVar8 = *(long *)(param_1 + 0x10);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if ((bRam0000000005c34bae & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05774c00);
    FUN_012d0dc8(PTR_DAT_058072e0);
    bRam0000000005c34bae = 1;
  }
  lVar2 = Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService__GetRandomRewardV2_38d1e50
                    (lVar8,uVar5);
  if (lVar2 == 0) {
    return 0;
  }
  if ((*(long *)(lVar8 + 0x10) != 0) &&
     (lVar6 = *(long *)(*(long *)(lVar8 + 0x10) + 0x18), lVar6 != 0)) {
    lVar10 = *(long *)(lVar6 + 0x40);
    lVar6 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_05774c00);
    if (lVar6 != 0) {
      System_Object___ctor_23dfe5c(lVar6,0);
      *(long *)(lVar6 + 0x18) = lVar2;
      *(undefined4 *)(lVar6 + 0x10) = param_2;
      FUN_012d0d74((long *)(lVar6 + 0x18),lVar2);
      if (lVar10 != 0) {
        lVar7 = *(long *)(lVar10 + 0x10);
        lVar9 = *(long *)PTR_DAT_058072e0;
        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
        if (lVar7 != 0) {
          uVar1 = *(uint *)(lVar10 + 0x18);
          if (uVar1 < *(uint *)(lVar7 + 0x18)) {
            *(uint *)(lVar10 + 0x18) = uVar1 + 1;
            plVar3 = (long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
            *plVar3 = lVar6;
            FUN_012d0d74(plVar3,lVar6);
          }
          else {
            (**(code **)(*(long *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x58) + 8))
                      (lVar10,lVar6);
          }
          *(undefined2 *)(lVar8 + 0x20) = 0x101;
          uVar4 = Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService__IsSelectionCompleted_38d22b4
                            (lVar8);
          if ((uVar4 & 1) == 0) {
            return lVar2;
          }
          Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService__AddRewardToLastEarnedRewards_38d2324
                    (lVar8,lVar2);
          Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService__ClaimEvent_38d0350
                    (lVar8);
          return lVar2;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

