/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.DailyService$$GetDailyDateModelsForMonth
Modules_Contexts_Home_Daily_Scripts_DailyDateModel_array* Modules_Contexts_Home_Daily_Scripts_DailyService__GetDailyDateModelsForMonth (Modules_Contexts_Home_Daily_Scripts_DailyService_o* __this, System_DateTime_o targetMonth, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.DailyService$$GetDailyDateModelsForMonth
   Modules_Contexts_Home_Daily_Scripts_DailyDateModel_array*
   Modules_Contexts_Home_Daily_Scripts_DailyService__GetDailyDateModelsForMonth
   (Modules_Contexts_Home_Daily_Scripts_DailyService_o* __this, System_DateTime_o targetMonth, const
   MethodInfo* method); */

long Modules_Contexts_Home_Daily_Scripts_DailyService__GetDailyDateModelsForMonth_410535c
               (undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  
  uVar1 = param_1;
  if ((bRam0000000005c3ab94 & 1) == 0) {
    uVar1 = FUN_012d0dc8(PTR_DAT_057eb608);
    bRam0000000005c3ab94 = 1;
  }
  lVar2 = Modules_Contexts_Home_Daily_Scripts_DailyService__GetDaysInMonth_4105a5c(uVar1,param_2);
  if (lVar2 != 0) {
    lVar3 = FUN_012d0e38(*(undefined8 *)PTR_DAT_057eb608,*(undefined4 *)(lVar2 + 0x18));
    if (0 < (int)*(ulong *)(lVar2 + 0x18)) {
      uVar5 = 0;
      uVar4 = *(ulong *)(lVar2 + 0x18) & 0xffffffff;
      puVar6 = (undefined8 *)(lVar3 + 0x28);
      do {
        if (uVar4 <= uVar5) {
LAB_04205434:
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef8();
        }
        uVar1 = *(undefined8 *)(lVar2 + 0x20 + uVar5 * 8);
        uVar4 = Modules_Contexts_Home_Daily_Scripts_DailyService__GetDailyDateState_4105714
                          (param_1,uVar1);
        if (lVar3 == 0) goto LAB_04205438;
        if (*(uint *)(lVar3 + 0x18) <= uVar5) goto LAB_04205434;
        puVar6[-1] = uVar4 & 0xffffffff;
        *puVar6 = uVar1;
        uVar4 = (ulong)*(uint *)(lVar2 + 0x18);
        uVar5 = uVar5 + 1;
        puVar6 = puVar6 + 2;
      } while ((long)uVar5 < (long)(int)*(uint *)(lVar2 + 0x18));
    }
    return lVar3;
  }
LAB_04205438:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

