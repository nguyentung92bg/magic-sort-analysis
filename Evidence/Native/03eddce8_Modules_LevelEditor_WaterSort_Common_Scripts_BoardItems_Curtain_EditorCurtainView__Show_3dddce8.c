/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Curtain.EditorCurtainView$$Show
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Curtain_EditorCurtainView__Show (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Curtain_EditorCurtainView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Curtain.EditorCurtainView$$Show
   void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Curtain_EditorCurtainView__Show
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Curtain_EditorCurtainView_o* __this,
   const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Curtain_EditorCurtainView__Show_3dddce8
               (undefined8 param_1)

{
  long lVar1;
  
                    /* try { // try from 03eddcec to 03fddcf3 has its CatchHandler @ 03eddd08 */
  lVar1 = UnityEngine_Component__get_gameObject_408b480(param_1,0);
                    /* try { // try from 03eddcf4 to 03fddcff has its CatchHandler @ 03eddbc0 */
  if (lVar1 != 0) {
    if (pcRam0000000005c3a388 == (code *)0x0) {
      pcRam0000000005c3a388 = (code *)FUN_012d0d84(&UNK_043edeb4);
    }
                    /* WARNING: Could not recover jumptable at 0x0418e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000005c3a388)(lVar1,1);
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03eddcec with catch @ 03eddd08
                       catch(type#2 @ 00000000) { ... } // from try @ 03eddd00 with catch @ 03eddd08
                        */
  FUN_012d0ef0();
}

