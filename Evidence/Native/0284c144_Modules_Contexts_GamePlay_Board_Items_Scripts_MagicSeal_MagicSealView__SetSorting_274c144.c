/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.MagicSeal.MagicSealView$$SetSorting
void Modules_Contexts_GamePlay_Board_Items_Scripts_MagicSeal_MagicSealView__SetSorting (Modules_Contexts_GamePlay_Board_Items_Scripts_MagicSeal_MagicSealView_o* __this, Modules_Infrastructure_UI_Common_Scripts_Sorting_o front, Modules_Infrastructure_UI_Common_Scripts_Sorting_o top, Modules_Infrastructure_UI_Common_Scripts_Sorting_o bottom, Modules_Infrastructure_UI_Common_Scripts_Sorting_o frontBottom, bool isBottom, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.MagicSeal.MagicSealView$$SetSorting
   void Modules_Contexts_GamePlay_Board_Items_Scripts_MagicSeal_MagicSealView__SetSorting
   (Modules_Contexts_GamePlay_Board_Items_Scripts_MagicSeal_MagicSealView_o* __this,
   Modules_Infrastructure_UI_Common_Scripts_Sorting_o front,
   Modules_Infrastructure_UI_Common_Scripts_Sorting_o top,
   Modules_Infrastructure_UI_Common_Scripts_Sorting_o bottom,
   Modules_Infrastructure_UI_Common_Scripts_Sorting_o frontBottom, bool isBottom, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_MagicSeal_MagicSealView__SetSorting_274c144
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined4 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8,
               undefined8 param_9,undefined4 param_10)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x60) != 0) {
    UnityEngine_Rendering_SortingGroup__set_sortingOrder_3d5ef00
              (*(long *)(param_1 + 0x60),param_3,0);
    if (*(long *)(param_1 + 0x70) != 0) {
      UnityEngine_Rendering_SortingGroup__set_sortingOrder_3d5ef00
                (*(long *)(param_1 + 0x70),param_5,0);
      if (*(long *)(param_1 + 0x50) != 0) {
        UnityEngine_Rendering_SortingGroup__set_sortingOrder_3d5ef00
                  (*(long *)(param_1 + 0x50),param_5,0);
        if (*(long *)(param_1 + 0x58) != 0) {
          UnityEngine_Rendering_SortingGroup__set_sortingOrder_3d5ef00
                    (*(long *)(param_1 + 0x58),param_10,0);
          lVar1 = *(long *)(param_1 + 0x68);
          if (lVar1 != 0) {
            if (pcRam0000000005c37840 == (code *)0x0) {
              pcRam0000000005c37840 = (code *)FUN_012d0d84(&UNK_043e4dbb);
            }
                    /* WARNING: Could not recover jumptable at 0x03e5ef40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam0000000005c37840)(lVar1,param_7);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

