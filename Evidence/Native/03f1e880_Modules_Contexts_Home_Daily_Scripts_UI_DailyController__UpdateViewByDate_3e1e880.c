/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyController$$UpdateViewByDate
void Modules_Contexts_Home_Daily_Scripts_UI_DailyController__UpdateViewByDate (Modules_Contexts_Home_Daily_Scripts_UI_DailyController_o* __this, System_DateTime_o date, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyController$$UpdateViewByDate
   void Modules_Contexts_Home_Daily_Scripts_UI_DailyController__UpdateViewByDate
   (Modules_Contexts_Home_Daily_Scripts_UI_DailyController_o* __this, System_DateTime_o date, const
   MethodInfo* method); */

void Modules_Contexts_Home_Daily_Scripts_UI_DailyController__UpdateViewByDate_3e1e880
               (long param_1,undefined8 param_2)

{
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_18 = 0;
  uStack_20 = 0;
  if (*(long *)(param_1 + 0x70) != 0) {
    Modules_Contexts_Home_Daily_Scripts_DailyService__GetDailyViewModelBySpecificDate_41055b8
              (&uStack_50,*(long *)(param_1 + 0x70),param_2,0);
    uStack_28 = uStack_48;
    uStack_30 = uStack_50;
    uStack_18 = uStack_38;
    uStack_20 = uStack_40;
    uStack_68 = uStack_48;
    uStack_70 = uStack_50;
    uStack_58 = uStack_38;
    uStack_60 = uStack_40;
    Modules_Contexts_Home_Daily_Scripts_UI_DailyController__SetDailyViewModel_3e1e4bc
              (param_1,&uStack_70);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

