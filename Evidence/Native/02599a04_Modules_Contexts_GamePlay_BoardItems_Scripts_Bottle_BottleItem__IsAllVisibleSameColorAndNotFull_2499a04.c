/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$IsAllVisibleSameColorAndNotFull
bool Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__IsAllVisibleSameColorAndNotFull (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$IsAllVisibleSameColorAndNotFull
   bool 
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__IsAllVisibleSameColorAndNotFull
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, const MethodInfo*
   method); */

uint Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__IsAllVisibleSameColorAndNotFull_2499a04
               (undefined8 param_1)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__IsAllWatersVisible_2498edc
                    ();
  if (((uVar2 & 1) == 0) ||
     (uVar2 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__IsAllWatersSameColor_2499a68
                        (param_1), (uVar2 & 1) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__IsFull_2498400(param_1);
    uVar1 = uVar1 ^ 1;
  }
  return uVar1 & 1;
}

