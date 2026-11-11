/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Curtain.CurtainView$$Show
void Modules_Contexts_GamePlay_BoardItems_Scripts_Curtain_CurtainView__Show (Modules_Contexts_GamePlay_BoardItems_Scripts_Curtain_CurtainView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Curtain.CurtainView$$Show
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Curtain_CurtainView__Show
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Curtain_CurtainView_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Curtain_CurtainView__Show_2490b70(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = UnityEngine_Component__get_gameObject_408b480(param_1,0);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  UnityEngine_GameObject__SetActive_408e318(lVar1,1,0);
  lVar1 = *(long *)(param_1 + 0x68);
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + 0x28) != 0) {
      UnityEngine_Animation__Play_1f7a100(*(long *)(lVar1 + 0x28),*(undefined8 *)(lVar1 + 0x30),0);
      lVar1 = *(long *)(param_1 + 0x28);
      if (lVar1 != 0) {
        uVar2 = *(undefined8 *)(param_1 + 0x30);
        if (pcRam0000000005c28c10 == (code *)0x0) {
          pcRam0000000005c28c10 = (code *)FUN_012d0d84(&UNK_0438d26b,uVar2,0);
        }
                    /* WARNING: Could not recover jumptable at 0x0207a144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000005c28c10)(lVar1,uVar2,0);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  return;
}

