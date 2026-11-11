/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.DailyService$$UnlockSelectedDay
void Modules_Contexts_Home_Daily_Scripts_DailyService__UnlockSelectedDay (Modules_Contexts_Home_Daily_Scripts_DailyService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.DailyService$$UnlockSelectedDay
   void Modules_Contexts_Home_Daily_Scripts_DailyService__UnlockSelectedDay
   (Modules_Contexts_Home_Daily_Scripts_DailyService_o* __this, const MethodInfo* method); */

void Modules_Contexts_Home_Daily_Scripts_DailyService__UnlockSelectedDay_4105580(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_38;
  
  lVar8 = *(long *)(param_1 + 0x10);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  uStack_38 = *(undefined8 *)(param_1 + 0x38);
  if ((bRam0000000005c3ab85 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0580b9d0);
    FUN_012d0dc8(PTR_DAT_057efc70);
    FUN_012d0dc8(PTR_DAT_05775900);
    FUN_012d0dc8(PTR_DAT_0575c268);
    FUN_012d0dc8(PTR_DAT_057d8568);
    bRam0000000005c3ab85 = 1;
  }
  puVar3 = PTR_DAT_0580b9d0;
  puVar2 = PTR_DAT_057efc70;
  puVar1 = PTR_DAT_05775900;
  uStack_58 = 0;
  lStack_50 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  if ((*(long *)(lVar8 + 0x20) == 0) ||
     (lVar6 = *(long *)(*(long *)(lVar8 + 0x20) + 0x10), lVar6 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  System_Collections_Generic_List_object___GetEnumerator_21fd5c8
            (&uStack_80,lVar6,*(undefined8 *)PTR_DAT_057d8568);
  uStack_58 = uStack_78;
  uStack_60 = uStack_80;
  lStack_50 = lStack_70;
  do {
    do {
      uVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                        (&uStack_60,*(undefined8 *)puVar1);
      lVar6 = lStack_50;
      if ((uVar7 & 1) == 0) goto LAB_042043e4;
      if (lStack_50 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      uStack_68 = *(undefined8 *)(lStack_50 + 0x10);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      iVar4 = System_DateTime__get_Month_21004b8(&uStack_68,0);
      iVar5 = System_DateTime__get_Month_21004b8(&uStack_38,0);
    } while (iVar4 != iVar5);
    uStack_68 = *(undefined8 *)(lVar6 + 0x10);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    iVar4 = System_DateTime__get_Year_21007a4(&uStack_68,0);
    iVar5 = System_DateTime__get_Year_21007a4(&uStack_38,0);
  } while (iVar4 != iVar5);
  uVar9 = *(uint *)(lVar6 + 0x1c);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  iVar4 = System_DateTime__get_Day_2100110(&uStack_38,0);
  if (iVar4 - 1U < 0x1f) {
    uVar9 = 1 << (ulong)(iVar4 - 1U & 0x1f) | uVar9;
  }
  *(uint *)(lVar6 + 0x1c) = uVar9;
  *(undefined2 *)(lVar8 + 0x18) = 0x101;
LAB_042043e4:
  System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
            (&uStack_60,*(undefined8 *)puVar2);
  return;
}

