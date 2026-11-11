/* IL2CPP: Modules.Contexts.GamePlay.Loop.Scripts.Daily.GiveDailyCoinRewardsCommand$$Dispose
void Modules_Contexts_GamePlay_Loop_Scripts_Daily_GiveDailyCoinRewardsCommand__Dispose (Modules_Contexts_GamePlay_Loop_Scripts_Daily_GiveDailyCoinRewardsCommand_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Loop.Scripts.Daily.GiveDailyCoinRewardsCommand$$Dispose
   void Modules_Contexts_GamePlay_Loop_Scripts_Daily_GiveDailyCoinRewardsCommand__Dispose
   (Modules_Contexts_GamePlay_Loop_Scripts_Daily_GiveDailyCoinRewardsCommand_o* __this, const
   MethodInfo* method); */

ulong Modules_Contexts_GamePlay_Loop_Scripts_Daily_GiveDailyCoinRewardsCommand__Dispose_1f13dcc
                (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long lVar10;
  int *piVar11;
  undefined8 uVar12;
  
  uVar3 = *(ulong *)(param_1 + 0x20);
  if (uVar3 == 0) {
    return 0;
  }
  uVar8 = uVar3;
  if (((uVar3 == 0) || (*(char *)(uVar3 + 0xe8) == '\0')) ||
     (uVar8 = DG_Tweening_TweenExtensions__IsComplete_1edf130(uVar3,0), (uVar8 & 1) != 0)) {
    return uVar8;
  }
  uVar8 = uVar3;
  if ((bRam0000000005c28464 & 1) == 0) {
    uVar8 = FUN_012d0dc8(PTR_DAT_058163b8);
    bRam0000000005c28464 = 1;
  }
  if (uVar3 == 0) {
    if (cRam0000000005c24e31 == '\0') {
      uVar8 = FUN_012d0dc8(PTR_DAT_057ddc60);
      cRam0000000005c24e31 = '\x01';
    }
    puVar1 = PTR_DAT_0579eb08;
    if (**(int **)(*(long *)PTR_DAT_057ddc60 + 0xb8) < 2) {
      return uVar8;
    }
    if ((bRam0000000005c3314f & 1) == 0) {
      FUN_012d0dc8(PTR_DAT_0579eb08,0);
      bRam0000000005c3314f = 1;
    }
    plVar7 = *(long **)puVar1;
    uVar3 = 0;
  }
  else if (*(char *)(uVar3 + 0xe8) == '\0') {
    if (cRam0000000005c24e31 == '\0') {
      uVar8 = FUN_012d0dc8(PTR_DAT_057ddc60);
      cRam0000000005c24e31 = '\x01';
    }
    puVar1 = PTR_DAT_0580cee8;
    if (**(int **)(*(long *)PTR_DAT_057ddc60 + 0xb8) < 2) {
      return uVar8;
    }
    if ((bRam0000000005c3314d & 1) == 0) {
      FUN_012d0dc8(PTR_DAT_0580cee8,0);
      bRam0000000005c3314d = 1;
    }
    plVar7 = *(long **)puVar1;
    uVar3 = 0;
  }
  else {
    if (*(char *)(uVar3 + 0xe9) == '\0') {
      if (*(int *)(*(long *)PTR_DAT_058163b8 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      if ((bRam0000000005c32026 & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_058163b8,1,1,0);
        bRam0000000005c32026 = 1;
      }
      if (uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      if ((*(int *)(uVar3 + 0xa4) == -1) || (*(char *)(uVar3 + 0x111) != '\0')) {
        uVar3 = 0;
      }
      else {
        DG_Tweening_Tween__DoGoto_1eeed08
                  (*(undefined4 *)(uVar3 + 0xa0),uVar3,*(int *)(uVar3 + 0xa4),1,0);
        *(undefined1 *)(uVar3 + 0x110) = 0;
        puVar1 = PTR_DAT_058163b8;
        if ((*(char *)(uVar3 + 0x9c) != '\0') && (*(char *)(uVar3 + 0xe8) != '\0')) {
          lVar4 = *(long *)PTR_DAT_058163b8;
          if (*(int *)(lVar4 + 0xe0) == 0) {
            thunk_FUN_0130472c();
            lVar4 = *(long *)puVar1;
          }
          if (*(char *)(*(long *)(lVar4 + 0xb8) + 0x44) == '\0') {
            if (*(int *)(lVar4 + 0xe0) == 0) {
              thunk_FUN_0130472c();
            }
            DG_Tweening_Core_TweenManager__Despawn_33305a0(uVar3,1);
          }
          else {
            *(undefined1 *)(uVar3 + 0xe8) = 0;
          }
        }
        uVar3 = 1;
      }
      return uVar3;
    }
    if (cRam0000000005c24e31 == '\0') {
      uVar8 = FUN_012d0dc8(PTR_DAT_057ddc60);
      cRam0000000005c24e31 = '\x01';
    }
    puVar1 = PTR_DAT_057ec740;
    if (**(int **)(*(long *)PTR_DAT_057ddc60 + 0xb8) < 2) {
      return uVar8;
    }
    if ((bRam0000000005c3314e & 1) == 0) {
      FUN_012d0dc8(PTR_DAT_057ec740,0);
      bRam0000000005c3314e = 1;
    }
    plVar7 = *(long **)puVar1;
  }
  puVar1 = PTR_DAT_057815e0;
  if ((bRam0000000005c33148 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_05807f60);
    FUN_012d0dc8(PTR_DAT_05797700);
    bRam0000000005c33148 = 1;
  }
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_0130472c();
    lVar4 = *(long *)puVar1;
  }
  puVar2 = PTR_DAT_05797700;
  if (*(char *)(*(long *)(lVar4 + 0xb8) + 0x39) == '\0') {
    uVar5 = *(undefined8 *)PTR_DAT_05797700;
    if (plVar7 == (long *)0x0) {
      uVar12 = 0;
    }
    else {
      uVar12 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
    }
    uVar5 = System_String__Concat_1ec3580(uVar5,uVar12,0);
  }
  else {
    uVar5 = DG_Tweening_Core_Debugger__GetDebugDataMessage_3629bd0(uVar3);
    uVar12 = *(undefined8 *)puVar2;
    if (plVar7 == (long *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
    }
    uVar5 = System_String__Concat_1ed10d8(uVar12,uVar5,uVar6,0);
  }
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_0130472c();
    lVar4 = *(long *)puVar1;
  }
  lVar10 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x30);
  if (lVar10 != 0) {
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_0130472c();
      lVar10 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x30);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
    }
    uVar3 = (**(code **)(lVar10 + 0x18))
                      (*(undefined8 *)(lVar10 + 0x40),2,uVar5,*(undefined8 *)(lVar10 + 0x28));
    if ((uVar3 & 1) == 0) {
      return uVar3;
    }
  }
  if (*(int *)(*(long *)PTR_DAT_05807f60 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  puVar1 = PTR_DAT_05807f60;
  uVar12 = 0;
  if ((bRam0000000005c3a1b1 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05807f60,0);
    FUN_012d0dc8(PTR_DAT_0578cb58);
    bRam0000000005c3a1b1 = 1;
    uVar12 = extraout_x1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
    uVar12 = extraout_x1_00;
  }
  if (cRam0000000005c26b67 == '\0') {
    FUN_012d0dc8(PTR_DAT_05807f60,uVar12);
    cRam0000000005c26b67 = '\x01';
  }
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_0130472c();
    lVar4 = *(long *)puVar1;
  }
  plVar7 = *(long **)(*(long *)(lVar4 + 0xb8) + 8);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  lVar4 = *plVar7;
  uVar3 = (ulong)*(ushort *)(lVar4 + 0x12a);
  if (uVar3 != 0) {
    piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_0578cb58) {
        puVar9 = (undefined8 *)(lVar4 + (long)(*piVar11 + 3) * 0x10 + 0x138);
        goto LAB_041801ac;
      }
      uVar3 = uVar3 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar3 != 0);
  }
  puVar9 = (undefined8 *)FUN_0131971c(plVar7,*(long *)PTR_DAT_0578cb58,3);
LAB_041801ac:
                    /* WARNING: Could not recover jumptable at 0x041801c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (*(code *)*puVar9)(plVar7,2,uVar5,puVar9[1]);
  return uVar3;
}

