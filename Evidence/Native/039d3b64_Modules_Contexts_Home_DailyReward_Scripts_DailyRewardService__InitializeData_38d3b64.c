/* IL2CPP: Modules.Contexts.Home.DailyReward.Scripts.DailyRewardService$$InitializeData
void Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService__InitializeData (Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.DailyReward.Scripts.DailyRewardService$$InitializeData
   void Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService__InitializeData
   (Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService__InitializeData_38d3b64
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long alStack_40 [2];
  
  if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  uVar3 = Modules_Contexts_Home_DailyReward_Scripts_DailyRewardStateService__GetEventState_38d4d24()
  ;
  puVar1 = PTR_DAT_0576e800;
  if ((uVar3 < 6) && ((1 << (ulong)(uVar3 & 0x1f) & 0x29U) != 0)) {
    if ((bRam0000000005c34bc2 & 1) == 0) {
      FUN_012d0dc8(PTR_DAT_05797190);
      FUN_012d0dc8(PTR_DAT_0576e800);
      bRam0000000005c34bc2 = 1;
    }
    puVar2 = PTR_DAT_05797190;
    uStack_48 = 0;
    uStack_50 = 0;
    alStack_40[1] = 0;
    alStack_40[0] = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    System_Runtime_CompilerServices_AsyncTaskMethodBuilder__Create_2445820(&uStack_98,0);
    uVar4 = (ulong)&uStack_60 | 8;
    uStack_70 = uStack_88;
    uStack_78 = uStack_90;
    uStack_80 = uStack_98;
    uStack_50 = uStack_90;
    uStack_58 = uStack_98;
    uStack_48 = uStack_88;
    FUN_012d0d74(uVar4,0);
    alStack_40[0] = param_1;
    FUN_012d0d74(alStack_40,param_1);
    uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
    System_Runtime_CompilerServices_AsyncTaskMethodBuilder__Start_DailyRewardService__FetchCurrentEvent_d__13__1e604a4
              (uVar4,&uStack_60,*(undefined8 *)puVar2);
    System_Runtime_CompilerServices_AsyncTaskMethodBuilder__get_Task_24437f0(uVar4,0);
    return;
  }
  return;
}

