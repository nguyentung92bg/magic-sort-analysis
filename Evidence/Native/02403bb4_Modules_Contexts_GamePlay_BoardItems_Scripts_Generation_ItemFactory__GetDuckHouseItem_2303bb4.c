/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Generation.ItemFactory$$GetDuckHouseItem
Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseItem_o* Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory__GetDuckHouseItem (Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory_o* __this, Modules_Contexts_GamePlay_Board_Common_Scripts_ITransform_o* parent, UnityEngine_Vector3_o pivotPosition, UnityEngine_Vector3_o viewOffset, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* belongingBottle, System_Collections_Generic_List_BottleItem__o* belongingBottles, int32_t duckType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Generation.ItemFactory$$GetDuckHouseItem
   Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseItem_o*
   Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory__GetDuckHouseItem
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory_o* __this,
   Modules_Contexts_GamePlay_Board_Common_Scripts_ITransform_o* parent, UnityEngine_Vector3_o
   pivotPosition, UnityEngine_Vector3_o viewOffset,
   Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* belongingBottle,
   System_Collections_Generic_List_BottleItem__o* belongingBottles, int32_t duckType, const
   MethodInfo* method); */

long * Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory__GetDuckHouseItem_2303bb4
                 (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                 undefined4 param_13)

{
  byte bVar1;
  long *plVar2;
  
  if ((bRam0000000005c2a62e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05819b50);
    bRam0000000005c2a62e = 1;
  }
  plVar2 = (long *)Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory__GetItem_2301d8c
                             (param_1,param_2,param_3,param_7,0x13,param_8);
  if (plVar2 != (long *)0x0) {
                    /* try { // try from 02403c4c to 02503c73 has its CatchHandler @ 02403e08 */
    bVar1 = *(byte *)(*(long *)PTR_DAT_05819b50 + 300);
    if ((bVar1 <= *(byte *)(*plVar2 + 300)) &&
       (*(long *)(*(long *)(*plVar2 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_05819b50)) {
                    /* try { // try from 02403c8c to 02503cef has its CatchHandler @ 02403e0c */
      Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseItem__Prepare_2757394
                (param_4,param_5,param_6,plVar2,param_9,param_10,param_11,param_12,param_13,0);
      (**(code **)(*plVar2 + 0x1c8))(plVar2,*(undefined8 *)(*plVar2 + 0x1d0));
      return plVar2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d1288(plVar2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

