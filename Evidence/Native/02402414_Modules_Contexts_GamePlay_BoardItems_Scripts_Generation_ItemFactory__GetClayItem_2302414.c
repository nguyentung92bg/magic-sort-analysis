/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Generation.ItemFactory$$GetClayItem
Modules_Contexts_GamePlay_BoardItems_Scripts_Clay_ClayItem_o* Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory__GetClayItem (Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory_o* __this, Modules_Contexts_GamePlay_Board_Common_Scripts_ITransform_o* parent, UnityEngine_Vector3_o pivotPosition, UnityEngine_Vector3_o viewOffset, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* belongingBottle, int32_t blockerVariant, bool isNewParticleEnabled, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Generation.ItemFactory$$GetClayItem
   Modules_Contexts_GamePlay_BoardItems_Scripts_Clay_ClayItem_o*
   Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory__GetClayItem
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory_o* __this,
   Modules_Contexts_GamePlay_Board_Common_Scripts_ITransform_o* parent, UnityEngine_Vector3_o
   pivotPosition, UnityEngine_Vector3_o viewOffset,
   Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* belongingBottle, int32_t
   blockerVariant, bool isNewParticleEnabled, const MethodInfo* method); */

long * Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory__GetClayItem_2302414
                 (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined4 param_12,
                 uint param_13)

{
  byte bVar1;
  long *plVar2;
  
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 024023f4 with catch @ 0240246c
                       try { // try from 0240246c to 02502483 has its CatchHandler @ 0240239c */
  if ((bRam0000000005c2a61d & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057aaae0);
                    /* try { // try from 02402484 to 0250249b has its CatchHandler @ 02402508 */
    bRam0000000005c2a61d = 1;
  }
                    /* try { // try from 0240249c to 025024f7 has its CatchHandler @ 0240239c */
  plVar2 = (long *)Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory__GetItem_2301d8c
                             (param_1,param_2,param_3,param_7,5,param_8);
  if (plVar2 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_057aaae0 + 300);
    if ((bVar1 <= *(byte *)(*plVar2 + 300)) &&
       (*(long *)(*(long *)(*plVar2 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_057aaae0)) {
                    /* try { // try from 024024f8 to 02502507 has its CatchHandler @ 02402508 */
                    /* catch() { ... } // from try @ 02402484 with catch @ 02402508
                       catch() { ... } // from try @ 024024f8 with catch @ 02402508 */
      Modules_Contexts_GamePlay_BoardItems_Scripts_Clay_ClayItem__Prepare_2491550
                (param_4,param_5,param_6,plVar2,param_9,param_10,param_11,param_12,param_13 & 1,0);
                    /* try { // try from 0240250c to 0250250f has its CatchHandler @ 02402518 */
                    /* try { // try from 02402510 to 0250251b has its CatchHandler @ 0240239c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0240250c with catch @ 02402518
                        */
      (**(code **)(*plVar2 + 0x1c8))(plVar2,*(undefined8 *)(*plVar2 + 0x1d0));
      return plVar2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d1288(plVar2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

