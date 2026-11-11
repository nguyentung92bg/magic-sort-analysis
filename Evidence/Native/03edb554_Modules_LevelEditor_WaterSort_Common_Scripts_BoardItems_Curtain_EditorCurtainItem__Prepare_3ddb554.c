/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Curtain.EditorCurtainItem$$Prepare
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Curtain_EditorCurtainItem__Prepare (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Curtain_EditorCurtainItem_o* __this, UnityEngine_Vector3_o localPosition, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem_o* belongingBottle, Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorAndColorId_o* colorAndColorId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Curtain.EditorCurtainItem$$Prepare
   void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Curtain_EditorCurtainItem__Prepare
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Curtain_EditorCurtainItem_o* __this,
   UnityEngine_Vector3_o localPosition, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting,
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem_o*
   belongingBottle, Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorAndColorId_o*
   colorAndColorId, const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Curtain_EditorCurtainItem__Prepare_3ddb554
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  
                    /* try { // try from 03edb554 to 03fdb557 has its CatchHandler @ 03edb584 */
                    /* catch() { ... } // from try @ 03edb550 with catch @ 03edb558
                       try { // try from 03edb558 to 03fdb5af has its CatchHandler @ 03edb2d0 */
                    /* catch() { ... } // from try @ 03edb54c with catch @ 03edb55c */
                    /* catch() { ... } // from try @ 03edb548 with catch @ 03edb560 */
                    /* catch() { ... } // from try @ 03edb540 with catch @ 03edb564 */
                    /* catch() { ... } // from try @ 03edb3a4 with catch @ 03edb568 */
                    /* catch() { ... } // from try @ 03edb4f8 with catch @ 03edb56c */
                    /* catch() { ... } // from try @ 03edb4b8 with catch @ 03edb570 */
  *(undefined8 *)(param_4 + 0x38) = param_7;
                    /* catch() { ... } // from try @ 03edb50c with catch @ 03edb574 */
                    /* catch() { ... } // from try @ 03edb388 with catch @ 03edb578 */
                    /* catch() { ... } // from try @ 03edb46c with catch @ 03edb57c */
                    /* catch() { ... } // from try @ 03edb458 with catch @ 03edb580 */
                    /* catch() { ... } // from try @ 03edb440 with catch @ 03edb584
                       catch() { ... } // from try @ 03edb554 with catch @ 03edb584 */
                    /* catch() { ... } // from try @ 03edb3a8 with catch @ 03edb588 */
                    /* catch() { ... } // from try @ 03edb4b0 with catch @ 03edb58c */
  FUN_012d0d74((undefined8 *)(param_4 + 0x38),param_7);
                    /* catch() { ... } // from try @ 03edb49c with catch @ 03edb590
                       catch() { ... } // from try @ 03edb544 with catch @ 03edb590 */
                    /* catch() { ... } // from try @ 03edb488 with catch @ 03edb594 */
  plVar5 = (long *)(param_4 + 0x40);
  *plVar5 = param_8;
                    /* catch() { ... } // from try @ 03edb3f0 with catch @ 03edb598 */
  FUN_012d0d74(plVar5,param_8);
  lVar2 = *plVar5;
                    /* try { // try from 03edb5b0 to 03fdb5c7 has its CatchHandler @ 03edb628 */
  if ((lVar2 == 0) || (*(long *)(param_4 + 0x30) == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Curtain_EditorCurtainView__Prepare_3dddb30
            (*(undefined4 *)(lVar2 + 0x50),*(undefined4 *)(lVar2 + 0x54),
             *(undefined4 *)(lVar2 + 0x58),*(undefined4 *)(lVar2 + 0x5c),*(long *)(param_4 + 0x30),
             param_5,param_6);
                    /* try { // try from 03edb5c8 to 03fdb617 has its CatchHandler @ 03edb2d0 */
  if ((bRam0000000005c33e43 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575a2d8,0);
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

