/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.QuestionMark.QuestionMarkView$$<PlayCompleteAnimation>b__8_0
void Modules_Contexts_GamePlay_Board_Items_Scripts_QuestionMark_QuestionMarkView___PlayCompleteAnimation_b__8_0 (Modules_Contexts_GamePlay_Board_Items_Scripts_QuestionMark_QuestionMarkView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Board.Items.Scripts.QuestionMark.QuestionMarkView$$<PlayCompleteAnimation>b__8_0
   void 
   Modules_Contexts_GamePlay_Board_Items_Scripts_QuestionMark_QuestionMarkView___PlayCompleteAnimation_b__8_0
   (Modules_Contexts_GamePlay_Board_Items_Scripts_QuestionMark_QuestionMarkView_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_QuestionMark_QuestionMarkView___PlayCompleteAnimation_b__8_0_2745dd0
               (long param_1)

{
  long lVar1;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if ((*(long *)(param_1 + 0x20) != 0) &&
     (lVar1 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x20),0), lVar1 != 0
     )) {
    UnityEngine_GameObject__SetActive_408e318(lVar1,0,0);
    lVar1 = *(long *)(param_1 + 0x20);
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
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

