/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$BottleScale
DG_Tweening_Tween_o* Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__BottleScale (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, UnityEngine_Vector3_o target, float duration, UnityEngine_AnimationCurve_o* curve, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$BottleScale
   DG_Tweening_Tween_o* Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__BottleScale
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, UnityEngine_Vector3_o
   target, float duration, UnityEngine_AnimationCurve_o* curve, const MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__BottleScale_249e454
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5,
          undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_057815e0;
  if ((bRam0000000005c2b322 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057874c0);
    bRam0000000005c2b322 = 1;
  }
  puVar2 = PTR_DAT_057874c0;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar3 = DG_Tweening_DOTween__Sequence_1eda154(0);
  uVar4 = Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4(param_5,0);
  uVar4 = Modules_Contexts_GamePlay_BoardItems_Scripts_Common_TransformExtension__DOScale_2306854
                    (param_1,param_2,param_3,param_4,uVar4,0);
  uVar4 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                    (uVar4,param_6,*(undefined8 *)puVar2);
  DG_Tweening_TweenSettingsExtensions__Join_1ee8bcc(uVar3,uVar4,0);
  if (*(long *)(param_5 + 0xe0) != 0) {
    uVar4 = Modules_Infrastructure_Common_Scripts_Component_AItemPart__get_Root_40ea41c
                      (*(long *)(param_5 + 0xe0),0);
    uVar4 = Modules_Contexts_GamePlay_BoardItems_Scripts_Common_TransformExtension__DOScale_2306854
                      (param_1,param_2,param_3,param_4,uVar4,0);
    uVar4 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                      (uVar4,param_6,*(undefined8 *)puVar2);
    DG_Tweening_TweenSettingsExtensions__Join_1ee8bcc(uVar3,uVar4,0);
  }
  return uVar3;
}

