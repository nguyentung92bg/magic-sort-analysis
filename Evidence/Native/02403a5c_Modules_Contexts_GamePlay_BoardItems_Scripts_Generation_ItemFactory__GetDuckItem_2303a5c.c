/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Generation.ItemFactory$$GetDuckItem
Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckItem_o* Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory__GetDuckItem (Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory_o* __this, Modules_Contexts_GamePlay_Board_Common_Scripts_ITransform_o* parent, UnityEngine_Vector3_o pivotPosition, UnityEngine_Vector3_o viewOffset, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseItem_o* duckHouseItem, Modules_Contexts_GamePlay_Levels_Scripts_Cell_Cell_o* belongingCell, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* belongingBottle, int32_t duckType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Generation.ItemFactory$$GetDuckItem
   Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckItem_o*
   Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory__GetDuckItem
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory_o* __this,
   Modules_Contexts_GamePlay_Board_Common_Scripts_ITransform_o* parent, UnityEngine_Vector3_o
   pivotPosition, UnityEngine_Vector3_o viewOffset,
   Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting,
   Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseItem_o* duckHouseItem,
   Modules_Contexts_GamePlay_Levels_Scripts_Cell_Cell_o* belongingCell,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* belongingBottle, int32_t
   duckType, const MethodInfo* method); */

long * Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory__GetDuckItem_2303a5c
                 (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10,undefined8 param_11,long param_12,
                 undefined8 param_13,undefined4 param_14)

{
  byte bVar1;
  long *plVar2;
  
  if ((bRam0000000005c2a62d & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05758878);
    bRam0000000005c2a62d = 1;
  }
  plVar2 = (long *)Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory__GetItem_2301d8c
                             (param_1,param_2,param_3,param_7,0x12,param_8);
  if (plVar2 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_05758878 + 300);
    if ((*(byte *)(*plVar2 + 300) < bVar1) ||
       (*(long *)(*(long *)(*plVar2 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_05758878)) {
                    /* WARNING: Subroutine does not return */
      FUN_012d1288(plVar2);
    }
    Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckItem__Prepare_2f52c84
              (param_4,param_5,param_6,plVar2,param_9,param_10,param_11,param_13,param_12,param_14,0
              );
    if (param_12 != 0) {
      *(long *)(param_12 + 0x30) = (long)plVar2;
      FUN_012d0d74((long *)(param_12 + 0x30),plVar2);
      (**(code **)(*plVar2 + 0x1c8))(plVar2,*(undefined8 *)(*plVar2 + 0x1d0));
      return plVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

