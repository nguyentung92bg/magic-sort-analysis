/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Water.EditorWaterView$$SetColor
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Water_EditorWaterView__SetColor (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Water_EditorWaterView_o* __this, Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorAndColorId_o* colorAndColorId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Water.EditorWaterView$$SetColor
   void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Water_EditorWaterView__SetColor
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Water_EditorWaterView_o* __this,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorAndColorId_o* colorAndColorId,
   const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Water_EditorWaterView__SetColor_37b2424
               (long param_1,long param_2)

{
  long lVar1;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
                    /* try { // try from 038b2430 to 039b243f has its CatchHandler @ 038b30f4 */
  if ((param_2 != 0) && (*(long *)(param_1 + 0x28) != 0)) {
                    /* try { // try from 038b2440 to 039b2527 has its CatchHandler @ 038ae800 */
    UnityEngine_SpriteRenderer__set_color_4095de0
              (*(undefined4 *)(param_2 + 0x50),*(undefined4 *)(param_2 + 0x54),
               *(undefined4 *)(param_2 + 0x58),*(undefined4 *)(param_2 + 0x5c),
               *(long *)(param_1 + 0x28),0);
    lVar1 = *(long *)(param_1 + 0x30);
    if (lVar1 != 0) {
      uStack_28 = *(undefined4 *)(param_2 + 0x68);
      uStack_24 = *(undefined4 *)(param_2 + 0x6c);
      uStack_30 = *(undefined4 *)(param_2 + 0x60);
      uStack_2c = *(undefined4 *)(param_2 + 100);
      if (pcRam0000000005c3a788 == (code *)0x0) {
        pcRam0000000005c3a788 = (code *)FUN_012d0d84(&UNK_043efbae,0);
      }
      (*pcRam0000000005c3a788)(lVar1,&uStack_30);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

