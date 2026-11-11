/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.DailyDataService$$RemoveOutdatedMonthsUpTo
void Modules_Contexts_Home_Daily_Scripts_DailyDataService__RemoveOutdatedMonthsUpTo (Modules_Contexts_Home_Daily_Scripts_DailyDataService_o* __this, System_DateTime_o dateTime, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.DailyDataService$$RemoveOutdatedMonthsUpTo
   void Modules_Contexts_Home_Daily_Scripts_DailyDataService__RemoveOutdatedMonthsUpTo
   (Modules_Contexts_Home_Daily_Scripts_DailyDataService_o* __this, System_DateTime_o dateTime,
   const MethodInfo* method); */

void Modules_Contexts_Home_Daily_Scripts_DailyDataService__RemoveOutdatedMonthsUpTo_41034f0
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  undefined8 uStack_58;
  undefined8 uStack_48;
  
  uStack_48 = param_2;
  if ((bRam0000000005c3ab7e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0580b9d0);
    FUN_012d0dc8(PTR_DAT_0580b1e8);
    FUN_012d0dc8(PTR_DAT_0579a2c8);
    FUN_012d0dc8(PTR_DAT_057823e0);
    bRam0000000005c3ab7e = 1;
  }
  puVar3 = PTR_DAT_0580b9d0;
  puVar2 = PTR_DAT_0580b1e8;
  puVar1 = PTR_DAT_057823e0;
  uStack_58 = 0;
  lVar6 = *(long *)(param_1 + 0x20);
  if ((lVar6 != 0) && (*(long *)(lVar6 + 0x10) != 0)) {
    iVar7 = *(int *)(*(long *)(lVar6 + 0x10) + 0x18) + -1;
    if (iVar7 < 0) {
      return;
    }
    while ((*(long *)(lVar6 + 0x10) != 0 &&
           (lVar6 = System_Collections_Generic_List_object___get_Item_21fc76c
                              (*(long *)(lVar6 + 0x10),iVar7,*(undefined8 *)puVar1), lVar6 != 0))) {
      uStack_58 = *(undefined8 *)(lVar6 + 0x10);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      iVar4 = System_DateTime__get_Year_21007a4(&uStack_58,0);
      iVar5 = System_DateTime__get_Year_21007a4(&uStack_48,0);
      if (iVar4 < iVar5) {
LAB_042035e4:
        if ((*(long *)(param_1 + 0x20) == 0) ||
           (lVar6 = *(long *)(*(long *)(param_1 + 0x20) + 0x10), lVar6 == 0)) break;
        System_Collections_Generic_List_object___RemoveAt_21fe320(lVar6,iVar7,*(undefined8 *)puVar2)
        ;
        *(undefined2 *)(param_1 + 0x18) = 0x101;
      }
      else {
        uStack_58 = *(undefined8 *)(lVar6 + 0x10);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        iVar4 = System_DateTime__get_Year_21007a4(&uStack_58,0);
        iVar5 = System_DateTime__get_Year_21007a4(&uStack_48,0);
        if (iVar4 == iVar5) {
          uStack_58 = *(undefined8 *)(lVar6 + 0x10);
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_0130472c();
          }
          iVar4 = System_DateTime__get_Month_21004b8(&uStack_58,0);
          iVar5 = System_DateTime__get_Month_21004b8(&uStack_48,0);
          if (iVar4 < iVar5) goto LAB_042035e4;
        }
      }
      iVar7 = iVar7 + -1;
      if (iVar7 < 0) {
        return;
      }
      lVar6 = *(long *)(param_1 + 0x20);
      if (lVar6 == 0) break;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

