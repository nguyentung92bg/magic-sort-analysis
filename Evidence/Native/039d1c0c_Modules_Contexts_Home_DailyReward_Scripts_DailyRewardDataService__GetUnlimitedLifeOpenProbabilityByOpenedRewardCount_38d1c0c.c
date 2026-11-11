/* IL2CPP: Modules.Contexts.Home.DailyReward.Scripts.DailyRewardDataService$$GetUnlimitedLifeOpenProbabilityByOpenedRewardCount
int32_t Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService__GetUnlimitedLifeOpenProbabilityByOpenedRewardCount (Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService_o* __this, int32_t openedRewardCount, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.DailyReward.Scripts.DailyRewardDataService$$GetUnlimitedLifeOpenProbabilityByOpenedRewardCount
   int32_t
   Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService__GetUnlimitedLifeOpenProbabilityByOpenedRewardCount
   (Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService_o* __this, int32_t
   openedRewardCount, const MethodInfo* method); */

undefined4
Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService__GetUnlimitedLifeOpenProbabilityByOpenedRewardCount_38d1c0c
          (undefined8 param_1,uint param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  puVar3 = PTR_DAT_057d6f00;
  puVar2 = PTR_DAT_057c0f20;
  puVar1 = PTR_DAT_0579f0e0;
                    /* try { // try from 039d1c14 to 03ad1c2b has its CatchHandler @ 039d1c4c */
                    /* try { // try from 039d1c2c to 03ad1c63 has its CatchHandler @ 039d1b74 */
  if ((bRam0000000005c34bad & 1) == 0) {
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 039d1bb4 with catch @ 039d1c44
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 039d1be0 with catch @ 039d1c48
                        */
    FUN_012d0dc8(PTR_DAT_0579f0e0);
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 039d1c14 with catch @ 039d1c4c
                        */
    FUN_012d0dc8(PTR_DAT_057d6f00);
    FUN_012d0dc8(PTR_DAT_057c0f20);
                    /* try { // try from 039d1c64 to 03ad1c7b has its CatchHandler @ 039d1d24 */
    bRam0000000005c34bad = 1;
  }
  lVar4 = FUN_012d0e38(*(undefined8 *)puVar1,7);
                    /* try { // try from 039d1c7c to 03ad1c8f has its CatchHandler @ 039d1b74 */
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_2446ba8
            (lVar4,*(undefined8 *)puVar2,0);
                    /* try { // try from 039d1c90 to 03ad1ca7 has its CatchHandler @ 039d1d24 */
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  if (cRam0000000005c230ab == '\0') {
                    /* try { // try from 039d1ca8 to 03ad1d13 has its CatchHandler @ 039d1b74 */
    FUN_012d0dc8(PTR_DAT_05800a28);
    FUN_012d0dc8(PTR_DAT_057d6f00);
    cRam0000000005c230ab = '\x01';
  }
  if (5 < (int)param_2) {
    param_2 = 6;
  }
  if (lVar4 != 0) {
    param_2 = param_2 & ((int)param_2 >> 0x1f ^ 0xffffffffU);
    if (param_2 < *(uint *)(lVar4 + 0x18)) {
      return *(undefined4 *)(lVar4 + (ulong)param_2 * 4 + 0x20);
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

