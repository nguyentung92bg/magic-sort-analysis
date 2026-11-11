/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Water.BottleOutlines$$GetOutline
Tests_BottleOutline_o* Modules_Contexts_GamePlay_Board_Items_Scripts_Water_BottleOutlines__GetOutline (Modules_Contexts_GamePlay_Board_Items_Scripts_Water_BottleOutlines_o* __this, int32_t outlineIndex, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Water.BottleOutlines$$GetOutline
   Tests_BottleOutline_o*
   Modules_Contexts_GamePlay_Board_Items_Scripts_Water_BottleOutlines__GetOutline
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Water_BottleOutlines_o* __this, int32_t
   outlineIndex, const MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_Board_Items_Scripts_Water_BottleOutlines__GetOutline_26089f0
          (long param_1,uint param_2)

{
  long lVar1;
  
  if ((bRam0000000005c2b9c8 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057fe7b8);
    FUN_012d0dc8(PTR_DAT_057c1e98);
    bRam0000000005c2b9c8 = 1;
  }
  lVar1 = *(long *)(param_1 + 0x18);
  if ((int)param_2 < 0) {
    if (lVar1 == 0) goto LAB_02708a68;
    param_2 = 0;
  }
  else {
    if (lVar1 == 0) {
LAB_02708a68:
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    if (*(int *)(lVar1 + 0x18) <= (int)param_2) {
      param_2 = 0;
    }
  }
  if (*(uint *)(lVar1 + 0x18) <= param_2) {
    System_ThrowHelper__ThrowArgumentOutOfRange_IndexException_26a52c4
              (0,param_2,*(undefined8 *)PTR_DAT_057c1e98);
  }
  lVar1 = *(long *)(lVar1 + 0x10);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if (*(uint *)(lVar1 + 0x18) <= param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef8();
  }
  return *(undefined8 *)(lVar1 + (long)(int)param_2 * 8 + 0x20);
}

