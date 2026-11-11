/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Toggle.ToggleItem$$ShouldPlayToggleAnimation
bool Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItem__ShouldPlayToggleAnimation (Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Board.Items.Scripts.Toggle.ToggleItem$$ShouldPlayToggleAnimation
   bool Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItem__ShouldPlayToggleAnimation
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItem_o* __this, const MethodInfo*
   method); */

uint Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItem__ShouldPlayToggleAnimation_26096d8
               (long param_1)

{
  if (*(char *)(param_1 + 0x72) == '\0') {
    return 0;
  }
  if (*(uint *)(param_1 + 0x5c) != 0) {
    return *(uint *)(param_1 + 0x5c) & 1;
  }
  return 1;
}

