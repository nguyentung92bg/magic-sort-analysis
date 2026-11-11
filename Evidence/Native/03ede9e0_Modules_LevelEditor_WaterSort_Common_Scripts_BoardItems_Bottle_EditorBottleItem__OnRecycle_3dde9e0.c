/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Bottle.EditorBottleItem$$OnRecycle
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem__OnRecycle (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Bottle.EditorBottleItem$$OnRecycle
   void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem__OnRecycle
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem_o* __this, const
   MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem__OnRecycle_3dde9e0
               (long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  float *pfVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  int iVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  
  if ((bRam0000000005c37e49 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057b9b18);
    FUN_012d0dc8(PTR_DAT_057edeb0);
    FUN_012d0dc8(PTR_DAT_057e76e8);
    FUN_012d0dc8(PTR_DAT_057b1718);
    FUN_012d0dc8(PTR_DAT_057f6ca8);
    FUN_012d0dc8(PTR_DAT_057f8600);
    bRam0000000005c37e49 = 1;
  }
  puVar3 = PTR_DAT_057f8600;
  puVar2 = PTR_DAT_057f6ca8;
  lVar5 = *(long *)(param_1 + 0x60);
  if (lVar5 != 0) {
    iVar10 = 0;
    do {
      iVar1 = *(int *)(lVar5 + 0x18);
      if (iVar1 <= iVar10) {
        *(undefined4 *)(lVar5 + 0x18) = 0;
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
        if (0 < iVar1) {
          System_Array__Clear_26a6bec(*(undefined8 *)(lVar5 + 0x10),0,iVar1,0);
        }
        lVar5 = *(long *)(param_1 + 0x68);
        if (lVar5 != 0) {
          iVar10 = 0;
          goto LAB_03edeacc;
        }
        break;
      }
      lVar5 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (lVar5,iVar10,*(undefined8 *)puVar2);
      if (lVar5 == 0) break;
      Modules_LevelEditor_WaterSort_Common_Scripts_EditorCell__Recycle_37a37d8(lVar5,0);
      lVar5 = *(long *)(param_1 + 0x60);
      iVar10 = iVar10 + 1;
    } while (lVar5 != 0);
  }
  goto LAB_03edec28;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
LAB_038ae37c:
    if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0575a2d8) {
      puVar4 = (undefined8 *)(lVar5 + (long)(*piVar8 + 9) * 0x10 + 0x138);
      goto LAB_038ae3b4;
    }
  }
LAB_038ae394:
  puVar4 = (undefined8 *)FUN_0131971c(plVar9,*(long *)PTR_DAT_0575a2d8,9);
LAB_038ae3b4:
                    /* WARNING: Could not recover jumptable at 0x038ae3dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar4)(uVar11,uVar12,uVar13,uVar14,plVar9,puVar4[1]);
  return;
  while( true ) {
    lVar5 = System_Collections_Generic_List_object___get_Item_21fc76c
                      (lVar5,iVar10,*(undefined8 *)puVar3);
    if (lVar5 == 0) break;
    Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorAItem__Recycle_37a3848(lVar5,0);
    lVar5 = *(long *)(param_1 + 0x68);
    iVar10 = iVar10 + 1;
    if (lVar5 == 0) break;
LAB_03edeacc:
    iVar1 = *(int *)(lVar5 + 0x18);
    if (iVar1 <= iVar10) {
      *(undefined4 *)(lVar5 + 0x18) = 0;
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (0 < iVar1) {
        System_Array__Clear_26a6bec(*(undefined8 *)(lVar5 + 0x10),0,iVar1,0);
      }
      lVar5 = *(long *)(param_1 + 0x70);
      if (lVar5 != 0) {
        iVar10 = *(int *)(lVar5 + 0x18);
        *(undefined4 *)(lVar5 + 0x18) = 0;
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
        if (0 < iVar10) {
          System_Array__Clear_26a6bec(*(undefined8 *)(lVar5 + 0x10),0,iVar10,0);
        }
        *(undefined8 *)(param_1 + 0x38) = 0;
        FUN_012d0d74((undefined8 *)(param_1 + 0x38),0);
        *(undefined8 *)(param_1 + 0x40) = 0;
        FUN_012d0d74((undefined8 *)(param_1 + 0x40),0);
        Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorAItem__SetParent_37ac850
                  (param_1,0,0);
        if (cRam0000000005c230a9 == '\0') {
          FUN_012d0dc8(PTR_DAT_05805c10);
          cRam0000000005c230a9 = '\x01';
        }
        puVar2 = PTR_DAT_05805c10;
        lVar5 = *(long *)(*(long *)PTR_DAT_05805c10 + 0xb8);
        Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorAItem__SetLocalScale_37ac904
                  (*(undefined4 *)(lVar5 + 0xc),*(undefined4 *)(lVar5 + 0x10),
                   *(undefined4 *)(lVar5 + 0x14),param_1,0);
        if (cRam0000000005c230aa == '\0') {
          FUN_012d0dc8(PTR_DAT_05805c10);
          cRam0000000005c230aa = '\x01';
        }
        pfVar6 = *(float **)(*(long *)puVar2 + 0xb8);
        uVar14 = (ulong)(uint)pfVar6[2];
        uVar12 = (ulong)(uint)(pfVar6[1] * _UNK_04339bec);
        uVar13 = (ulong)(uint)(pfVar6[2] * _UNK_04339bec);
        uVar11 = UnityEngine_Quaternion__Internal_FromEulerRad_3831834
                           (*pfVar6 * _UNK_04339bec,uVar12,uVar13,0);
        if ((bRam0000000005c33e46 & 1) == 0) {
          FUN_012d0dc8(PTR_DAT_0575a2d8,0);
          bRam0000000005c33e46 = 1;
        }
        if ((*(long *)(param_1 + 0x20) == 0) ||
           (plVar9 = *(long **)(*(long *)(param_1 + 0x20) + 0x18), plVar9 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        lVar5 = *plVar9;
        uVar7 = (ulong)*(ushort *)(lVar5 + 0x12a);
        if (uVar7 == 0) goto LAB_038ae394;
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        goto LAB_038ae37c;
      }
      break;
    }
  }
LAB_03edec28:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

