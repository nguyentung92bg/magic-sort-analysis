/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$GetTopWaterHeightIfTheSameColorId
int32_t Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetTopWaterHeightIfTheSameColorId (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, int32_t colorId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$GetTopWaterHeightIfTheSameColorId
   int32_t
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetTopWaterHeightIfTheSameColorId
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, int32_t colorId, const
   MethodInfo* method); */

undefined4
Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetTopWaterHeightIfTheSameColorId_249d28c
          (undefined8 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  
  lVar3 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetTopWater_2495584();
  uVar2 = 0;
  if (lVar3 != 0) {
    iVar1 = Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__GetColorId_1e99788
                      (lVar3,0);
    if (iVar1 == param_2) {
      uVar2 = *(undefined4 *)(lVar3 + 0x40);
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

