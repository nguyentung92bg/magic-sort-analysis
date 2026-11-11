/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.KeyAndLock.Lock.LockView$$PlayUnlockAnimation
void Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Lock_LockView__PlayUnlockAnimation (Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Lock_LockView_o* __this, float delay, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Modules.Contexts.GamePlay.BoardItems.Scripts.KeyAndLock.Lock.LockView$$PlayUnlockAnimation
   void Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Lock_LockView__PlayUnlockAnimation
   (Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Lock_LockView_o* __this, float delay,
   const MethodInfo* method); */

long Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Lock_LockView__PlayUnlockAnimation_248ebf0
               (undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  float fVar7;
  undefined1 auVar8 [16];
  
  puVar2 = PTR_DAT_0576aae0;
  if ((bRam0000000005c2b298 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575c3c8);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_0579b120);
    FUN_012d0dc8(PTR_DAT_0580c9a0);
    FUN_012d0dc8(PTR_DAT_057606c8);
    bRam0000000005c2b298 = 1;
  }
  if (((**(long **)(*(long *)puVar2 + 0xb8) != 0) &&
      (lVar4 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18), lVar4 != 0)) &&
     (lVar4 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                        (lVar4,*(undefined8 *)PTR_DAT_0575c3c8), lVar4 != 0)) {
    auVar8 = Modules_Infrastructure_UI_Common_Scripts_SortingService__GetBottleAnimatingSorting_40029bc
                       (lVar4,500,0);
    Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Lock_LockView__SetSorting_248f26c
              (param_2,auVar8._0_8_,auVar8._8_8_);
    plVar5 = param_2 + 0xe;
    if (*plVar5 != 0) {
      DG_Tweening_TweenExtensions__Kill_1edd6a4(*plVar5,0,0);
    }
    lVar4 = UnityEngine_Component__get_gameObject_408b480(param_2,0);
    puVar2 = PTR_DAT_057815e0;
    if (lVar4 != 0) {
      UnityEngine_GameObject__SetActive_408e318(lVar4,1,0);
      if (param_2[0xd] != 0) {
        Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Lock_LockAnimationView__SetLocked_248e340
                  ();
      }
      puVar1 = PTR_DAT_057606c8;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      lVar4 = DG_Tweening_DOTween__Sequence_1eda154(0);
      *plVar5 = lVar4;
      FUN_012d0d74(plVar5,lVar4);
      lVar6 = *plVar5;
      lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
      if (lVar4 != 0) {
        DG_Tweening_TweenCallback___ctor_1ed6da8(lVar4,param_2,*(undefined8 *)PTR_DAT_0579b120,0);
        DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(param_1,lVar6,lVar4,0);
        lVar6 = param_2[0xe];
        lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
        if (lVar4 != 0) {
          DG_Tweening_TweenCallback___ctor_1ed6da8(lVar4,param_2,*(undefined8 *)PTR_DAT_0580c9a0,0);
          DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(param_1,lVar6,lVar4,0);
          lVar6 = param_2[0xe];
          lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
          if (lVar4 != 0) {
            DG_Tweening_TweenCallback___ctor_1ed6da8
                      (lVar4,param_2,*(undefined8 *)(*param_2 + 0x1d0),0);
            fVar7 = (float)param_1 + _UNK_0435af00;
            uVar3 = DG_Tweening_TweenSettingsExtensions__ValidateAddToSequence_1eedf30(lVar6,0,1);
            if ((lVar4 != 0) && ((uVar3 & 1) != 0)) {
              DG_Tweening_Sequence__DoInsertCallback_1edffe8(fVar7,lVar6,lVar4);
            }
            return lVar6;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

