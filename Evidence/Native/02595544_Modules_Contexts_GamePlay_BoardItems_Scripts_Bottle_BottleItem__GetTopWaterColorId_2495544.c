/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$GetTopWaterColorId
int32_t Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetTopWaterColorId (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$GetTopWaterColorId
   int32_t Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetTopWaterColorId
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, const MethodInfo*
   method); */

undefined4
Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetTopWaterColorId_2495544(void)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetTopWater_2495584();
  if ((lVar2 == 0) || (*(long *)(lVar2 + 0x58) == 0)) {
    uVar1 = 0xc;
  }
  else {
    uVar1 = *(undefined4 *)(*(long *)(lVar2 + 0x58) + 0x70);
  }
  return uVar1;
}

