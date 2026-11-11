/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$BottleSquash
DG_Tweening_Tween_o* Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__BottleSquash (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, UnityEngine_Vector3_o shrinkScale, float shrinkDuration, UnityEngine_AnimationCurve_o* shrinkCurve, UnityEngine_Vector3_o stretchScale, float stretchDuration, UnityEngine_AnimationCurve_o* stretchCurve, float returnToNormalScaleDuration, UnityEngine_AnimationCurve_o* returnToNormalScaleAnimationCurve, float delayBeforeShrink, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$BottleSquash
   DG_Tweening_Tween_o* Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__BottleSquash
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, UnityEngine_Vector3_o
   shrinkScale, float shrinkDuration, UnityEngine_AnimationCurve_o* shrinkCurve,
   UnityEngine_Vector3_o stretchScale, float stretchDuration, UnityEngine_AnimationCurve_o*
   stretchCurve, float returnToNormalScaleDuration, UnityEngine_AnimationCurve_o*
   returnToNormalScaleAnimationCurve, float delayBeforeShrink, const MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__BottleSquash_249e680
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined4 param_8,
          undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000008;
  
  puVar1 = PTR_DAT_057815e0;
  if ((bRam0000000005c2b324 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057f03e0);
    FUN_012d0dc8(PTR_DAT_057874c0);
    bRam0000000005c2b324 = 1;
  }
  puVar3 = PTR_DAT_057f03e0;
  puVar2 = PTR_DAT_057874c0;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar4 = DG_Tweening_DOTween__Sequence_1eda154(0);
  DG_Tweening_TweenSettingsExtensions__SetDelay_object__2450a9c
            (in_stack_00000008,uVar4,*(undefined8 *)puVar3);
  uVar5 = Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4(param_9,0);
  uVar5 = Modules_Contexts_GamePlay_BoardItems_Scripts_Common_TransformExtension__DOScale_2306854
                    (param_1,param_2,param_3,param_4,uVar5,0);
  uVar5 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                    (uVar5,param_10,*(undefined8 *)puVar2);
  DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar4,uVar5,0);
  uVar5 = Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4(param_9,0);
  uVar5 = Modules_Contexts_GamePlay_BoardItems_Scripts_Common_TransformExtension__DOScale_2306854
                    (param_5,param_6,param_7,param_8,uVar5,0);
  uVar5 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                    (uVar5,param_11,*(undefined8 *)puVar2);
  DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar4,uVar5,0);
  uVar5 = Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4(param_9,0);
  if (cRam0000000005c230a9 == '\0') {
    FUN_012d0dc8(PTR_DAT_05805c10);
    cRam0000000005c230a9 = '\x01';
  }
  lVar6 = *(long *)(*(long *)PTR_DAT_05805c10 + 0xb8);
  uVar5 = Modules_Contexts_GamePlay_BoardItems_Scripts_Common_TransformExtension__DOScale_2306854
                    (*(undefined4 *)(lVar6 + 0xc),*(undefined4 *)(lVar6 + 0x10),
                     *(undefined4 *)(lVar6 + 0x14),in_stack_00000000,uVar5,0);
  uVar5 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                    (uVar5,param_12,*(undefined8 *)puVar2);
  DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar4,uVar5,0);
  return uVar4;
}

