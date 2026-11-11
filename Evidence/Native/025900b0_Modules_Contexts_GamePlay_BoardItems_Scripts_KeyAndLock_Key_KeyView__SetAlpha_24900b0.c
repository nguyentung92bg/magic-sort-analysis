/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.KeyAndLock.Key.KeyView$$SetAlpha
void Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Key_KeyView__SetAlpha (Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Key_KeyView_o* __this, float alpha, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.KeyAndLock.Key.KeyView$$SetAlpha
   void Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Key_KeyView__SetAlpha
   (Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Key_KeyView_o* __this, float alpha,
   const MethodInfo* method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Key_KeyView__SetAlpha_24900b0
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  long lVar1;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if (*(long *)(param_4 + 0x20) != 0) {
    uStack_30 = UnityEngine_SpriteRenderer__get_color_4095d44(*(long *)(param_4 + 0x20),0);
    lVar1 = *(long *)(param_4 + 0x20);
    if (lVar1 != 0) {
      uStack_2c = param_2;
      uStack_28 = param_3;
      uStack_24 = param_1;
      if (pcRam0000000005c3a788 == (code *)0x0) {
        pcRam0000000005c3a788 = (code *)FUN_012d0d84(&UNK_043efbae,0);
      }
      (*pcRam0000000005c3a788)(lVar1,&uStack_30);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

