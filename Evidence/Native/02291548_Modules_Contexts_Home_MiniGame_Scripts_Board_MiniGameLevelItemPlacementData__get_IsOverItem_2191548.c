/* IL2CPP: Modules.Contexts.Home.MiniGame.Scripts.Board.MiniGameLevelItemPlacementData$$get_IsOverItem
bool Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameLevelItemPlacementData__get_IsOverItem (Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameLevelItemPlacementData_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MiniGame.Scripts.Board.MiniGameLevelItemPlacementData$$get_IsOverItem
   bool Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameLevelItemPlacementData__get_IsOverItem
   (Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameLevelItemPlacementData_o* __this, const
   MethodInfo* method); */

bool Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameLevelItemPlacementData__get_IsOverItem_2191548
               (long param_1)

{
  if (*(uint *)(param_1 + 0x10) == 0xf) {
    return true;
  }
  return (*(uint *)(param_1 + 0x10) | 1) == 0x11;
}

