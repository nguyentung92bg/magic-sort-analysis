/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Bottle.EditorBottleView$$Recycle
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleView__Recycle (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Bottle.EditorBottleView$$Recycle
   void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleView__Recycle
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleView_o* __this, const
   MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleView__Recycle_3ddff4c
               (long param_1)

{
  long lVar1;
  long lVar2;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  lVar2 = *(long *)(param_1 + 0x18);
  if (cRam0000000005c230a9 == '\0') {
    FUN_012d0dc8(PTR_DAT_05805c10);
    cRam0000000005c230a9 = '\x01';
  }
  if (lVar2 != 0) {
    lVar1 = *(long *)(*(long *)PTR_DAT_05805c10 + 0xb8);
    uStack_30 = *(undefined4 *)(lVar1 + 0xc);
    uStack_2c = *(undefined4 *)(lVar1 + 0x10);
    uStack_28 = *(undefined4 *)(lVar1 + 0x14);
    lVar2 = *(long *)(lVar2 + 0x10);
    if (lVar2 != 0) {
      if (pcRam0000000005c3a650 == (code *)0x0) {
        pcRam0000000005c3a650 = (code *)FUN_012d0d84(&UNK_043ef104,0);
      }
      (*pcRam0000000005c3a650)(lVar2,&uStack_30);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0(0,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

