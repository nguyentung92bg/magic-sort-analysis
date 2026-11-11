/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Generation.ItemFactory$$GetIcicleItem
Modules_Contexts_GamePlay_Board_Items_Scripts_Icicle_IcicleItem_o* Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory__GetIcicleItem (Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory_o* __this, Modules_Contexts_GamePlay_Board_Common_Scripts_ITransform_o* parent, UnityEngine_Vector3_o pivotPosition, UnityEngine_Vector3_o viewOffset, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* belongingBottle, Modules_Contexts_GamePlay_Levels_Scripts_Cell_Cell_o* belongingCell, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Generation.ItemFactory$$GetIcicleItem
   Modules_Contexts_GamePlay_Board_Items_Scripts_Icicle_IcicleItem_o*
   Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory__GetIcicleItem
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory_o* __this,
   Modules_Contexts_GamePlay_Board_Common_Scripts_ITransform_o* parent, UnityEngine_Vector3_o
   pivotPosition, UnityEngine_Vector3_o viewOffset,
   Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* belongingBottle,
   Modules_Contexts_GamePlay_Levels_Scripts_Cell_Cell_o* belongingCell, const MethodInfo* method);
    */

long * Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory__GetIcicleItem_23027b8
                 (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  byte bVar1;
  long *plVar2;
  
                    /* try { // try from 024027d4 to 025027e3 has its CatchHandler @ 024027e4 */
                    /* catch() { ... } // from try @ 02402760 with catch @ 024027e4
                       catch() { ... } // from try @ 024027d4 with catch @ 024027e4 */
                    /* try { // try from 024027e8 to 025027eb has its CatchHandler @ 024027f4 */
                    /* try { // try from 024027ec to 025027f7 has its CatchHandler @ 02402664 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 024027e8 with catch @ 024027f4
                        */
  if ((bRam0000000005c2a620 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057e8438);
    bRam0000000005c2a620 = 1;
  }
  plVar2 = (long *)Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory__GetItem_2301d8c
                             (param_1,param_2,param_3,param_7,0x1a,param_8);
  if (plVar2 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_057e8438 + 300);
    if ((bVar1 <= *(byte *)(*plVar2 + 300)) &&
       (*(long *)(*(long *)(*plVar2 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_057e8438)) {
      Modules_Contexts_GamePlay_Board_Items_Scripts_Icicle_IcicleItem__Prepare_274cd40
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

