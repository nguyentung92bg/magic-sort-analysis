/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Generator.EditorGeneratorItem$$GetColorsAmount
int32_t Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Generator_EditorGeneratorItem__GetColorsAmount (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Generator_EditorGeneratorItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Generator.EditorGeneratorItem$$GetColorsAmount
   int32_t
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Generator_EditorGeneratorItem__GetColorsAmount
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Generator_EditorGeneratorItem_o* __this,
   const MethodInfo* method); */

undefined4
Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Generator_EditorGeneratorItem__GetColorsAmount_3dd9e10
          (long param_1)

{
  undefined4 uVar1;
  
  if ((bRam0000000005c37e1e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057f55a8);
                    /* try { // try from 03ed9e34 to 03fd9e3f has its CatchHandler @ 03eda208 */
    bRam0000000005c37e1e = 1;
  }
  if (*(long *)(param_1 + 0x40) == 0) {
    uVar1 = 0;
  }
  else {
                    /* try { // try from 03ed9e44 to 03fd9e4b has its CatchHandler @ 03eda1fc */
    uVar1 = *(undefined4 *)(*(long *)(param_1 + 0x40) + 0x18);
  }
  return uVar1;
}

