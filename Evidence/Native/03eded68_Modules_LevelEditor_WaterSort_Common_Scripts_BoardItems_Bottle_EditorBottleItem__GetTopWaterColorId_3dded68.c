/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Bottle.EditorBottleItem$$GetTopWaterColorId
int32_t Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem__GetTopWaterColorId (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Bottle.EditorBottleItem$$GetTopWaterColorId
   int32_t
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem__GetTopWaterColorId
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem_o* __this, const
   MethodInfo* method); */

undefined4
Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem__GetTopWaterColorId_3dded68
          (void)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem__GetTopWater_3ddeda8
                    ();
  if ((lVar2 == 0) || (*(long *)(lVar2 + 0x40) == 0)) {
                    /* try { // try from 03eded84 to 03fded87 has its CatchHandler @ 03eded8c */
    uVar1 = 0xc;
  }
  else {
    uVar1 = *(undefined4 *)(*(long *)(lVar2 + 0x40) + 0x70);
  }
                    /* try { // try from 03eded88 to 03fdedab has its CatchHandler @ 03edecac */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 03eded84 with catch @ 03eded8c
                        */
  return uVar1;
}

