/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Carpet.CarpetItem$$OnRevealSelected
void Modules_Contexts_GamePlay_Board_Items_Scripts_Carpet_CarpetItem__OnRevealSelected (Modules_Contexts_GamePlay_Board_Items_Scripts_Carpet_CarpetItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Carpet.CarpetItem$$OnRevealSelected
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Carpet_CarpetItem__OnRevealSelected
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Carpet_CarpetItem_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Carpet_CarpetItem__OnRevealSelected_2f5b060
               (long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  if (*(long *)(param_1 + 0x98) != 0) {
    auVar3 = Modules_Infrastructure_UI_Common_Scripts_SortingService__GetBottleAnimatingSorting_40029bc
                       (*(long *)(param_1 + 0x98),200,0);
    lVar1 = *(long *)(param_1 + 0x48);
    if (lVar1 != 0) {
      if ((*(long *)(lVar1 + 0x28) != 0) &&
         (lVar2 = *(long *)(*(long *)(lVar1 + 0x28) + 0x30), lVar2 != 0)) {
        UnityEngine_Rendering_SortingGroup__set_sortingOrder_3d5ef00
                  (lVar2,auVar3._8_8_ & 0xffffffff,0);
        if ((*(long *)(lVar1 + 0x28) != 0) &&
           (lVar1 = *(long *)(*(long *)(lVar1 + 0x28) + 0x30), lVar1 != 0)) {
          if (pcRam0000000005c37828 == (code *)0x0) {
            pcRam0000000005c37828 = (code *)FUN_012d0d84(&UNK_043e4d03);
          }
                    /* WARNING: Could not recover jumptable at 0x03e5ee84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam0000000005c37828)(lVar1,auVar3._0_8_);
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

