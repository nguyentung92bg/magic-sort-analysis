/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.MagicSeal.MagicSealItem$$CompleteBySnitch
void Modules_Contexts_GamePlay_Board_Items_Scripts_MagicSeal_MagicSealItem__CompleteBySnitch (Modules_Contexts_GamePlay_Board_Items_Scripts_MagicSeal_MagicSealItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.MagicSeal.MagicSealItem$$CompleteBySnitch
   void Modules_Contexts_GamePlay_Board_Items_Scripts_MagicSeal_MagicSealItem__CompleteBySnitch
   (Modules_Contexts_GamePlay_Board_Items_Scripts_MagicSeal_MagicSealItem_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_MagicSeal_MagicSealItem__CompleteBySnitch_274ba2c
               (long param_1)

{
  if (*(char *)(param_1 + 0x40) == '\0') {
    if (*(long *)(param_1 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__RemoveBlocker_248db1c
              (*(long *)(param_1 + 0x50),param_1,0);
    Modules_Contexts_GamePlay_Board_Items_Scripts_MagicSeal_MagicSealItem__RemoveFromCells_274ba0c
              (param_1);
    *(undefined1 *)(param_1 + 0x40) = 1;
  }
  return;
}

