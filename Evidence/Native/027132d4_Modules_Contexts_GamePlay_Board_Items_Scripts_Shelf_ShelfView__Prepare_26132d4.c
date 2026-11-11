/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Shelf.ShelfView$$Prepare
void Modules_Contexts_GamePlay_Board_Items_Scripts_Shelf_ShelfView__Prepare (Modules_Contexts_GamePlay_Board_Items_Scripts_Shelf_ShelfView_o* __this, UnityEngine_Bounds_o bounds, int32_t levelDifficultyType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Shelf.ShelfView$$Prepare
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Shelf_ShelfView__Prepare
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Shelf_ShelfView_o* __this, UnityEngine_Bounds_o
   bounds, int32_t levelDifficultyType, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Shelf_ShelfView__Prepare_26132d4
               (long param_1,undefined8 param_2)

{
  long lVar1;
  
                    /* try { // try from 027132d4 to 02813333 has its CatchHandler @ 02713454 */
  lVar1 = *(long *)(param_1 + 0x20);
  UnityEngine_Bounds__get_size_3837648(param_2,0);
  if ((*(long *)(param_1 + 0x20) != 0) &&
     (UnityEngine_SpriteRenderer__get_size_4095c28(*(long *)(param_1 + 0x20),0), lVar1 != 0)) {
    if (pcRam0000000005c3a778 == (code *)0x0) {
      pcRam0000000005c3a778 = (code *)FUN_012d0d84(&UNK_043efb27,0);
    }
    (*pcRam0000000005c3a778)(lVar1,&stack0xffffffffffffffe8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

