/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Plaster.PlasterView$$HidePlasterStaticView
void Modules_Contexts_GamePlay_BoardItems_Scripts_Plaster_PlasterView__HidePlasterStaticView (Modules_Contexts_GamePlay_BoardItems_Scripts_Plaster_PlasterView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Plaster.PlasterView$$HidePlasterStaticView
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Plaster_PlasterView__HidePlasterStaticView
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Plaster_PlasterView_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Plaster_PlasterView__HidePlasterStaticView_248dea0
               (long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    UnityEngine_Renderer__set_enabled_40822b8(*(long *)(param_1 + 0x20),0,0);
    lVar1 = *(long *)(param_1 + 0x30);
    if (lVar1 != 0) {
      if (pcRam0000000005c3a388 == (code *)0x0) {
        pcRam0000000005c3a388 = (code *)FUN_012d0d84(&UNK_043edeb4);
      }
                    /* WARNING: Could not recover jumptable at 0x0418e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000005c3a388)(lVar1,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

