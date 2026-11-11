/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.KeyAndLock.Key.KeyView$$ShowWithAnimation
DG_Tweening_Sequence_o* Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Key_KeyView__ShowWithAnimation (Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Key_KeyView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.KeyAndLock.Key.KeyView$$ShowWithAnimation
   DG_Tweening_Sequence_o*
   Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Key_KeyView__ShowWithAnimation
   (Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Key_KeyView_o* __this, const MethodInfo*
   method); */

undefined8
Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Key_KeyView__ShowWithAnimation_2490114
          (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_057815e0;
  if ((bRam0000000005c2b29f & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057fc1d0);
    bRam0000000005c2b29f = 1;
  }
  puVar2 = PTR_DAT_057fc1d0;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar3 = DG_Tweening_DOTween__Sequence_1eda154(0);
  uVar4 = UnityEngine_Component__get_gameObject_408b480(param_1,0);
  uVar3 = DG_Tweening_TweenSettingsExtensions__SetLink_object__2450f00
                    (uVar3,uVar4,*(undefined8 *)puVar2);
  uVar4 = DG_Tweening_DOTweenModuleSprite__DOFade_33e2fd0
                    (0x3f800000,_UNK_04339be4,*(undefined8 *)(param_1 + 0x20),0);
  DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar3,uVar4,0);
  return uVar3;
}

