/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Woodbox.WoodboxItem$$GetBelongingBottleCount
int32_t Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxItem__GetBelongingBottleCount (Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Board.Items.Scripts.Woodbox.WoodboxItem$$GetBelongingBottleCount
   int32_t
   Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxItem__GetBelongingBottleCount
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxItem_o* __this, const MethodInfo*
   method); */

undefined4
Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxItem__GetBelongingBottleCount_230be04
          (long param_1)

{
  if ((bRam0000000005c2a676 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05813f90);
    bRam0000000005c2a676 = 1;
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    return *(undefined4 *)(*(long *)(param_1 + 0x58) + 0x18);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

