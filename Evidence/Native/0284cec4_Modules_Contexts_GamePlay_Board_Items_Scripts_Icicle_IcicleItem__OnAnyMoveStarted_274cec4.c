/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Icicle.IcicleItem$$OnAnyMoveStarted
void Modules_Contexts_GamePlay_Board_Items_Scripts_Icicle_IcicleItem__OnAnyMoveStarted (Modules_Contexts_GamePlay_Board_Items_Scripts_Icicle_IcicleItem_o* __this, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* originBottle, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* targetBottle, int32_t waterColorId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Icicle.IcicleItem$$OnAnyMoveStarted
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Icicle_IcicleItem__OnAnyMoveStarted
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Icicle_IcicleItem_o* __this,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* originBottle,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* targetBottle, int32_t
   waterColorId, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Icicle_IcicleItem__OnAnyMoveStarted_274cec4
               (long param_1,undefined8 param_2,long param_3,int param_4)

{
  int iVar1;
  long lVar2;
  
  if ((*(char *)(param_1 + 0x40) == '\0') && (param_3 == *(long *)(param_1 + 0x50))) {
    if (*(long *)(param_1 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    lVar2 = *(long *)(*(long *)(param_1 + 0x58) + 0x20);
    if ((lVar2 != 0) &&
       (iVar1 = Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__GetColorId_1e99788
                          (lVar2,0), iVar1 == param_4)) {
      *(undefined1 *)(param_1 + 0x60) = 1;
    }
  }
  return;
}

