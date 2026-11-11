/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.KeyAndLock.Lock.LockAnimationView$$ArrangeViewWithAnimation
DG_Tweening_Sequence_o* Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Lock_LockAnimationView__ArrangeViewWithAnimation (Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Lock_LockAnimationView_o* __this, float localPositionX, float duration, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Modules.Contexts.GamePlay.BoardItems.Scripts.KeyAndLock.Lock.LockAnimationView$$ArrangeViewWithAnimation
   DG_Tweening_Sequence_o*
   Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Lock_LockAnimationView__ArrangeViewWithAnimation
   (Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Lock_LockAnimationView_o* __this, float
   localPositionX, float duration, const MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Lock_LockAnimationView__ArrangeViewWithAnimation_248e4d4
          (undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  
  puVar3 = PTR_DAT_057815e0;
  if ((bRam0000000005c2b291 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_0576c200);
    bRam0000000005c2b291 = 1;
  }
  puVar2 = PTR_DAT_0576c200;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar4 = DG_Tweening_DOTween__Sequence_1eda154(0);
  uVar6 = *(undefined8 *)(param_3 + 0x28);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c(*(long *)puVar2);
  }
  uVar5 = UnityEngine_Object__op_Equality_407f288(uVar6,0,0);
  uVar1 = _UNK_0438e930;
  if ((uVar5 & 1) == 0) {
    fVar7 = ABS((float)param_1) + _UNK_0438e924;
    fVar8 = fVar7;
    if (_UNK_0438e928 < fVar7) {
      fVar8 = _UNK_0438e928;
    }
    fVar8 = 1.0 - fVar8 / _UNK_0438e928;
    if (fVar7 < 0.0) {
      fVar8 = 1.0;
    }
    fVar7 = fVar8;
    if (1.0 < fVar8) {
      fVar7 = 1.0;
    }
    fVar7 = fVar7 * _UNK_0438e92c + 1.0;
    if (fVar8 < 0.0) {
      fVar7 = 1.0;
    }
    uVar6 = DG_Tweening_ShortcutExtensions__DOLocalMove_1ee56a4
                      (param_1,_UNK_0438e930,0,param_2,*(undefined8 *)(param_3 + 0x28),0,0);
    DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar4,uVar6,0);
    uVar6 = DG_Tweening_ShortcutExtensions__DOLocalMove_1ee56a4
                      (-(float)param_1,uVar1,0,param_2,*(undefined8 *)(param_3 + 0x30),0,0);
    DG_Tweening_TweenSettingsExtensions__Join_1ee8bcc(uVar4,uVar6,0);
    uVar6 = DG_Tweening_ShortcutExtensions__DOScale_1ee649c
                      (fVar7,0x3f800000,0x3f800000,param_2,*(undefined8 *)(param_3 + 0x38),0);
    DG_Tweening_TweenSettingsExtensions__Join_1ee8bcc(uVar4,uVar6,0);
  }
  return uVar4;
}

