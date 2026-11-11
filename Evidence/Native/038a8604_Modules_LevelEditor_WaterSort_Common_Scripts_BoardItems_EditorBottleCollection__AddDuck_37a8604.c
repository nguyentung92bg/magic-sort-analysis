/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.EditorBottleCollection$$AddDuck
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__AddDuck (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection_o* __this, UnityEngine_Vector2_o position, int32_t duckType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.EditorBottleCollection$$AddDuck
   void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__AddDuck
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection_o* __this,
   UnityEngine_Vector2_o position, int32_t duckType, const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__AddDuck_37a8604
               (undefined8 param_1,float param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  int *piVar5;
  long *plVar6;
  float fVar7;
  long lStack_38;
  
  if ((bRam0000000005c33e5c & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575a2d8);
    FUN_012d0dc8(PTR_DAT_057e76e8);
    bRam0000000005c33e5c = 1;
  }
  lStack_38 = 0;
  fVar7 = param_2;
  uVar2 = Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__GetIntersectedBottle_37b03d8
                    (param_1,param_3,&lStack_38);
  if ((uVar2 & 1) != 0) {
    if (((lStack_38 == 0) || (*(long *)(lStack_38 + 0x20) == 0)) ||
       (plVar6 = *(long **)(*(long *)(lStack_38 + 0x20) + 0x18), plVar6 == (long *)0x0)) {
LAB_038a8754:
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    lVar4 = *plVar6;
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar2 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_0575a2d8) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_038a86d8;
        }
        uVar2 = uVar2 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)FUN_0131971c(plVar6,*(long *)PTR_DAT_0575a2d8,0);
LAB_038a86d8:
    (*(code *)*puVar3)(plVar6,puVar3[1]);
    iVar1 = -0x80000000;
    if (param_2 - fVar7 != INFINITY) {
      iVar1 = (int)(param_2 - fVar7);
    }
    if (-1 < iVar1) {
      if ((lStack_38 == 0) || (*(long *)(lStack_38 + 0x60) == 0)) goto LAB_038a8754;
      if (iVar1 < *(int *)(*(long *)(lStack_38 + 0x60) + 0x18)) {
        Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem__TryRemoveOverItem_3ddf58c
                  (lStack_38,iVar1,0);
        Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__AddDuckItem_37af454
                  (param_3,lStack_38,iVar1,param_4);
      }
    }
  }
  return;
}

