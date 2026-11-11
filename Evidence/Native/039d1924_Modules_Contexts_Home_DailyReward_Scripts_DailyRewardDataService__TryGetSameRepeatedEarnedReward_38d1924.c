/* IL2CPP: Modules.Contexts.Home.DailyReward.Scripts.DailyRewardDataService$$TryGetSameRepeatedEarnedReward
bool Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService__TryGetSameRepeatedEarnedReward (Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService_o* __this, Modules_Contexts_Application_Reward_Scripts_RewardModel_o** rewardModel, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.DailyReward.Scripts.DailyRewardDataService$$TryGetSameRepeatedEarnedReward
   bool 
   Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService__TryGetSameRepeatedEarnedReward
   (Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService_o* __this,
   Modules_Contexts_Application_Reward_Scripts_RewardModel_o** rewardModel, const MethodInfo*
   method); */

uint Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService__TryGetSameRepeatedEarnedReward_38d1924
               (long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  puVar1 = PTR_DAT_057b9a30;
                    /* try { // try from 039d193c to 03ad1a3f has its CatchHandler @ 039d1a4c */
  if ((bRam0000000005c34bb7 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057b9e60);
    FUN_012d0dc8(PTR_DAT_05795f40);
    FUN_012d0dc8(PTR_DAT_0579bac0);
    FUN_012d0dc8(PTR_DAT_0579c548);
    FUN_012d0dc8(PTR_DAT_057e7948);
    FUN_012d0dc8(PTR_DAT_057b9a30);
    bRam0000000005c34bb7 = 1;
  }
  lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if (lVar3 != 0) {
    System_Object___ctor_23dfe5c(lVar3,0);
    if (*(long *)(param_1 + 0x10) != 0) {
      lVar4 = *(long *)(*(long *)(param_1 + 0x10) + 0x20);
      if ((lVar4 == 0) || (*(int *)(lVar4 + 0x18) < 2)) {
        uVar5 = 0;
                    /* try { // try from 039d1a64 to 03ad1a7b has its CatchHandler @ 039d1b60 */
        uVar2 = 0;
LAB_039d1a68:
        *param_2 = uVar5;
        FUN_012d0d74(param_2);
                    /* try { // try from 039d1a7c to 03ad1a9f has its CatchHandler @ 039d18e8 */
        return uVar2 & 1;
      }
      uVar5 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (lVar4,0,*(undefined8 *)PTR_DAT_0579c548);
      puVar6 = (undefined8 *)(lVar3 + 0x10);
      *puVar6 = uVar5;
      FUN_012d0d74(puVar6,uVar5);
      if (*(long *)(param_1 + 0x10) != 0) {
        uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x20);
        lVar4 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_05795f40);
        puVar1 = PTR_DAT_057b9e60;
        if (lVar4 != 0) {
          System_Func_object__bool____ctor_338137c(lVar4,lVar3,*(undefined8 *)PTR_DAT_057e7948,0);
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 039d1920 with catch @ 039d1a40
                       try { // try from 039d1a40 to 03ad1a63 has its CatchHandler @ 039d18e8 */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 039d193c with catch @ 039d1a4c
                        */
          uVar2 = System_Linq_Enumerable__All_object__241647c(uVar5,lVar4,*(undefined8 *)puVar1);
          if ((uVar2 & 1) == 0) {
            uVar5 = 0;
          }
          else {
            uVar5 = *puVar6;
          }
          goto LAB_039d1a68;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

