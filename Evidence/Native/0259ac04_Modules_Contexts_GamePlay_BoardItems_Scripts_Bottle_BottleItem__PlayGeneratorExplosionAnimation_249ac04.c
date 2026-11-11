/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$PlayGeneratorExplosionAnimation
DG_Tweening_Sequence_o* Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__PlayGeneratorExplosionAnimation (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, UnityEngine_Vector3_o toPosition1, UnityEngine_Vector3_o toPosition2, int32_t currentWaterHeight, System_Collections_Generic_List_ValueTuple_int__ColorId___o* spawnedWaters, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$PlayGeneratorExplosionAnimation
   DG_Tweening_Sequence_o*
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__PlayGeneratorExplosionAnimation
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, UnityEngine_Vector3_o
   toPosition1, UnityEngine_Vector3_o toPosition2, int32_t currentWaterHeight,
   System_Collections_Generic_List_ValueTuple_int__ColorId___o* spawnedWaters, const MethodInfo*
   method); */

undefined8
Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__PlayGeneratorExplosionAnimation_249ac04
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,long param_7,undefined4 param_8,long param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  
  puVar1 = PTR_DAT_057815e0;
  if ((bRam0000000005c2b301 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057f10b0);
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_0577d338);
    FUN_012d0dc8(PTR_DAT_057efc38);
    FUN_012d0dc8(PTR_DAT_057ad740);
    FUN_012d0dc8(PTR_DAT_057cc180);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_0578afb0);
    bRam0000000005c2b301 = 1;
  }
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_a0 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar6 = DG_Tweening_DOTween__Sequence_1eda154(0);
  if (*(long *)(param_7 + 0x50) != 0) {
    uVar7 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleView__PlayGeneratorClipsAnimation_22fdfdc
                      (param_1,param_2,param_3,*(long *)(param_7 + 0x50),0);
    DG_Tweening_TweenSettingsExtensions__Join_1ee8bcc(uVar6,uVar7,0);
    puVar5 = PTR_DAT_057f10b0;
    puVar4 = PTR_DAT_057efc38;
    puVar3 = PTR_DAT_0578afb0;
    puVar2 = PTR_DAT_0577d338;
    puVar1 = PTR_DAT_057606c8;
    if (param_9 != 0) {
      System_Collections_Generic_List_ValueTuple_int__Int32Enum____GetEnumerator_2bfa790
                (&uStack_b8,param_9,*(undefined8 *)PTR_DAT_057cc180);
      uStack_98 = uStack_b0;
      uStack_a0 = uStack_b8;
      uStack_90 = uStack_a8;
      while (uVar8 = System_Collections_Generic_List_Enumerator_ValueTuple_int__Int32Enum____MoveNext_41ca468
                               (&uStack_a0,*(undefined8 *)puVar4), (uVar8 & 1) != 0) {
        if (*(int *)(param_7 + 0x48) == 4) {
          uVar7 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__PlayWaterFillAnimationFromBottom_249a670
                            (param_7);
          DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar6,uVar7,0);
        }
        else if (*(int *)(param_7 + 0x48) == 1) {
          uVar7 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__PlayRegularWaterFillingAnimation_249a3b4
                            (param_7,uStack_90,param_8,uStack_90 >> 0x20,0,1);
          DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar6,uVar7,0);
        }
      }
      System_Collections_Generic_List_Enumerator_ValueTuple_int__Int32Enum____Dispose_41ca464
                (&uStack_a0,*(undefined8 *)puVar2);
      if (*(long *)(param_7 + 0x50) != 0) {
        uVar7 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleView__PlayGeneratorExplosionAnimation_22fdccc
                          (param_4,param_5,param_6,*(long *)(param_7 + 0x50),0);
        lVar9 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
        if (lVar9 != 0) {
          DG_Tweening_TweenCallback___ctor_1ed6da8(lVar9,param_7,*(undefined8 *)puVar5,0);
          uVar7 = DG_Tweening_TweenSettingsExtensions__OnComplete_object__24504c4
                            (uVar7,lVar9,*(undefined8 *)puVar3);
          DG_Tweening_TweenSettingsExtensions__Join_1ee8bcc(uVar6,uVar7,0);
          return uVar6;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

