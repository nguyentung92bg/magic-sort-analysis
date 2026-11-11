/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.QuestionMark.QuestionMarkItem$$ResetViewRotation
void Modules_Contexts_GamePlay_Board_Items_Scripts_QuestionMark_QuestionMarkItem__ResetViewRotation (Modules_Contexts_GamePlay_Board_Items_Scripts_QuestionMark_QuestionMarkItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Board.Items.Scripts.QuestionMark.QuestionMarkItem$$ResetViewRotation
   void 
   Modules_Contexts_GamePlay_Board_Items_Scripts_QuestionMark_QuestionMarkItem__ResetViewRotation
   (Modules_Contexts_GamePlay_Board_Items_Scripts_QuestionMark_QuestionMarkItem_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_QuestionMark_QuestionMarkItem__ResetViewRotation_27459a8
               (long param_1)

{
  long lVar1;
  undefined4 *puVar2;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if (*(long *)(param_1 + 0x50) != 0) {
    lVar1 = UnityEngine_Component__get_transform_408b444(*(long *)(param_1 + 0x50),0);
    if (cRam0000000005c25812 == '\0') {
      FUN_012d0dc8(PTR_DAT_057f4aa8);
      cRam0000000005c25812 = '\x01';
    }
    if (lVar1 != 0) {
      puVar2 = *(undefined4 **)(*(long *)PTR_DAT_057f4aa8 + 0xb8);
      uStack_30 = *puVar2;
      uStack_2c = puVar2[1];
      uStack_28 = puVar2[2];
      uStack_24 = puVar2[3];
      if (pcRam0000000005c3a640 == (code *)0x0) {
        pcRam0000000005c3a640 = (code *)FUN_012d0d84(&UNK_043ef074,0);
      }
      (*pcRam0000000005c3a640)(lVar1,&uStack_30);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

