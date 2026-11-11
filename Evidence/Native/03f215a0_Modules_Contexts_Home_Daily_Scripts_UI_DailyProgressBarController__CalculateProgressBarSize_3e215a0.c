/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyProgressBarController$$CalculateProgressBarSize
float Modules_Contexts_Home_Daily_Scripts_UI_DailyProgressBarController__CalculateProgressBarSize (Modules_Contexts_Home_Daily_Scripts_UI_DailyProgressBarController_o* __this, int32_t targetDay, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Daily.Scripts.UI.DailyProgressBarController$$CalculateProgressBarSize
   float Modules_Contexts_Home_Daily_Scripts_UI_DailyProgressBarController__CalculateProgressBarSize
   (Modules_Contexts_Home_Daily_Scripts_UI_DailyProgressBarController_o* __this, int32_t targetDay,
   const MethodInfo* method); */

float Modules_Contexts_Home_Daily_Scripts_UI_DailyProgressBarController__CalculateProgressBarSize_3e215a0
                (undefined8 param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)Modules_Contexts_Home_Daily_Scripts_UI_DailyProgressBarController__GetProgressBarDayXPosition_3e212d0
                           ();
  fVar2 = (float)Modules_Contexts_Home_Daily_Scripts_UI_DailyProgressBarController__GetProgressBarDayXPosition_3e212d0
                           (param_1,0);
  return (fVar1 - fVar2) + 1.0;
}

