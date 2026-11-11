/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Ice.IceItem$$GetBelongingBottleCount
int32_t Modules_Contexts_GamePlay_Board_Items_Scripts_Ice_IceItem__GetBelongingBottleCount (Modules_Contexts_GamePlay_Board_Items_Scripts_Ice_IceItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Ice.IceItem$$GetBelongingBottleCount
   int32_t Modules_Contexts_GamePlay_Board_Items_Scripts_Ice_IceItem__GetBelongingBottleCount
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Ice_IceItem_o* __this, const MethodInfo* method);
    */

undefined4
Modules_Contexts_GamePlay_Board_Items_Scripts_Ice_IceItem__GetBelongingBottleCount_274e7c0
          (long param_1)

{
  if ((bRam0000000005c2c6d8 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05813f90);
    bRam0000000005c2c6d8 = 1;
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    return *(undefined4 *)(*(long *)(param_1 + 0x58) + 0x18);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

