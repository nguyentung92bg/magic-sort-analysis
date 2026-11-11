/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.DailyDataService$$UnMarkDay
int32_t Modules_Contexts_Home_Daily_Scripts_DailyDataService__UnMarkDay (Modules_Contexts_Home_Daily_Scripts_DailyDataService_o* __this, int32_t bitmask, int32_t day, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.DailyDataService$$UnMarkDay
   int32_t Modules_Contexts_Home_Daily_Scripts_DailyDataService__UnMarkDay
   (Modules_Contexts_Home_Daily_Scripts_DailyDataService_o* __this, int32_t bitmask, int32_t day,
   const MethodInfo* method); */

uint Modules_Contexts_Home_Daily_Scripts_DailyDataService__UnMarkDay_4103f9c
               (undefined8 param_1,uint param_2,int param_3)

{
  if (param_3 - 1U < 0x1f) {
    param_2 = param_2 & (1 << (ulong)(param_3 - 1U & 0x1f) ^ 0xffffffffU);
  }
  return param_2;
}

