/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.DailyService$$IsNotIntroducedAndEligible
bool Modules_Contexts_Home_Daily_Scripts_DailyService__IsNotIntroducedAndEligible (Modules_Contexts_Home_Daily_Scripts_DailyService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.DailyService$$IsNotIntroducedAndEligible
   bool Modules_Contexts_Home_Daily_Scripts_DailyService__IsNotIntroducedAndEligible
   (Modules_Contexts_Home_Daily_Scripts_DailyService_o* __this, const MethodInfo* method); */

bool Modules_Contexts_Home_Daily_Scripts_DailyService__IsNotIntroducedAndEligible_4105bf4
               (long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = Modules_Contexts_Home_Daily_Scripts_DailyService__IsEligibleForDaily_4104fb0();
  if ((uVar1 & 1) != 0) {
    if ((*(long *)(param_1 + 0x10) == 0) ||
       (lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x20), lVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    if (*(char *)(lVar2 + 0x18) == '\0') {
      return *(char *)(lVar2 + 0x19) == '\0';
    }
  }
  return false;
}

