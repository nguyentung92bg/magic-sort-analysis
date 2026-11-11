/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Safe.SafeView$$PlayCompleteRotationClip
void Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeView__PlayCompleteRotationClip (Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Safe.SafeView$$PlayCompleteRotationClip
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeView__PlayCompleteRotationClip
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeView_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeView__PlayCompleteRotationClip_2617394
               (long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x80) != 0) {
    lVar2 = *(long *)(param_1 + 0x90);
    uVar1 = UnityEngine_Object__get_name_4078cb0(*(long *)(param_1 + 0x80),0);
    if ((lVar2 != 0) && (lVar2 = UnityEngine_Animation__get_Item_1f79fb0(lVar2,uVar1,0), lVar2 != 0)
       ) {
      UnityEngine_AnimationState__set_speed_1f7a570(*(undefined4 *)(param_1 + 0xb8),lVar2,0);
      if (*(long *)(param_1 + 0x80) != 0) {
        lVar2 = *(long *)(param_1 + 0x90);
        uVar1 = UnityEngine_Object__get_name_4078cb0(*(long *)(param_1 + 0x80),0);
        if (lVar2 != 0) {
          if (pcRam0000000005c28c10 == (code *)0x0) {
            pcRam0000000005c28c10 = (code *)FUN_012d0d84(&UNK_0438d26b,uVar1,0);
          }
                    /* WARNING: Could not recover jumptable at 0x0207a144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam0000000005c28c10)(lVar2,uVar1,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

