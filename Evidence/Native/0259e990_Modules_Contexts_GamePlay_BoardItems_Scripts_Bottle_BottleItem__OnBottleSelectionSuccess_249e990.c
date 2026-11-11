/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$OnBottleSelectionSuccess
void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__OnBottleSelectionSuccess (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$OnBottleSelectionSuccess
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__OnBottleSelectionSuccess
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__OnBottleSelectionSuccess_249e990
               (long param_1)

{
  uint uVar1;
  int iStack_14;
  
  iStack_14 = 0;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  uVar1 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__TryGetFirstBlockedWaterIndexFromTheBottom_2494804
                    ((int)param_1,&iStack_14);
  if ((uVar1 & 1) != 0) {
    *(int *)(param_1 + 0xe8) = iStack_14 + 1;
  }
  return;
}

