/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.DailyService$$CreateDailyViewModel
Modules_Contexts_Home_Daily_Scripts_DailyViewModel_o Modules_Contexts_Home_Daily_Scripts_DailyService__CreateDailyViewModel (Modules_Contexts_Home_Daily_Scripts_DailyService_o* __this, System_DateTime_o currentTime, System_DateTime_o selectedDate, Modules_Contexts_Home_Daily_Scripts_DailyDateModel_array* monthDays, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.DailyService$$CreateDailyViewModel
   Modules_Contexts_Home_Daily_Scripts_DailyViewModel_o
   Modules_Contexts_Home_Daily_Scripts_DailyService__CreateDailyViewModel
   (Modules_Contexts_Home_Daily_Scripts_DailyService_o* __this, System_DateTime_o currentTime,
   System_DateTime_o selectedDate, Modules_Contexts_Home_Daily_Scripts_DailyDateModel_array*
   monthDays, const MethodInfo* method); */

void Modules_Contexts_Home_Daily_Scripts_DailyService__CreateDailyViewModel_4105898
               (long *param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lStack_50;
  long lStack_40;
  undefined8 uStack_38;
  
  uStack_38 = 0;
  lStack_40 = 0;
  iVar2 = Modules_Contexts_Home_Daily_Scripts_DailyService__GetDailyDateState_4105714();
  lStack_50 = (ulong)(iVar2 == 0) << 0x10;
  lStack_40 = param_5;
  uVar4 = FUN_012d0d74(&lStack_40,param_5);
  lVar1 = lStack_40;
  uVar3 = Modules_Contexts_Home_Daily_Scripts_DailyService__GetProgressOfMonth_410543c
                    (uVar4,lStack_40);
  uStack_38 = CONCAT44(0x19,uVar3);
  param_1[1] = param_4;
  *param_1 = lStack_50;
  param_1[3] = uStack_38;
  param_1[2] = lVar1;
  return;
}

