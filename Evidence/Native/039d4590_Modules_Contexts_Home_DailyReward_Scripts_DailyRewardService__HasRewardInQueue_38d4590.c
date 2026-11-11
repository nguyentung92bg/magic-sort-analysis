/* IL2CPP: Modules.Contexts.Home.DailyReward.Scripts.DailyRewardService$$HasRewardInQueue
bool Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService__HasRewardInQueue (Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.DailyReward.Scripts.DailyRewardService$$HasRewardInQueue
   bool Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService__HasRewardInQueue
   (Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService_o* __this, const MethodInfo*
   method); */

uint Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService__HasRewardInQueue_38d4590
               (long param_1)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_0576aae0;
  if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if ((bRam0000000005c34bb4 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057bc6b0);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    bRam0000000005c34bb4 = 1;
  }
  if (((**(long **)(*(long *)puVar1 + 0xb8) == 0) ||
      (lVar3 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar3 == 0)) ||
     (lVar3 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                        (lVar3,*(undefined8 *)PTR_DAT_057bc6b0), lVar3 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  lVar3 = *(long *)(lVar3 + 0x30);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0(0,0x1e,0);
  }
  if ((bRam0000000005c3708b & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05810cf8);
    bRam0000000005c3708b = 1;
  }
  lVar3 = *(long *)(lVar3 + 0x10);
  if (lVar3 != 0) {
    uVar2 = (**(code **)(*(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_05810cf8 + 0x20) + 0xc0) +
                                  0xa8) + 8))(lVar3,0x1e);
    return ~uVar2 >> 0x1f;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

