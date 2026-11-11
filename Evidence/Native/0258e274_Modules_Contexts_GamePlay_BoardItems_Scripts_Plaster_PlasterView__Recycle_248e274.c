/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Plaster.PlasterView$$Recycle
void Modules_Contexts_GamePlay_BoardItems_Scripts_Plaster_PlasterView__Recycle (Modules_Contexts_GamePlay_BoardItems_Scripts_Plaster_PlasterView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Plaster.PlasterView$$Recycle
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Plaster_PlasterView__Recycle
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Plaster_PlasterView_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Plaster_PlasterView__Recycle_248e274(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    if (pcRam0000000005c39bb8 == (code *)0x0) {
      pcRam0000000005c39bb8 = (code *)FUN_012d0d84(&UNK_043eabe3);
    }
                    /* WARNING: Could not recover jumptable at 0x041822f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000005c39bb8)(lVar1,1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

