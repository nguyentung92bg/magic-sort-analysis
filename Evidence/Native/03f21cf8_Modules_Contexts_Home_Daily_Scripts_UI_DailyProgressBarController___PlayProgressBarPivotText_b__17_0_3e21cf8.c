/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyProgressBarController$$<PlayProgressBarPivotText>b__17_0
int32_t Modules_Contexts_Home_Daily_Scripts_UI_DailyProgressBarController___PlayProgressBarPivotText_b__17_0 (Modules_Contexts_Home_Daily_Scripts_UI_DailyProgressBarController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x027c8c08) */
/* WARNING: Removing unreachable block (ram,0x027c8c0c) */
/* WARNING: Removing unreachable block (ram,0x027c8c34) */
/* WARNING: Removing unreachable block (ram,0x027c8c38) */
/* WARNING: Removing unreachable block (ram,0x027c8c68) */
/* WARNING: Removing unreachable block (ram,0x027c8cbc) */
/* WARNING: Removing unreachable block (ram,0x027c8ccc) */
/* WARNING: Removing unreachable block (ram,0x027c8cd0) */
/* WARNING: Removing unreachable block (ram,0x027c8d24) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* IL2CPP:
   Modules.Contexts.Home.Daily.Scripts.UI.DailyProgressBarController$$<PlayProgressBarPivotText>b__17_0
   int32_t
   Modules_Contexts_Home_Daily_Scripts_UI_DailyProgressBarController___PlayProgressBarPivotText_b__17_0
   (Modules_Contexts_Home_Daily_Scripts_UI_DailyProgressBarController_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_Home_Daily_Scripts_UI_DailyProgressBarController___PlayProgressBarPivotText_b__17_0_3e21cf8
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  undefined8 extraout_x1;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined4 uStack_ec;
  undefined1 auStack_e8 [4];
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined2 uStack_78;
  undefined6 uStack_76;
  undefined2 uStack_70;
  undefined8 uStack_6e;
  long lStack_58;
  
  plVar6 = *(long **)(param_1 + 0x38);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  lVar7 = (**(code **)(*plVar6 + 0x548))(plVar6,*(undefined8 *)(*plVar6 + 0x550));
  uVar8 = 0;
  if ((bRam0000000005c2c1b3 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057f6fe0,0);
    bRam0000000005c2c1b3 = 1;
    uVar8 = extraout_x1;
  }
  if (lVar7 != 0) {
    if (cRam0000000005c25914 == '\0') {
      FUN_012d0dc8(PTR_DAT_057bd9e0,uVar8);
      cRam0000000005c25914 = '\x01';
    }
    puVar1 = PTR_DAT_057f6fe0;
    if (lVar7 == 0) {
      uVar9 = 0;
      uVar8 = 0;
    }
    else {
      uVar8 = System_String__GetRawStringData_1ecdd9c(lVar7,0);
      uVar9 = *(undefined4 *)(lVar7 + 0x10);
    }
    uVar5 = System_Globalization_NumberFormatInfo__get_CurrentInfo_31b1078(0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c(*(long *)puVar1);
    }
    lVar7 = tpidr_el0;
    lStack_58 = *(long *)(lVar7 + 0x28);
    if ((bRam0000000005c2c246 & 1) == 0) {
      FUN_012d0dc8(PTR_DAT_057f6fe0);
      FUN_012d0dc8(PTR_DAT_057c10c8);
      bRam0000000005c2c246 = 1;
    }
    puVar2 = PTR_DAT_057f6fe0;
    puVar1 = PTR_DAT_057c10c8;
    uStack_e4 = 0;
    uStack_ec = 0;
    uStack_6e = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_76 = 0;
    uStack_80 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    auStack_e8[0] = 0;
    if (*(int *)(*(long *)PTR_DAT_057f6fe0 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar4 = System_Number__TryParseInt32IntegerStyle_26d6710
                      (uVar8,uVar9,7,uVar5,&uStack_ec,auStack_e8);
    uVar3 = auStack_e8[0];
    if ((uVar4 & 1) != 0) {
      if (*(long *)(lVar7 + 0x28) != lStack_58) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(uStack_ec);
      }
      return;
    }
    FUN_0103b7d4(*(undefined8 *)puVar2);
                    /* WARNING: Subroutine does not return */
    System_Number__ThrowOverflowOrFormatException_26d6eb8(uVar3,*(undefined8 *)puVar1);
  }
                    /* WARNING: Subroutine does not return */
  System_ThrowHelper__ThrowArgumentNullException_2693954(0x30,0);
}

