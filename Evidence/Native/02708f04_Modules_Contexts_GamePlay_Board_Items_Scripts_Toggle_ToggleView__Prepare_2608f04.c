/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Toggle.ToggleView$$Prepare
void Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleView__Prepare (Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleView_o* __this, Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItemSorting_o toggleItemSorting, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* belongingBottle, bool isOn, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Toggle.ToggleView$$Prepare
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleView__Prepare
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleView_o* __this,
   Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItemSorting_o toggleItemSorting,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* belongingBottle, bool isOn,
   const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleView__Prepare_2608f04
               (long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  undefined1 auStack_90 [96];
  
  *(undefined8 *)(param_1 + 0x110) = param_3;
  FUN_012d0d74(param_1 + 0x110,param_3);
  func_0x01038a30(param_1 + 0xa0,param_2,0x60);
  FUN_012d0d74(param_1 + 0xa0,0);
  func_0x01037ce0(auStack_90,param_2,0x60);
  Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleView__SetInitialState_2609c24
            (param_1,auStack_90,param_4 & 1);
  return;
}

