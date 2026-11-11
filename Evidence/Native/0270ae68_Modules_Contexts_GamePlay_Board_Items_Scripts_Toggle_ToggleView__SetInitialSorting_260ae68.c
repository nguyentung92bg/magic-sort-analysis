/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Toggle.ToggleView$$SetInitialSorting
void Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleView__SetInitialSorting (Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleView_o* __this, Modules_Infrastructure_UI_Common_Scripts_Sorting_o toggleOpened, Modules_Infrastructure_UI_Common_Scripts_Sorting_o toggleClosed, Modules_Infrastructure_UI_Common_Scripts_Sorting_o capLid, Modules_Infrastructure_UI_Common_Scripts_Sorting_o neckRope, Modules_Infrastructure_UI_Common_Scripts_Sorting_o shortRope, Modules_Infrastructure_UI_Common_Scripts_Sorting_o curvedRope, bool isOpened, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Toggle.ToggleView$$SetInitialSorting
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleView__SetInitialSorting
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleView_o* __this,
   Modules_Infrastructure_UI_Common_Scripts_Sorting_o toggleOpened,
   Modules_Infrastructure_UI_Common_Scripts_Sorting_o toggleClosed,
   Modules_Infrastructure_UI_Common_Scripts_Sorting_o capLid,
   Modules_Infrastructure_UI_Common_Scripts_Sorting_o neckRope,
   Modules_Infrastructure_UI_Common_Scripts_Sorting_o shortRope,
   Modules_Infrastructure_UI_Common_Scripts_Sorting_o curvedRope, bool isOpened, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleView__SetInitialSorting_260ae68
               (long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
               undefined4 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8,
               undefined8 param_9,undefined4 param_10,undefined8 param_11,undefined4 param_12,
               undefined8 param_13,undefined4 param_14,byte param_15)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x78) != 0) {
    if ((param_15 & 1) == 0) {
      param_3 = param_5;
    }
    UnityEngine_Rendering_SortingGroup__set_sortingOrder_3d5ef00
              (*(long *)(param_1 + 0x78),param_3,0);
    if (*(long *)(param_1 + 0x78) != 0) {
      UnityEngine_Rendering_SortingGroup__set_sortingLayerName_3d5ee44
                (*(long *)(param_1 + 0x78),param_2,0);
      if (*(long *)(param_1 + 0x80) != 0) {
        UnityEngine_Rendering_SortingGroup__set_sortingOrder_3d5ef00
                  (*(long *)(param_1 + 0x80),param_7,0);
        if (*(long *)(param_1 + 0x80) != 0) {
          UnityEngine_Rendering_SortingGroup__set_sortingLayerName_3d5ee44
                    (*(long *)(param_1 + 0x80),param_6,0);
          if (*(long *)(param_1 + 0x88) != 0) {
            UnityEngine_Rendering_SortingGroup__set_sortingOrder_3d5ef00
                      (*(long *)(param_1 + 0x88),param_10,0);
            if (*(long *)(param_1 + 0x88) != 0) {
              UnityEngine_Rendering_SortingGroup__set_sortingLayerName_3d5ee44
                        (*(long *)(param_1 + 0x88),param_9,0);
              if (*(long *)(param_1 + 0x90) != 0) {
                UnityEngine_Rendering_SortingGroup__set_sortingOrder_3d5ef00
                          (*(long *)(param_1 + 0x90),param_12,0);
                if (*(long *)(param_1 + 0x90) != 0) {
                  UnityEngine_Rendering_SortingGroup__set_sortingLayerName_3d5ee44
                            (*(long *)(param_1 + 0x90),param_11,0);
                  if (*(long *)(param_1 + 0x98) != 0) {
                    UnityEngine_Rendering_SortingGroup__set_sortingOrder_3d5ef00
                              (*(long *)(param_1 + 0x98),param_14,0);
                    lVar1 = *(long *)(param_1 + 0x98);
                    if (lVar1 != 0) {
                      if (pcRam0000000005c37828 == (code *)0x0) {
                        pcRam0000000005c37828 = (code *)FUN_012d0d84(&UNK_043e4d03);
                      }
                    /* WARNING: Could not recover jumptable at 0x03e5ee84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                      (*pcRam0000000005c37828)(lVar1,param_13);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

