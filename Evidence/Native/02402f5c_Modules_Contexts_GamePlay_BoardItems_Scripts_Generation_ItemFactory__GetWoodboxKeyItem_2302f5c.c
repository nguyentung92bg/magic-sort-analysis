/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Generation.ItemFactory$$GetWoodboxKeyItem
Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxKeyItem_o* Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory__GetWoodboxKeyItem (Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory_o* __this, Modules_Contexts_GamePlay_Board_Common_Scripts_ITransform_o* parent, UnityEngine_Vector3_o pivotPosition, UnityEngine_Vector3_o viewOffset, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, Modules_Contexts_GamePlay_Levels_Scripts_Cell_Cell_o* belongingCell, Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxItem_o* belongingWoodbox, int32_t woodboxKeyType, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* bottleOfKey, int32_t blockerVariant, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Generation.ItemFactory$$GetWoodboxKeyItem
   Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxKeyItem_o*
   Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory__GetWoodboxKeyItem
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory_o* __this,
   Modules_Contexts_GamePlay_Board_Common_Scripts_ITransform_o* parent, UnityEngine_Vector3_o
   pivotPosition, UnityEngine_Vector3_o viewOffset,
   Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting,
   Modules_Contexts_GamePlay_Levels_Scripts_Cell_Cell_o* belongingCell,
   Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxItem_o* belongingWoodbox, int32_t
   woodboxKeyType, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* bottleOfKey,
   int32_t blockerVariant, const MethodInfo* method); */

long * Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory__GetWoodboxKeyItem_2302f5c
                 (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10,long param_11,undefined8 param_12,
                 undefined4 param_13,undefined8 param_14,undefined4 param_15)

{
  byte bVar1;
  long *plVar2;
  
  if ((bRam0000000005c2a625 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d91a8);
    bRam0000000005c2a625 = 1;
  }
  plVar2 = (long *)Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory__GetItem_2301d8c
                             (param_1,param_2,param_3,param_7,0xb,param_8);
  if (plVar2 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_057d91a8 + 300);
    if ((*(byte *)(*plVar2 + 300) < bVar1) ||
       (*(long *)(*(long *)(*plVar2 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_057d91a8)) {
                    /* WARNING: Subroutine does not return */
      FUN_012d1288(plVar2);
    }
    Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxKeyItem__Prepare_23030bc
              (param_4,param_5,param_6,plVar2,param_9,param_10,param_11,param_12,param_13,param_14,
               param_15);
    if (param_11 != 0) {
      *(long *)(param_11 + 0x30) = (long)plVar2;
      FUN_012d0d74((long *)(param_11 + 0x30),plVar2);
      (**(code **)(*plVar2 + 0x1c8))(plVar2,*(undefined8 *)(*plVar2 + 0x1d0));
      return plVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

