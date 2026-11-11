/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.MagicSeal.MagicSealItem$$OnBottleDeselectedAsOrigin
void Modules_Contexts_GamePlay_Board_Items_Scripts_MagicSeal_MagicSealItem__OnBottleDeselectedAsOrigin (Modules_Contexts_GamePlay_Board_Items_Scripts_MagicSeal_MagicSealItem_o* __this, int32_t waterOrder, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Board.Items.Scripts.MagicSeal.MagicSealItem$$OnBottleDeselectedAsOrigin
   void 
   Modules_Contexts_GamePlay_Board_Items_Scripts_MagicSeal_MagicSealItem__OnBottleDeselectedAsOrigin
   (Modules_Contexts_GamePlay_Board_Items_Scripts_MagicSeal_MagicSealItem_o* __this, int32_t
   waterOrder, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_MagicSeal_MagicSealItem__OnBottleDeselectedAsOrigin_274bb9c
               (long param_1,int param_2)

{
  if ((param_2 == 0) || (*(char *)(param_1 + 0x6d) != '\0')) {
    if (*(long *)(param_1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    Modules_Contexts_GamePlay_Board_Items_Scripts_MagicSeal_MagicSealView__PlayLockAnimation_274bbcc
              ();
    *(undefined1 *)(param_1 + 0x6d) = 0;
  }
  return;
}

