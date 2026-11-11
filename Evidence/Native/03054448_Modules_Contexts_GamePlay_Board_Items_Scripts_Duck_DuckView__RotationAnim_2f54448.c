/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Duck.DuckView$$RotationAnim
DG_Tweening_Tween_o* Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckView__RotationAnim (Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Duck.DuckView$$RotationAnim
   DG_Tweening_Tween_o* Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckView__RotationAnim
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckView_o* __this, const MethodInfo*
   method); */

undefined8
Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckView__RotationAnim_2f54448(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined4 *puVar8;
  int *piVar9;
  long *plVar10;
  
  puVar1 = PTR_DAT_057815e0;
  if ((bRam0000000005c30899 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_0575a2d8);
    bRam0000000005c30899 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar2 = DG_Tweening_DOTween__Sequence_1eda154(0);
  puVar1 = PTR_DAT_0575a2d8;
  plVar10 = *(long **)(param_1 + 0x18);
  if (plVar10 != (long *)0x0) {
    lVar5 = *plVar10;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12a);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0575a2d8) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar9 + 0xb) * 0x10 + 0x138);
          goto LAB_03054508;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_0131971c(plVar10,*(long *)PTR_DAT_0575a2d8,0xb);
LAB_03054508:
    uVar4 = (*(code *)*puVar3)(plVar10,puVar3[1]);
    lVar5 = *(long *)(param_1 + 0x20);
    if (lVar5 != 0) {
      uVar4 = DG_Tweening_ShortcutExtensions__DOLocalRotate_1ee610c
                        (*(undefined4 *)(lVar5 + 0xb8),*(undefined4 *)(lVar5 + 0xbc),
                         *(undefined4 *)(lVar5 + 0xc0),*(undefined4 *)(lVar5 + 0xb4),uVar4,0,0);
      DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar2,uVar4,0);
      plVar10 = *(long **)(param_1 + 0x18);
      if (plVar10 != (long *)0x0) {
        lVar6 = *plVar10;
        lVar5 = *(long *)puVar1;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12a);
        if (uVar7 != 0) {
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == lVar5) {
              puVar3 = (undefined8 *)(lVar6 + (long)(*piVar9 + 0xb) * 0x10 + 0x138);
              goto LAB_03054598;
            }
            uVar7 = uVar7 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar7 != 0);
        }
        puVar3 = (undefined8 *)FUN_0131971c(plVar10,lVar5,0xb);
LAB_03054598:
        uVar4 = (*(code *)*puVar3)(plVar10,puVar3[1]);
        lVar5 = *(long *)(param_1 + 0x20);
        if (lVar5 != 0) {
          uVar4 = DG_Tweening_ShortcutExtensions__DOLocalRotate_1ee610c
                            (-*(float *)(lVar5 + 0xb8),-*(float *)(lVar5 + 0xbc),
                             -*(float *)(lVar5 + 0xc0),
                             *(float *)(lVar5 + 0xb4) + *(float *)(lVar5 + 0xb4),uVar4,0,0);
          DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar2,uVar4,0);
          plVar10 = *(long **)(param_1 + 0x18);
          if (plVar10 != (long *)0x0) {
            lVar6 = *plVar10;
            lVar5 = *(long *)puVar1;
            uVar7 = (ulong)*(ushort *)(lVar6 + 0x12a);
            if (uVar7 != 0) {
              piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == lVar5) {
                  puVar3 = (undefined8 *)(lVar6 + (long)(*piVar9 + 0xb) * 0x10 + 0x138);
                  goto LAB_0305463c;
                }
                uVar7 = uVar7 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar7 != 0);
            }
            puVar3 = (undefined8 *)FUN_0131971c(plVar10,lVar5,0xb);
LAB_0305463c:
            uVar4 = (*(code *)*puVar3)(plVar10,puVar3[1]);
            if (cRam0000000005c230aa == '\0') {
              FUN_012d0dc8(PTR_DAT_05805c10);
              cRam0000000005c230aa = '\x01';
            }
            if (*(long *)(param_1 + 0x20) != 0) {
              puVar8 = *(undefined4 **)(*(long *)PTR_DAT_05805c10 + 0xb8);
              uVar4 = DG_Tweening_ShortcutExtensions__DOLocalRotate_1ee610c
                                (*puVar8,puVar8[1],puVar8[2],
                                 *(undefined4 *)(*(long *)(param_1 + 0x20) + 0xb4),uVar4,0,0);
              DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar2,uVar4,0);
              return uVar2;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

