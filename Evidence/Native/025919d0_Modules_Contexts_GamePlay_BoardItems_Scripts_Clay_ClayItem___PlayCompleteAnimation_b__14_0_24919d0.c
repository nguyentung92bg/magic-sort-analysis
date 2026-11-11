/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Clay.ClayItem$$<PlayCompleteAnimation>b__14_0
void Modules_Contexts_GamePlay_BoardItems_Scripts_Clay_ClayItem___PlayCompleteAnimation_b__14_0 (Modules_Contexts_GamePlay_BoardItems_Scripts_Clay_ClayItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.BoardItems.Scripts.Clay.ClayItem$$<PlayCompleteAnimation>b__14_0
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Clay_ClayItem___PlayCompleteAnimation_b__14_0
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Clay_ClayItem_o* __this, const MethodInfo* method);
    */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Clay_ClayItem___PlayCompleteAnimation_b__14_0_24919d0
               (long param_1)

{
  long lVar1;
  
  Modules_Infrastructure_Common_Scripts_Component_AItem__SetParent_40e9f48(param_1,0,0);
  if (*(long *)(param_1 + 0x48) != 0) {
    Modules_Contexts_GamePlay_BoardItems_Scripts_Clay_ClayView__HideStaticView_2491a04();
    if (*(long *)(param_1 + 0x48) != 0) {
      lVar1 = *(long *)(*(long *)(param_1 + 0x48) + 0x40);
      if ((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x38), lVar1 != 0)) {
        if (pcRam0000000005c35e30 == (code *)0x0) {
          pcRam0000000005c35e30 = (code *)FUN_012d0d84(&UNK_043e020e,0);
        }
                    /* WARNING: Could not recover jumptable at 0x03bbc604. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000005c35e30)(lVar1,1);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

