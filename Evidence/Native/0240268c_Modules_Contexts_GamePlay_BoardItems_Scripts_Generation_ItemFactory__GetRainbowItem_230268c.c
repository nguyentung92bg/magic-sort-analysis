/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Generation.ItemFactory$$GetRainbowItem
Modules_Contexts_GamePlay_Board_Items_Scripts_Rainbow_RainbowItem_o* Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory__GetRainbowItem (Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory_o* __this, Modules_Contexts_GamePlay_Board_Common_Scripts_ITransform_o* parent, UnityEngine_Vector3_o pivotPosition, UnityEngine_Vector3_o viewOffset, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* belongingBottle, Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* bottleCollection, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Generation.ItemFactory$$GetRainbowItem
   Modules_Contexts_GamePlay_Board_Items_Scripts_Rainbow_RainbowItem_o*
   Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory__GetRainbowItem
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory_o* __this,
   Modules_Contexts_GamePlay_Board_Common_Scripts_ITransform_o* parent, UnityEngine_Vector3_o
   pivotPosition, UnityEngine_Vector3_o viewOffset,
   Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* belongingBottle,
   Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* bottleCollection, const
   MethodInfo* method); */

long * Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory__GetRainbowItem_230268c
                 (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  byte bVar1;
  long *plVar2;
  
                    /* try { // try from 024026b8 to 0250270b has its CatchHandler @ 02402748 */
  if ((bRam0000000005c2a61f & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057b89f8);
    bRam0000000005c2a61f = 1;
  }
                    /* try { // try from 0240270c to 0250273b has its CatchHandler @ 02402664 */
  plVar2 = (long *)Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory__GetItem_2301d8c
                             (param_1,param_2,param_3,param_7,0x19,param_8);
  if (plVar2 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_057b89f8 + 300);
                    /* try { // try from 0240273c to 02502747 has its CatchHandler @ 02402748 */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 024026b8 with catch @ 02402748
                       catch(type#1 @ 054cbd58) { ... } // from try @ 0240273c with catch @ 02402748
                       try { // try from 02402748 to 0250275f has its CatchHandler @ 02402664 */
    if ((bVar1 <= *(byte *)(*plVar2 + 300)) &&
       (*(long *)(*(long *)(*plVar2 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_057b89f8)) {
                    /* try { // try from 02402760 to 02502777 has its CatchHandler @ 024027e4 */
      Modules_Contexts_GamePlay_Board_Items_Scripts_Rainbow_RainbowItem__Prepare_2617958
                (param_4,param_5,param_6,plVar2,param_9,param_10,param_11,param_12,0);
                    /* try { // try from 02402778 to 025027d3 has its CatchHandler @ 02402664 */
      (**(code **)(*plVar2 + 0x1c8))(plVar2,*(undefined8 *)(*plVar2 + 0x1d0));
      return plVar2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d1288(plVar2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

