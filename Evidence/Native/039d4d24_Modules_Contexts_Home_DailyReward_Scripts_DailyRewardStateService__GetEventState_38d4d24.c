/* IL2CPP: Modules.Contexts.Home.DailyReward.Scripts.DailyRewardStateService$$GetEventState
int32_t Modules_Contexts_Home_DailyReward_Scripts_DailyRewardStateService__GetEventState (Modules_Contexts_Home_DailyReward_Scripts_DailyRewardStateService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.DailyReward.Scripts.DailyRewardStateService$$GetEventState
   int32_t Modules_Contexts_Home_DailyReward_Scripts_DailyRewardStateService__GetEventState
   (Modules_Contexts_Home_DailyReward_Scripts_DailyRewardStateService_o* __this, const MethodInfo*
   method); */

int Modules_Contexts_Home_DailyReward_Scripts_DailyRewardStateService__GetEventState_38d4d24
              (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  long lVar9;
  
  if ((bRam0000000005c34bce & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057ad8f8);
    FUN_012d0dc8(PTR_DAT_057b8520);
    bRam0000000005c34bce = 1;
  }
  if ((*(long *)(param_1 + 0x28) == 0) ||
     (lVar5 = *(long *)(*(long *)(param_1 + 0x28) + 0x10), lVar5 == 0)) goto LAB_039d4f08;
  lVar9 = *(long *)(lVar5 + 0x18);
  lVar5 = Modules_Contexts_Home_DailyReward_Scripts_DailyRewardStateService__GetConfig_38d4d00
                    (param_1);
  if (lVar5 == 0) goto LAB_039d4f08;
  if (*(char *)(lVar5 + 0x10) == '\0') {
    iVar3 = 7;
  }
  else {
    plVar8 = *(long **)(param_1 + 0x18);
    if (plVar8 == (long *)0x0) goto LAB_039d4f08;
    lVar5 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12a);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_057636d0) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
          goto LAB_039d4df8;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_0131971c(plVar8,*(long *)PTR_DAT_057636d0,1);
LAB_039d4df8:
    iVar3 = (*(code *)*puVar4)(plVar8,puVar4[1]);
    lVar5 = Modules_Contexts_Home_DailyReward_Scripts_DailyRewardStateService__GetConfig_38d4d00
                      (param_1);
    if (lVar5 == 0) goto LAB_039d4f08;
    if (iVar3 < *(int *)(lVar5 + 0x18)) {
      iVar3 = 6;
    }
    else if (lVar9 == 0) {
      iVar3 = 0;
    }
    else {
      if (*(long *)(param_1 + 0x28) == 0) goto LAB_039d4f08;
      uVar6 = Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService__IsClaimed_38d03f4();
      if ((uVar6 & 1) != 0) {
        if (*(long *)(param_1 + 0x30) == 0) goto LAB_039d4f08;
        lVar5 = Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService__GetRemainingSeconds_38d4064
                          ();
        if (lVar5 < 1) {
          iVar3 = 5;
          goto LAB_039d4eb4;
        }
      }
      if (*(long *)(param_1 + 0x28) == 0) goto LAB_039d4f08;
      uVar6 = Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService__IsClaimed_38d03f4();
      if ((uVar6 & 1) == 0) {
        if (*(long *)(param_1 + 0x30) == 0) goto LAB_039d4f08;
        lVar5 = Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService__GetRemainingSeconds_38d4064
                          ();
        if (lVar5 < 1) {
          iVar3 = 3;
        }
        else {
          if ((*(long *)(param_1 + 0x28) == 0) ||
             (lVar5 = *(long *)(*(long *)(param_1 + 0x28) + 0x10), lVar5 == 0)) goto LAB_039d4f08;
          iVar3 = 1;
          if (*(char *)(lVar5 + 0x10) != '\0') {
            iVar3 = 2;
          }
        }
      }
      else {
        iVar3 = 4;
      }
    }
  }
LAB_039d4eb4:
  puVar2 = PTR_DAT_057b8520;
  if (*(int *)(param_1 + 0x10) != iVar3) {
    *(int *)(param_1 + 0x10) = iVar3;
    puVar1 = PTR_DAT_057ad8f8;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    lVar5 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                      (*(undefined8 *)puVar1);
    if (lVar5 == 0) {
LAB_039d4f08:
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Invoke_40e28a4(lVar5,0);
    iVar3 = *(int *)(param_1 + 0x10);
  }
  return iVar3;
}

