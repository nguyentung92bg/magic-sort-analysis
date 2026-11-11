/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$GetCell
Modules_Contexts_GamePlay_Levels_Scripts_Cell_Cell_o* Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetCell (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, int32_t index, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$GetCell
   Modules_Contexts_GamePlay_Levels_Scripts_Cell_Cell_o*
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetCell
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, int32_t index, const
   MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetCell_2495f10
          (long param_1,uint param_2)

{
  long lVar1;
  
  if ((bRam0000000005c2b315 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05780fc0);
    FUN_012d0dc8(PTR_DAT_057f2468);
    bRam0000000005c2b315 = 1;
  }
  if (-1 < (int)param_2) {
    lVar1 = *(long *)(param_1 + 0x80);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    if ((int)param_2 < *(int *)(lVar1 + 0x18)) {
      if (*(uint *)(lVar1 + 0x18) <= param_2) {
        System_ThrowHelper__ThrowArgumentOutOfRange_IndexException_26a52c4
                  (0,param_2,*(undefined8 *)PTR_DAT_057f2468);
      }
      lVar1 = *(long *)(lVar1 + 0x10);
      if (lVar1 != 0) {
        if (param_2 < *(uint *)(lVar1 + 0x18)) {
          return *(undefined8 *)(lVar1 + (long)(int)param_2 * 8 + 0x20);
        }
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef8();
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
  }
  return 0;
}

