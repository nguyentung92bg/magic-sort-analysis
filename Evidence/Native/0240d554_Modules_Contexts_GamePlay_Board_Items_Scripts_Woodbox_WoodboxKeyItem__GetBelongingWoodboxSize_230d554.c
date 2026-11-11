/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Woodbox.WoodboxKeyItem$$GetBelongingWoodboxSize
int32_t Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxKeyItem__GetBelongingWoodboxSize (Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxKeyItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Board.Items.Scripts.Woodbox.WoodboxKeyItem$$GetBelongingWoodboxSize
   int32_t
   Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxKeyItem__GetBelongingWoodboxSize
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxKeyItem_o* __this, const
   MethodInfo* method); */

undefined4
Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxKeyItem__GetBelongingWoodboxSize_230d554
          (long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x50);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if ((bRam0000000005c2a676 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05813f90);
    bRam0000000005c2a676 = 1;
  }
  lVar1 = *(long *)(lVar1 + 0x58);
  if (lVar1 != 0) {
    return *(undefined4 *)(lVar1 + 0x18);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

