/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.DailyService$$ClaimSelectedDayAndProgressBarReward
Modules_Contexts_Application_Reward_Scripts_RewardModel_o* Modules_Contexts_Home_Daily_Scripts_DailyService__ClaimSelectedDayAndProgressBarReward (Modules_Contexts_Home_Daily_Scripts_DailyService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.DailyService$$ClaimSelectedDayAndProgressBarReward
   Modules_Contexts_Application_Reward_Scripts_RewardModel_o*
   Modules_Contexts_Home_Daily_Scripts_DailyService__ClaimSelectedDayAndProgressBarReward
   (Modules_Contexts_Home_Daily_Scripts_DailyService_o* __this, const MethodInfo* method); */

long Modules_Contexts_Home_Daily_Scripts_DailyService__ClaimSelectedDayAndProgressBarReward_41051e4
               (long param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  undefined8 uVar5;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    Modules_Contexts_Home_Daily_Scripts_DailyDataService__ClaimDay_4103af4
              (*(long *)(param_1 + 0x10),uVar5);
    Modules_Contexts_Home_Daily_Scripts_DailyService__TryRescheduleDailyNotification_4105140
              (param_1,uVar5);
    lVar3 = Modules_Contexts_Home_Daily_Scripts_DailyService__GetDailyDateModelsForMonth_410535c
                      (param_1,uVar5);
    iVar2 = Modules_Contexts_Home_Daily_Scripts_DailyService__GetProgressOfMonth_410543c
                      (lVar3,lVar3);
    if (cRam0000000005c230a8 == '\0') {
      FUN_012d0dc8(PTR_DAT_057ece38);
      cRam0000000005c230a8 = '\x01';
    }
    puVar1 = PTR_DAT_057ece38;
    if ((**(long **)(*(long *)PTR_DAT_057ece38 + 0xb8) != 0) &&
       (Modules_Contexts_Application_Events_Scripts_EventSender__SendDailyProgressBarFill_144f8cc
                  (**(long **)(*(long *)PTR_DAT_057ece38 + 0xb8),uVar5,iVar2,0), lVar3 != 0)) {
      if (iVar2 == *(int *)(lVar3 + 0x18)) {
        if (cRam0000000005c230a8 == '\0') {
          FUN_012d0dc8(PTR_DAT_057ece38);
          cRam0000000005c230a8 = '\x01';
        }
        if (**(long **)(*(long *)puVar1 + 0xb8) == 0) goto LAB_04205338;
        Modules_Contexts_Application_Events_Scripts_EventSender__SendDailyChallengeMonthCompleted_144fc38
                  (**(long **)(*(long *)puVar1 + 0xb8),uVar5,0);
      }
      if (iVar2 < 0xe) {
        if (iVar2 == 3) {
          uVar4 = 0;
        }
        else {
          if (iVar2 != 7) {
            return 0;
          }
          uVar4 = 1;
        }
      }
      else if (iVar2 == 0xe) {
        uVar4 = 2;
      }
      else {
        if (iVar2 != 0x19) {
          return 0;
        }
        uVar4 = 3;
      }
      if ((bRam0000000005c3ab92 & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_0579bac0);
        FUN_012d0dc8(PTR_DAT_0579c548);
        FUN_012d0dc8(PTR_DAT_0575eb20);
        bRam0000000005c3ab92 = 1;
      }
      if (((*(long *)(param_1 + 0x20) != 0) &&
          (lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 0x18), lVar3 != 0)) &&
         (lVar3 = *(long *)(lVar3 + 0xa8), lVar3 != 0)) {
        lVar3 = *(long *)(lVar3 + 0x20);
        if ((lVar3 != 0) && ((int)uVar4 < *(int *)(lVar3 + 0x18))) {
          if (*(uint *)(lVar3 + 0x18) <= uVar4) {
            System_ThrowHelper__ThrowArgumentOutOfRange_IndexException_26a52c4
                      (0,uVar4,*(undefined8 *)PTR_DAT_0579c548);
          }
          lVar3 = *(long *)(lVar3 + 0x10);
          if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
          if (*(uint *)(lVar3 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef8();
          }
          return *(long *)(lVar3 + (long)(int)uVar4 * 8 + 0x20);
        }
        lVar3 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_0575eb20);
        if (lVar3 != 0) {
          Modules_Contexts_Application_Reward_Scripts_RewardModel___ctor_3cdfcc4(lVar3,0);
          *(undefined8 *)(lVar3 + 0x10) = 0x100000001;
          return lVar3;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
  }
LAB_04205338:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

