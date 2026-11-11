/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.Board.MergeItemInputReceiver$$OnTouchCancel
void Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItemInputReceiver__OnTouchCancel (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItemInputReceiver_o* __this, UnityEngine_Vector2_o position, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.Board.MergeItemInputReceiver$$OnTouchCancel
   void Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItemInputReceiver__OnTouchCancel
   (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItemInputReceiver_o* __this,
   UnityEngine_Vector2_o position, const MethodInfo* method); */

void Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItemInputReceiver__OnTouchCancel_4112b2c
               (long param_1)

{
  if (*(char *)(param_1 + 0x48) == '\0') {
LAB_04212b5c:
    *(undefined1 *)(param_1 + 0x48) = 0;
    return;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    UnityEngine_BoxCollider2D__set_size_2e26350
              (*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
               *(long *)(param_1 + 0x20),0);
    if (*(long *)(param_1 + 0x38) != 0) {
      Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeMiniGameSelectionSystem__OnItemDragCancel_4112b6c
                ();
      goto LAB_04212b5c;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

