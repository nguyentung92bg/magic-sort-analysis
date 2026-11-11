/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$get_BottleRowCount
int32_t Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__get_BottleRowCount (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$get_BottleRowCount
   int32_t Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__get_BottleRowCount
   (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this, const MethodInfo*
   method); */

undefined4
Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__get_BottleRowCount_2f61050
          (long param_1)

{
  if ((bRam0000000005c308fe & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05785108);
                    /* try { // try from 03061074 to 03161107 has its CatchHandler @ 030611b4 */
    bRam0000000005c308fe = 1;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    return *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x18);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

