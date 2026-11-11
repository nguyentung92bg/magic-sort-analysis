/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottlePositionAdjuster$$GetIntersectedLongBottleCountWithRow
int32_t Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottlePositionAdjuster__GetIntersectedLongBottleCountWithRow (System_Collections_Generic_List_List_BottleItem___o* board, int32_t rowIndex, int32_t distanceBetweenRowsAsUnit, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottlePositionAdjuster$$GetIntersectedLongBottleCountWithRow
   int32_t
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottlePositionAdjuster__GetIntersectedLongBottleCountWithRow
   (System_Collections_Generic_List_List_BottleItem___o* board, int32_t rowIndex, int32_t
   distanceBetweenRowsAsUnit, const MethodInfo* method); */

undefined4
Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottlePositionAdjuster__GetIntersectedLongBottleCountWithRow_22fb1e4
          (undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  long lVar1;
  
  if ((bRam0000000005c2a5ef & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05813f90);
    bRam0000000005c2a5ef = 1;
  }
  lVar1 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottlePositionAdjuster__FindLongBottlesIntersectedWithRow_22fa87c
                    (param_1,param_2,param_3);
  if (lVar1 != 0) {
    return *(undefined4 *)(lVar1 + 0x18);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

