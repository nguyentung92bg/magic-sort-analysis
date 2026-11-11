/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.DailyService$$GetDailyDateState
int32_t Modules_Contexts_Home_Daily_Scripts_DailyService__GetDailyDateState (Modules_Contexts_Home_Daily_Scripts_DailyService_o* __this, System_DateTime_o day, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.DailyService$$GetDailyDateState
   int32_t Modules_Contexts_Home_Daily_Scripts_DailyService__GetDailyDateState
   (Modules_Contexts_Home_Daily_Scripts_DailyService_o* __this, System_DateTime_o day, const
   MethodInfo* method); */

undefined4
Modules_Contexts_Home_Daily_Scripts_DailyService__GetDailyDateState_4105714
          (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  undefined4 uVar7;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_0580b9d0;
  uStack_28 = param_2;
  if ((bRam0000000005c3ab96 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0580b9d0);
    bRam0000000005c3ab96 = 1;
  }
  uStack_30 = Modules_Infrastructure_Utils_TimeProvider__get_Now_3de7294(0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c(*(long *)puVar1);
  }
  iVar4 = System_DateTime__get_Month_21004b8(&uStack_28,0);
  iVar5 = System_DateTime__get_Month_21004b8(&uStack_30,0);
  if (iVar4 == iVar5) {
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    iVar4 = System_DateTime__get_Year_21007a4(&uStack_28,0);
    iVar5 = System_DateTime__get_Year_21007a4(&uStack_30,0);
    if (iVar4 != iVar5) goto LAB_04205818;
    if (*(long *)(param_1 + 0x10) == 0) goto LAB_04205894;
    uVar6 = Modules_Contexts_Home_Daily_Scripts_DailyDataService__IsDayClaimed_4103fbc
                      (*(long *)(param_1 + 0x10),uStack_28);
    if ((uVar6 & 1) != 0) {
      return 0;
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    iVar4 = System_DateTime__get_Day_2100110(&uStack_28,0);
    iVar5 = System_DateTime__get_Day_2100110(&uStack_30,0);
    uVar3 = uStack_28;
    uVar2 = uStack_30;
    if (iVar4 == iVar5) {
      return 1;
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar6 = System_DateTime__op_GreaterThan_2102170(uVar3,uVar2,0);
    if ((uVar6 & 1) != 0) {
      return 3;
    }
  }
  else {
LAB_04205818:
    if (*(long *)(param_1 + 0x10) == 0) goto LAB_04205894;
    uVar6 = Modules_Contexts_Home_Daily_Scripts_DailyDataService__IsDayClaimed_4103fbc
                      (*(long *)(param_1 + 0x10),uStack_28);
    if ((uVar6 & 1) != 0) {
      return 0;
    }
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar6 = Modules_Contexts_Home_Daily_Scripts_DailyDataService__IsDayUnlocked_4104614
                      (*(long *)(param_1 + 0x10),uStack_28);
    uVar7 = 4;
    if ((uVar6 & 1) == 0) {
      uVar7 = 2;
    }
    return uVar7;
  }
LAB_04205894:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

