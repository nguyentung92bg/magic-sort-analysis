/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Rainbow.RainbowRules$$IsRainbowMove
bool Modules_Contexts_GamePlay_Board_Items_Scripts_Rainbow_RainbowRules__IsRainbowMove (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* originBottle, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* targetBottle, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Rainbow.RainbowRules$$IsRainbowMove
   bool Modules_Contexts_GamePlay_Board_Items_Scripts_Rainbow_RainbowRules__IsRainbowMove
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* originBottle,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* targetBottle, const MethodInfo*
   method); */

bool Modules_Contexts_GamePlay_Board_Items_Scripts_Rainbow_RainbowRules__IsRainbowMove_2745548
               (long param_1,long param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  puVar1 = PTR_DAT_057c02d0;
  if ((bRam0000000005c2c698 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057c02d0);
    bRam0000000005c2c698 = 1;
  }
  if (**(char **)(*(long *)puVar1 + 0xb8) == '\0') {
    return false;
  }
  if ((param_2 == 0) ||
     (lVar5 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetTopWater_2495584
                        (param_2,0), param_1 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  lVar6 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetTopWater_2495584
                    (param_1,0);
  if (lVar5 == 0) {
    return false;
  }
  if (lVar6 == 0) {
    return false;
  }
  iVar2 = Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__GetColorId_1e99788(lVar5,0);
  iVar3 = Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__GetColorId_1e99788(lVar6,0);
  puVar1 = PTR_DAT_057c02d0;
  if (iVar2 == iVar3) {
    return false;
  }
  if ((bRam0000000005c2c697 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057c02d0);
    bRam0000000005c2c697 = 1;
  }
  if (**(char **)(*(long *)puVar1 + 0xb8) == '\0') {
    return false;
  }
  if (param_2 != 0) {
    uVar4 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__HasBlocker_2498528
                      (param_2,5,0);
    if ((uVar4 & 1) != 0) {
      return false;
    }
    uVar4 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__HasBlocker_2498528
                      (param_2,8,0);
    if ((uVar4 & 1) != 0) {
      return false;
    }
    uVar4 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__HasBlocker_2498528
                      (param_2,0x18,0);
    if ((uVar4 & 1) != 0) {
      return false;
    }
    if (*(char *)(param_2 + 0xec) != '\0') {
      return false;
    }
    lVar5 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetTopWater_2495584
                      (param_2,0);
    if ((lVar5 != 0) && (*(char *)(lVar5 + 0x55) != '\0')) {
      return true;
    }
    if (param_1 != 0) {
      lVar5 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetTopWater_2495584
                        (param_1,0);
      if (lVar5 != 0) {
        return *(char *)(lVar5 + 0x55) != '\0';
      }
      return false;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

