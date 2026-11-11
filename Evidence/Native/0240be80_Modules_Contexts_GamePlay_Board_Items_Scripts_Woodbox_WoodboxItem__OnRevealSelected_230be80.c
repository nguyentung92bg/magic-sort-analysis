/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Woodbox.WoodboxItem$$OnRevealSelected
void Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxItem__OnRevealSelected (Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Woodbox.WoodboxItem$$OnRevealSelected
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxItem__OnRevealSelected
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxItem_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxItem__OnRevealSelected_230be80
               (long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  if (*(long *)(param_1 + 0x68) != 0) {
    auVar3 = Modules_Infrastructure_UI_Common_Scripts_SortingService__GetBottleAnimatingSorting_40029bc
                       (*(long *)(param_1 + 0x68),200,0);
    if (*(long *)(param_1 + 0x48) != 0) {
      Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxView__SetSorting_2607ee0
                (*(long *)(param_1 + 0x48),auVar3._0_8_,auVar3._8_8_,0);
      if (*(long *)(param_1 + 0x68) != 0) {
        auVar3 = Modules_Infrastructure_UI_Common_Scripts_SortingService__GetBottleAnimatingSorting_40029bc
                           (*(long *)(param_1 + 0x68),100,0);
        lVar1 = *(long *)(param_1 + 0x48);
        if (lVar1 != 0) {
          if ((*(long *)(lVar1 + 0x30) != 0) &&
             (lVar2 = *(long *)(*(long *)(lVar1 + 0x30) + 0x38), lVar2 != 0)) {
            UnityEngine_Rendering_SortingGroup__set_sortingOrder_3d5ef00
                      (lVar2,auVar3._8_8_ & 0xffffffff,0,0);
            if ((*(long *)(lVar1 + 0x30) != 0) &&
               (lVar1 = *(long *)(*(long *)(lVar1 + 0x30) + 0x38), lVar1 != 0)) {
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
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

