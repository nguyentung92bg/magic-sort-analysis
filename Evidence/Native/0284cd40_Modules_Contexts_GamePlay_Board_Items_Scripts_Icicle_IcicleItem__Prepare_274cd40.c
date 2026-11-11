/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Icicle.IcicleItem$$Prepare
void Modules_Contexts_GamePlay_Board_Items_Scripts_Icicle_IcicleItem__Prepare (Modules_Contexts_GamePlay_Board_Items_Scripts_Icicle_IcicleItem_o* __this, UnityEngine_Vector3_o viewOffset, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* belongingBottle, Modules_Contexts_GamePlay_Levels_Scripts_Cell_Cell_o* belongingCell, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Icicle.IcicleItem$$Prepare
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Icicle_IcicleItem__Prepare
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Icicle_IcicleItem_o* __this, UnityEngine_Vector3_o
   viewOffset, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* belongingBottle,
   Modules_Contexts_GamePlay_Levels_Scripts_Cell_Cell_o* belongingCell, const MethodInfo* method);
    */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Icicle_IcicleItem__Prepare_274cd40
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4,
               undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  
  *(undefined8 *)(param_4 + 0x50) = param_7;
  FUN_012d0d74((undefined8 *)(param_4 + 0x50),param_7);
  *(undefined8 *)(param_4 + 0x58) = param_8;
  FUN_012d0d74((undefined8 *)(param_4 + 0x58),param_8);
  lVar1 = *(long *)(param_4 + 0x48);
  *(undefined4 *)(param_4 + 0x34) = param_1;
  *(undefined4 *)(param_4 + 0x38) = param_2;
  *(undefined4 *)(param_4 + 0x3c) = param_3;
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if (*(long *)(lVar1 + 0x20) != 0) {
    UnityEngine_Renderer__set_sortingOrder_40826fc(*(long *)(lVar1 + 0x20),param_6,0);
    lVar1 = *(long *)(lVar1 + 0x20);
    if (lVar1 != 0) {
      if (pcRam0000000005c39c20 == (code *)0x0) {
        pcRam0000000005c39c20 = (code *)FUN_012d0d84(&UNK_043eaefb);
      }
                    /* WARNING: Could not recover jumptable at 0x0418263c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000005c39c20)(lVar1,param_5);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

