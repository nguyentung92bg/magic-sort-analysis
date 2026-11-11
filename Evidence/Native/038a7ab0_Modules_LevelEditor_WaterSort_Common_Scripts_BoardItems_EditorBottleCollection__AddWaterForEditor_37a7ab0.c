/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.EditorBottleCollection$$AddWaterForEditor
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__AddWaterForEditor (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection_o* __this, UnityEngine_Vector3_o position, Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorAndColorId_o* colorAndColorId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.EditorBottleCollection$$AddWaterForEditor
   void 
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__AddWaterForEditor
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection_o* __this,
   UnityEngine_Vector3_o position,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorAndColorId_o* colorAndColorId,
   const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__AddWaterForEditor_37a7ab0
               (undefined8 param_1,float param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  int *piVar5;
  long *plVar6;
  float fVar7;
  long lStack_38;
  
  if ((bRam0000000005c33e56 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575a2d8);
    FUN_012d0dc8(PTR_DAT_057e76e8);
    bRam0000000005c33e56 = 1;
  }
  lStack_38 = 0;
  fVar7 = param_2;
  uVar2 = Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__GetIntersectedBottle_37b03d8
                    (param_1,param_3,&lStack_38);
  if ((uVar2 & 1) == 0) {
    return;
  }
  if (lStack_38 != 0) {
    uVar2 = Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem__HasBlocker_3ddf498
                      (lStack_38,0x1b,0);
    if ((uVar2 & 1) == 0) {
      if (((lStack_38 != 0) && (*(long *)(lStack_38 + 0x20) != 0)) &&
         (plVar6 = *(long **)(*(long *)(lStack_38 + 0x20) + 0x18), plVar6 != (long *)0x0)) {
        lVar3 = *plVar6;
        uVar2 = (ulong)*(ushort *)(lVar3 + 0x12a);
        if (uVar2 != 0) {
          piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_0575a2d8) {
              puVar4 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
              goto LAB_038a7bb4;
            }
            uVar2 = uVar2 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar2 != 0);
        }
        puVar4 = (undefined8 *)FUN_0131971c(plVar6,*(long *)PTR_DAT_0575a2d8,0);
LAB_038a7bb4:
        (*(code *)*puVar4)(plVar6,puVar4[1]);
        iVar1 = -0x80000000;
        if (param_2 - fVar7 != INFINITY) {
          iVar1 = (int)(param_2 - fVar7);
        }
        if (-1 < iVar1) {
          if ((lStack_38 == 0) || (*(long *)(lStack_38 + 0x60) == 0)) goto LAB_038a7c38;
          if (iVar1 < *(int *)(*(long *)(lStack_38 + 0x60) + 0x18)) {
            Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem__TryRemoveWaterItem_3ddf77c
                      (lStack_38,iVar1,0);
            if (param_4 == 0) goto LAB_038a7c38;
            Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__AddWaterItem_37a7738
                      (param_3,lStack_38,1,iVar1,*(undefined4 *)(param_4 + 0x70));
          }
        }
        return;
      }
    }
    else {
      lVar3 = Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__GetMosaicOnBottle_37b0528
                        ();
      if ((param_4 != 0) && (lVar3 != 0)) {
        Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Mosaic_EditorMosaicItem__AssignColor_37b06d8
                  (lVar3,*(undefined4 *)(param_4 + 0x70));
        return;
      }
    }
  }
LAB_038a7c38:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

