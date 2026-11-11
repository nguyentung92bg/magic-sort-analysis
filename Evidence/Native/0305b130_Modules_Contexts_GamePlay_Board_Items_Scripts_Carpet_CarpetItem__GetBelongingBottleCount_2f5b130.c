/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Carpet.CarpetItem$$GetBelongingBottleCount
int32_t Modules_Contexts_GamePlay_Board_Items_Scripts_Carpet_CarpetItem__GetBelongingBottleCount (Modules_Contexts_GamePlay_Board_Items_Scripts_Carpet_CarpetItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Carpet.CarpetItem$$GetBelongingBottleCount
   int32_t Modules_Contexts_GamePlay_Board_Items_Scripts_Carpet_CarpetItem__GetBelongingBottleCount
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Carpet_CarpetItem_o* __this, const MethodInfo*
   method); */

undefined4
Modules_Contexts_GamePlay_Board_Items_Scripts_Carpet_CarpetItem__GetBelongingBottleCount_2f5b130
          (long param_1)

{
  undefined4 uVar1;
  
  if ((bRam0000000005c308d5 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05813f90);
    bRam0000000005c308d5 = 1;
  }
  if (*(long *)(param_1 + 0x58) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(long *)(param_1 + 0x58) + 0x18);
  }
  return uVar1;
}

