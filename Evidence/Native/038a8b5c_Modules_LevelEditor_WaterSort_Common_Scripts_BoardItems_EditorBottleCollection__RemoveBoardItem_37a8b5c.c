/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.EditorBottleCollection$$RemoveBoardItem
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__RemoveBoardItem (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection_o* __this, UnityEngine_Vector2_o position, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.EditorBottleCollection$$RemoveBoardItem
   void 
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__RemoveBoardItem
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection_o* __this,
   UnityEngine_Vector2_o position, const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__RemoveBoardItem_37a8b5c
               (undefined8 param_1,float param_2,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  int *piVar5;
  long *plVar6;
  long lVar7;
  float fVar8;
  long lStack_18;
  
  if ((bRam0000000005c33e54 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575a2d8);
    FUN_012d0dc8(PTR_DAT_057e76e8);
    bRam0000000005c33e54 = 1;
  }
  lStack_18 = 0;
  fVar8 = param_2;
  uVar2 = Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__GetIntersectedBottle_37b03d8
                    (param_1,param_3,&lStack_18);
  if ((uVar2 & 1) != 0) {
    if ((lStack_18 == 0) ||
       (uVar2 = Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem__HasAnyBlocker_3ddf448
                          (lStack_18,0), lStack_18 == 0)) {
LAB_038a8cac:
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    if ((uVar2 & 1) == 0) {
      if ((*(long *)(lStack_18 + 0x20) == 0) ||
         (plVar6 = *(long **)(*(long *)(lStack_18 + 0x20) + 0x18), plVar6 == (long *)0x0))
      goto LAB_038a8cac;
      lVar4 = *plVar6;
      lVar7 = *(long *)(lStack_18 + 0x60);
      uVar2 = (ulong)*(ushort *)(lVar4 + 0x12a);
      if (uVar2 != 0) {
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_0575a2d8) {
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_038a8c50;
          }
          uVar2 = uVar2 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar2 != 0);
      }
      puVar3 = (undefined8 *)FUN_0131971c(plVar6,*(long *)PTR_DAT_0575a2d8,0);
LAB_038a8c50:
      (*(code *)*puVar3)(plVar6,puVar3[1]);
      iVar1 = -0x80000000;
      if (param_2 - fVar8 != INFINITY) {
        iVar1 = (int)(param_2 - fVar8);
      }
      if (-1 < iVar1) {
        if (lVar7 == 0) goto LAB_038a8cac;
        if (iVar1 < *(int *)(lVar7 + 0x18)) {
          if (lStack_18 == 0) goto LAB_038a8cac;
          Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem__TryRemoveFromCell_3ddf540
                    (lStack_18,iVar1,0);
        }
      }
    }
    else {
      Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem__RemoveBlocker_3ddf8f0
                (lStack_18,0);
    }
  }
  return;
}

