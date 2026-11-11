/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.DailyService$$AssignProgressBarValues
Modules_Contexts_Home_Daily_Scripts_DailyViewModel_o Modules_Contexts_Home_Daily_Scripts_DailyService__AssignProgressBarValues (Modules_Contexts_Home_Daily_Scripts_DailyService_o* __this, Modules_Contexts_Home_Daily_Scripts_DailyViewModel_o activeDailyDateModel, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.DailyService$$AssignProgressBarValues
   Modules_Contexts_Home_Daily_Scripts_DailyViewModel_o
   Modules_Contexts_Home_Daily_Scripts_DailyService__AssignProgressBarValues
   (Modules_Contexts_Home_Daily_Scripts_DailyService_o* __this,
   Modules_Contexts_Home_Daily_Scripts_DailyViewModel_o activeDailyDateModel, const MethodInfo*
   method); */

void Modules_Contexts_Home_Daily_Scripts_DailyService__AssignProgressBarValues_41059a0
               (undefined8 *param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = Modules_Contexts_Home_Daily_Scripts_DailyService__GetProgressOfMonth_410543c
                    (param_2,param_3[2]);
  *(undefined4 *)(param_3 + 3) = uVar1;
  *(undefined4 *)((long)param_3 + 0x1c) = 0x19;
  uVar2 = *param_3;
  uVar4 = param_3[3];
  uVar3 = param_3[2];
  param_1[1] = param_3[1];
  *param_1 = uVar2;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  return;
}

