/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Clay.ClayView$$Prepare
void Modules_Contexts_GamePlay_BoardItems_Scripts_Clay_ClayView__Prepare (Modules_Contexts_GamePlay_BoardItems_Scripts_Clay_ClayView_o* __this, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, int32_t blockerVariant, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Clay.ClayView$$Prepare
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Clay_ClayView__Prepare
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Clay_ClayView_o* __this,
   Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, int32_t blockerVariant, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Clay_ClayView__Prepare_24915e4
               (long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  long lVar1;
  
  Modules_Contexts_GamePlay_BoardItems_Scripts_Clay_ClayView__SetVariant_2491d00(param_1,param_4);
  Modules_Contexts_GamePlay_BoardItems_Scripts_Clay_ClayView__SetSprite_2491e60(param_1);
  if (*(long *)(param_1 + 0x20) != 0) {
    UnityEngine_Renderer__set_sortingOrder_40826fc(*(long *)(param_1 + 0x20),param_3,0);
    lVar1 = *(long *)(param_1 + 0x20);
    if (lVar1 != 0) {
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

