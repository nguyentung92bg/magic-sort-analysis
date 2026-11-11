/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Curtain.EditorCurtainView$$Initialize
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Curtain_EditorCurtainView__Initialize (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Curtain_EditorCurtainView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Curtain.EditorCurtainView$$Initialize
   void 
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Curtain_EditorCurtainView__Initialize
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Curtain_EditorCurtainView_o* __this,
   const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Curtain_EditorCurtainView__Initialize_3dddc64
               (long *param_1)

{
  long lVar1;
  
                    /* try { // try from 03eddc68 to 03fddc87 has its CatchHandler @ 03eddbc0 */
  if ((param_1[4] != 0) &&
     (lVar1 = UnityEngine_Component__get_gameObject_408b480(param_1[4],0), lVar1 != 0)) {
                    /* try { // try from 03eddc88 to 03fddc8b has its CatchHandler @ 03eddc90 */
    UnityEngine_GameObject__SetActive_408e318(lVar1,1,0);
                    /* try { // try from 03eddc8c to 03fddcaf has its CatchHandler @ 03eddbc0 */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 03eddc88 with catch @ 03eddc90
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 03eddc60 with catch @ 03eddc94
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 03eddc4c with catch @ 03eddc98
                        */
                    /* WARNING: Could not recover jumptable at 0x03eddc9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x1a8))(param_1,*(undefined8 *)(*param_1 + 0x1b0));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

