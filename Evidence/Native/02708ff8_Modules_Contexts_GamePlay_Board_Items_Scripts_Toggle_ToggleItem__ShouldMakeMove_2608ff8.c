/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Toggle.ToggleItem$$ShouldMakeMove
bool Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItem__ShouldMakeMove (Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItem_o* __this, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* originBottle, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* targetBottle, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Toggle.ToggleItem$$ShouldMakeMove
   bool Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItem__ShouldMakeMove
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItem_o* __this,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* originBottle,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* targetBottle, const MethodInfo*
   method); */

uint Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItem__ShouldMakeMove_2608ff8
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  ulong uVar2;
  
  if (*(long *)(param_1 + 0x50) != 0) {
    uVar2 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__HasOverlayBlocker_248d97c
                      (*(long *)(param_1 + 0x50),0);
    if ((uVar2 & 1) == 0) {
      uVar1 = Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItem__CheckMoveIsRepetitive_260942c
                        (uVar2,param_2,param_3);
      uVar1 = ~uVar1 & 1;
    }
    else {
      uVar1 = 0;
      *(undefined1 *)(param_1 + 0x70) = 1;
    }
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

