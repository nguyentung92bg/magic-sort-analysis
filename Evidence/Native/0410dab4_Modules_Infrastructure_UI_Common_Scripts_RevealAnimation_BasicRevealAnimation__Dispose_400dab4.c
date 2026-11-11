/* IL2CPP: Modules.Infrastructure.UI.Common.Scripts.RevealAnimation.BasicRevealAnimation$$Dispose
void Modules_Infrastructure_UI_Common_Scripts_RevealAnimation_BasicRevealAnimation__Dispose (Modules_Infrastructure_UI_Common_Scripts_RevealAnimation_BasicRevealAnimation_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x01fdd788) */
/* WARNING: Removing unreachable block (ram,0x01fdd794) */
/* WARNING: Removing unreachable block (ram,0x01fdd798) */
/* WARNING: Removing unreachable block (ram,0x01fdd7b4) */
/* IL2CPP: Modules.Infrastructure.UI.Common.Scripts.RevealAnimation.BasicRevealAnimation$$Dispose
   void Modules_Infrastructure_UI_Common_Scripts_RevealAnimation_BasicRevealAnimation__Dispose
   (Modules_Infrastructure_UI_Common_Scripts_RevealAnimation_BasicRevealAnimation_o* __this, const
   MethodInfo* method); */

void Modules_Infrastructure_UI_Common_Scripts_RevealAnimation_BasicRevealAnimation__Dispose_400dab4
               (long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long lVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  uint uVar16;
  undefined8 uVar17;
  
  puVar3 = PTR_DAT_057815e0;
  plVar10 = *(long **)(param_1 + 0x20);
  if (plVar10 == (long *)0x0) {
    return;
  }
  if ((bRam0000000005c28468 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0,0,0);
    FUN_012d0dc8(PTR_DAT_058163b8);
    bRam0000000005c28468 = 1;
  }
  lVar5 = *(long *)puVar3;
  plVar9 = (long *)PTR_DAT_058163b8;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_0130472c();
    lVar5 = *(long *)puVar3;
    plVar9 = (long *)PTR_DAT_058163b8;
  }
  PTR_DAT_058163b8 = (undefined *)plVar9;
  if (((plVar10 != (long *)0x0) && (*(char *)(*(long *)(lVar5 + 0xb8) + 0x90) != '\0')) &&
     ((char)plVar10[0x1d] != '\0')) {
    if (*(char *)((long)plVar10 + 0xe9) == '\0') {
      lVar5 = *plVar9;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_0130472c();
        lVar5 = *plVar9;
      }
      if (*(char *)(*(long *)(lVar5 + 0xb8) + 0x44) == '\0') {
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        if ((bRam0000000005c3201b & 1) == 0) {
          FUN_012d0dc8(PTR_DAT_05814880,1,0);
          FUN_012d0dc8(PTR_DAT_0575e330);
          FUN_012d0dc8(PTR_DAT_058134a8);
          FUN_012d0dc8(PTR_DAT_057d61f0);
          FUN_012d0dc8(PTR_DAT_058163b8);
          bRam0000000005c3201b = 1;
        }
        if (plVar10 != (long *)0x0) {
          if (plVar10[0x11] != 0) {
            DG_Tweening_Tween__OnTweenCallback_1ee121c(plVar10[0x11],plVar10,0);
          }
          puVar3 = PTR_DAT_058163b8;
          if (*(int *)(*(long *)PTR_DAT_058163b8 + 0xe0) == 0) {
            thunk_FUN_0130472c();
          }
          DG_Tweening_Core_TweenManager__RemoveActiveTween_332ffa0(plVar10);
          puVar4 = PTR_DAT_058134a8;
          puVar2 = PTR_DAT_0575e330;
          iVar13 = (int)plVar10[2];
          if (*(char *)((long)plVar10 + 0x9a) == '\0') {
            if (iVar13 == 0) {
              lVar5 = *(long *)puVar3;
              if (*(int *)(lVar5 + 0xe0) == 0) {
                thunk_FUN_0130472c();
                lVar5 = *(long *)puVar3;
              }
              *(int *)(*(long *)(lVar5 + 0xb8) + 0x3c) =
                   *(int *)(*(long *)(lVar5 + 0xb8) + 0x3c) + -1;
            }
            else if (iVar13 == 1) {
              lVar5 = *(long *)puVar3;
              if (*(int *)(lVar5 + 0xe0) == 0) {
                thunk_FUN_0130472c();
                lVar5 = *(long *)puVar3;
              }
              *(int *)(*(long *)(lVar5 + 0xb8) + 0x40) =
                   *(int *)(*(long *)(lVar5 + 0xb8) + 0x40) + -1;
              if (*plVar10 != *(long *)puVar4) {
LAB_03430a3c:
                    /* WARNING: Subroutine does not return */
                FUN_012d1288(plVar10);
              }
              lVar5 = plVar10[0x24];
              if (lVar5 != 0) {
                iVar13 = *(int *)(lVar5 + 0x18);
                if (iVar13 < 1) goto LAB_03430a10;
                iVar15 = 0;
                do {
                  uVar6 = System_Collections_Generic_List_object___get_Item_21fc76c
                                    (lVar5,iVar15,*(undefined8 *)puVar2);
                  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                    thunk_FUN_0130472c(*(long *)puVar3);
                  }
                  DG_Tweening_Core_TweenManager__Despawn_33305a0(uVar6,0);
                  iVar15 = iVar15 + 1;
                  if (iVar13 == iVar15) goto LAB_03430a10;
                  lVar5 = plVar10[0x24];
                } while (lVar5 != 0);
              }
              goto LAB_03430a34;
            }
          }
          else if (iVar13 == 0) {
            lVar5 = *(long *)puVar3;
            if (*(int *)(lVar5 + 0xe0) == 0) {
              thunk_FUN_0130472c();
              lVar5 = *(long *)puVar3;
            }
            lVar12 = *(long *)(lVar5 + 0xb8);
            if (*(int *)(lVar12 + 0x84) == -1) {
              if (*(int *)(lVar5 + 0xe0) == 0) {
                thunk_FUN_0130472c();
                lVar5 = *(long *)puVar3;
                lVar12 = *(long *)(lVar5 + 0xb8);
              }
              iVar13 = *(int *)(lVar12 + 8) + -1;
              *(int *)(lVar12 + 0x80) = iVar13;
              *(int *)(lVar12 + 0x84) = iVar13;
            }
            iVar13 = *(int *)(lVar5 + 0xe0);
            if (iVar13 == 0) {
              thunk_FUN_0130472c();
              lVar5 = *(long *)puVar3;
              iVar13 = *(int *)(lVar5 + 0xe0);
            }
            lVar12 = *(long *)(lVar5 + 0xb8);
            iVar15 = *(int *)(lVar12 + 8);
            iVar1 = *(int *)(lVar12 + 0x84);
            if (iVar13 == 0) {
              thunk_FUN_0130472c();
              lVar5 = *(long *)puVar3;
              lVar12 = *(long *)(lVar5 + 0xb8);
            }
            if (iVar1 < iVar15 + -1) {
              plVar9 = *(long **)(lVar12 + 0x50);
              if (plVar9 == (long *)0x0) goto LAB_03430a34;
              iVar13 = *(int *)(lVar12 + 0x84);
              lVar5 = thunk_FUN_01320d5c(plVar10,*(undefined8 *)(*plVar9 + 0x40));
              if (lVar5 == 0) {
LAB_03430a44:
                uVar6 = thunk_FUN_012d5b8c();
                    /* WARNING: Subroutine does not return */
                FUN_012d0eb8(uVar6,0);
              }
              uVar16 = iVar13 + 1;
              if (*(uint *)(plVar9 + 3) <= uVar16) {
LAB_03430a38:
                    /* WARNING: Subroutine does not return */
                FUN_012d0ef8();
              }
              plVar9[(long)(int)uVar16 + 4] = (long)plVar10;
              FUN_012d0d74(plVar9 + (long)(int)uVar16 + 4,plVar10);
              lVar5 = *(long *)puVar3;
              lVar12 = *(long *)(lVar5 + 0xb8);
              iVar13 = *(int *)(lVar12 + 0x84) + 1;
              *(int *)(lVar12 + 0x84) = iVar13;
              if (iVar13 < *(int *)(lVar12 + 0x80)) {
                if (*(int *)(lVar5 + 0xe0) == 0) {
                  thunk_FUN_0130472c();
                  lVar5 = *(long *)puVar3;
                  lVar12 = *(long *)(lVar5 + 0xb8);
                  iVar13 = *(int *)(lVar12 + 0x84);
                }
                *(int *)(lVar12 + 0x80) = iVar13;
              }
            }
            else {
              uVar16 = *(uint *)(lVar12 + 0x84);
              if (-1 < (int)uVar16) {
                lVar12 = (long)(int)uVar16 * 8 + 0x20;
                do {
                  if (*(int *)(lVar5 + 0xe0) == 0) {
                    thunk_FUN_0130472c();
                    lVar5 = *(long *)puVar3;
                  }
                  plVar9 = *(long **)(*(long *)(lVar5 + 0xb8) + 0x50);
                  if (plVar9 == (long *)0x0) goto LAB_03430a34;
                  if (*(uint *)(plVar9 + 3) <= uVar16) goto LAB_03430a38;
                  if (*(long *)((long)plVar9 + lVar12) == 0) {
                    if (*(int *)(lVar5 + 0xe0) == 0) {
                      thunk_FUN_0130472c();
                      plVar9 = *(long **)(*(long *)(*(long *)puVar3 + 0xb8) + 0x50);
                      if (plVar9 == (long *)0x0) goto LAB_03430a34;
                    }
                    lVar5 = thunk_FUN_01320d5c(plVar10,*(undefined8 *)(*plVar9 + 0x40));
                    if (lVar5 == 0) goto LAB_03430a44;
                    if (*(uint *)(plVar9 + 3) <= uVar16) goto LAB_03430a38;
                    *(long *)((long)plVar9 + lVar12) = (long)plVar10;
                    FUN_012d0d74((long *)((long)plVar9 + lVar12),plVar10);
                    lVar5 = *(long *)puVar3;
                    lVar12 = *(long *)(lVar5 + 0xb8);
                    if ((int)uVar16 < *(int *)(lVar12 + 0x80)) {
                      if (*(int *)(lVar5 + 0xe0) == 0) {
                        thunk_FUN_0130472c();
                        lVar5 = *(long *)puVar3;
                        lVar12 = *(long *)(lVar5 + 0xb8);
                      }
                      *(uint *)(lVar12 + 0x80) = uVar16;
                    }
                    if (*(int *)(lVar5 + 0xe0) == 0) {
                      thunk_FUN_0130472c();
                      lVar5 = *(long *)puVar3;
                    }
                    lVar12 = *(long *)(lVar5 + 0xb8);
                    iVar13 = *(int *)(lVar12 + 0x80);
                    if (*(int *)(lVar12 + 0x84) < iVar13) {
                      if (*(int *)(lVar5 + 0xe0) == 0) {
                        thunk_FUN_0130472c();
                        lVar5 = *(long *)puVar3;
                        lVar12 = *(long *)(lVar5 + 0xb8);
                        iVar13 = *(int *)(lVar12 + 0x80);
                      }
                      *(int *)(lVar12 + 0x84) = iVar13;
                    }
                    break;
                  }
                  uVar16 = uVar16 - 1;
                  lVar12 = lVar12 + -8;
                } while (-1 < (int)uVar16);
              }
            }
            if (*(int *)(lVar5 + 0xe0) == 0) {
              thunk_FUN_0130472c();
              lVar5 = *(long *)puVar3;
            }
            *(int *)(*(long *)(lVar5 + 0xb8) + 0x34) = *(int *)(*(long *)(lVar5 + 0xb8) + 0x34) + 1;
          }
          else if (iVar13 == 1) {
            lVar5 = *(long *)puVar3;
            if (*(int *)(lVar5 + 0xe0) == 0) {
              thunk_FUN_0130472c();
              lVar5 = *(long *)puVar3;
            }
            lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x58);
            if (lVar5 != 0) {
              System_Collections_Generic_Stack_object___Push_31249f0
                        (lVar5,plVar10,*(undefined8 *)PTR_DAT_057d61f0);
              *(int *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x38) =
                   *(int *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x38) + 1;
              if (*plVar10 != *(long *)puVar4) goto LAB_03430a3c;
              lVar5 = plVar10[0x24];
              if (lVar5 != 0) {
                iVar13 = *(int *)(lVar5 + 0x18);
                if (iVar13 < 1) goto LAB_03430a10;
                iVar15 = 0;
                do {
                  uVar6 = System_Collections_Generic_List_object___get_Item_21fc76c
                                    (lVar5,iVar15,*(undefined8 *)puVar2);
                  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                    thunk_FUN_0130472c(*(long *)puVar3);
                  }
                  DG_Tweening_Core_TweenManager__Despawn_33305a0(uVar6,0);
                  iVar15 = iVar15 + 1;
                  if (iVar13 == iVar15) goto LAB_03430a10;
                  lVar5 = plVar10[0x24];
                } while (lVar5 != 0);
              }
            }
            goto LAB_03430a34;
          }
LAB_03430a10:
          *(undefined1 *)(plVar10 + 0x1d) = 0;
                    /* WARNING: Could not recover jumptable at 0x03430a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180));
          return;
        }
LAB_03430a34:
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      *(undefined1 *)(plVar10 + 0x1d) = 0;
    }
    else {
      if (cRam0000000005c24e31 == '\0') {
        FUN_012d0dc8(PTR_DAT_057ddc60);
        cRam0000000005c24e31 = '\x01';
      }
      puVar3 = PTR_DAT_057ec740;
      if (1 < **(int **)(*(long *)PTR_DAT_057ddc60 + 0xb8)) {
        if ((bRam0000000005c3314e & 1) == 0) {
          FUN_012d0dc8(PTR_DAT_057ec740,0);
          bRam0000000005c3314e = 1;
        }
        puVar2 = PTR_DAT_057815e0;
        plVar9 = *(long **)puVar3;
        if ((bRam0000000005c33148 & 1) == 0) {
          FUN_012d0dc8(PTR_DAT_057815e0);
          FUN_012d0dc8(PTR_DAT_05807f60);
          FUN_012d0dc8(PTR_DAT_05797700);
          bRam0000000005c33148 = 1;
        }
        lVar5 = *(long *)puVar2;
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_0130472c();
          lVar5 = *(long *)puVar2;
        }
        puVar3 = PTR_DAT_05797700;
        if (*(char *)(*(long *)(lVar5 + 0xb8) + 0x39) == '\0') {
          uVar6 = *(undefined8 *)PTR_DAT_05797700;
          if (plVar9 == (long *)0x0) {
            uVar17 = 0;
          }
          else {
            uVar17 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
          }
          uVar6 = System_String__Concat_1ec3580(uVar6,uVar17,0);
        }
        else {
          uVar6 = DG_Tweening_Core_Debugger__GetDebugDataMessage_3629bd0(plVar10);
          uVar17 = *(undefined8 *)puVar3;
          if (plVar9 == (long *)0x0) {
            uVar7 = 0;
          }
          else {
            uVar7 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
          }
          uVar6 = System_String__Concat_1ed10d8(uVar17,uVar6,uVar7,0);
        }
        lVar5 = *(long *)puVar2;
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_0130472c();
          lVar5 = *(long *)puVar2;
        }
        lVar12 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x30);
        if (lVar12 != 0) {
          if (*(int *)(lVar5 + 0xe0) == 0) {
            thunk_FUN_0130472c();
            lVar12 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30);
            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
          }
          uVar8 = (**(code **)(lVar12 + 0x18))
                            (*(undefined8 *)(lVar12 + 0x40),2,uVar6,*(undefined8 *)(lVar12 + 0x28));
          if ((uVar8 & 1) == 0) {
            return;
          }
        }
        if (*(int *)(*(long *)PTR_DAT_05807f60 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        puVar3 = PTR_DAT_05807f60;
        uVar17 = 0;
        if ((bRam0000000005c3a1b1 & 1) == 0) {
          FUN_012d0dc8(PTR_DAT_05807f60,0);
          FUN_012d0dc8(PTR_DAT_0578cb58);
          bRam0000000005c3a1b1 = 1;
          uVar17 = extraout_x1;
        }
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_0130472c();
          uVar17 = extraout_x1_00;
        }
        if (cRam0000000005c26b67 == '\0') {
          FUN_012d0dc8(PTR_DAT_05807f60,uVar17);
          cRam0000000005c26b67 = '\x01';
        }
        lVar5 = *(long *)puVar3;
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_0130472c();
          lVar5 = *(long *)puVar3;
        }
        plVar10 = *(long **)(*(long *)(lVar5 + 0xb8) + 8);
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        lVar5 = *plVar10;
        uVar8 = (ulong)*(ushort *)(lVar5 + 0x12a);
        if (uVar8 != 0) {
          piVar14 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_0578cb58) {
              puVar11 = (undefined8 *)(lVar5 + (long)(*piVar14 + 3) * 0x10 + 0x138);
              goto LAB_041801ac;
            }
            uVar8 = uVar8 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar8 != 0);
        }
        puVar11 = (undefined8 *)FUN_0131971c(plVar10,*(long *)PTR_DAT_0578cb58,3);
LAB_041801ac:
                    /* WARNING: Could not recover jumptable at 0x041801c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)*puVar11)(plVar10,2,uVar6,puVar11[1]);
        return;
      }
    }
  }
  return;
}

