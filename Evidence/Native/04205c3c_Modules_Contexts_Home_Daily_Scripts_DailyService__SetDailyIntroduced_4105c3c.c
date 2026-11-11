/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.DailyService$$SetDailyIntroduced
void Modules_Contexts_Home_Daily_Scripts_DailyService__SetDailyIntroduced (Modules_Contexts_Home_Daily_Scripts_DailyService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.DailyService$$SetDailyIntroduced
   void Modules_Contexts_Home_Daily_Scripts_DailyService__SetDailyIntroduced
   (Modules_Contexts_Home_Daily_Scripts_DailyService_o* __this, const MethodInfo* method); */

void Modules_Contexts_Home_Daily_Scripts_DailyService__SetDailyIntroduced_4105c3c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x20) != 0)) {
    *(undefined1 *)(*(long *)(lVar1 + 0x20) + 0x18) = 1;
    *(undefined2 *)(lVar1 + 0x18) = 0x101;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

