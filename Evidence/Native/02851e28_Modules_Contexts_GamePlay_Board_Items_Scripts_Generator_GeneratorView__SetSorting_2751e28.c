/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Generator.GeneratorView$$SetSorting
void Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorView__SetSorting (Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorView_o* __this, Modules_Infrastructure_UI_Common_Scripts_Sorting_o frontSorting, Modules_Infrastructure_UI_Common_Scripts_Sorting_o backSorting, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Generator.GeneratorView$$SetSorting
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorView__SetSorting
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorView_o* __this,
   Modules_Infrastructure_UI_Common_Scripts_Sorting_o frontSorting,
   Modules_Infrastructure_UI_Common_Scripts_Sorting_o backSorting, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorView__SetSorting_2751e28
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined4 param_5)

{
  long lVar1;
  
  Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorView__SetFrontSorting_274f920();
  if (*(long *)(param_1 + 0x28) != 0) {
    UnityEngine_Rendering_SortingGroup__set_sortingOrder_3d5ef00
              (*(long *)(param_1 + 0x28),param_5,0);
    lVar1 = *(long *)(param_1 + 0x28);
    if (lVar1 != 0) {
      if (pcRam0000000005c37828 == (code *)0x0) {
        pcRam0000000005c37828 = (code *)FUN_012d0d84(&UNK_043e4d03);
      }
                    /* WARNING: Could not recover jumptable at 0x03e5ee84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000005c37828)(lVar1,param_4);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

