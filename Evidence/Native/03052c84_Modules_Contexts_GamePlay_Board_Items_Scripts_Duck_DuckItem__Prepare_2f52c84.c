/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Duck.DuckItem$$Prepare
void Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckItem__Prepare (Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckItem_o* __this, UnityEngine_Vector3_o viewOffset, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseItem_o* duckHouseItem, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* belongingBottle, Modules_Contexts_GamePlay_Levels_Scripts_Cell_Cell_o* belongingCell, int32_t duckType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Duck.DuckItem$$Prepare
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckItem__Prepare
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckItem_o* __this, UnityEngine_Vector3_o
   viewOffset, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting,
   Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseItem_o* duckHouseItem,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* belongingBottle,
   Modules_Contexts_GamePlay_Levels_Scripts_Cell_Cell_o* belongingCell, int32_t duckType, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckItem__Prepare_2f52c84
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9,undefined4 param_10)

{
  *(undefined4 *)(param_4 + 0x88) = param_10;
  *(long *)(param_4 + 0x58) = param_9;
  FUN_012d0d74((long *)(param_4 + 0x58),param_9);
  *(undefined8 *)(param_4 + 0x50) = param_7;
  FUN_012d0d74((undefined8 *)(param_4 + 0x50),param_7);
  *(undefined8 *)(param_4 + 0x60) = param_8;
  FUN_012d0d74((undefined8 *)(param_4 + 0x60),param_8);
  *(undefined4 *)(param_4 + 0x34) = param_1;
  *(undefined4 *)(param_4 + 0x38) = param_2;
  *(undefined4 *)(param_4 + 0x3c) = param_3;
  *(undefined4 *)(param_4 + 0x78) = param_1;
  *(undefined4 *)(param_4 + 0x7c) = param_2;
  *(undefined4 *)(param_4 + 0x80) = param_3;
  if (*(long *)(param_4 + 0x48) != 0) {
    Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckView__Prepare_2f52d80
              (*(long *)(param_4 + 0x48),param_5,param_6,param_10);
    Modules_Infrastructure_Common_Scripts_Component_AItem__SetLocalRotation_40ea1a4
              (*(undefined4 *)(param_4 + 0x68),*(undefined4 *)(param_4 + 0x6c),
               *(undefined4 *)(param_4 + 0x70),*(undefined4 *)(param_4 + 0x74),param_4,0);
    if (param_9 != 0) {
      *(bool *)(param_4 + 0x84) = *(long *)(param_9 + 0x28) != 0;
      if (*(long *)(param_4 + 0x50) != 0) {
        Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseItem__AddDuckItem_2759374
                  (*(long *)(param_4 + 0x50),param_4,0);
        *(undefined1 *)(param_4 + 0x85) = 0;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

