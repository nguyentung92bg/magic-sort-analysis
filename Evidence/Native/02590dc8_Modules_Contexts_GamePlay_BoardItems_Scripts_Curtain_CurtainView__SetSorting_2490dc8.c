/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Curtain.CurtainView$$SetSorting
void Modules_Contexts_GamePlay_BoardItems_Scripts_Curtain_CurtainView__SetSorting (Modules_Contexts_GamePlay_BoardItems_Scripts_Curtain_CurtainView_o* __this, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Curtain.CurtainView$$SetSorting
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Curtain_CurtainView__SetSorting
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Curtain_CurtainView_o* __this,
   Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, const MethodInfo* method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Curtain_CurtainView__SetSorting_2490dc8
               (long param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  
  if ((*(long *)(param_1 + 0x68) != 0) &&
     (lVar1 = *(long *)(*(long *)(param_1 + 0x68) + 0x20), lVar1 != 0)) {
    UnityEngine_Renderer__set_sortingOrder_40826fc(lVar1,param_3,0);
    if ((*(long *)(param_1 + 0x68) != 0) &&
       (lVar1 = *(long *)(*(long *)(param_1 + 0x68) + 0x20), lVar1 != 0)) {
      if (pcRam0000000005c39c20 == (code *)0x0) {
        pcRam0000000005c39c20 = (code *)FUN_012d0d84(&UNK_043eaefb);
      }
                    /* WARNING: Could not recover jumptable at 0x0418263c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000005c39c20)(lVar1,param_2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

