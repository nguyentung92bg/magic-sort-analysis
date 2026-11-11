/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Toggle.ToggleItem$$<PlayCompleteAnimation>b__38_0
void Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItem___PlayCompleteAnimation_b__38_0 (Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Board.Items.Scripts.Toggle.ToggleItem$$<PlayCompleteAnimation>b__38_0
   void 
   Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItem___PlayCompleteAnimation_b__38_0
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItem_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItem___PlayCompleteAnimation_b__38_0_260a398
               (long param_1)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  Modules_Infrastructure_Common_Scripts_Component_AItem__SetParent_40e9f48(param_1,0,0);
  if (*(long *)(param_1 + 0x60) != 0) {
    lVar1 = *(long *)(param_1 + 0x50);
    auVar2 = Modules_Infrastructure_UI_Common_Scripts_SortingService__GetBottleAnimatingSorting_40029bc
                       (*(long *)(param_1 + 0x60),0,0);
    if (lVar1 != 0) {
      Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__SetSorting_249388c
                (lVar1,auVar2._0_8_,auVar2._8_8_,0);
      if (*(long *)(param_1 + 0x48) != 0) {
        Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleView__PlayToggleDisappearInstant_260a418
                  ();
        if ((*(long *)(param_1 + 0x48) != 0) &&
           (lVar1 = *(long *)(*(long *)(param_1 + 0x48) + 0x30), lVar1 != 0)) {
          if (pcRam0000000005c35e30 == (code *)0x0) {
            pcRam0000000005c35e30 = (code *)FUN_012d0d84(&UNK_043e020e,0);
          }
                    /* WARNING: Could not recover jumptable at 0x03bbc604. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam0000000005c35e30)(lVar1,1);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

