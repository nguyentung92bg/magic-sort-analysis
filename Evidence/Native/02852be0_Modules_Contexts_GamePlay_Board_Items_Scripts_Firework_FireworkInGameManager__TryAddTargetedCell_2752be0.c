/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Firework.FireworkInGameManager$$TryAddTargetedCell
bool Modules_Contexts_GamePlay_Board_Items_Scripts_Firework_FireworkInGameManager__TryAddTargetedCell (Modules_Contexts_GamePlay_Board_Items_Scripts_Firework_FireworkInGameManager_o* __this, Modules_Contexts_GamePlay_Levels_Scripts_Cell_Cell_o* cell, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Board.Items.Scripts.Firework.FireworkInGameManager$$TryAddTargetedCell
   bool 
   Modules_Contexts_GamePlay_Board_Items_Scripts_Firework_FireworkInGameManager__TryAddTargetedCell
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Firework_FireworkInGameManager_o* __this,
   Modules_Contexts_GamePlay_Levels_Scripts_Cell_Cell_o* cell, const MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_Board_Items_Scripts_Firework_FireworkInGameManager__TryAddTargetedCell_2752be0
          (long param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  
  if ((bRam0000000005c2c70a & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057c9fa8);
    bRam0000000005c2c70a = 1;
  }
  uVar2 = Modules_Contexts_GamePlay_Board_Items_Scripts_Firework_FireworkInGameManager__IsTargetedCell_2752cac
                    (param_1,param_2);
  if ((uVar2 & 1) == 0) {
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != 0) {
      lVar4 = *(long *)(lVar3 + 0x10);
      lVar6 = *(long *)PTR_DAT_057c9fa8;
      *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      if (lVar4 != 0) {
        uVar1 = *(uint *)(lVar3 + 0x18);
        if (uVar1 < *(uint *)(lVar4 + 0x18)) {
          *(uint *)(lVar3 + 0x18) = uVar1 + 1;
          puVar5 = (undefined8 *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
          *puVar5 = param_2;
          FUN_012d0d74(puVar5,param_2);
        }
        else {
          (**(code **)(*(long *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x58) + 8))
                    (lVar3,param_2);
        }
        return 1;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  return 0;
}

