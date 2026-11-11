/* IL2CPP: Modules.Contexts.Home.MiniGame.Scripts.Board.MiniGameBoardItem$$Initialize
void Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardItem__Initialize (Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardItem_o* __this, Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameItemData_o* itemData, Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameLevelItemPlacementData_o* itemPlacementData, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MiniGame.Scripts.Board.MiniGameBoardItem$$Initialize
   void Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardItem__Initialize
   (Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardItem_o* __this,
   Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameItemData_o* itemData,
   Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameLevelItemPlacementData_o* itemPlacementData,
   const MethodInfo* method); */

void Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardItem__Initialize_2187824
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
                    /* try { // try from 0228782c to 0238785b has its CatchHandler @ 0228829c */
  *(undefined8 *)(param_1 + 0x18) = param_2;
  FUN_012d0d74();
  puVar4 = (undefined8 *)(param_1 + 0x20);
  *puVar4 = param_3;
  if (iRam0000000005c3d478 != 0) {
    puVar1 = (ulong *)(((ulong)puVar4 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar4 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}

