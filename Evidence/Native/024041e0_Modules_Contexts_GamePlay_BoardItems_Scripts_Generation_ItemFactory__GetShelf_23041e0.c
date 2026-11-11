/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Generation.ItemFactory$$GetShelf
Modules_Contexts_GamePlay_Board_Items_Scripts_Shelf_ShelfItem_o* Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory__GetShelf (Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory_o* __this, Modules_Contexts_GamePlay_Board_Common_Scripts_ITransform_o* parent, System_Collections_Generic_List_BottleItem__o* belongingBottles, bool hasBottleLeftSideOfSegment, bool hasBottleRightSideOfSegment, int32_t levelDifficultyType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Generation.ItemFactory$$GetShelf
   Modules_Contexts_GamePlay_Board_Items_Scripts_Shelf_ShelfItem_o*
   Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory__GetShelf
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory_o* __this,
   Modules_Contexts_GamePlay_Board_Common_Scripts_ITransform_o* parent,
   System_Collections_Generic_List_BottleItem__o* belongingBottles, bool hasBottleLeftSideOfSegment,
   bool hasBottleRightSideOfSegment, int32_t levelDifficultyType, const MethodInfo* method); */

long * Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory__GetShelf_23041e0
                 (undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4,uint param_5
                 ,undefined4 param_6)

{
  byte bVar1;
  long *plVar2;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  if ((bRam0000000005c2a633 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057e34b8);
    bRam0000000005c2a633 = 1;
  }
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_60 = 0;
  Modules_Contexts_GamePlay_Board_Items_Scripts_Shelf_ShelfUtil__CalculateShelfBounds_261339c
            (&uStack_80,param_3,param_4 & 1,param_5 & 1,0);
  uStack_58 = uStack_78;
  uStack_60 = uStack_80;
  uStack_50 = uStack_70;
  UnityEngine_Bounds__get_center_38374e8(&uStack_60,0);
  plVar2 = (long *)Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory__GetItem_2301d8c
                             (param_1,0x16,param_2);
  if (plVar2 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_057e34b8 + 300);
    if ((bVar1 <= *(byte *)(*plVar2 + 300)) &&
       (*(long *)(*(long *)(*plVar2 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_057e34b8)) {
      uStack_78 = uStack_58;
      uStack_80 = uStack_60;
      uStack_70 = uStack_50;
      uStack_98 = uStack_58;
      uStack_a0 = uStack_60;
      uStack_90 = uStack_50;
      Modules_Contexts_GamePlay_Board_Items_Scripts_Shelf_ShelfItem__Prepare_261328c
                (plVar2,&uStack_a0,param_6,0);
      (**(code **)(*plVar2 + 0x1c8))(plVar2,*(undefined8 *)(*plVar2 + 0x1d0));
      return plVar2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d1288(plVar2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

