/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.QuestionMark.QuestionMarkItem$$Prepare
void Modules_Contexts_GamePlay_Board_Items_Scripts_QuestionMark_QuestionMarkItem__Prepare (Modules_Contexts_GamePlay_Board_Items_Scripts_QuestionMark_QuestionMarkItem_o* __this, UnityEngine_Vector3_o viewOffset, int32_t sortOrder, Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorAndColorId_o* colorAndColorId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.QuestionMark.QuestionMarkItem$$Prepare
   void Modules_Contexts_GamePlay_Board_Items_Scripts_QuestionMark_QuestionMarkItem__Prepare
   (Modules_Contexts_GamePlay_Board_Items_Scripts_QuestionMark_QuestionMarkItem_o* __this,
   UnityEngine_Vector3_o viewOffset, int32_t sortOrder,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorAndColorId_o* colorAndColorId,
   const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_QuestionMark_QuestionMarkItem__Prepare_2745914
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4,
               undefined4 param_5,undefined8 param_6)

{
  long lVar1;
  
  *(undefined8 *)(param_4 + 0x48) = param_6;
  FUN_012d0d74((undefined8 *)(param_4 + 0x48),param_6);
  *(undefined4 *)(param_4 + 0x34) = param_1;
  *(undefined4 *)(param_4 + 0x38) = param_2;
  *(undefined4 *)(param_4 + 0x3c) = param_3;
  if ((*(long *)(param_4 + 0x50) == 0) ||
     (lVar1 = *(long *)(*(long *)(param_4 + 0x50) + 0x20), lVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  UnityEngine_Renderer__set_sortingOrder_40826fc(lVar1,param_5,0);
  if (*(long *)(param_4 + 0x50) != 0) {
    lVar1 = UnityEngine_Component__get_transform_408b444(*(long *)(param_4 + 0x50),0);
    if (cRam0000000005c25812 == '\0') {
      FUN_012d0dc8(PTR_DAT_057f4aa8);
      cRam0000000005c25812 = '\x01';
    }
    if (lVar1 != 0) {
      if (pcRam0000000005c3a640 == (code *)0x0) {
        pcRam0000000005c3a640 = (code *)FUN_012d0d84(&UNK_043ef074,0);
      }
      (*pcRam0000000005c3a640)(lVar1,&stack0xffffffffffffffd0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

