/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Bag.BagView$$GetAvailableTrail
Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagTrail_o* Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagView__GetAvailableTrail (Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Bag.BagView$$GetAvailableTrail
   Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagTrail_o*
   Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagView__GetAvailableTrail
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagView_o* __this, const MethodInfo* method);
    */

long Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagView__GetAvailableTrail_2f6046c
               (long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  lVar3 = *(long *)(param_1 + 0x30);
  if (lVar3 == 0) {
LAB_030604c0:
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  uVar1 = *(uint *)(lVar3 + 0x18);
  if (0 < (int)uVar1) {
    uVar4 = 0;
    do {
      if (uVar1 <= uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef8();
      }
      lVar2 = *(long *)(lVar3 + (long)(int)uVar4 * 8 + 0x20);
      if (lVar2 == 0) goto LAB_030604c0;
      if (*(char *)(lVar2 + 0x30) == '\0') {
        return lVar2;
      }
                    /* try { // try from 030604a4 to 031604ab has its CatchHandler @ 030607b8 */
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < (int)uVar1);
  }
  return 0;
}

