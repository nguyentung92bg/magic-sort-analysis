/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Toggle.ToggleItem$$CheckMoveIsRepetitive
bool Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItem__CheckMoveIsRepetitive (Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItem_o* __this, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* originBottle, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* targetBottle, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Toggle.ToggleItem$$CheckMoveIsRepetitive
   bool Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItem__CheckMoveIsRepetitive
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItem_o* __this,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* originBottle,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* targetBottle, const MethodInfo*
   method); */

bool Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItem__CheckMoveIsRepetitive_260942c
               (undefined8 param_1,long param_2,long param_3)

{
  int iVar1;
  int iVar2;
  
  if ((param_2 != 0) &&
     (iVar1 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetTopWaterHeight_2494c34
                        (param_2,0), param_3 != 0)) {
    iVar2 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetEmptyCellCount_2494700
                      (param_3,0);
    return iVar2 < iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

