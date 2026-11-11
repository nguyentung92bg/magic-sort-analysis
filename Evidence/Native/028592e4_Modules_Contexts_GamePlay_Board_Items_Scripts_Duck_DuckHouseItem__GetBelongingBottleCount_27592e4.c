/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Duck.DuckHouseItem$$GetBelongingBottleCount
int32_t Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseItem__GetBelongingBottleCount (Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Duck.DuckHouseItem$$GetBelongingBottleCount
   int32_t Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseItem__GetBelongingBottleCount
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseItem_o* __this, const MethodInfo*
   method); */

undefined4
Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseItem__GetBelongingBottleCount_27592e4
          (long param_1)

{
  if ((bRam0000000005c2c72e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05813f90);
    bRam0000000005c2c72e = 1;
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    return *(undefined4 *)(*(long *)(param_1 + 0x58) + 0x18);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

