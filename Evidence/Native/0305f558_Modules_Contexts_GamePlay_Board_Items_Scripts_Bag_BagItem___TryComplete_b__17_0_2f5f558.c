/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Bag.BagItem$$<TryComplete>b__17_0
void Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagItem___TryComplete_b__17_0 (Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Bag.BagItem$$<TryComplete>b__17_0
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagItem___TryComplete_b__17_0
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagItem_o* __this, const MethodInfo* method);
    */

bool Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagItem___TryComplete_b__17_0_2f5f558
               (long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if ((*(long *)(param_1 + 0x50) == 0) ||
     (lVar2 = *(long *)(*(long *)(param_1 + 0x50) + 0x40), lVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if ((bRam0000000005c3aa98 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057aeae8,param_1,0);
    bRam0000000005c3aa98 = 1;
  }
  lVar2 = *(long *)(lVar2 + 0x10);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  lVar3 = *(long *)PTR_DAT_057aeae8;
  iVar1 = (**(code **)(*(long *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0xa0) + 8))
                    (lVar2,param_1);
  if (-1 < iVar1) {
    (**(code **)(*(long *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x158) + 8))(lVar2,iVar1);
  }
  return -1 < iVar1;
}

