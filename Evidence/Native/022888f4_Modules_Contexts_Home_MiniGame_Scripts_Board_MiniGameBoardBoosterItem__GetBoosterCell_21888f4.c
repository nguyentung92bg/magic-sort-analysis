/* IL2CPP: Modules.Contexts.Home.MiniGame.Scripts.Board.MiniGameBoardBoosterItem$$GetBoosterCell
Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardCell_o* Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardBoosterItem__GetBoosterCell (Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardBoosterItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x025214ec) */
/* IL2CPP: Modules.Contexts.Home.MiniGame.Scripts.Board.MiniGameBoardBoosterItem$$GetBoosterCell
   Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardCell_o*
   Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardBoosterItem__GetBoosterCell
   (Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardBoosterItem_o* __this, const
   MethodInfo* method); */

undefined8
Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardBoosterItem__GetBoosterCell_21888f4
          (long param_1)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  int iVar13;
  
  puVar1 = PTR_DAT_05808cb8;
  if ((bRam0000000005c29d43 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05808cb8);
    bRam0000000005c29d43 = 1;
  }
  plVar3 = *(long **)(param_1 + 0x30);
  lVar8 = *(long *)puVar1;
  if ((bRam0000000005c2af0a & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_058165e8);
    FUN_012d0dc8(PTR_DAT_057a12b8);
    bRam0000000005c2af0a = 1;
  }
  if (plVar3 == (long *)0x0) {
    uVar6 = thunk_FUN_0136d790(PTR_DAT_057ab1a0);
    uVar6 = System_Linq_Error__ArgumentNull_3d79794(uVar6,0);
    uVar7 = thunk_FUN_0136d790(PTR_DAT_057d3d40);
                    /* WARNING: Subroutine does not return */
    FUN_012d0eb8(uVar6,uVar7);
  }
  lVar9 = **(long **)(lVar8 + 0x38);
  if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
    lVar9 = FUN_0131942c(lVar9);
  }
  plVar4 = (long *)thunk_FUN_01320d5c(plVar3,lVar9);
  if (plVar4 == (long *)0x0) {
    lVar9 = *(long *)(*(long *)(lVar8 + 0x38) + 0x20);
    if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
      lVar9 = FUN_0131942c(lVar9);
    }
    lVar10 = *plVar3;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar9) {
          puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_02521324;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)FUN_0131971c(plVar3,lVar9,0);
LAB_02521324:
    puVar1 = PTR_DAT_058165e8;
    plVar3 = (long *)(*(code *)*puVar5)(plVar3,puVar5[1]);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    lVar9 = *plVar3;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12a);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_057a12b8) {
          puVar5 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_02521394;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)FUN_0131971c(plVar3,*(long *)PTR_DAT_057a12b8,0);
LAB_02521394:
    uVar11 = (*(code *)*puVar5)(plVar3,puVar5[1]);
    if ((uVar11 & 1) == 0) {
      uVar6 = 0;
      iVar13 = 6;
      iVar2 = 6;
    }
    else {
      lVar8 = *(long *)(*(long *)(lVar8 + 0x38) + 0x30);
      if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
        lVar8 = FUN_0131942c(lVar8);
      }
      lVar9 = *plVar3;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12a);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == lVar8) {
            puVar5 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_0252141c;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar5 = (undefined8 *)FUN_0131971c(plVar3,lVar8,0);
LAB_0252141c:
      uVar6 = (*(code *)*puVar5)(plVar3,puVar5[1]);
      iVar13 = 8;
      iVar2 = 8;
    }
    if (plVar3 != (long *)0x0) {
      lVar8 = *plVar3;
      uVar11 = (ulong)*(ushort *)(lVar8 + 0x12a);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
            puVar5 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_02521484;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar5 = (undefined8 *)FUN_0131971c(plVar3,*(long *)puVar1,0);
LAB_02521484:
      (*(code *)*puVar5)(plVar3,puVar5[1]);
      iVar2 = iVar13;
    }
    if ((iVar2 != 6) && (iVar2 != 0)) {
      return uVar6;
    }
  }
  else {
    lVar9 = *(long *)(*(long *)(lVar8 + 0x38) + 8);
    if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
      lVar9 = FUN_0131942c(lVar9);
    }
    lVar10 = *plVar4;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar9) {
          puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_02521284;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)FUN_0131971c(plVar4,lVar9,0);
LAB_02521284:
    iVar2 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if (0 < iVar2) {
      lVar8 = **(long **)(lVar8 + 0x38);
      if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
        lVar8 = FUN_0131942c(lVar8);
      }
      lVar9 = *plVar4;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12a);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == lVar8) {
            puVar5 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_025212fc;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar5 = (undefined8 *)FUN_0131971c(plVar4,lVar8,0);
LAB_025212fc:
                    /* WARNING: Could not recover jumptable at 0x02521314. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (*(code *)*puVar5)(plVar4,0,puVar5[1]);
      return uVar6;
    }
  }
  return 0;
}

