/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.DailyDataService$$IsDayUnlocked
bool Modules_Contexts_Home_Daily_Scripts_DailyDataService__IsDayUnlocked (Modules_Contexts_Home_Daily_Scripts_DailyDataService_o* __this, System_DateTime_o dateTime, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.DailyDataService$$IsDayUnlocked
   bool Modules_Contexts_Home_Daily_Scripts_DailyDataService__IsDayUnlocked
   (Modules_Contexts_Home_Daily_Scripts_DailyDataService_o* __this, System_DateTime_o dateTime,
   const MethodInfo* method); */

byte Modules_Contexts_Home_Daily_Scripts_DailyDataService__IsDayUnlocked_4104614
               (long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  uStack_38 = param_2;
  if ((bRam0000000005c3ab87 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0580b9d0);
    FUN_012d0dc8(PTR_DAT_057efc70);
    FUN_012d0dc8(PTR_DAT_05775900);
    FUN_012d0dc8(PTR_DAT_0575c268);
    FUN_012d0dc8(PTR_DAT_057d8568);
    bRam0000000005c3ab87 = 1;
  }
  puVar4 = PTR_DAT_0580b9d0;
  puVar3 = PTR_DAT_057efc70;
  puVar2 = PTR_DAT_05775900;
  uStack_48 = 0;
  lStack_40 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  if ((*(long *)(param_1 + 0x20) == 0) ||
     (lVar8 = *(long *)(*(long *)(param_1 + 0x20) + 0x10), lVar8 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  System_Collections_Generic_List_object___GetEnumerator_21fd5c8
            (&uStack_70,lVar8,*(undefined8 *)PTR_DAT_057d8568);
  uStack_48 = uStack_68;
  uStack_50 = uStack_70;
  lStack_40 = lStack_60;
  do {
    do {
      uVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                        (&uStack_50,*(undefined8 *)puVar2);
      lVar8 = lStack_40;
      if ((uVar9 & 1) == 0) {
        bVar5 = false;
        iVar6 = 5;
        goto LAB_042047b4;
      }
      if (lStack_40 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      uStack_58 = *(undefined8 *)(lStack_40 + 0x10);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      iVar6 = System_DateTime__get_Month_21004b8(&uStack_58,0);
      iVar7 = System_DateTime__get_Month_21004b8(&uStack_38,0);
    } while (iVar6 != iVar7);
    uStack_58 = *(undefined8 *)(lVar8 + 0x10);
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    iVar6 = System_DateTime__get_Year_21007a4(&uStack_58,0);
    iVar7 = System_DateTime__get_Year_21007a4(&uStack_38,0);
  } while (iVar6 != iVar7);
  uVar1 = *(uint *)(lVar8 + 0x1c);
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  iVar6 = System_DateTime__get_Day_2100110(&uStack_38,0);
  if (iVar6 - 1U < 0x1f) {
    bVar5 = (1 << (ulong)(iVar6 - 1U & 0x1f) & uVar1) != 0;
  }
  else {
    bVar5 = false;
  }
  iVar6 = 4;
LAB_042047b4:
  System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
            (&uStack_50,*(undefined8 *)puVar3);
  return iVar6 == 4 & bVar5;
}

