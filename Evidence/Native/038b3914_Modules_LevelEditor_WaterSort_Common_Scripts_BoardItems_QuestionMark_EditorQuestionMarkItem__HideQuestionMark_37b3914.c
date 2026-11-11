/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.QuestionMark.EditorQuestionMarkItem$$HideQuestionMark
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_QuestionMark_EditorQuestionMarkItem__HideQuestionMark (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_QuestionMark_EditorQuestionMarkItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.QuestionMark.EditorQuestionMarkItem$$HideQuestionMark
   void 
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_QuestionMark_EditorQuestionMarkItem__HideQuestionMark
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_QuestionMark_EditorQuestionMarkItem_o*
   __this, const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_QuestionMark_EditorQuestionMarkItem__HideQuestionMark_37b3914
               (long param_1)

{
  long lVar1;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if (*(long *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  lVar1 = *(long *)(*(long *)(param_1 + 0x38) + 0x20);
  if (lVar1 != 0) {
    uStack_30 = 0x3f800000;
    uStack_2c = 0x3f800000;
    uStack_28 = 0x3f800000;
    uStack_24 = 0;
    if (pcRam0000000005c3a788 == (code *)0x0) {
      pcRam0000000005c3a788 = (code *)FUN_012d0d84(&UNK_043efbae,0);
    }
    (*pcRam0000000005c3a788)(lVar1,&uStack_30);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

