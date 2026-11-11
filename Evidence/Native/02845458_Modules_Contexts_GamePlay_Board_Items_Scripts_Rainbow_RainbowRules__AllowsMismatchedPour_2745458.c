/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Rainbow.RainbowRules$$AllowsMismatchedPour
bool Modules_Contexts_GamePlay_Board_Items_Scripts_Rainbow_RainbowRules__AllowsMismatchedPour (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* originBottle, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* targetBottle, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Rainbow.RainbowRules$$AllowsMismatchedPour
   bool Modules_Contexts_GamePlay_Board_Items_Scripts_Rainbow_RainbowRules__AllowsMismatchedPour
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* originBottle,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* targetBottle, const MethodInfo*
   method); */

bool Modules_Contexts_GamePlay_Board_Items_Scripts_Rainbow_RainbowRules__AllowsMismatchedPour_2745458
               (long param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_057c02d0;
  if ((bRam0000000005c2c697 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057c02d0);
    bRam0000000005c2c697 = 1;
  }
  if (**(char **)(*(long *)puVar1 + 0xb8) == '\0') {
    return false;
  }
  if (param_2 != 0) {
    uVar2 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__HasBlocker_2498528
                      (param_2,5,0);
    if ((uVar2 & 1) != 0) {
      return false;
    }
    uVar2 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__HasBlocker_2498528
                      (param_2,8,0);
    if ((uVar2 & 1) != 0) {
      return false;
    }
    uVar2 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__HasBlocker_2498528
                      (param_2,0x18,0);
    if ((uVar2 & 1) != 0) {
      return false;
    }
    if (*(char *)(param_2 + 0xec) != '\0') {
      return false;
    }
    lVar3 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetTopWater_2495584
                      (param_2,0);
    if ((lVar3 != 0) && (*(char *)(lVar3 + 0x55) != '\0')) {
      return true;
    }
    if (param_1 != 0) {
      lVar3 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetTopWater_2495584
                        (param_1,0);
      if (lVar3 != 0) {
        return *(char *)(lVar3 + 0x55) != '\0';
      }
      return false;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

