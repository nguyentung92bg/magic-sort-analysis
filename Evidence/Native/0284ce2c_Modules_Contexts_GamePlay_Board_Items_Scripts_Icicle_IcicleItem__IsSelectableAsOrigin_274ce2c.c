/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Icicle.IcicleItem$$IsSelectableAsOrigin
bool Modules_Contexts_GamePlay_Board_Items_Scripts_Icicle_IcicleItem__IsSelectableAsOrigin (Modules_Contexts_GamePlay_Board_Items_Scripts_Icicle_IcicleItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Icicle.IcicleItem$$IsSelectableAsOrigin
   bool Modules_Contexts_GamePlay_Board_Items_Scripts_Icicle_IcicleItem__IsSelectableAsOrigin
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Icicle_IcicleItem_o* __this, const MethodInfo*
   method); */

bool Modules_Contexts_GamePlay_Board_Items_Scripts_Icicle_IcicleItem__IsSelectableAsOrigin_274ce2c
               (long param_1)

{
  long lVar1;
  
  if (*(char *)(param_1 + 0x40) != '\0') {
    return true;
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    lVar1 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetTopWater_2495584
                      (*(long *)(param_1 + 0x50),0);
    if (*(long *)(param_1 + 0x58) != 0) {
      return *(long *)(*(long *)(param_1 + 0x58) + 0x20) != lVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

