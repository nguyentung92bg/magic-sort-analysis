/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Ivy.IvyItem$$CompleteBySnitch
void Modules_Contexts_GamePlay_Board_Items_Scripts_Ivy_IvyItem__CompleteBySnitch (Modules_Contexts_GamePlay_Board_Items_Scripts_Ivy_IvyItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Ivy.IvyItem$$CompleteBySnitch
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Ivy_IvyItem__CompleteBySnitch
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Ivy_IvyItem_o* __this, const MethodInfo* method);
    */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Ivy_IvyItem__CompleteBySnitch_274c9f8
               (long param_1)

{
  if (*(char *)(param_1 + 0x40) == '\0') {
    *(undefined4 *)(param_1 + 0x68) = 0;
    if (*(long *)(param_1 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__RemoveBlocker_248db1c
              (*(long *)(param_1 + 0x50),param_1,0);
    Modules_Contexts_GamePlay_Board_Items_Scripts_Ivy_IvyItem__RemoveFromCells_274c940(param_1);
    *(undefined1 *)(param_1 + 0x40) = 1;
  }
  return;
}

