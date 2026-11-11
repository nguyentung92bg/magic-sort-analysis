/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Toggle.ToggleItem$$ShouldWaitBeforeToggleAnimation
bool Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItem__ShouldWaitBeforeToggleAnimation (Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Board.Items.Scripts.Toggle.ToggleItem$$ShouldWaitBeforeToggleAnimation
   bool 
   Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItem__ShouldWaitBeforeToggleAnimation
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItem_o* __this, const MethodInfo*
   method); */

bool Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItem__ShouldWaitBeforeToggleAnimation_2609114
               (long param_1)

{
  bool bVar1;
  ulong uVar2;
  
  if (*(long *)(param_1 + 0x50) != 0) {
    uVar2 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__IsSelected_2497284
                      (*(long *)(param_1 + 0x50),0);
    if (((uVar2 & 1) == 0) && (*(char *)(param_1 + 0x70) == '\0')) {
      bVar1 = *(char *)(param_1 + 0x71) != '\0';
    }
    else {
      bVar1 = true;
    }
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

