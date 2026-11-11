/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.DailyService$$GetDailyViewModelBySpecificDate
Modules_Contexts_Home_Daily_Scripts_DailyViewModel_o Modules_Contexts_Home_Daily_Scripts_DailyService__GetDailyViewModelBySpecificDate (Modules_Contexts_Home_Daily_Scripts_DailyService_o* __this, System_DateTime_o dateTime, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.DailyService$$GetDailyViewModelBySpecificDate
   Modules_Contexts_Home_Daily_Scripts_DailyViewModel_o
   Modules_Contexts_Home_Daily_Scripts_DailyService__GetDailyViewModelBySpecificDate
   (Modules_Contexts_Home_Daily_Scripts_DailyService_o* __this, System_DateTime_o dateTime, const
   MethodInfo* method); */

void Modules_Contexts_Home_Daily_Scripts_DailyService__GetDailyViewModelBySpecificDate_41055b8
               (undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_38;
  
  puVar1 = PTR_DAT_0580b9d0;
  uStack_38 = param_3;
  if ((bRam0000000005c3ab93 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0580b9d0);
    bRam0000000005c3ab93 = 1;
  }
  uStack_50 = 0;
  uStack_48 = 0;
  Modules_Contexts_Home_Daily_Scripts_DailyService__GetDailyViewModel_41056ac
            (&uStack_70,param_2,param_3);
  uVar2 = uStack_70;
  uStack_48 = uStack_58;
  uStack_50 = uStack_60;
  uStack_70 = uStack_68;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  iVar3 = System_DateTime__get_Month_21004b8(&uStack_70,0);
  iVar4 = System_DateTime__get_Month_21004b8(&uStack_38,0);
  if (((iVar3 == iVar4) &&
      (uVar5 = Modules_Contexts_Home_Daily_Scripts_DailyService__GetDailyDateState_4105714
                         (param_2,uStack_38), uVar5 < 5)) &&
     ((1 << (ulong)(uVar5 & 0x1f) & 0x16U) != 0)) {
    *(undefined8 *)(param_2 + 0x38) = uStack_38;
    uStack_68 = uStack_38;
  }
  *param_1 = uVar2;
  param_1[1] = uStack_68;
  param_1[3] = uStack_48;
  param_1[2] = uStack_50;
  return;
}

