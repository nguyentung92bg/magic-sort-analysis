/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Woodbox.EditorWoodboxView$$Initialize
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Woodbox_EditorWoodboxView__Initialize (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Woodbox_EditorWoodboxView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Woodbox.EditorWoodboxView$$Initialize
   void 
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Woodbox_EditorWoodboxView__Initialize
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Woodbox_EditorWoodboxView_o* __this,
   const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Woodbox_EditorWoodboxView__Initialize_37b1c54
               (long *param_1)

{
  long lVar1;
  long lVar2;
  
                    /* try { // try from 038b1c64 to 039b1c7f has its CatchHandler @ 038b1e44 */
  lVar1 = UnityEngine_Component__get_transform_408b444(param_1,0);
  if (cRam0000000005c230a9 == '\0') {
    FUN_012d0dc8(PTR_DAT_05805c10);
                    /* try { // try from 038b1c84 to 039b1c87 has its CatchHandler @ 038b1e18 */
    cRam0000000005c230a9 = '\x01';
  }
                    /* try { // try from 038b1c8c to 039b1ca3 has its CatchHandler @ 038b1e2c */
  if (lVar1 != 0) {
    lVar2 = *(long *)(*(long *)PTR_DAT_05805c10 + 0xb8);
                    /* try { // try from 038b1ca8 to 039b1cc3 has its CatchHandler @ 038b1e40 */
    UnityEngine_Transform__set_localScale_40932d0
              (*(undefined4 *)(lVar2 + 0xc),*(undefined4 *)(lVar2 + 0x10),
               *(undefined4 *)(lVar2 + 0x14),lVar1,0);
                    /* WARNING: Could not recover jumptable at 0x038b1cc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* try { // try from 038b1cc8 to 039b1ccb has its CatchHandler @ 038b1e14 */
    (**(code **)(*param_1 + 0x1a8))(param_1,*(undefined8 *)(*param_1 + 0x1b0));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

