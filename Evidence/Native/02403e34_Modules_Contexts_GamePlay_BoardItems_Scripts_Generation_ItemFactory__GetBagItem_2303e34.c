/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Generation.ItemFactory$$GetBagItem
Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagItem_o* Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory__GetBagItem (Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory_o* __this, Modules_Contexts_GamePlay_Board_Common_Scripts_ITransform_o* parent, UnityEngine_Vector3_o pivotPosition, UnityEngine_Vector3_o viewOffset, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* belongingBottle, int32_t requiredAmount, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Generation.ItemFactory$$GetBagItem
   Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagItem_o*
   Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory__GetBagItem
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory_o* __this,
   Modules_Contexts_GamePlay_Board_Common_Scripts_ITransform_o* parent, UnityEngine_Vector3_o
   pivotPosition, UnityEngine_Vector3_o viewOffset,
   Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* belongingBottle, int32_t
   requiredAmount, const MethodInfo* method); */

long * Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory__GetBagItem_2303e34
                 (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined4 param_12)

{
  byte bVar1;
  long *plVar2;
  
                    /* try { // try from 02403e6c to 02503e93 has its CatchHandler @ 02403eb4 */
  if ((bRam0000000005c2a630 & 1) == 0) {
                    /* try { // try from 02403e94 to 02503e9f has its CatchHandler @ 0240393c */
    FUN_012d0dc8(PTR_DAT_057d9790);
    bRam0000000005c2a630 = 1;
  }
                    /* try { // try from 02403ea0 to 02503ea7 has its CatchHandler @ 02403eb4 */
                    /* catch() { ... } // from try @ 02403e24 with catch @ 02403ea8 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02403e6c with catch @ 02403eb4
                       catch(type#2 @ 00000000) { ... } // from try @ 02403ea0 with catch @ 02403eb4
                        */
  plVar2 = (long *)Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory__GetItem_2301d8c
                             (param_1,param_2,param_3,param_7,0x17,param_8);
  if (plVar2 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_057d9790 + 300);
    if ((bVar1 <= *(byte *)(*plVar2 + 300)) &&
       (*(long *)(*(long *)(*plVar2 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_057d9790)) {
      Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagItem__Prepare_2f5e1c4
                (param_4,param_5,param_6,plVar2,param_9,param_10,param_11,param_12,0);
      (**(code **)(*plVar2 + 0x1c8))(plVar2,*(undefined8 *)(*plVar2 + 0x1d0));
      return plVar2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d1288(plVar2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

