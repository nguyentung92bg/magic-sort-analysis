/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Bottle.EditorBottleItem$$UpdateBounds
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem__UpdateBounds (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Bottle.EditorBottleItem$$UpdateBounds
   void 
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem__UpdateBounds
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem_o* __this, const
   MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem__UpdateBounds_3dde690
               (undefined1 param_1 [16],float param_2,long param_3)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000005c37e52 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575a2d8);
    FUN_012d0dc8(PTR_DAT_057b1718);
    FUN_012d0dc8(PTR_DAT_057f8600);
    bRam0000000005c37e52 = 1;
  }
  plVar2 = (long *)Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorAItem__get_Root_37ac100
                             (param_3,0);
  puVar1 = PTR_DAT_0575a2d8;
  if (plVar2 == (long *)0x0) goto LAB_03ede994;
  lVar4 = *plVar2;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_0575a2d8) {
        puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 0xc) * 0x10 + 0x138);
        goto LAB_03ede748;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined8 *)FUN_0131971c(plVar2,*(long *)PTR_DAT_0575a2d8,0xc);
LAB_03ede748:
  lVar4 = (*(code *)*puVar3)(plVar2,puVar3[1]);
  if (lVar4 == 0) {
    if (cRam0000000005c230aa == '\0') {
      FUN_012d0dc8(PTR_DAT_05805c10);
      cRam0000000005c230aa = '\x01';
    }
    fVar8 = **(float **)(*(long *)PTR_DAT_05805c10 + 0xb8);
    fVar11 = (*(float **)(*(long *)PTR_DAT_05805c10 + 0xb8))[1];
  }
  else {
    plVar2 = (long *)Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorAItem__get_Root_37ac100
                               (param_3,0);
    if (plVar2 == (long *)0x0) goto LAB_03ede994;
    lVar4 = *plVar2;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 0xc) * 0x10 + 0x138);
          goto LAB_03ede7f4;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_0131971c(plVar2,*(long *)puVar1,0xc);
LAB_03ede7f4:
    plVar2 = (long *)(*(code *)*puVar3)(plVar2,puVar3[1]);
    if (plVar2 == (long *)0x0) goto LAB_03ede994;
    lVar4 = *plVar2;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_03ede854;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_0131971c(plVar2,*(long *)puVar1,0);
LAB_03ede854:
    fVar8 = (float)(*(code *)*puVar3)(plVar2,puVar3[1]);
    fVar11 = param_2;
  }
  plVar2 = (long *)Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorAItem__get_Root_37ac100
                             (param_3,0);
  if (plVar2 != (long *)0x0) {
    lVar4 = *plVar2;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 4) * 0x10 + 0x138);
          goto LAB_03ede8cc;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_0131971c(plVar2,*(long *)puVar1,4);
LAB_03ede8cc:
    fVar9 = (float)(*(code *)*puVar3)(plVar2,puVar3[1]);
    lVar4 = *(long *)(param_3 + 0x30);
    if (lVar4 != 0) {
      fVar10 = *(float *)(lVar4 + 0x3c) + 2.0;
      uStack_40 = 0;
      uStack_38 = 0;
      uStack_48 = 0;
      UnityEngine_Bounds___ctor_38373f8
                (fVar8 + fVar9,
                 *(float *)(lVar4 + 0x38) +
                 fVar11 + param_2 + (float)*(int *)(param_3 + 0x28) * 0.5 * 0.5 + fVar10 * 0.5,0,
                 0x40000000,fVar10 + (float)*(int *)(param_3 + 0x28),0,&uStack_48,0);
      lVar4 = *(long *)(param_3 + 0x68);
      *(undefined8 *)(param_3 + 0x50) = uStack_40;
      *(undefined8 *)(param_3 + 0x48) = uStack_48;
      *(undefined8 *)(param_3 + 0x58) = uStack_38;
      puVar1 = PTR_DAT_057f8600;
      if (lVar4 != 0) {
        iVar7 = 0;
        do {
          if (*(int *)(lVar4 + 0x18) <= iVar7) {
            return;
          }
          plVar2 = (long *)System_Collections_Generic_List_object___get_Item_21fc76c
                                     (lVar4,iVar7,*(undefined8 *)puVar1);
          if (plVar2 == (long *)0x0) break;
          (**(code **)(*plVar2 + 0x218))(plVar2,*(undefined8 *)(*plVar2 + 0x220));
          lVar4 = *(long *)(param_3 + 0x68);
          iVar7 = iVar7 + 1;
        } while (lVar4 != 0);
      }
    }
  }
LAB_03ede994:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

