/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Tag.EditorTagItem$$Prepare
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Tag_EditorTagItem__Prepare (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Tag_EditorTagItem_o* __this, UnityEngine_Vector3_o localPosition, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem_o* belongingBottle, Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorAndColorId_o* colorAndColorId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Tag.EditorTagItem$$Prepare
   void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Tag_EditorTagItem__Prepare
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Tag_EditorTagItem_o* __this,
   UnityEngine_Vector3_o localPosition, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting,
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem_o*
   belongingBottle, Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorAndColorId_o*
   colorAndColorId, const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Tag_EditorTagItem__Prepare_37b29c4
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  
                    /* try { // try from 038b29c4 to 039b29cb has its CatchHandler @ 038b2e2c */
                    /* try { // try from 038b29cc to 039b29d3 has its CatchHandler @ 038b2dc0 */
                    /* try { // try from 038b29d4 to 039b29d7 has its CatchHandler @ 038ae800 */
                    /* try { // try from 038b29d8 to 039b29df has its CatchHandler @ 038b2e14 */
                    /* try { // try from 038b29e0 to 039b29e7 has its CatchHandler @ 038b2dbc */
  *(undefined8 *)(param_4 + 0x38) = param_7;
                    /* try { // try from 038b29e8 to 039b29ef has its CatchHandler @ 038b2db8 */
                    /* try { // try from 038b29f0 to 039b29f3 has its CatchHandler @ 038b2e4c */
                    /* try { // try from 038b29f4 to 039b2a1b has its CatchHandler @ 038b2e98 */
  FUN_012d0d74((undefined8 *)(param_4 + 0x38),param_7);
  if (param_8 != 0) {
    *(undefined4 *)(param_4 + 0x40) = *(undefined4 *)(param_8 + 0x70);
    if (*(long *)(param_4 + 0x30) != 0) {
                    /* try { // try from 038b2a1c to 039b2a23 has its CatchHandler @ 038b2e6c */
      Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Tag_EditorTagView__Prepare_37b2a50
                (*(long *)(param_4 + 0x30),param_8,param_5,param_6);
                    /* try { // try from 038b2a24 to 039b2a2b has its CatchHandler @ 038b2db4 */
                    /* try { // try from 038b2a2c to 039b2a33 has its CatchHandler @ 038b2db0 */
                    /* try { // try from 038b2a34 to 039b2a3b has its CatchHandler @ 038b2dac */
                    /* try { // try from 038b2a3c to 039b2a43 has its CatchHandler @ 038b2da8 */
                    /* try { // try from 038b2a44 to 039b2a4b has its CatchHandler @ 038b2e08 */
      if ((bRam0000000005c33e43 & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_0575a2d8);
        bRam0000000005c33e43 = 1;
      }
      if ((*(long *)(param_4 + 0x20) == 0) ||
         (plVar5 = *(long **)(*(long *)(param_4 + 0x20) + 0x18), plVar5 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      lVar2 = *plVar5;
      uVar3 = (ulong)*(ushort *)(lVar2 + 0x12a);
      if (uVar3 != 0) {
        piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_0575a2d8) {
            puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 5) * 0x10 + 0x138);
            goto LAB_038acb70;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar3 != 0);
      }
      puVar1 = (undefined8 *)FUN_0131971c(plVar5,*(long *)PTR_DAT_0575a2d8,5);
LAB_038acb70:
                    /* WARNING: Could not recover jumptable at 0x038acb94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar1)(param_1,param_2,param_3,plVar5,puVar1[1]);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

