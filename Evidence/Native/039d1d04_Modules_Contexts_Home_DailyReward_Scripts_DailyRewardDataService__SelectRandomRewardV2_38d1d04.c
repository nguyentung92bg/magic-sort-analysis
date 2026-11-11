/* IL2CPP: Modules.Contexts.Home.DailyReward.Scripts.DailyRewardDataService$$SelectRandomRewardV2
Modules_Contexts_Application_Reward_Scripts_RewardModel_o* Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService__SelectRandomRewardV2 (Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService_o* __this, System_Collections_Generic_List_DailyRewardProbabilityRewardModelV2__o* probabilities, int32_t selectedRewardIndex, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.DailyReward.Scripts.DailyRewardDataService$$SelectRandomRewardV2
   Modules_Contexts_Application_Reward_Scripts_RewardModel_o*
   Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService__SelectRandomRewardV2
   (Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService_o* __this,
   System_Collections_Generic_List_DailyRewardProbabilityRewardModelV2__o* probabilities, int32_t
   selectedRewardIndex, const MethodInfo* method); */

long Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService__SelectRandomRewardV2_38d1d04
               (long param_1,undefined8 param_2,undefined4 param_3)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
                    /* try { // try from 039d1d14 to 03ad1d23 has its CatchHandler @ 039d1d24 */
                    /* catch() { ... } // from try @ 039d1c64 with catch @ 039d1d24
                       catch() { ... } // from try @ 039d1c90 with catch @ 039d1d24
                       catch() { ... } // from try @ 039d1d14 with catch @ 039d1d24 */
  if ((bRam0000000005c34bae & 1) == 0) {
                    /* try { // try from 039d1d28 to 03ad1d2b has its CatchHandler @ 039d1d34 */
                    /* try { // try from 039d1d2c to 03ad1d37 has its CatchHandler @ 039d1b74 */
    FUN_012d0dc8(PTR_DAT_05774c00);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 039d1d28 with catch @ 039d1d34
                        */
                    /* catch() { ... } // from try @ 039d1de4 with catch @ 039d1d38
                       catch() { ... } // from try @ 039d1e24 with catch @ 039d1d38
                       catch() { ... } // from try @ 039d1e5c with catch @ 039d1d38
                       catch() { ... } // from try @ 039d1e88 with catch @ 039d1d38
                       catch() { ... } // from try @ 039d1f0c with catch @ 039d1d38 */
    FUN_012d0dc8(PTR_DAT_058072e0);
    bRam0000000005c34bae = 1;
  }
  lVar2 = Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService__GetRandomRewardV2_38d1e50
                    (param_1,param_2);
  if (lVar2 == 0) {
                    /* try { // try from 039d1e44 to 03ad1e5b has its CatchHandler @ 039d1f04 */
    return 0;
  }
                    /* try { // try from 039d1d64 to 03ad1de3 has its CatchHandler @ 039d1df4 */
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (lVar5 = *(long *)(*(long *)(param_1 + 0x10) + 0x18), lVar5 != 0)) {
    lVar8 = *(long *)(lVar5 + 0x40);
    lVar5 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_05774c00);
    if (lVar5 != 0) {
      System_Object___ctor_23dfe5c(lVar5,0);
      *(long *)(lVar5 + 0x18) = lVar2;
      *(undefined4 *)(lVar5 + 0x10) = param_3;
      FUN_012d0d74((long *)(lVar5 + 0x18),lVar2);
      if (lVar8 != 0) {
        lVar6 = *(long *)(lVar8 + 0x10);
        lVar7 = *(long *)PTR_DAT_058072e0;
        *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
        if (lVar6 != 0) {
          uVar1 = *(uint *)(lVar8 + 0x18);
          if (uVar1 < *(uint *)(lVar6 + 0x18)) {
            *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                    /* try { // try from 039d1de4 to 03ad1e0b has its CatchHandler @ 039d1d38 */
            plVar3 = (long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
            *plVar3 = lVar5;
            FUN_012d0d74(plVar3,lVar5);
          }
          else {
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 039d1d64 with catch @ 039d1df4
                        */
                    /* try { // try from 039d1e0c to 03ad1e23 has its CatchHandler @ 039d1f04 */
            (**(code **)(*(long *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x58) + 8))
                      (lVar8,lVar5);
          }
          *(undefined2 *)(param_1 + 0x20) = 0x101;
          uVar4 = Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService__IsSelectionCompleted_38d22b4
                            (param_1);
          if ((uVar4 & 1) == 0) {
            return lVar2;
          }
                    /* try { // try from 039d1e24 to 03ad1e43 has its CatchHandler @ 039d1d38 */
          Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService__AddRewardToLastEarnedRewards_38d2324
                    (param_1,lVar2);
          Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService__ClaimEvent_38d0350
                    (param_1);
          return lVar2;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

