/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Generator.GeneratorView$$Prepare
void Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorView__Prepare (Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorView_o* __this, Modules_Infrastructure_UI_Common_Scripts_Sorting_o frontSorting, Modules_Infrastructure_UI_Common_Scripts_Sorting_o backSorting, System_String_o* countText, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Generator.GeneratorView$$Prepare
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorView__Prepare
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorView_o* __this,
   Modules_Infrastructure_UI_Common_Scripts_Sorting_o frontSorting,
   Modules_Infrastructure_UI_Common_Scripts_Sorting_o backSorting, System_String_o* countText, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorView__Prepare_274f79c
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  
  Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorView__SetFrontSorting_274f920();
  Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorView__SetBackSorting_274f964
            (param_1,param_4,param_5);
  plVar1 = *(long **)(param_1 + 0x30);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0284f7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x558))(plVar1,param_6,*(undefined8 *)(*plVar1 + 0x560));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

