/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Curtain.EditorCurtainView$$Prepare
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Curtain_EditorCurtainView__Prepare (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Curtain_EditorCurtainView_o* __this, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, UnityEngine_Color_o color, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Curtain.EditorCurtainView$$Prepare
   void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Curtain_EditorCurtainView__Prepare
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Curtain_EditorCurtainView_o* __this,
   Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, UnityEngine_Color_o color, const
   MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Curtain_EditorCurtainView__Prepare_3dddb30
               (long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x28) != 0) {
    Modules_Contexts_GamePlay_BoardItems_Scripts_Common_Objective_ObjectiveView__SetColor_2307a90
              (*(long *)(param_1 + 0x28),0);
    if (*(long *)(param_1 + 0x20) != 0) {
      UnityEngine_Renderer__set_sortingOrder_40826fc(*(long *)(param_1 + 0x20),param_3,0);
      lVar1 = *(long *)(param_1 + 0x28);
      if (lVar1 != 0) {
        if (*(long *)(lVar1 + 0x18) != 0) {
          UnityEngine_Renderer__set_sortingOrder_40826fc(*(long *)(lVar1 + 0x18),param_3 + 1,0);
          if (*(long *)(lVar1 + 0x20) != 0) {
            UnityEngine_Renderer__set_sortingOrder_40826fc(*(long *)(lVar1 + 0x20),param_3 + 2,0);
            lVar1 = *(long *)(lVar1 + 0x28);
            if (lVar1 != 0) {
              if (pcRam0000000005c39c40 == (code *)0x0) {
                pcRam0000000005c39c40 = (code *)FUN_012d0d84(&UNK_043eafc0);
              }
                    /* WARNING: Could not recover jumptable at 0x0418273c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*pcRam0000000005c39c40)(lVar1,param_3 + 3);
              return;
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

