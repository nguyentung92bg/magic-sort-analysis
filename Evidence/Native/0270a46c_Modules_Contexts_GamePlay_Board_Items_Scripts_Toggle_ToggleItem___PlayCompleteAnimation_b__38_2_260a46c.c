/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Toggle.ToggleItem$$<PlayCompleteAnimation>b__38_2
void Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItem___PlayCompleteAnimation_b__38_2 (Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Board.Items.Scripts.Toggle.ToggleItem$$<PlayCompleteAnimation>b__38_2
   void 
   Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItem___PlayCompleteAnimation_b__38_2
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItem_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItem___PlayCompleteAnimation_b__38_2_260a46c
               (long param_1)

{
  long *plVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  lVar2 = *(long *)(param_1 + 0x50);
  if ((lVar2 != 0) && (*(long *)(param_1 + 0x60) != 0)) {
    auVar3 = Modules_Infrastructure_UI_Common_Scripts_SortingService__GetBottleSittingSorting_4002958
                       (*(long *)(param_1 + 0x60),*(undefined4 *)(lVar2 + 0xc0),0);
    Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__SetSorting_249388c
              (lVar2,auVar3._0_8_,auVar3._8_8_,0);
    plVar1 = *(long **)(param_1 + 0x48);
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0270a4c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x1c8))(plVar1,*(undefined8 *)(*plVar1 + 0x1d0));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

