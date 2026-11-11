/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Generation.ItemFactory$$GetPlasterItem
Modules_Contexts_GamePlay_BoardItems_Scripts_Plaster_PlasterItem_o* Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory__GetPlasterItem (Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory_o* __this, Modules_Contexts_GamePlay_Board_Common_Scripts_ITransform_o* parent, UnityEngine_Vector3_o pivotPosition, UnityEngine_Vector3_o viewOffset, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* belongingBottle, int32_t blockerVariant, bool isNewParticleEnabled, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Generation.ItemFactory$$GetPlasterItem
   Modules_Contexts_GamePlay_BoardItems_Scripts_Plaster_PlasterItem_o*
   Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory__GetPlasterItem
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory_o* __this,
   Modules_Contexts_GamePlay_Board_Common_Scripts_ITransform_o* parent, UnityEngine_Vector3_o
   pivotPosition, UnityEngine_Vector3_o viewOffset,
   Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* belongingBottle, int32_t
   blockerVariant, bool isNewParticleEnabled, const MethodInfo* method); */

long * Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory__GetPlasterItem_23022d8
                 (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined4 param_12,
                 uint param_13)

{
  byte bVar1;
  long *plVar2;
  
  if ((bRam0000000005c2a61c & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057a2f10);
    bRam0000000005c2a61c = 1;
  }
  plVar2 = (long *)Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory__GetItem_2301d8c
                             (param_1,param_2,param_3,param_7,6,param_8);
  if (plVar2 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_057a2f10 + 300);
                    /* try { // try from 0240239c to 025023f3 has its CatchHandler @ 0240239c
                       catch() { ... } // from try @ 0240239c with catch @ 0240239c
                       catch() { ... } // from try @ 0240246c with catch @ 0240239c
                       catch() { ... } // from try @ 0240249c with catch @ 0240239c
                       catch() { ... } // from try @ 02402510 with catch @ 0240239c */
    if ((bVar1 <= *(byte *)(*plVar2 + 300)) &&
       (*(long *)(*(long *)(*plVar2 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_057a2f10)) {
      Modules_Contexts_GamePlay_BoardItems_Scripts_Plaster_PlasterItem__Prepare_248d7b0
                (param_4,param_5,param_6,plVar2,param_9,param_10,param_11,param_12,param_13 & 1,0);
      (**(code **)(*plVar2 + 0x1c8))(plVar2,*(undefined8 *)(*plVar2 + 0x1d0));
                    /* try { // try from 024023f4 to 0250246b has its CatchHandler @ 0240246c */
      return plVar2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d1288(plVar2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

