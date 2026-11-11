/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.MagicSeal.MagicSealItem$$OnBottleMove
void Modules_Contexts_GamePlay_Board_Items_Scripts_MagicSeal_MagicSealItem__OnBottleMove (Modules_Contexts_GamePlay_Board_Items_Scripts_MagicSeal_MagicSealItem_o* __this, int32_t pourableHeight, bool isLeft, float animationDuration, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.MagicSeal.MagicSealItem$$OnBottleMove
   void Modules_Contexts_GamePlay_Board_Items_Scripts_MagicSeal_MagicSealItem__OnBottleMove
   (Modules_Contexts_GamePlay_Board_Items_Scripts_MagicSeal_MagicSealItem_o* __this, int32_t
   pourableHeight, bool isLeft, float animationDuration, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_MagicSeal_MagicSealItem__OnBottleMove_274bcd0
               (long *param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = (**(code **)(*param_1 + 0x458))(param_1,*(undefined8 *)(*param_1 + 0x460));
  if (lVar2 != 0) {
    iVar1 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetCellIndexFromTheTop_2499884
                      (lVar2,param_1[0xb],0);
    if (iVar1 != 0) {
      return;
    }
    if ((param_1[9] != 0) && (lVar2 = *(long *)(param_1[9] + 0x50), lVar2 != 0)) {
      if (pcRam0000000005c37840 == (code *)0x0) {
        pcRam0000000005c37840 = (code *)FUN_012d0d84(&UNK_043e4dbb);
      }
                    /* WARNING: Could not recover jumptable at 0x03e5ef40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000005c37840)(lVar2,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

