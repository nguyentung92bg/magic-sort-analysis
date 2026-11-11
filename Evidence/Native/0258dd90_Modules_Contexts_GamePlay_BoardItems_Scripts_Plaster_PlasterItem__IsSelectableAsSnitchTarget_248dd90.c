/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Plaster.PlasterItem$$IsSelectableAsSnitchTarget
bool Modules_Contexts_GamePlay_BoardItems_Scripts_Plaster_PlasterItem__IsSelectableAsSnitchTarget (Modules_Contexts_GamePlay_BoardItems_Scripts_Plaster_PlasterItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.BoardItems.Scripts.Plaster.PlasterItem$$IsSelectableAsSnitchTarget
   bool Modules_Contexts_GamePlay_BoardItems_Scripts_Plaster_PlasterItem__IsSelectableAsSnitchTarget
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Plaster_PlasterItem_o* __this, const MethodInfo*
   method); */

uint Modules_Contexts_GamePlay_BoardItems_Scripts_Plaster_PlasterItem__IsSelectableAsSnitchTarget_248dd90
               (long param_1)

{
  uint uVar1;
  
  if (*(char *)(param_1 + 0x40) == '\0') {
    if (*(long *)(param_1 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    uVar1 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__HasOverlayBlocker_248d97c
                      ();
    uVar1 = uVar1 ^ 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1 & 1;
}

