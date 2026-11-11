/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Woodbox.EditorWoodboxView$$Recycle
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Woodbox_EditorWoodboxView__Recycle (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Woodbox_EditorWoodboxView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Woodbox.EditorWoodboxView$$Recycle
   void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Woodbox_EditorWoodboxView__Recycle
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Woodbox_EditorWoodboxView_o* __this,
   const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Woodbox_EditorWoodboxView__Recycle_37b1de8
               (undefined8 param_1)

{
  long lVar1;
  
  lVar1 = UnityEngine_Component__get_transform_408b444(param_1,0);
                    /* try { // try from 038b1df4 to 039b1df7 has its CatchHandler @ 038b1e28 */
  if (lVar1 != 0) {
    if (pcRam0000000005c3a5a0 == (code *)0x0) {
      pcRam0000000005c3a5a0 = (code *)FUN_012d0d84(&UNK_043eec3f,0,0);
    }
                    /* WARNING: Could not recover jumptable at 0x04193570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000005c3a5a0)(lVar1,0,1);
    return;
  }
                    /* catch() { ... } // from try @ 038b1ce8 with catch @ 038b1e08 */
                    /* catch() { ... } // from try @ 038b1cdc with catch @ 038b1e0c */
  return;
}

