/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.MagicSeal.MagicSealItem$$IsSelectableAsTarget
bool Modules_Contexts_GamePlay_Board_Items_Scripts_MagicSeal_MagicSealItem__IsSelectableAsTarget (Modules_Contexts_GamePlay_Board_Items_Scripts_MagicSeal_MagicSealItem_o* __this, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* originBottle, int32_t waterColorId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Board.Items.Scripts.MagicSeal.MagicSealItem$$IsSelectableAsTarget
   bool Modules_Contexts_GamePlay_Board_Items_Scripts_MagicSeal_MagicSealItem__IsSelectableAsTarget
   (Modules_Contexts_GamePlay_Board_Items_Scripts_MagicSeal_MagicSealItem_o* __this,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* originBottle, int32_t
   waterColorId, const MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_Board_Items_Scripts_MagicSeal_MagicSealItem__IsSelectableAsTarget_274b6e4
          (long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(param_1 + 0x58);
  if (lVar3 != 0) {
    iVar1 = -0x80000000;
    if (*(float *)(lVar3 + 0x14) != INFINITY) {
      iVar1 = (int)*(float *)(lVar3 + 0x14);
    }
    if (*(long *)(param_1 + 0x50) != 0) {
      lVar4 = *(long *)(lVar3 + 0x20);
      lVar3 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetTopWater_2495584
                        (*(long *)(param_1 + 0x50),0);
      if (lVar4 == lVar3) {
        if (*(long *)(param_1 + 0x50) == 0) goto LAB_0284b764;
        iVar2 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetFillAmount_2499c48
                          (*(long *)(param_1 + 0x50),0);
        if (iVar1 == iVar2 + -1) {
          return 0;
        }
      }
      return 1;
    }
  }
LAB_0284b764:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

