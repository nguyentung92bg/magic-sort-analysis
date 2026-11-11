/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelWinPopUpNS.Scripts.LevelWinEntranceAnimator$$PlayPerfectText
void Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LevelWinEntranceAnimator__PlayPerfectText (Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LevelWinEntranceAnimator_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.UI.LevelWinPopUpNS.Scripts.LevelWinEntranceAnimator$$PlayPerfectText
   void 
   Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LevelWinEntranceAnimator__PlayPerfectText
   (Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LevelWinEntranceAnimator_o* __this, const
   MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LevelWinEntranceAnimator__PlayPerfectText_16eea08
          (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  
  if ((bRam0000000005c24b43 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057cfa90);
    FUN_012d0dc8(PTR_DAT_05775148);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_057fc1d0);
    bRam0000000005c24b43 = 1;
  }
  if ((*(long *)(param_1 + 0x70) != 0) &&
     (lVar4 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x70),0), lVar4 != 0
     )) {
    UnityEngine_GameObject__SetActive_408e318(lVar4,0,0);
    if ((*(long *)(param_1 + 0x78) != 0) &&
       (lVar4 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x78),0),
       puVar3 = PTR_DAT_057fc1d0, puVar2 = PTR_DAT_057815e0, puVar1 = PTR_DAT_057606c8, lVar4 != 0))
    {
      UnityEngine_GameObject__SetActive_408e318(lVar4,0,0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      uVar5 = DG_Tweening_DOTween__Sequence_1eda154(0);
      uVar6 = UnityEngine_Component__get_gameObject_408b480(param_1,0);
      uVar5 = DG_Tweening_TweenSettingsExtensions__SetLink_object__2450f00
                        (uVar5,uVar6,*(undefined8 *)puVar3);
      lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
      if (lVar4 != 0) {
        DG_Tweening_TweenCallback___ctor_1ed6da8(lVar4,param_1,*(undefined8 *)PTR_DAT_057cfa90,0);
        DG_Tweening_TweenSettingsExtensions__AppendCallback_1eee078(uVar5,lVar4,0);
        lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
        if (lVar4 != 0) {
          DG_Tweening_TweenCallback___ctor_1ed6da8(lVar4,param_1,*(undefined8 *)PTR_DAT_05775148,0);
          uVar7 = DG_Tweening_TweenSettingsExtensions__ValidateAddToSequence_1eedf30(uVar5,0,1);
          if ((lVar4 != 0) && ((uVar7 & 1) != 0)) {
            DG_Tweening_Sequence__DoInsertCallback_1edffe8(0,uVar5,lVar4);
          }
          return uVar5;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

