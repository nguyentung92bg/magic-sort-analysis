/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Generation.ItemFactory$$GetWaterItem
Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem_o* Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory__GetWaterItem (Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory_o* __this, Modules_Contexts_GamePlay_Board_Common_Scripts_ITransform_o* parent, UnityEngine_Vector3_o pivotPosition, UnityEngine_Vector3_o viewOffset, int32_t frontSortOrder, int32_t backSortOrder, int32_t bottleHeight, int32_t height, int32_t index, Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorAndColorId_o* colorAndColorId, bool isVisible, int32_t bottlesAndWaterVariant, Modules_Contexts_GamePlay_Board_Items_Scripts_Water_BottleOutlines_o* bottleOutlines, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Generation.ItemFactory$$GetWaterItem
   Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem_o*
   Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory__GetWaterItem
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory_o* __this,
   Modules_Contexts_GamePlay_Board_Common_Scripts_ITransform_o* parent, UnityEngine_Vector3_o
   pivotPosition, UnityEngine_Vector3_o viewOffset, int32_t frontSortOrder, int32_t backSortOrder,
   int32_t bottleHeight, int32_t height, int32_t index,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorAndColorId_o* colorAndColorId,
   bool isVisible, int32_t bottlesAndWaterVariant,
   Modules_Contexts_GamePlay_Board_Items_Scripts_Water_BottleOutlines_o* bottleOutlines, const
   MethodInfo* method); */

long * Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory__GetWaterItem_2301f28
                 (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                 undefined4 param_13,undefined8 param_14,byte param_15,undefined4 param_16,
                 undefined8 param_17)

{
  byte bVar1;
  long *plVar2;
  
  if ((bRam0000000005c2a619 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05760c20);
    bRam0000000005c2a619 = 1;
  }
  plVar2 = (long *)Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory__GetItem_2301d8c
                             (param_1,param_2,param_3,param_7,2,param_8);
  if (plVar2 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_05760c20 + 300);
    if ((bVar1 <= *(byte *)(*plVar2 + 300)) &&
       (*(long *)(*(long *)(*plVar2 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_05760c20)) {
      Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__Prepare_1e9e1dc
                (param_4,param_5,param_6,plVar2,param_9,param_10,param_11,param_12,param_13,param_14
                 ,param_15 & 1,param_16,param_17,0);
      (**(code **)(*plVar2 + 0x1c8))(plVar2,*(undefined8 *)(*plVar2 + 0x1d0));
      return plVar2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d1288(plVar2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

