/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.DailyService$$GetActiveDailyViewModel
Modules_Contexts_Home_Daily_Scripts_DailyViewModel_o Modules_Contexts_Home_Daily_Scripts_DailyService__GetActiveDailyViewModel (Modules_Contexts_Home_Daily_Scripts_DailyService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.DailyService$$GetActiveDailyViewModel
   Modules_Contexts_Home_Daily_Scripts_DailyViewModel_o
   Modules_Contexts_Home_Daily_Scripts_DailyService__GetActiveDailyViewModel
   (Modules_Contexts_Home_Daily_Scripts_DailyService_o* __this, const MethodInfo* method); */

void Modules_Contexts_Home_Daily_Scripts_DailyService__GetActiveDailyViewModel_4105930
               (undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = Modules_Infrastructure_Utils_TimeProvider__get_Now_3de7294(0);
  uVar2 = Modules_Infrastructure_Utils_TimeProvider__get_Now_3de7294(0);
  uVar3 = Modules_Contexts_Home_Daily_Scripts_DailyService__GetDailyDateModelsForMonth_410535c
                    (param_2,uVar2);
  Modules_Contexts_Home_Daily_Scripts_DailyService__CreateDailyViewModel_4105898
            (&uStack_50,param_2,uVar1,uVar2,uVar3);
  param_1[1] = uStack_48;
  *param_1 = uStack_50;
  param_1[3] = uStack_38;
  param_1[2] = uStack_40;
  return;
}

