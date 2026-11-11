/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.QuestionMark.QuestionMarkItem$$SetSortOrder
void Modules_Contexts_GamePlay_Board_Items_Scripts_QuestionMark_QuestionMarkItem__SetSortOrder (Modules_Contexts_GamePlay_Board_Items_Scripts_QuestionMark_QuestionMarkItem_o* __this, int32_t sortOrder, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.QuestionMark.QuestionMarkItem$$SetSortOrder
   void Modules_Contexts_GamePlay_Board_Items_Scripts_QuestionMark_QuestionMarkItem__SetSortOrder
   (Modules_Contexts_GamePlay_Board_Items_Scripts_QuestionMark_QuestionMarkItem_o* __this, int32_t
   sortOrder, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_QuestionMark_QuestionMarkItem__SetSortOrder_2745a1c
               (long param_1,undefined4 param_2)

{
  long lVar1;
  
  if ((*(long *)(param_1 + 0x50) != 0) &&
     (lVar1 = *(long *)(*(long *)(param_1 + 0x50) + 0x20), lVar1 != 0)) {
    if (pcRam0000000005c39c40 == (code *)0x0) {
      pcRam0000000005c39c40 = (code *)FUN_012d0d84(&UNK_043eafc0);
    }
                    /* WARNING: Could not recover jumptable at 0x0418273c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000005c39c40)(lVar1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

