/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Bottle.EditorBottleView$$EnableBottleVisuals
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleView__EnableBottleVisuals (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleView_o* __this, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleByHeight_o* bottleByHeight, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Bottle.EditorBottleView$$EnableBottleVisuals
   void 
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleView__EnableBottleVisuals
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleView_o* __this,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleByHeight_o* bottleByHeight, const
   MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleView__EnableBottleVisuals_3ddffac
               (long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)(param_1 + 0x30);
  *plVar2 = param_2;
  FUN_012d0d74(plVar2);
  if ((*plVar2 != 0) && (lVar1 = *(long *)(*plVar2 + 0x18), lVar1 != 0)) {
    UnityEngine_GameObject__SetActive_408e318(lVar1,1,0);
    if (*plVar2 != 0) {
      *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(*plVar2 + 0x20);
      FUN_012d0d74((undefined8 *)(param_1 + 0x20));
      if (*(long *)(param_1 + 0x30) != 0) {
        *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x70);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

