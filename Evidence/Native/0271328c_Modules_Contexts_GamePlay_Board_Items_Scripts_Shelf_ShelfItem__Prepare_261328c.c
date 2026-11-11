/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Shelf.ShelfItem$$Prepare
void Modules_Contexts_GamePlay_Board_Items_Scripts_Shelf_ShelfItem__Prepare (Modules_Contexts_GamePlay_Board_Items_Scripts_Shelf_ShelfItem_o* __this, UnityEngine_Bounds_o bounds, int32_t levelDifficultyType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Shelf.ShelfItem$$Prepare
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Shelf_ShelfItem__Prepare
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Shelf_ShelfItem_o* __this, UnityEngine_Bounds_o
   bounds, int32_t levelDifficultyType, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Shelf_ShelfItem__Prepare_261328c
               (long param_1,undefined8 *param_2)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
                    /* try { // try from 02713294 to 028132bb has its CatchHandler @ 02713450 */
  uStack_40 = param_2[2];
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_30 = uStack_50;
  uStack_28 = uStack_48;
  uStack_20 = uStack_40;
  if (*(long *)(param_1 + 0x40) != 0) {
    Modules_Contexts_GamePlay_Board_Items_Scripts_Shelf_ShelfView__Prepare_26132d4
              (*(long *)(param_1 + 0x40),&uStack_50);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

