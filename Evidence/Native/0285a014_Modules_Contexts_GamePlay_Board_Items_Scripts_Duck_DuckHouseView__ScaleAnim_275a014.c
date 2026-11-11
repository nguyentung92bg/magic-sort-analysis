/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Duck.DuckHouseView$$ScaleAnim
void Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseView__ScaleAnim (Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseView_o* __this, Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseConfigForSize_o* configForSize, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Duck.DuckHouseView$$ScaleAnim
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseView__ScaleAnim
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseView_o* __this,
   Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseConfigForSize_o* configForSize, const
   MethodInfo* method); */

ulong Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseView__ScaleAnim_275a014
                (long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long lVar9;
  long lVar10;
  int *piVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  
  if ((bRam0000000005c2c739 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05768b90);
    FUN_012d0dc8(PTR_DAT_05804f30);
    FUN_012d0dc8(PTR_DAT_0580da90);
    bRam0000000005c2c739 = 1;
  }
  lVar9 = *(long *)(param_1 + 0x28);
  if ((lVar9 != 0) && (param_2 != 0)) {
    uVar4 = DG_Tweening_ShortcutExtensions__DOPunchScale_1ee71cc
                      (*(undefined4 *)(lVar9 + 0x94),*(undefined4 *)(lVar9 + 0x98),
                       *(undefined4 *)(lVar9 + 0x9c),*(undefined4 *)(param_2 + 0x28),
                       *(undefined4 *)(lVar9 + 0x90),*(undefined8 *)(param_1 + 0x38),
                       *(undefined4 *)(lVar9 + 0x8c),0);
    puVar2 = PTR_DAT_05804f30;
    puVar1 = PTR_DAT_05768b90;
    if (*(long *)(param_1 + 0x28) != 0) {
      uVar4 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                        (uVar4,*(undefined8 *)(*(long *)(param_1 + 0x28) + 0xa0),
                         *(undefined8 *)PTR_DAT_0580da90);
      uVar4 = DG_Tweening_TweenExtensions__Pause_object__26ef03c(uVar4,*(undefined8 *)puVar1);
      uVar5 = DG_Tweening_TweenSettingsExtensions__SetAutoKill_object__2450a78
                        (uVar4,0,*(undefined8 *)puVar2);
      DG_Tweening_TweenExtensions__Goto_1edd4a4(*(undefined4 *)(param_2 + 0x28),uVar5,0,0);
      auVar13._8_8_ = 0;
      auVar13._0_8_ = uVar5;
      if ((bRam0000000005c2846a & 1) == 0) {
        auVar13 = FUN_012d0dc8(PTR_DAT_058163b8,0);
        bRam0000000005c2846a = 1;
      }
      uVar4 = auVar13._8_8_;
      uVar3 = auVar13._0_8_;
      if (uVar5 == 0) {
        if (cRam0000000005c24e31 == '\0') {
          uVar3 = FUN_012d0dc8(PTR_DAT_057ddc60,uVar4);
          cRam0000000005c24e31 = '\x01';
        }
        puVar1 = PTR_DAT_0579eb08;
        if (**(int **)(*(long *)PTR_DAT_057ddc60 + 0xb8) < 2) {
          return uVar3;
        }
        if ((bRam0000000005c3314f & 1) == 0) {
          FUN_012d0dc8(PTR_DAT_0579eb08,0);
          bRam0000000005c3314f = 1;
        }
        plVar7 = *(long **)puVar1;
        uVar5 = 0;
      }
      else if (*(char *)(uVar5 + 0xe8) == '\0') {
        if (cRam0000000005c24e31 == '\0') {
          uVar3 = FUN_012d0dc8(PTR_DAT_057ddc60,uVar4);
          cRam0000000005c24e31 = '\x01';
        }
        puVar1 = PTR_DAT_0580cee8;
        if (**(int **)(*(long *)PTR_DAT_057ddc60 + 0xb8) < 2) {
          return uVar3;
        }
        if ((bRam0000000005c3314d & 1) == 0) {
          FUN_012d0dc8(PTR_DAT_0580cee8,0);
          bRam0000000005c3314d = 1;
        }
        plVar7 = *(long **)puVar1;
        uVar5 = 0;
      }
      else {
        if (*(char *)(uVar5 + 0xe9) == '\0') {
          if (*(int *)(*(long *)PTR_DAT_058163b8 + 0xe0) == 0) {
            thunk_FUN_0130472c();
          }
          if ((bRam0000000005c32028 & 1) == 0) {
            FUN_012d0dc8(PTR_DAT_058163b8,0);
            bRam0000000005c32028 = 1;
          }
          puVar1 = PTR_DAT_058163b8;
          if (uVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
          if ((*(int *)(uVar5 + 0x10c) == 0) && (*(float *)(uVar5 + 0x104) <= 0.0)) {
            if (*(int *)(*(long *)PTR_DAT_058163b8 + 0xe0) == 0) {
              thunk_FUN_0130472c();
            }
            DG_Tweening_Core_TweenManager__ManageOnRewindCallbackWhenAlreadyRewinded_3332dd0
                      (uVar5,1);
            *(undefined1 *)(uVar5 + 0x2c) = 1;
            *(undefined1 *)(uVar5 + 0x110) = 0;
            return 0;
          }
          if (*(char *)(uVar5 + 0x2c) == '\0') {
            *(undefined1 *)(uVar5 + 0x2c) = 1;
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_0130472c();
            }
            DG_Tweening_Core_TweenManager__Play_3330e80(uVar5);
            return 1;
          }
          if (*(int *)(*(long *)PTR_DAT_058163b8 + 0xe0) == 0) {
            thunk_FUN_0130472c();
          }
          if (uVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
          if (*(char *)(uVar5 + 0x110) == '\0') {
            if (*(char *)(uVar5 + 0x2c) == '\0') {
              if (*(char *)(uVar5 + 0x111) == '\0') goto LAB_03430ecc;
            }
            else if ((0 < *(int *)(uVar5 + 0x10c)) || (0.0 < *(float *)(uVar5 + 0x104))) {
LAB_03430ecc:
              *(undefined1 *)(uVar5 + 0x110) = 1;
              if (*(char *)(uVar5 + 0x102) == '\0') {
                return 1;
              }
              if ((*(char *)(uVar5 + 0x118) != '\0') && (*(long *)(uVar5 + 0x58) != 0)) {
                DG_Tweening_Tween__OnTweenCallback_1ee121c(*(long *)(uVar5 + 0x58),uVar5,0);
              }
              return 1;
            }
          }
          return 0;
        }
        if (cRam0000000005c24e31 == '\0') {
          uVar3 = FUN_012d0dc8(PTR_DAT_057ddc60,uVar4);
          cRam0000000005c24e31 = '\x01';
        }
        puVar1 = PTR_DAT_057ec740;
        if (**(int **)(*(long *)PTR_DAT_057ddc60 + 0xb8) < 2) {
          return uVar3;
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
      lVar9 = *(long *)puVar1;
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_0130472c();
        lVar9 = *(long *)puVar1;
      }
      puVar2 = PTR_DAT_05797700;
      if (*(char *)(*(long *)(lVar9 + 0xb8) + 0x39) == '\0') {
        uVar4 = *(undefined8 *)PTR_DAT_05797700;
        if (plVar7 == (long *)0x0) {
          uVar12 = 0;
        }
        else {
          uVar12 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
        }
        uVar4 = System_String__Concat_1ec3580(uVar4,uVar12,0);
      }
      else {
        uVar4 = DG_Tweening_Core_Debugger__GetDebugDataMessage_3629bd0(uVar5);
        uVar12 = *(undefined8 *)puVar2;
        if (plVar7 == (long *)0x0) {
          uVar6 = 0;
        }
        else {
          uVar6 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
        }
        uVar4 = System_String__Concat_1ed10d8(uVar12,uVar4,uVar6,0);
      }
      lVar9 = *(long *)puVar1;
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_0130472c();
        lVar9 = *(long *)puVar1;
      }
      lVar10 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x30);
      if (lVar10 != 0) {
        if (*(int *)(lVar9 + 0xe0) == 0) {
          thunk_FUN_0130472c();
          lVar10 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x30);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
        }
        uVar5 = (**(code **)(lVar10 + 0x18))
                          (*(undefined8 *)(lVar10 + 0x40),2,uVar4,*(undefined8 *)(lVar10 + 0x28));
        if ((uVar5 & 1) == 0) {
          return uVar5;
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
      lVar9 = *(long *)puVar1;
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_0130472c();
        lVar9 = *(long *)puVar1;
      }
      plVar7 = *(long **)(*(long *)(lVar9 + 0xb8) + 8);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      lVar9 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar9 + 0x12a);
      if (uVar5 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_0578cb58) {
            puVar8 = (undefined8 *)(lVar9 + (long)(*piVar11 + 3) * 0x10 + 0x138);
            goto LAB_041801ac;
          }
          uVar5 = uVar5 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar5 != 0);
      }
      puVar8 = (undefined8 *)FUN_0131971c(plVar7,*(long *)PTR_DAT_0578cb58,3);
LAB_041801ac:
                    /* WARNING: Could not recover jumptable at 0x041801c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar5 = (*(code *)*puVar8)(plVar7,2,uVar4,puVar8[1]);
      return uVar5;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

