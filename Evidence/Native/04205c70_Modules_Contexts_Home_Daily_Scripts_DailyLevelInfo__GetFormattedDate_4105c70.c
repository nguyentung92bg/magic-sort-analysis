/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.DailyLevelInfo$$GetFormattedDate
System_String_o* Modules_Contexts_Home_Daily_Scripts_DailyLevelInfo__GetFormattedDate (Modules_Contexts_Home_Daily_Scripts_DailyLevelInfo_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.DailyLevelInfo$$GetFormattedDate
   System_String_o* Modules_Contexts_Home_Daily_Scripts_DailyLevelInfo__GetFormattedDate
   (Modules_Contexts_Home_Daily_Scripts_DailyLevelInfo_o __this, const MethodInfo* method); */

long Modules_Contexts_Home_Daily_Scripts_DailyLevelInfo__GetFormattedDate_4105c70
               (undefined8 *param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ushort uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined2 uStack_80;
  undefined8 *puStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  puVar2 = PTR_DAT_0579d5c0;
  if ((bRam0000000005c3ab99 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0579d5c0);
    FUN_012d0dc8(PTR_DAT_0580b9d0);
    FUN_012d0dc8(PTR_DAT_0578bb90);
    bRam0000000005c3ab99 = 1;
  }
  puVar3 = PTR_DAT_0580b9d0;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  puVar2 = PTR_DAT_0578bb90;
  uVar8 = System_Globalization_CultureInfo__get_InvariantCulture_2b20e6c(0);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_0130472c(*(long *)puVar3);
  }
  puVar3 = PTR_DAT_057d05e0;
  uVar9 = *(ulong *)puVar2;
  if ((bRam0000000005c297f1 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d05e0,uVar9,uVar8,0);
    bRam0000000005c297f1 = 1;
  }
  uVar11 = *param_1;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  puVar2 = PTR_DAT_057d05e0;
  if ((bRam0000000005c29871 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d05e0);
    bRam0000000005c29871 = 1;
  }
  lVar5 = *(long *)puVar2;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_0130472c();
    lVar5 = *(long *)puVar2;
  }
  uVar10 = **(undefined8 **)(lVar5 + 0xb8);
  lVar5 = tpidr_el0;
  lStack_58 = *(long *)(lVar5 + 0x28);
  if ((bRam0000000005c29872 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05787ce8);
    FUN_012d0dc8(PTR_DAT_057d05e0);
    FUN_012d0dc8(PTR_DAT_0580cb30);
    FUN_012d0dc8(PTR_DAT_058149d0);
    FUN_012d0dc8(PTR_DAT_057a4330);
    FUN_012d0dc8(PTR_DAT_05799b00);
    bRam0000000005c29872 = 1;
  }
  puVar2 = PTR_DAT_057d05e0;
  uStack_68 = 0;
  uStack_60 = 0;
  puStack_70 = (undefined8 *)0x0;
  if ((uVar9 != 0) && (*(int *)(uVar9 + 0x10) == 1)) {
    uVar4 = System_String__get_Chars_1ecae64(uVar9,0,0);
    if (uVar4 < 0x53) {
      if (uVar4 != 0x4f) {
        if (uVar4 == 0x52) goto LAB_02205a98;
        goto LAB_022059c8;
      }
    }
    else {
      if (uVar4 == 0x72) {
LAB_02205a98:
        lVar7 = System_String__FastAllocateString_1ecf818(0x1d,0);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        uVar8 = System_String__GetRawStringData_1ecdd9c(lVar7,0);
        uVar1 = *(undefined4 *)(lVar7 + 0x10);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_0130472c(*(long *)puVar2);
        }
        System_DateTimeFormat__TryFormatR_210b8ec(uVar11,uVar10,uVar8,uVar1,&uStack_60);
        goto LAB_02205a68;
      }
      if (uVar4 != 0x6f) goto LAB_022059c8;
    }
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    if (cRam0000000005c25913 == '\0') {
      FUN_012d0dc8(PTR_DAT_0578a3a8);
      cRam0000000005c25913 = '\x01';
    }
    puVar3 = PTR_DAT_0580cb30;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    System_DateTimeFormat__TryFormatO_210b418(uVar11,uVar10,&uStack_c0,0x21,(long)&uStack_60 + 4);
    uVar9 = (ulong)uStack_60._4_4_;
    lVar7 = *(long *)puVar3;
    if (0x21 < uStack_60._4_4_) {
      System_ThrowHelper__ThrowArgumentOutOfRangeException_26a463c(0);
    }
    puVar2 = PTR_DAT_058149d0;
    if ((*(byte *)(*(long *)(lVar7 + 0x20) + 0x132) & 1) == 0) {
      FUN_0131942c();
    }
    puStack_70 = &uStack_c0;
    uStack_68 = uVar9;
    lVar7 = System_Span_char___ToString_33477c4(&puStack_70,*(undefined8 *)puVar2);
    goto LAB_02205a68;
  }
LAB_022059c8:
  if (*(int *)(*(long *)PTR_DAT_05787ce8 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar8 = System_Globalization_DateTimeFormatInfo__GetInstance_32bf650(uVar8,0);
  if (cRam0000000005c25914 == '\0') {
    FUN_012d0dc8(PTR_DAT_057bd9e0);
    cRam0000000005c25914 = '\x01';
    if (uVar9 != 0) goto LAB_02205a00;
LAB_02205a30:
    uVar6 = 0;
  }
  else {
    if (uVar9 == 0) goto LAB_02205a30;
LAB_02205a00:
    uVar6 = System_String__GetRawStringData_1ecdd9c(uVar9,0);
    uVar9 = (ulong)*(uint *)(uVar9 + 0x10);
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar8 = System_DateTimeFormat__FormatStringBuilder_210bc54(uVar11,uVar6,uVar9,uVar8,uVar10);
  lVar7 = System_Text_StringBuilderCache__GetStringAndRelease_1e55fd8(uVar8,0);
LAB_02205a68:
  if (*(long *)(lVar5 + 0x28) != lStack_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar7;
}

