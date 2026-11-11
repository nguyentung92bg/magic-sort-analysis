/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Bottle.EditorBottleItem$$TryRemoveFromCell
bool Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem__TryRemoveFromCell (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem_o* __this, int32_t index, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Bottle.EditorBottleItem$$TryRemoveFromCell
   bool 
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem__TryRemoveFromCell
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem_o* __this,
   int32_t index, const MethodInfo* method); */

undefined8
Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem__TryRemoveFromCell_3ddf540
          (undefined8 param_1,undefined4 param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  int *piVar6;
  long *plVar7;
  
  uVar1 = Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem__TryRemoveOverItem_3ddf58c
                    ();
  if (((uVar1 & 1) != 0) ||
     (uVar1 = Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem__TryRemoveQuestionMark_3ddf684
                        (param_1,param_2), (uVar1 & 1) != 0)) {
    return 1;
  }
  if ((bRam0000000005c37e58 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575a2d8);
    bRam0000000005c37e58 = 1;
  }
  lVar2 = Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem__GetCell_3ddf19c
                    (param_1,param_2);
  uVar5 = 0;
  if (lVar2 != 0) {
    plVar7 = (long *)(lVar2 + 0x20);
    uVar5 = 0;
    if (*plVar7 != 0) {
      plVar3 = (long *)Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorAItem__get_Root_37ac100
                                 (*plVar7,0);
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      lVar2 = *plVar3;
      uVar1 = (ulong)*(ushort *)(lVar2 + 0x12a);
      if (uVar1 != 0) {
        piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_0575a2d8) {
            puVar4 = (undefined8 *)(lVar2 + (long)(*piVar6 + 10) * 0x10 + 0x138);
            goto LAB_03edf830;
          }
          uVar1 = uVar1 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar1 != 0);
      }
      puVar4 = (undefined8 *)FUN_0131971c(plVar3,*(long *)PTR_DAT_0575a2d8,10);
LAB_03edf830:
      (*(code *)*puVar4)(plVar3,0,puVar4[1]);
      if (*plVar7 != 0) {
        Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorAItem__Recycle_37a3848
                  (*plVar7,0);
      }
      *plVar7 = 0;
      FUN_012d0d74(plVar7,0);
      uVar5 = 1;
    }
  }
  return uVar5;
}

