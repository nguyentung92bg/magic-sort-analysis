/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.LevelModelService.LevelBatches$$get_AnyFailed
bool Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelBatches__get_AnyFailed (Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelBatches_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02517d30) */
/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.LevelModelService.LevelBatches$$get_AnyFailed
   bool Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelBatches__get_AnyFailed
   (Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelBatches_o* __this, const
   MethodInfo* method); */

byte Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelBatches__get_AnyFailed_1e8a504
               (long param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *plVar11;
  long lVar12;
  byte bVar13;
  undefined8 uVar14;
  int iVar15;
  int iVar16;
  
                    /* try { // try from 01f8a51c to 0208a57f has its CatchHandler @ 01f8a6d8 */
  if ((bRam0000000005c280f9 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05803fa8);
    FUN_012d0dc8(PTR_DAT_057e8748);
    FUN_012d0dc8(PTR_DAT_058166e8);
    FUN_012d0dc8(PTR_DAT_05768c38);
    bRam0000000005c280f9 = 1;
  }
  puVar5 = PTR_DAT_05768c38;
  plVar11 = *(long **)(param_1 + 0x10);
  if (plVar11 == (long *)0x0) {
    return 0;
  }
  lVar2 = *(long *)PTR_DAT_05768c38;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
    lVar2 = *(long *)puVar5;
  }
  puVar1 = PTR_DAT_057e8748;
  lVar12 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x18);
  if (lVar12 == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_0130472c();
      lVar2 = *(long *)puVar5;
    }
    uVar14 = **(undefined8 **)(lVar2 + 0xb8);
    lVar12 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 01f8a61c to 0208a623 has its CatchHandler @ 01f8a6d0 */
      FUN_012d0ef0();
    }
                    /* try { // try from 01f8a5bc to 0208a5c3 has its CatchHandler @ 01f8a6cc */
    System_Func_object__bool____ctor_338137c(lVar12,uVar14,*(undefined8 *)PTR_DAT_058166e8,0);
    plVar3 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x18);
    *plVar3 = lVar12;
    FUN_012d0d74(plVar3,lVar12);
  }
  lVar2 = *(long *)PTR_DAT_05803fa8;
  if ((bRam0000000005c2aefb & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_058165e8);
    FUN_012d0dc8(PTR_DAT_057a12b8);
    bRam0000000005c2aefb = 1;
  }
  puVar5 = PTR_DAT_057ab1a0;
  if ((plVar11 == (long *)0x0) || (puVar5 = PTR_DAT_057c5520, lVar12 == 0)) {
    uVar14 = thunk_FUN_0136d790(puVar5);
    uVar14 = System_Linq_Error__ArgumentNull_3d79794(uVar14,0);
    uVar6 = thunk_FUN_0136d790(PTR_DAT_057c6e98);
                    /* WARNING: Subroutine does not return */
    FUN_012d0eb8(uVar14,uVar6);
  }
  lVar7 = **(long **)(lVar2 + 0x38);
  if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
    lVar7 = FUN_0131942c(lVar7);
  }
  lVar8 = *plVar11;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == lVar7) {
        puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_02517b48;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar4 = (undefined8 *)FUN_0131971c(plVar11,lVar7,0);
LAB_02517b48:
  puVar1 = PTR_DAT_058165e8;
  plVar11 = (long *)(*(code *)*puVar4)(plVar11,puVar4[1]);
  puVar5 = PTR_DAT_057a12b8;
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  do {
    lVar7 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12a);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar5) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_02517bb8;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_0131971c(plVar11,*(long *)puVar5,0);
LAB_02517bb8:
    uVar9 = (*(code *)*puVar4)(plVar11,puVar4[1]);
    if ((uVar9 & 1) == 0) {
      bVar13 = 0;
      iVar16 = 0xb;
      iVar15 = 0xb;
      goto joined_r0x02517c74;
    }
    lVar7 = *(long *)(*(long *)(lVar2 + 0x38) + 0x10);
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_0131942c(lVar7);
    }
    lVar8 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar7) {
          puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_02517c2c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_0131971c(plVar11,lVar7,0);
LAB_02517c2c:
    uVar14 = (*(code *)*puVar4)(plVar11,puVar4[1]);
    uVar9 = (**(code **)(*(long *)(*(long *)(lVar2 + 0x38) + 0x28) + 8))(lVar12,uVar14);
  } while ((uVar9 & 1) == 0);
  bVar13 = 1;
  iVar16 = 10;
  iVar15 = 10;
joined_r0x02517c74:
  if (plVar11 != (long *)0x0) {
    lVar2 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar2 + 0x12a);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
          puVar4 = (undefined8 *)(lVar2 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_02517cc4;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_0131971c(plVar11,*(long *)puVar1,0);
LAB_02517cc4:
    (*(code *)*puVar4)(plVar11,puVar4[1]);
    iVar15 = iVar16;
  }
  return iVar15 == 10 & bVar13;
}

