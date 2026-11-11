/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Duck.DuckView$$SetVfxSorting
void Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckView__SetVfxSorting (Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckView_o* __this, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Duck.DuckView$$SetVfxSorting
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckView__SetVfxSorting
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckView_o* __this,
   Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckView__SetVfxSorting_2f541f8
               (long param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x60) != 0) {
    UnityEngine_Behaviour__set_enabled_408d778(*(long *)(param_1 + 0x60),1,0);
    if (*(long *)(param_1 + 0x60) != 0) {
      UnityEngine_Rendering_SortingGroup__set_sortingLayerName_3d5ee44
                (*(long *)(param_1 + 0x60),param_2,0);
      lVar1 = *(long *)(param_1 + 0x60);
      if (lVar1 != 0) {
        if (pcRam0000000005c37840 == (code *)0x0) {
          pcRam0000000005c37840 = (code *)FUN_012d0d84(&UNK_043e4dbb);
        }
                    /* WARNING: Could not recover jumptable at 0x03e5ef40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000005c37840)(lVar1,param_3);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

