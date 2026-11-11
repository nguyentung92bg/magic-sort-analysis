/* IL2CPP: Modules.Contexts.Home.DailyReward.Scripts.DailyRewardService$$ClaimEvent
void Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService__ClaimEvent (Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.DailyReward.Scripts.DailyRewardService$$ClaimEvent
   void Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService__ClaimEvent
   (Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService__ClaimEvent_38d4364(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if ((bRam0000000005c34ba3 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057ad8f8);
    FUN_012d0dc8(PTR_DAT_057b8520);
    bRam0000000005c34ba3 = 1;
  }
  puVar2 = PTR_DAT_057b8520;
  if ((*(long *)(lVar3 + 0x10) == 0) ||
     (lVar4 = *(long *)(*(long *)(lVar3 + 0x10) + 0x18), lVar4 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  *(undefined1 *)(lVar4 + 0x30) = 1;
  *(undefined2 *)(lVar3 + 0x20) = 0x101;
  puVar1 = PTR_DAT_057ad8f8;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar3 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                    (*(undefined8 *)puVar1);
  if (lVar3 == 0) {
    return;
  }
  lVar4 = *(long *)(lVar3 + 0x20);
  if (lVar4 != 0) {
    (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28));
  }
  lVar4 = *(long *)(lVar3 + 0x10);
  if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x041e28e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),lVar3,0,*(undefined8 *)(lVar4 + 0x28))
    ;
    return;
  }
  return;
}

