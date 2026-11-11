/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Firework.FireworkInGameManager$$ReleaseTargetedCell
void Modules_Contexts_GamePlay_Board_Items_Scripts_Firework_FireworkInGameManager__ReleaseTargetedCell (Modules_Contexts_GamePlay_Board_Items_Scripts_Firework_FireworkInGameManager_o* __this, Modules_Contexts_GamePlay_Levels_Scripts_Cell_Cell_o* cell, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Board.Items.Scripts.Firework.FireworkInGameManager$$ReleaseTargetedCell
   void 
   Modules_Contexts_GamePlay_Board_Items_Scripts_Firework_FireworkInGameManager__ReleaseTargetedCell
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Firework_FireworkInGameManager_o* __this,
   Modules_Contexts_GamePlay_Levels_Scripts_Cell_Cell_o* cell, const MethodInfo* method); */

ulong Modules_Contexts_GamePlay_Board_Items_Scripts_Firework_FireworkInGameManager__ReleaseTargetedCell_2752d04
                (long param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  if ((bRam0000000005c2c70b & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0579a1c8);
    bRam0000000005c2c70b = 1;
  }
  uVar2 = Modules_Contexts_GamePlay_Board_Items_Scripts_Firework_FireworkInGameManager__IsTargetedCell_2752cac
                    (param_1,param_2);
  if ((uVar2 & 1) == 0) {
    return uVar2;
  }
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  lVar4 = *(long *)PTR_DAT_0579a1c8;
  iVar1 = (**(code **)(*(long *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0xa0) + 8))
                    (lVar3,param_2);
  if (-1 < iVar1) {
    (**(code **)(*(long *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x158) + 8))(lVar3,iVar1);
  }
  return (ulong)(-1 < iVar1);
}

