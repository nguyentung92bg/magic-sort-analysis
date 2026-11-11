/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.DailyDataService$$IsDayMarked
bool Modules_Contexts_Home_Daily_Scripts_DailyDataService__IsDayMarked (Modules_Contexts_Home_Daily_Scripts_DailyDataService_o* __this, int32_t bitmask, int32_t day, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.DailyDataService$$IsDayMarked
   bool Modules_Contexts_Home_Daily_Scripts_DailyDataService__IsDayMarked
   (Modules_Contexts_Home_Daily_Scripts_DailyDataService_o* __this, int32_t bitmask, int32_t day,
   const MethodInfo* method); */

bool Modules_Contexts_Home_Daily_Scripts_DailyDataService__IsDayMarked_410422c
               (undefined8 param_1,uint param_2,int param_3)

{
  if (0x1e < param_3 - 1U) {
    return false;
  }
                    /* try { // try from 04204248 to 04304257 has its CatchHandler @ 04204338 */
  return (1 << (ulong)(param_3 - 1U & 0x1f) & param_2) != 0;
}

