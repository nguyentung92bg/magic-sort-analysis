/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Curtain.CurtainView$$TrySetIdleState
void Modules_Contexts_GamePlay_BoardItems_Scripts_Curtain_CurtainView__TrySetIdleState (Modules_Contexts_GamePlay_BoardItems_Scripts_Curtain_CurtainView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Curtain.CurtainView$$TrySetIdleState
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Curtain_CurtainView__TrySetIdleState
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Curtain_CurtainView_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Curtain_CurtainView__TrySetIdleState_2490ba0
               (long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x68);
  if (lVar2 == 0) {
    return;
  }
  if (*(long *)(lVar2 + 0x28) != 0) {
    UnityEngine_Animation__Play_1f7a100(*(long *)(lVar2 + 0x28),*(undefined8 *)(lVar2 + 0x30),0);
    lVar2 = *(long *)(param_1 + 0x28);
    if (lVar2 != 0) {
      uVar1 = *(undefined8 *)(param_1 + 0x30);
      if (pcRam0000000005c28c10 == (code *)0x0) {
        pcRam0000000005c28c10 = (code *)FUN_012d0d84(&UNK_0438d26b,uVar1,0);
      }
                    /* WARNING: Could not recover jumptable at 0x0207a144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000005c28c10)(lVar2,uVar1,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

