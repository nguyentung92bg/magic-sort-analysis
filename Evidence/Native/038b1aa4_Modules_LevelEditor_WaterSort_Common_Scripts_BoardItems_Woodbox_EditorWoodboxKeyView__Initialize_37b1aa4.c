/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Woodbox.EditorWoodboxKeyView$$Initialize
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Woodbox_EditorWoodboxKeyView__Initialize (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Woodbox_EditorWoodboxKeyView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Woodbox.EditorWoodboxKeyView$$Initialize
   void 
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Woodbox_EditorWoodboxKeyView__Initialize
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Woodbox_EditorWoodboxKeyView_o* __this,
   const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Woodbox_EditorWoodboxKeyView__Initialize_37b1aa4
               (long *param_1)

{
  long lVar1;
  long lVar2;
  
                    /* try { // try from 038b1ab0 to 039b1ab3 has its CatchHandler @ 038b1e54 */
  lVar1 = UnityEngine_Component__get_transform_408b444(param_1,0);
  if (cRam0000000005c230a9 == '\0') {
    FUN_012d0dc8(PTR_DAT_05805c10);
    cRam0000000005c230a9 = '\x01';
  }
                    /* try { // try from 038b1adc to 039b1ae3 has its CatchHandler @ 038b2f3c */
  if (lVar1 != 0) {
    lVar2 = *(long *)(*(long *)PTR_DAT_05805c10 + 0xb8);
    UnityEngine_Transform__set_localScale_40932d0
              (*(undefined4 *)(lVar2 + 0xc),*(undefined4 *)(lVar2 + 0x10),
               *(undefined4 *)(lVar2 + 0x14),lVar1,0);
                    /* try { // try from 038b1b08 to 039b1b0f has its CatchHandler @ 038b2f84 */
                    /* WARNING: Could not recover jumptable at 0x038b1b18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x1a8))(param_1,*(undefined8 *)(*param_1 + 0x1b0));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

