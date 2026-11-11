/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Woodbox.WoodboxItem$$OnRevealDeselected
void Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxItem__OnRevealDeselected (Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Woodbox.WoodboxItem$$OnRevealDeselected
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxItem__OnRevealDeselected
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxItem_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxItem__OnRevealDeselected_230bef8
               (long param_1)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((bRam0000000005c2a677 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057af1b8);
    bRam0000000005c2a677 = 1;
  }
  uStack_30 = 0;
  uStack_28 = 0;
  if (*(long *)(param_1 + 0x68) != 0) {
    auVar2 = Modules_Infrastructure_UI_Common_Scripts_SortingService__GetBlockerFrontSorting_4002a20
                       (*(long *)(param_1 + 0x68),0);
    puVar1 = PTR_DAT_057af1b8;
    if (*(long *)(param_1 + 0x48) != 0) {
      Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxView__SetSorting_2607ee0
                (*(long *)(param_1 + 0x48),auVar2._0_8_,auVar2._8_8_,0);
      Modules_Infrastructure_UI_Common_Scripts_Sorting___ctor_4002818
                (&uStack_30,*(undefined8 *)puVar1,0,0);
      if (*(long *)(param_1 + 0x48) != 0) {
        Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxView__SetBackSorting_260869c
                  (*(long *)(param_1 + 0x48),uStack_30,uStack_28,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

