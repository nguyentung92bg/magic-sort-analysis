/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.DailyService$$GetProgressOfMonth
int32_t Modules_Contexts_Home_Daily_Scripts_DailyService__GetProgressOfMonth (Modules_Contexts_Home_Daily_Scripts_DailyService_o* __this, Modules_Contexts_Home_Daily_Scripts_DailyDateModel_array* monthDays, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.DailyService$$GetProgressOfMonth
   int32_t Modules_Contexts_Home_Daily_Scripts_DailyService__GetProgressOfMonth
   (Modules_Contexts_Home_Daily_Scripts_DailyService_o* __this,
   Modules_Contexts_Home_Daily_Scripts_DailyDateModel_array* monthDays, const MethodInfo* method);
    */

int Modules_Contexts_Home_Daily_Scripts_DailyService__GetProgressOfMonth_410543c
              (undefined8 param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  int *piVar4;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  uVar1 = *(uint *)(param_2 + 0x18);
  if ((long)((ulong)uVar1 << 0x20) < 1) {
    iVar2 = 0;
  }
  else {
    iVar2 = 0;
    uVar3 = 0;
    piVar4 = (int *)(param_2 + 0x20);
    do {
      if (uVar1 == uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef8(iVar2);
      }
      uVar3 = uVar3 + 1;
      if (*piVar4 == 0) {
        iVar2 = iVar2 + 1;
      }
      piVar4 = piVar4 + 4;
    } while ((long)uVar3 < (long)(int)uVar1);
  }
  return iVar2;
}

