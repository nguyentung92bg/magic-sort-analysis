/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.KeyAndLock.Lock.LockItem$$ArrangeViewWithAnimation
DG_Tweening_Sequence_o* Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Lock_LockItem__ArrangeViewWithAnimation (Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Lock_LockItem_o* __this, float duration, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.BoardItems.Scripts.KeyAndLock.Lock.LockItem$$ArrangeViewWithAnimation
   DG_Tweening_Sequence_o*
   Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Lock_LockItem__ArrangeViewWithAnimation
   (Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Lock_LockItem_o* __this, float duration,
   const MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Lock_LockItem__ArrangeViewWithAnimation_248e9f8
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_057815e0;
  if ((bRam0000000005c2b293 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    bRam0000000005c2b293 = 1;
  }
  uVar4 = Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Lock_LockItem__CalculateInBottlePosition_248e7d0
                    (param_4);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar2 = DG_Tweening_DOTween__Sequence_1eda154(0);
  uVar3 = Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4(param_4,0);
  uVar3 = Modules_Contexts_GamePlay_BoardItems_Scripts_Common_TransformExtension__DOLocalMove_22fd54c
                    (uVar4,param_2,param_3,param_1,uVar3,0,0);
  DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar2,uVar3,0);
  if ((*(long *)(param_4 + 0x40) != 0) && (*(long *)(*(long *)(param_4 + 0x40) + 0x68) != 0)) {
    uVar4 = Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Lock_LockAnimationView__ArrangeViewWithAnimation_248e4d4
                      (uVar4,param_1);
    DG_Tweening_TweenSettingsExtensions__Join_1ee8bcc(uVar2,uVar4,0);
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

