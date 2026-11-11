/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$GetHighestPriorityBlocker
Modules_Infrastructure_Common_Scripts_Component_ABlockerItem_o* Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetHighestPriorityBlocker (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02521854) */
/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$GetHighestPriorityBlocker
   Modules_Infrastructure_Common_Scripts_Component_ABlockerItem_o*
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetHighestPriorityBlocker
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, const MethodInfo*
   method); */

long Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetHighestPriorityBlocker_249b04c
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  undefined8 uVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  undefined8 uVar16;
  
  puVar4 = PTR_DAT_05818d58;
  if ((bRam0000000005c2b303 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0577ed88);
    FUN_012d0dc8(PTR_DAT_05784a78);
    FUN_012d0dc8(PTR_DAT_05772558);
    FUN_012d0dc8(PTR_DAT_057ae230);
    FUN_012d0dc8(PTR_DAT_05818d58);
    bRam0000000005c2b303 = 1;
  }
  lVar5 = *(long *)puVar4;
  uVar12 = *(undefined8 *)(param_1 + 0x88);
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_0130472c();
    lVar5 = *(long *)puVar4;
  }
  puVar2 = PTR_DAT_05784a78;
  lVar15 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x30);
  if (lVar15 == 0) {
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_0130472c();
      lVar5 = *(long *)puVar4;
    }
    uVar16 = **(undefined8 **)(lVar5 + 0xb8);
    lVar15 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
    if (lVar15 == 0) goto LAB_0259b200;
    System_Func_object__bool____ctor_338137c(lVar15,uVar16,*(undefined8 *)PTR_DAT_05772558,0);
    plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x30);
    *plVar6 = lVar15;
    FUN_012d0d74(plVar6,lVar15);
  }
  puVar1 = PTR_DAT_0577ed88;
  lVar5 = System_Linq_Enumerable__FirstOrDefault_object__24215ac
                    (uVar12,lVar15,*(undefined8 *)PTR_DAT_0577ed88);
  if (lVar5 != 0) {
    return lVar5;
  }
  lVar5 = *(long *)puVar4;
  plVar6 = *(long **)(param_1 + 0x88);
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_0130472c();
    lVar5 = *(long *)puVar4;
  }
  lVar15 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x38);
  if (lVar15 == 0) {
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_0130472c();
      lVar5 = *(long *)puVar4;
    }
    uVar12 = **(undefined8 **)(lVar5 + 0xb8);
    lVar15 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
    if (lVar15 == 0) {
LAB_0259b200:
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    System_Func_object__bool____ctor_338137c(lVar15,uVar12,*(undefined8 *)PTR_DAT_057ae230,0);
    plVar7 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x38);
    *plVar7 = lVar15;
    FUN_012d0d74(plVar7,lVar15);
  }
  lVar5 = *(long *)puVar1;
  if ((bRam0000000005c2af0b & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_058165e8);
    FUN_012d0dc8(PTR_DAT_057a12b8);
    bRam0000000005c2af0b = 1;
  }
  puVar4 = PTR_DAT_057ab1a0;
  if ((plVar6 == (long *)0x0) || (puVar4 = PTR_DAT_057c5520, lVar15 == 0)) {
    uVar12 = thunk_FUN_0136d790(puVar4);
    uVar12 = System_Linq_Error__ArgumentNull_3d79794(uVar12,0);
    uVar16 = thunk_FUN_0136d790(PTR_DAT_057b5490);
                    /* WARNING: Subroutine does not return */
    FUN_012d0eb8(uVar12,uVar16);
  }
  lVar8 = **(long **)(lVar5 + 0x38);
  if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
    lVar8 = FUN_0131942c(lVar8);
  }
  lVar9 = *plVar6;
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == lVar8) {
        puVar3 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_02521660;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar3 = (undefined8 *)FUN_0131971c(plVar6,lVar8,0);
LAB_02521660:
  puVar2 = PTR_DAT_058165e8;
  plVar6 = (long *)(*(code *)*puVar3)(plVar6,puVar3[1]);
  puVar4 = PTR_DAT_057a12b8;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  do {
    lVar8 = *plVar6;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12a);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar4) {
          puVar3 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_025216d0;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar3 = (undefined8 *)FUN_0131971c(plVar6,*(long *)puVar4,0);
LAB_025216d0:
    uVar10 = (*(code *)*puVar3)(plVar6,puVar3[1]);
    if ((uVar10 & 1) == 0) {
      lVar8 = 0;
      iVar14 = 0xb;
      iVar13 = 0xb;
      goto joined_r0x0252178c;
    }
    lVar8 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
    if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
      lVar8 = FUN_0131942c(lVar8);
    }
    lVar9 = *plVar6;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar8) {
          puVar3 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_02521744;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar3 = (undefined8 *)FUN_0131971c(plVar6,lVar8,0);
LAB_02521744:
    lVar8 = (*(code *)*puVar3)(plVar6,puVar3[1]);
    uVar10 = (**(code **)(*(long *)(*(long *)(lVar5 + 0x38) + 0x28) + 8))(lVar15,lVar8);
  } while ((uVar10 & 1) == 0);
  iVar14 = 10;
  iVar13 = 10;
joined_r0x0252178c:
  if (plVar6 != (long *)0x0) {
    lVar5 = *plVar6;
    uVar10 = (ulong)*(ushort *)(lVar5 + 0x12a);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_025217dc;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar3 = (undefined8 *)FUN_0131971c(plVar6,*(long *)puVar2,0);
LAB_025217dc:
    (*(code *)*puVar3)(plVar6,puVar3[1]);
    iVar13 = iVar14;
  }
  if ((iVar13 == 0xb) || (iVar13 == 0)) {
    lVar8 = 0;
  }
  return lVar8;
}

