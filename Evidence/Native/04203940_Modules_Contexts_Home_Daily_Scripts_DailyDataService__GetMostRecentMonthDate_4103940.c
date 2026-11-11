/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.DailyDataService$$GetMostRecentMonthDate
System_DateTime_o Modules_Contexts_Home_Daily_Scripts_DailyDataService__GetMostRecentMonthDate (Modules_Contexts_Home_Daily_Scripts_DailyDataService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.DailyDataService$$GetMostRecentMonthDate
   System_DateTime_o Modules_Contexts_Home_Daily_Scripts_DailyDataService__GetMostRecentMonthDate
   (Modules_Contexts_Home_Daily_Scripts_DailyDataService_o* __this, const MethodInfo* method); */

undefined8
Modules_Contexts_Home_Daily_Scripts_DailyDataService__GetMostRecentMonthDate_4103940(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  puVar3 = PTR_DAT_0580b9d0;
  if ((bRam0000000005c3ab81 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0580b9d0);
    FUN_012d0dc8(PTR_DAT_057efc70);
    FUN_012d0dc8(PTR_DAT_05775900);
    FUN_012d0dc8(PTR_DAT_0575c268);
    FUN_012d0dc8(PTR_DAT_057d8568);
    bRam0000000005c3ab81 = 1;
  }
  lVar4 = *(long *)puVar3;
  uStack_50 = 0;
  lStack_48 = 0;
  uStack_58 = 0;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_0130472c();
    lVar4 = *(long *)puVar3;
  }
  puVar2 = PTR_DAT_057efc70;
  puVar1 = PTR_DAT_05775900;
  if ((*(long *)(param_1 + 0x20) != 0) &&
     (lVar6 = *(long *)(*(long *)(param_1 + 0x20) + 0x10), lVar6 != 0)) {
    uVar7 = *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x10);
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&uStack_58,lVar6,*(undefined8 *)PTR_DAT_057d8568);
    while( true ) {
      uVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                        (&uStack_58,*(undefined8 *)puVar1);
      lVar4 = lStack_48;
      if ((uVar5 & 1) == 0) {
        System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                  (&uStack_58,*(undefined8 *)puVar2);
        return uVar7;
      }
      if (lStack_48 == 0) break;
      uVar8 = *(undefined8 *)(lStack_48 + 0x10);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      uVar5 = System_DateTime__op_GreaterThan_2102170(uVar8,uVar7,0);
      if ((uVar5 & 1) != 0) {
        uVar7 = *(undefined8 *)(lVar4 + 0x10);
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

