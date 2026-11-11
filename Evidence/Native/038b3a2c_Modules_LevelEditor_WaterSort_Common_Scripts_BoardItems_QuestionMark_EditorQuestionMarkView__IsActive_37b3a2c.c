/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.QuestionMark.EditorQuestionMarkView$$IsActive
bool Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_QuestionMark_EditorQuestionMarkView__IsActive (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_QuestionMark_EditorQuestionMarkView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.QuestionMark.EditorQuestionMarkView$$IsActive
   bool 
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_QuestionMark_EditorQuestionMarkView__IsActive
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_QuestionMark_EditorQuestionMarkView_o*
   __this, const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_QuestionMark_EditorQuestionMarkView__IsActive_37b3a2c
               (long param_1)

{
  long lVar1;
  
  if ((*(long *)(param_1 + 0x20) != 0) &&
     (lVar1 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x20),0), lVar1 != 0
     )) {
    if (pcRam0000000005c3a390 == (code *)0x0) {
      pcRam0000000005c3a390 = (code *)FUN_012d0d84(&UNK_043edee6);
    }
                    /* WARNING: Could not recover jumptable at 0x0418e394. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000005c3a390)(lVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

