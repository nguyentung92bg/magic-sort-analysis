/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Generation.ItemFactory$$GetWoodboxItem
Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxItem_o* Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory__GetWoodboxItem (Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory_o* __this, Modules_Contexts_GamePlay_Board_Common_Scripts_ITransform_o* parent, UnityEngine_Vector3_o pivotPosition, UnityEngine_Vector3_o viewOffset, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* belongingBottle, System_Collections_Generic_List_BottleItem__o* belongingBottles, int32_t woodboxKeyType, int32_t blockerVariant, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Generation.ItemFactory$$GetWoodboxItem
   Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxItem_o*
   Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory__GetWoodboxItem
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory_o* __this,
   Modules_Contexts_GamePlay_Board_Common_Scripts_ITransform_o* parent, UnityEngine_Vector3_o
   pivotPosition, UnityEngine_Vector3_o viewOffset,
   Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* belongingBottle,
   System_Collections_Generic_List_BottleItem__o* belongingBottles, int32_t woodboxKeyType, int32_t
   blockerVariant, const MethodInfo* method); */

long * Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory__GetWoodboxItem_2302cb4
                 (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                 undefined4 param_13,undefined4 param_14)

{
  byte bVar1;
  long *plVar2;
  
                    /* try { // try from 02402cbc to 02502ccb has its CatchHandler @ 02402ccc */
                    /* catch() { ... } // from try @ 02402c7c with catch @ 02402ccc
                       catch() { ... } // from try @ 02402cbc with catch @ 02402ccc */
                    /* try { // try from 02402cd0 to 02502cd3 has its CatchHandler @ 02402cdc */
                    /* try { // try from 02402cd4 to 02502cdf has its CatchHandler @ 02402c04 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02402cd0 with catch @ 02402cdc
                        */
  if ((bRam0000000005c2a624 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057ba848);
    bRam0000000005c2a624 = 1;
  }
  plVar2 = (long *)Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory__GetItem_2301d8c
                             (param_1,param_2,param_3,param_7,10,param_8);
  if (plVar2 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_057ba848 + 300);
    if ((bVar1 <= *(byte *)(*plVar2 + 300)) &&
       (*(long *)(*(long *)(*plVar2 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_057ba848)) {
      Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxItem__Prepare_2302df4
                (param_4,param_5,param_6,plVar2,param_9,param_10,param_11,param_12,param_13,param_14
                );
      (**(code **)(*plVar2 + 0x1c8))(plVar2,*(undefined8 *)(*plVar2 + 0x1d0));
      return plVar2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d1288(plVar2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

