/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.MagicSeal.MagicSealView$$Hide
void Modules_Contexts_GamePlay_Board_Items_Scripts_MagicSeal_MagicSealView__Hide (Modules_Contexts_GamePlay_Board_Items_Scripts_MagicSeal_MagicSealView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.MagicSeal.MagicSealView$$Hide
   void Modules_Contexts_GamePlay_Board_Items_Scripts_MagicSeal_MagicSealView__Hide
   (Modules_Contexts_GamePlay_Board_Items_Scripts_MagicSeal_MagicSealView_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_MagicSeal_MagicSealView__Hide_274c0f0
               (long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((bRam0000000005c2c6c5 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575b888);
    bRam0000000005c2c6c5 = 1;
  }
  lVar1 = *(long *)(param_1 + 0x78);
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)PTR_DAT_0575b888;
    if (pcRam0000000005c28c10 == (code *)0x0) {
      pcRam0000000005c28c10 = (code *)FUN_012d0d84(&UNK_0438d26b,uVar2,0);
    }
                    /* WARNING: Could not recover jumptable at 0x0207a144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000005c28c10)(lVar1,uVar2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

