/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.MagicSeal.MagicSealView$$SetBackSorting
void Modules_Contexts_GamePlay_Board_Items_Scripts_MagicSeal_MagicSealView__SetBackSorting (Modules_Contexts_GamePlay_Board_Items_Scripts_MagicSeal_MagicSealView_o* __this, int32_t i, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.MagicSeal.MagicSealView$$SetBackSorting
   void Modules_Contexts_GamePlay_Board_Items_Scripts_MagicSeal_MagicSealView__SetBackSorting
   (Modules_Contexts_GamePlay_Board_Items_Scripts_MagicSeal_MagicSealView_o* __this, int32_t i,
   const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_MagicSeal_MagicSealView__SetBackSorting_274bd28
               (long param_1,undefined4 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x50);
  if (lVar1 != 0) {
    if (pcRam0000000005c37840 == (code *)0x0) {
      pcRam0000000005c37840 = (code *)FUN_012d0d84(&UNK_043e4dbb);
    }
                    /* WARNING: Could not recover jumptable at 0x03e5ef40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000005c37840)(lVar1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

