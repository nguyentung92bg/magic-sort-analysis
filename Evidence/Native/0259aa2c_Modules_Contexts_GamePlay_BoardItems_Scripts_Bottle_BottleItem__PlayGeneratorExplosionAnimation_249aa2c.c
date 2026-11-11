/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$PlayGeneratorExplosionAnimation
DG_Tweening_Sequence_o* Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__PlayGeneratorExplosionAnimation (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, UnityEngine_Vector3_o toPosition1, UnityEngine_Vector3_o toPosition2, int32_t previousWaterHeight, int32_t currentWaterHeight, int32_t colorId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$PlayGeneratorExplosionAnimation
   DG_Tweening_Sequence_o*
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__PlayGeneratorExplosionAnimation
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, UnityEngine_Vector3_o
   toPosition1, UnityEngine_Vector3_o toPosition2, int32_t previousWaterHeight, int32_t
   currentWaterHeight, int32_t colorId, const MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__PlayGeneratorExplosionAnimation_249aa2c
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,long param_7,undefined4 param_8,undefined4 param_9,
          undefined4 param_10)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_057815e0;
  if ((bRam0000000005c2b300 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057add38);
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_0578afb0);
    bRam0000000005c2b300 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar2 = DG_Tweening_DOTween__Sequence_1eda154(0);
  if (*(long *)(param_7 + 0x50) == 0) goto LAB_0259ac00;
  uVar3 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleView__PlayGeneratorClipsAnimation_22fdfdc
                    (param_1,param_2,param_3,*(long *)(param_7 + 0x50),0);
  DG_Tweening_TweenSettingsExtensions__Join_1ee8bcc(uVar2,uVar3,0);
  if (*(int *)(param_7 + 0x48) == 4) {
    uVar3 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__PlayWaterFillAnimationFromBottom_249a670
                      (param_7,param_8);
LAB_0259ab50:
    DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar2,uVar3,0);
  }
  else if (*(int *)(param_7 + 0x48) == 1) {
    uVar3 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__PlayRegularWaterFillingAnimation_249a3b4
                      (param_7,param_8,param_9,param_10,0,1);
    goto LAB_0259ab50;
  }
  puVar1 = PTR_DAT_057606c8;
  if (*(long *)(param_7 + 0x50) != 0) {
    uVar3 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleView__PlayGeneratorExplosionAnimation_22fdccc
                      (param_4,param_5,param_6,*(long *)(param_7 + 0x50),0);
    lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    puVar1 = PTR_DAT_0578afb0;
    if (lVar4 != 0) {
      DG_Tweening_TweenCallback___ctor_1ed6da8(lVar4,param_7,*(undefined8 *)PTR_DAT_057add38,0);
      uVar3 = DG_Tweening_TweenSettingsExtensions__OnComplete_object__24504c4
                        (uVar3,lVar4,*(undefined8 *)puVar1);
      DG_Tweening_TweenSettingsExtensions__Join_1ee8bcc(uVar2,uVar3,0);
      return uVar2;
    }
  }
LAB_0259ac00:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

