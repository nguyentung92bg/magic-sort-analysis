/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Mosaic.EditorMosaicView$$OnSetTextFromEditor
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Mosaic_EditorMosaicView__OnSetTextFromEditor (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Mosaic_EditorMosaicView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Mosaic.EditorMosaicView$$OnSetTextFromEditor
   void 
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Mosaic_EditorMosaicView__OnSetTextFromEditor
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Mosaic_EditorMosaicView_o* __this, const
   MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Mosaic_EditorMosaicView__OnSetTextFromEditor_37b4c44
               (long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined4 uStack_14;
  
  uStack_14 = 0;
  if (*(long *)(param_1 + 0x30) != 0) {
    uVar1 = System_Int32__TryParse_26c9e7c
                      (*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x218),&uStack_14,0);
    if (((uVar1 & 1) != 0) && (lVar2 = *(long *)(param_1 + 0x60), lVar2 != 0)) {
      (**(code **)(lVar2 + 0x18))
                (*(undefined8 *)(lVar2 + 0x40),uStack_14,*(undefined8 *)(lVar2 + 0x28));
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

