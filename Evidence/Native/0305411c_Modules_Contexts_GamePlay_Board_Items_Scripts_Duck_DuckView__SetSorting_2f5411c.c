/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Duck.DuckView$$SetSorting
void Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckView__SetSorting (Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckView_o* __this, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Duck.DuckView$$SetSorting
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckView__SetSorting
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckView_o* __this,
   Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckView__SetSorting_2f5411c
               (long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x30) != 0) {
    UnityEngine_Renderer__set_sortingOrder_40826fc(*(long *)(param_1 + 0x30),param_3,0);
    if (*(long *)(param_1 + 0x30) != 0) {
      UnityEngine_Renderer__set_sortingLayerName_40825fc(*(long *)(param_1 + 0x30),param_2,0);
      if (*(long *)(param_1 + 0x38) != 0) {
        UnityEngine_Renderer__set_sortingLayerName_40825fc(*(long *)(param_1 + 0x38),param_2,0);
        lVar1 = *(long *)(param_1 + 0x38);
        if (lVar1 != 0) {
          if (pcRam0000000005c39c40 == (code *)0x0) {
            pcRam0000000005c39c40 = (code *)FUN_012d0d84(&UNK_043eafc0);
          }
                    /* WARNING: Could not recover jumptable at 0x0418273c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam0000000005c39c40)(lVar1,param_3 + -1);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

