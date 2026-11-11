/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Common.Objective.ObjectiveView$$SetSortOrder
void Modules_Contexts_GamePlay_BoardItems_Scripts_Common_Objective_ObjectiveView__SetSortOrder (Modules_Contexts_GamePlay_BoardItems_Scripts_Common_Objective_ObjectiveView_o* __this, int32_t sortOrder, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Common.Objective.ObjectiveView$$SetSortOrder
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Common_Objective_ObjectiveView__SetSortOrder
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Common_Objective_ObjectiveView_o* __this, int32_t
   sortOrder, const MethodInfo* method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Common_Objective_ObjectiveView__SetSortOrder_2307aac
               (long param_1,undefined8 param_2)

{
  long lVar1;
  
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02407aa4 with catch @ 02407ab0
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02407a98 with catch @ 02407ab4
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02407a94 with catch @ 02407ab8
                       catch(type#1 @ 054cbd58) { ... } // from try @ 02407a9c with catch @ 02407ab8
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 024079a8 with catch @ 02407abc
                        */
  if (*(long *)(param_1 + 0x18) != 0) {
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02407a0c with catch @ 02407ac0
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 024078c8 with catch @ 02407ac4
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02407908 with catch @ 02407ac8
                        */
    UnityEngine_Renderer__set_sortingOrder_40826fc(*(long *)(param_1 + 0x18),param_2,0);
    if (*(long *)(param_1 + 0x20) != 0) {
      UnityEngine_Renderer__set_sortingOrder_40826fc(*(long *)(param_1 + 0x20),(int)param_2 + 1,0);
      lVar1 = *(long *)(param_1 + 0x28);
                    /* try { // try from 02407ae4 to 02507ae7 has its CatchHandler @ 02407b60 */
      if (lVar1 != 0) {
        if (pcRam0000000005c39c40 == (code *)0x0) {
          pcRam0000000005c39c40 = (code *)FUN_012d0d84(&UNK_043eafc0);
        }
                    /* WARNING: Could not recover jumptable at 0x0418273c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000005c39c40)(lVar1,(int)param_2 + 2);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

