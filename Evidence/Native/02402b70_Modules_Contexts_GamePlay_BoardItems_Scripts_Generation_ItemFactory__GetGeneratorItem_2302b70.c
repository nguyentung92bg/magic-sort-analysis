/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Generation.ItemFactory$$GetGeneratorItem
Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorItem_o* Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory__GetGeneratorItem (Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory_o* __this, Modules_Contexts_GamePlay_Board_Common_Scripts_ITransform_o* parent, UnityEngine_Vector3_o pivotPosition, UnityEngine_Vector3_o viewOffset, Modules_Infrastructure_UI_Common_Scripts_Sorting_o frontSorting, Modules_Infrastructure_UI_Common_Scripts_Sorting_o backSorting, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* belongingBottle, System_Collections_Generic_Stack_ColorId__o* colorIds, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Generation.ItemFactory$$GetGeneratorItem
   Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorItem_o*
   Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory__GetGeneratorItem
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory_o* __this,
   Modules_Contexts_GamePlay_Board_Common_Scripts_ITransform_o* parent, UnityEngine_Vector3_o
   pivotPosition, UnityEngine_Vector3_o viewOffset,
   Modules_Infrastructure_UI_Common_Scripts_Sorting_o frontSorting,
   Modules_Infrastructure_UI_Common_Scripts_Sorting_o backSorting,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* belongingBottle,
   System_Collections_Generic_Stack_ColorId__o* colorIds, const MethodInfo* method); */

long * Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory__GetGeneratorItem_2302b70
                 (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                 undefined8 param_13,undefined8 param_14)

{
  byte bVar1;
  long *plVar2;
  
  if ((bRam0000000005c2a623 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d99c8);
    bRam0000000005c2a623 = 1;
  }
  plVar2 = (long *)Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory__GetItem_2301d8c
                             (param_1,param_2,param_3,param_7,9,param_8);
                    /* try { // try from 02402c04 to 02502c43 has its CatchHandler @ 02402c04
                       catch() { ... } // from try @ 02402c04 with catch @ 02402c04
                       catch() { ... } // from try @ 02402c58 with catch @ 02402c04
                       catch() { ... } // from try @ 02402c94 with catch @ 02402c04
                       catch() { ... } // from try @ 02402cd4 with catch @ 02402c04 */
  if (plVar2 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_057d99c8 + 300);
    if ((bVar1 <= *(byte *)(*plVar2 + 300)) &&
       (*(long *)(*(long *)(*plVar2 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_057d99c8)) {
                    /* try { // try from 02402c44 to 02502c57 has its CatchHandler @ 02402c64 */
                    /* try { // try from 02402c58 to 02502c7b has its CatchHandler @ 02402c04 */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02402c44 with catch @ 02402c64
                        */
      Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorItem__Prepare_274f6a4
                (param_4,param_5,param_6,plVar2,param_9,param_10,param_11,param_12,param_13,param_14
                 ,0);
                    /* try { // try from 02402c7c to 02502c93 has its CatchHandler @ 02402ccc */
      (**(code **)(*plVar2 + 0x1c8))(plVar2,*(undefined8 *)(*plVar2 + 0x1d0));
                    /* try { // try from 02402c94 to 02502cbb has its CatchHandler @ 02402c04 */
      return plVar2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d1288(plVar2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

