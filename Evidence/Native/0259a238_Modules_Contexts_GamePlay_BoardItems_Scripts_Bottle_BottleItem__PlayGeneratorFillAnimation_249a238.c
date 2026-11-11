/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$PlayGeneratorFillAnimation
DG_Tweening_Sequence_o* Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__PlayGeneratorFillAnimation (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, UnityEngine_Vector3_o toPosition, int32_t previousWaterHeight, int32_t currentWaterHeight, int32_t colorId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$PlayGeneratorFillAnimation
   DG_Tweening_Sequence_o*
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__PlayGeneratorFillAnimation
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, UnityEngine_Vector3_o
   toPosition, int32_t previousWaterHeight, int32_t currentWaterHeight, int32_t colorId, const
   MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__PlayGeneratorFillAnimation_249a238
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4,undefined4 param_5
          ,undefined4 param_6,undefined4 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_057815e0;
  if ((bRam0000000005c2b2fe & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_0578afb0);
    bRam0000000005c2b2fe = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar2 = DG_Tweening_DOTween__Sequence_1eda154(0);
  if (param_4[10] != 0) {
    uVar3 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleView__PlayGeneratorClipsAnimation_22fdfdc
                      (param_1,param_2,param_3,param_4[10],0);
    DG_Tweening_TweenSettingsExtensions__Join_1ee8bcc(uVar2,uVar3,0);
    uVar3 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__PlayRegularWaterFillingAnimation_249a3b4
                      (param_4,param_5,param_6,param_7,0,1);
    DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar2,uVar3,0);
    puVar1 = PTR_DAT_057606c8;
    if (param_4[10] != 0) {
      uVar3 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleView__PlayGeneratorFillAnimation_22fdae4
                        (param_4[10],0);
      lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
      puVar1 = PTR_DAT_0578afb0;
      if (lVar4 != 0) {
        DG_Tweening_TweenCallback___ctor_1ed6da8(lVar4,param_4,*(undefined8 *)(*param_4 + 0x1d0),0);
        uVar3 = DG_Tweening_TweenSettingsExtensions__OnComplete_object__24504c4
                          (uVar3,lVar4,*(undefined8 *)puVar1);
        DG_Tweening_TweenSettingsExtensions__Join_1ee8bcc(uVar2,uVar3,0);
        return uVar2;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

