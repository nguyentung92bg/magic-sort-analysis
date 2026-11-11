/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Firework.FireworkInGameManager$$IsTargetedCell
bool Modules_Contexts_GamePlay_Board_Items_Scripts_Firework_FireworkInGameManager__IsTargetedCell (Modules_Contexts_GamePlay_Board_Items_Scripts_Firework_FireworkInGameManager_o* __this, Modules_Contexts_GamePlay_Levels_Scripts_Cell_Cell_o* cell, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Board.Items.Scripts.Firework.FireworkInGameManager$$IsTargetedCell
   bool Modules_Contexts_GamePlay_Board_Items_Scripts_Firework_FireworkInGameManager__IsTargetedCell
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Firework_FireworkInGameManager_o* __this,
   Modules_Contexts_GamePlay_Levels_Scripts_Cell_Cell_o* cell, const MethodInfo* method); */

bool Modules_Contexts_GamePlay_Board_Items_Scripts_Firework_FireworkInGameManager__IsTargetedCell_2752cac
               (long param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  
  if ((bRam0000000005c2c70c & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05783420);
    bRam0000000005c2c70c = 1;
  }
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x18) == 0) {
      bVar1 = false;
    }
    else {
      iVar2 = (**(code **)(*(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_05783420 + 0x20) + 0xc0) +
                                    0xa0) + 8))(lVar3,param_2);
      bVar1 = iVar2 != -1;
    }
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

