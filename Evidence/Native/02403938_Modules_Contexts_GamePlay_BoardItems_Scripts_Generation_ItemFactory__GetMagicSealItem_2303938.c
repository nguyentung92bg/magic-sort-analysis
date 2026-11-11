/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Generation.ItemFactory$$GetMagicSealItem
Modules_Contexts_GamePlay_Board_Items_Scripts_MagicSeal_MagicSealItem_o* Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory__GetMagicSealItem (Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory_o* __this, Modules_Contexts_GamePlay_Board_Common_Scripts_ITransform_o* parent, UnityEngine_Vector3_o pivotPosition, UnityEngine_Vector3_o viewOffset, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* belongingBottle, Modules_Contexts_GamePlay_Levels_Scripts_Cell_Cell_o* belongingCell, int32_t cellIndex, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Generation.ItemFactory$$GetMagicSealItem
   Modules_Contexts_GamePlay_Board_Items_Scripts_MagicSeal_MagicSealItem_o*
   Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory__GetMagicSealItem
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory_o* __this,
   Modules_Contexts_GamePlay_Board_Common_Scripts_ITransform_o* parent, UnityEngine_Vector3_o
   pivotPosition, UnityEngine_Vector3_o viewOffset,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* belongingBottle,
   Modules_Contexts_GamePlay_Levels_Scripts_Cell_Cell_o* belongingCell, int32_t cellIndex, const
   MethodInfo* method); */

long * Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory__GetMagicSealItem_2303938
                 (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10,undefined4 param_11)

{
  byte bVar1;
  long *plVar2;
  
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0240392c with catch @ 02403938
                        */
                    /* try { // try from 0240393c to 02503c4b has its CatchHandler @ 0240393c
                       catch() { ... } // from try @ 0240393c with catch @ 0240393c
                       catch() { ... } // from try @ 02403d34 with catch @ 0240393c
                       catch() { ... } // from try @ 02403df8 with catch @ 0240393c
                       catch() { ... } // from try @ 02403e94 with catch @ 0240393c */
  if ((bRam0000000005c2a62c & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057c6728);
    bRam0000000005c2a62c = 1;
  }
  plVar2 = (long *)Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory__GetItem_2301d8c
                             (param_1,param_2,param_3,param_7,0x11,param_8);
  if (plVar2 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_057c6728 + 300);
    if ((bVar1 <= *(byte *)(*plVar2 + 300)) &&
       (*(long *)(*(long *)(*plVar2 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_057c6728)) {
      Modules_Contexts_GamePlay_Board_Items_Scripts_MagicSeal_MagicSealItem__Prepare_274b484
                (param_4,param_5,param_6,plVar2,param_9,param_10,param_11,0);
      (**(code **)(*plVar2 + 0x1c8))(plVar2,*(undefined8 *)(*plVar2 + 0x1d0));
      return plVar2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d1288(plVar2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

