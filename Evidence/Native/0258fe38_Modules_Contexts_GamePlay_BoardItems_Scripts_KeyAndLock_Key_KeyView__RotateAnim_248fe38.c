/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.KeyAndLock.Key.KeyView$$RotateAnim
DG_Tweening_Tween_o* Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Key_KeyView__RotateAnim (Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Key_KeyView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.KeyAndLock.Key.KeyView$$RotateAnim
   DG_Tweening_Tween_o*
   Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Key_KeyView__RotateAnim
   (Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Key_KeyView_o* __this, const MethodInfo*
   method); */

long Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Key_KeyView__RotateAnim_248fe38
               (long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((bRam0000000005c2b29c & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057bcc80);
    bRam0000000005c2b29c = 1;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    lVar4 = Modules_Contexts_GamePlay_BoardItems_Scripts_Common_TransformExtension__DORotate_23066a4
                      (0,0,0xc3340000,*(undefined4 *)(*(long *)(param_1 + 0x28) + 0x50),
                       *(undefined8 *)(param_1 + 0x18),1,0);
    if (*(long *)(param_1 + 0x28) != 0) {
      uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x60);
      if ((bRam0000000005c2b025 & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_05805638,uVar5,*(undefined8 *)PTR_DAT_057bcc80);
        FUN_012d0dc8(PTR_DAT_05776a80);
        FUN_012d0dc8(PTR_DAT_0580b108);
        bRam0000000005c2b025 = 1;
      }
      puVar1 = PTR_DAT_05776a80;
      if ((lVar4 != 0) && (*(char *)(lVar4 + 0xe8) != '\0')) {
        *(undefined4 *)(lVar4 + 0xb4) = 0x25;
        lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
        puVar1 = PTR_DAT_0580b108;
        if (lVar2 != 0) {
          DG_Tweening_Core_Easing_EaseCurve___ctor_3336d6c(lVar2,uVar5,0);
          lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
          if (lVar3 != 0) {
            DG_Tweening_EaseFunction___ctor_1ed6eb4(lVar3,lVar2,*(undefined8 *)PTR_DAT_05805638,0);
            *(long *)(lVar4 + 0xb8) = lVar3;
            FUN_012d0d74((long *)(lVar4 + 0xb8),lVar3);
            return lVar4;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      return lVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

