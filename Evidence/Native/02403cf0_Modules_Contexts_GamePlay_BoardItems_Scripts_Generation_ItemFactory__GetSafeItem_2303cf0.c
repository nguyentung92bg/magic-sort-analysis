/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Generation.ItemFactory$$GetSafeItem
Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeItem_o* Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory__GetSafeItem (Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory_o* __this, Modules_Contexts_GamePlay_Board_Common_Scripts_ITransform_o* parent, UnityEngine_Vector3_o pivotPosition, UnityEngine_Vector3_o viewOffset, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* belongingBottle, System_Collections_Generic_List_BottleItem__o* belongingBottles, int32_t requiredAmount, int32_t safeType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Generation.ItemFactory$$GetSafeItem
   Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeItem_o*
   Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory__GetSafeItem
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory_o* __this,
   Modules_Contexts_GamePlay_Board_Common_Scripts_ITransform_o* parent, UnityEngine_Vector3_o
   pivotPosition, UnityEngine_Vector3_o viewOffset,
   Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* belongingBottle,
   System_Collections_Generic_List_BottleItem__o* belongingBottles, int32_t requiredAmount, int32_t
   safeType, const MethodInfo* method); */

long * Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory__GetSafeItem_2303cf0
                 (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                 undefined4 param_13,undefined4 param_14)

{
  byte bVar1;
  long *plVar2;
  
                    /* try { // try from 02403d24 to 02503d33 has its CatchHandler @ 02403e04 */
                    /* try { // try from 02403d34 to 02503df3 has its CatchHandler @ 0240393c */
  if ((bRam0000000005c2a62f & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05815758);
    bRam0000000005c2a62f = 1;
  }
  plVar2 = (long *)Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory__GetItem_2301d8c
                             (param_1,param_2,param_3,param_7,0x14,param_8);
  if (plVar2 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_05815758 + 300);
    if ((bVar1 <= *(byte *)(*plVar2 + 300)) &&
       (*(long *)(*(long *)(*plVar2 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_05815758)) {
      Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeItem__Prepare_2613bb0
                (param_4,param_5,param_6,plVar2,param_9,param_10,param_11,param_12,param_13,param_14
                 ,0);
                    /* try { // try from 02403df4 to 02503df7 has its CatchHandler @ 02403e00 */
                    /* try { // try from 02403df8 to 02503e23 has its CatchHandler @ 0240393c */
      (**(code **)(*plVar2 + 0x1c8))(plVar2,*(undefined8 *)(*plVar2 + 0x1d0));
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02403df4 with catch @ 02403e00
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02403d24 with catch @ 02403e04
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02403c4c with catch @ 02403e08
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02403c8c with catch @ 02403e0c
                        */
                    /* try { // try from 02403e24 to 02503e27 has its CatchHandler @ 02403ea8 */
      return plVar2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d1288(plVar2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

