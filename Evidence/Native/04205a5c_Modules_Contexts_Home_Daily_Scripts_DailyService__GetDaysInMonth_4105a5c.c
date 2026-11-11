/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.DailyService$$GetDaysInMonth
System_DateTime_array* Modules_Contexts_Home_Daily_Scripts_DailyService__GetDaysInMonth (Modules_Contexts_Home_Daily_Scripts_DailyService_o* __this, System_DateTime_o targetMonth, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.DailyService$$GetDaysInMonth
   System_DateTime_array* Modules_Contexts_Home_Daily_Scripts_DailyService__GetDaysInMonth
   (Modules_Contexts_Home_Daily_Scripts_DailyService_o* __this, System_DateTime_o targetMonth, const
   MethodInfo* method); */

long Modules_Contexts_Home_Daily_Scripts_DailyService__GetDaysInMonth_4105a5c
               (undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar3 = PTR_DAT_0580b9d0;
  uStack_38 = param_2;
  if ((bRam0000000005c3ab95 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057ef470);
    FUN_012d0dc8(PTR_DAT_0580b9d0);
    bRam0000000005c3ab95 = 1;
  }
  puVar2 = PTR_DAT_057ef470;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar4 = System_DateTime__get_Year_21007a4(&uStack_38,0);
  uVar5 = System_DateTime__get_Month_21004b8(&uStack_38,0);
  iVar6 = System_DateTime__DaysInMonth_20ff108(uVar4,uVar5,0);
  lVar7 = FUN_012d0e38(*(undefined8 *)puVar2,iVar6);
  if (0 < iVar6) {
    iVar8 = 1;
    do {
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      uVar4 = System_DateTime__get_Year_21007a4(&uStack_38,0);
      uVar5 = System_DateTime__get_Month_21004b8(&uStack_38,0);
      uStack_40 = 0;
      System_DateTime___ctor_20fda84(&uStack_40,uVar4,uVar5,iVar8,0);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      uVar1 = iVar8 - 1;
      if (*(uint *)(lVar7 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef8();
      }
      iVar8 = iVar8 + 1;
      *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uStack_40;
    } while (iVar8 <= iVar6);
  }
  return lVar7;
}

