/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Bottle.EditorBottleItem$$TryRemoveOverItem
bool Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem__TryRemoveOverItem (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem_o* __this, int32_t index, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Bottle.EditorBottleItem$$TryRemoveOverItem
   bool 
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem__TryRemoveOverItem
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem_o* __this,
   int32_t index, const MethodInfo* method); */

undefined8
Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem__TryRemoveOverItem_3ddf58c
          (undefined8 param_1,undefined4 param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  
  if ((bRam0000000005c37e56 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575a2d8);
    bRam0000000005c37e56 = 1;
  }
  lVar1 = Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem__GetCell_3ddf19c
                    (param_1,param_2);
  uVar4 = 0;
  if (lVar1 != 0) {
    plVar7 = (long *)(lVar1 + 0x30);
    uVar4 = 0;
    if (*plVar7 != 0) {
      plVar2 = (long *)Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorAItem__get_Root_37ac100
                                 (*plVar7,0);
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      lVar1 = *plVar2;
      uVar5 = (ulong)*(ushort *)(lVar1 + 0x12a);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_0575a2d8) {
            puVar3 = (undefined8 *)(lVar1 + (long)(*piVar6 + 10) * 0x10 + 0x138);
            goto LAB_03edf640;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_0131971c(plVar2,*(long *)PTR_DAT_0575a2d8,10);
LAB_03edf640:
      (*(code *)*puVar3)(plVar2,0,puVar3[1]);
      if (*plVar7 != 0) {
        Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorAItem__Recycle_37a3848
                  (*plVar7,0);
      }
      *plVar7 = 0;
      FUN_012d0d74(plVar7,0);
      uVar4 = 1;
    }
  }
  return uVar4;
}

