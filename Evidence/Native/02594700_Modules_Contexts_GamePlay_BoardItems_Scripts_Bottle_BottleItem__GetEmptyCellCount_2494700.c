/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$GetEmptyCellCount
int32_t Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetEmptyCellCount (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0251f338) */
/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$GetEmptyCellCount
   int32_t Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetEmptyCellCount
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, const MethodInfo*
   method); */

int Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetEmptyCellCount_2494700
              (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long *plVar12;
  int iVar13;
  long lVar14;
  undefined8 uVar15;
  
  puVar4 = PTR_DAT_05818d58;
  if ((bRam0000000005c2b2f2 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05771530);
    FUN_012d0dc8(PTR_DAT_057f6398);
    FUN_012d0dc8(PTR_DAT_057d14c8);
    FUN_012d0dc8(PTR_DAT_05818d58);
    bRam0000000005c2b2f2 = 1;
  }
  lVar6 = *(long *)puVar4;
  plVar12 = *(long **)(param_1 + 0x80);
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_0130472c();
    lVar6 = *(long *)puVar4;
  }
  puVar1 = PTR_DAT_057f6398;
                    /* catch() { ... } // from try @ 025947cc with catch @ 02594774
                       catch() { ... } // from try @ 02594800 with catch @ 02594774
                       catch() { ... } // from try @ 02594834 with catch @ 02594774
                       catch() { ... } // from try @ 025948b8 with catch @ 02594774 */
  lVar14 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
  if (lVar14 == 0) {
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_0130472c();
      lVar6 = *(long *)puVar4;
    }
                    /* try { // try from 0259479c to 026947bb has its CatchHandler @ 025947d0 */
    uVar15 = **(undefined8 **)(lVar6 + 0xb8);
    lVar14 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 02594800 to 0269481b has its CatchHandler @ 02594774 */
      FUN_012d0ef0();
    }
    System_Func_object__bool____ctor_338137c(lVar14,uVar15,*(undefined8 *)PTR_DAT_057d14c8,0);
                    /* try { // try from 025947c8 to 026947cb has its CatchHandler @ 025947cc */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 025947c8 with catch @ 025947cc
                       try { // try from 025947cc to 026947e7 has its CatchHandler @ 02594774 */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0259479c with catch @ 025947d0
                        */
    plVar7 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
    *plVar7 = lVar14;
    FUN_012d0d74(plVar7,lVar14);
  }
                    /* try { // try from 025947e8 to 026947ff has its CatchHandler @ 025948b0 */
  lVar6 = *(long *)PTR_DAT_05771530;
  if ((bRam0000000005c2af03 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057e6870);
    FUN_012d0dc8(PTR_DAT_058165e8);
    FUN_012d0dc8(PTR_DAT_057a12b8);
    bRam0000000005c2af03 = 1;
  }
  puVar4 = PTR_DAT_057ab1a0;
  if ((plVar12 == (long *)0x0) || (puVar4 = PTR_DAT_057c5520, lVar14 == 0)) {
    uVar15 = thunk_FUN_0136d790(puVar4);
    uVar15 = System_Linq_Error__ArgumentNull_3d79794(uVar15,0);
    uVar5 = thunk_FUN_0136d790(PTR_DAT_057e6870);
                    /* WARNING: Subroutine does not return */
    FUN_012d0eb8(uVar15,uVar5);
  }
  lVar8 = **(long **)(lVar6 + 0x38);
  if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
    lVar8 = FUN_0131942c(lVar8);
  }
  lVar9 = *plVar12;
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == lVar8) {
        puVar3 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_0251f140;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar3 = (undefined8 *)FUN_0131971c(plVar12,lVar8,0);
LAB_0251f140:
  puVar2 = PTR_DAT_058165e8;
  puVar1 = PTR_DAT_057e6870;
  puVar4 = PTR_DAT_057a12b8;
  plVar12 = (long *)(*(code *)*puVar3)(plVar12,puVar3[1]);
  iVar13 = 0;
  do {
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    lVar8 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12a);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar4) {
          puVar3 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0251f1c0;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar3 = (undefined8 *)FUN_0131971c(plVar12,*(long *)puVar4,0);
LAB_0251f1c0:
    uVar10 = (*(code *)*puVar3)(plVar12,puVar3[1]);
    if ((uVar10 & 1) == 0) {
      if (plVar12 == (long *)0x0) {
        return iVar13;
      }
      lVar6 = *plVar12;
      uVar10 = (ulong)*(ushort *)(lVar6 + 0x12a);
      if (uVar10 == 0) goto LAB_0251f2a8;
      piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      break;
    }
    lVar8 = *(long *)(*(long *)(lVar6 + 0x38) + 0x10);
    if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
      lVar8 = FUN_0131942c(lVar8);
    }
    lVar9 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar8) {
          puVar3 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0251f234;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar3 = (undefined8 *)FUN_0131971c(plVar12,lVar8,0);
LAB_0251f234:
    uVar15 = (*(code *)*puVar3)(plVar12,puVar3[1]);
    uVar10 = (**(code **)(*(long *)(*(long *)(lVar6 + 0x38) + 0x28) + 8))(lVar14,uVar15);
    if ((uVar10 & 1) != 0) {
      if (iVar13 == 0x7fffffff) {
        uVar15 = FUN_012d0f00();
                    /* WARNING: Subroutine does not return */
        FUN_012d0eb8(uVar15,*(undefined8 *)puVar1);
      }
      iVar13 = iVar13 + 1;
    }
  } while( true );
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
    if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
      puVar3 = (undefined8 *)(lVar6 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_0251f2c4;
    }
  }
LAB_0251f2a8:
  puVar3 = (undefined8 *)FUN_0131971c(plVar12,*(long *)puVar2,0);
LAB_0251f2c4:
  (*(code *)*puVar3)(plVar12,puVar3[1]);
  return iVar13;
}

