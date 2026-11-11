/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Generation.ItemFactory$$GetIceItem
Modules_Contexts_GamePlay_Board_Items_Scripts_Ice_IceItem_o* Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory__GetIceItem (Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory_o* __this, Modules_Contexts_GamePlay_Board_Common_Scripts_ITransform_o* parent, UnityEngine_Vector3_o pivotPosition, UnityEngine_Vector3_o viewOffset, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, int32_t width, int32_t id, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* rootBottle, System_Collections_Generic_List_BottleItem__o* belongingBottles, bool useShadow, bool isNewParticleEnabled, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Generation.ItemFactory$$GetIceItem
   Modules_Contexts_GamePlay_Board_Items_Scripts_Ice_IceItem_o*
   Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory__GetIceItem
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory_o* __this,
   Modules_Contexts_GamePlay_Board_Common_Scripts_ITransform_o* parent, UnityEngine_Vector3_o
   pivotPosition, UnityEngine_Vector3_o viewOffset,
   Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, int32_t width, int32_t id,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* rootBottle,
   System_Collections_Generic_List_BottleItem__o* belongingBottles, bool useShadow, bool
   isNewParticleEnabled, const MethodInfo* method); */

long * Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory__GetIceItem_2302a10
                 (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10,undefined4 param_11,undefined4 param_12,
                 undefined8 param_13,undefined8 param_14,byte param_15,byte param_16)

{
  byte bVar1;
  long *plVar2;
  
  if ((bRam0000000005c2a622 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0580dab8);
    bRam0000000005c2a622 = 1;
  }
  plVar2 = (long *)Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory__GetItem_2301d8c
                             (param_1,param_2,param_3,param_7,8,param_8);
  if (plVar2 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_0580dab8 + 300);
    if ((bVar1 <= *(byte *)(*plVar2 + 300)) &&
       (*(long *)(*(long *)(*plVar2 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_0580dab8)) {
      Modules_Contexts_GamePlay_Board_Items_Scripts_Ice_IceItem__Prepare_274d3dc
                (param_4,param_5,param_6,plVar2,param_9,param_10,param_11,param_12,param_13,param_14
                 ,param_15 & 1,param_16 & 1,0);
      (**(code **)(*plVar2 + 0x1c8))(plVar2,*(undefined8 *)(*plVar2 + 0x1d0));
      return plVar2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d1288(plVar2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

