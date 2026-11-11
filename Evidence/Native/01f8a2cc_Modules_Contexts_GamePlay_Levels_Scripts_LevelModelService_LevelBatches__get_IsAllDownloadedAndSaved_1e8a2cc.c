/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.LevelModelService.LevelBatches$$get_IsAllDownloadedAndSaved
bool Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelBatches__get_IsAllDownloadedAndSaved (Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelBatches_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02516708) */
/* IL2CPP:
   Modules.Contexts.GamePlay.Levels.Scripts.LevelModelService.LevelBatches$$get_IsAllDownloadedAndSaved
   bool 
   Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelBatches__get_IsAllDownloadedAndSaved
   (Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelBatches_o* __this, const
   MethodInfo* method); */

bool Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelBatches__get_IsAllDownloadedAndSaved_1e8a2cc
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
  int iVar13;
  int iVar14;
  undefined8 uVar15;
  
  if ((bRam0000000005c280f7 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0578e4e8);
    FUN_012d0dc8(PTR_DAT_057e8748);
    FUN_012d0dc8(PTR_DAT_057af3b0);
    FUN_012d0dc8(PTR_DAT_05768c38);
    bRam0000000005c280f7 = 1;
  }
  puVar5 = PTR_DAT_05768c38;
  plVar11 = *(long **)(param_1 + 0x10);
  if (plVar11 == (long *)0x0) {
    return false;
  }
  lVar2 = *(long *)PTR_DAT_05768c38;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
    lVar2 = *(long *)puVar5;
  }
  puVar1 = PTR_DAT_057e8748;
  lVar12 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
  if (lVar12 == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_0130472c();
      lVar2 = *(long *)puVar5;
    }
    uVar15 = **(undefined8 **)(lVar2 + 0xb8);
    lVar12 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    System_Func_object__bool____ctor_338137c(lVar12,uVar15,*(undefined8 *)PTR_DAT_057af3b0,0);
    plVar3 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 8);
    *plVar3 = lVar12;
    FUN_012d0d74(plVar3,lVar12);
  }
                    /* try { // try from 01f8a3b8 to 0208a4db has its CatchHandler @ 01f8a3b8
                       catch() { ... } // from try @ 01f8a3b8 with catch @ 01f8a3b8
                       catch() { ... } // from try @ 01f8a624 with catch @ 01f8a3b8
                       catch() { ... } // from try @ 01f8a6b0 with catch @ 01f8a3b8
                       catch() { ... } // from try @ 01f8a6b8 with catch @ 01f8a3b8
                       catch() { ... } // from try @ 01f8a75c with catch @ 01f8a3b8 */
  lVar2 = *(long *)PTR_DAT_0578e4e8;
  if ((bRam0000000005c2aef4 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_058165e8);
    FUN_012d0dc8(PTR_DAT_057a12b8);
    bRam0000000005c2aef4 = 1;
  }
  puVar5 = PTR_DAT_057ab1a0;
  if ((plVar11 == (long *)0x0) || (puVar5 = PTR_DAT_057c5520, lVar12 == 0)) {
    uVar15 = thunk_FUN_0136d790(puVar5);
    uVar15 = System_Linq_Error__ArgumentNull_3d79794(uVar15,0);
    uVar6 = thunk_FUN_0136d790(PTR_DAT_05801820);
                    /* WARNING: Subroutine does not return */
    FUN_012d0eb8(uVar15,uVar6);
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
        goto LAB_0251652c;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar4 = (undefined8 *)FUN_0131971c(plVar11,lVar7,0);
LAB_0251652c:
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
          goto LAB_0251659c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_0131971c(plVar11,*(long *)puVar5,0);
LAB_0251659c:
    uVar9 = (*(code *)*puVar4)(plVar11,puVar4[1]);
    if ((uVar9 & 1) == 0) {
      iVar14 = 0xb;
      iVar13 = 0xb;
      goto joined_r0x02516650;
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
          goto LAB_02516610;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_0131971c(plVar11,lVar7,0);
LAB_02516610:
    uVar15 = (*(code *)*puVar4)(plVar11,puVar4[1]);
    uVar9 = (**(code **)(*(long *)(*(long *)(lVar2 + 0x38) + 0x28) + 8))(lVar12,uVar15);
  } while ((uVar9 & 1) != 0);
  iVar14 = 10;
  iVar13 = 10;
joined_r0x02516650:
  if (plVar11 != (long *)0x0) {
    lVar2 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar2 + 0x12a);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
          puVar4 = (undefined8 *)(lVar2 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_025166a0;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_0131971c(plVar11,*(long *)puVar1,0);
LAB_025166a0:
    (*(code *)*puVar4)(plVar11,puVar4[1]);
    iVar13 = iVar14;
  }
  return iVar13 != 10;
}

