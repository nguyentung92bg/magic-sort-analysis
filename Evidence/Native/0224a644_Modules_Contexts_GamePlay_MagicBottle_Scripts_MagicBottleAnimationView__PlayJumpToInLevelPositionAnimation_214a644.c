/* IL2CPP: Modules.Contexts.GamePlay.MagicBottle.Scripts.MagicBottleAnimationView$$PlayJumpToInLevelPositionAnimation
DG_Tweening_Tween_o* Modules_Contexts_GamePlay_MagicBottle_Scripts_MagicBottleAnimationView__PlayJumpToInLevelPositionAnimation (Modules_Contexts_GamePlay_MagicBottle_Scripts_MagicBottleAnimationView_o* __this, UnityEngine_Vector3_o bottleTargetPosition, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* bottleComponent, int32_t bottleRowCount, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.MagicBottle.Scripts.MagicBottleAnimationView$$PlayJumpToInLevelPositionAnimation
   DG_Tweening_Tween_o*
   Modules_Contexts_GamePlay_MagicBottle_Scripts_MagicBottleAnimationView__PlayJumpToInLevelPositionAnimation
   (Modules_Contexts_GamePlay_MagicBottle_Scripts_MagicBottleAnimationView_o* __this,
   UnityEngine_Vector3_o bottleTargetPosition,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* bottleComponent, int32_t
   bottleRowCount, const MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_MagicBottle_Scripts_MagicBottleAnimationView__PlayJumpToInLevelPositionAnimation_214a644
          (undefined4 param_1,undefined4 param_2,float param_3,long param_4,undefined8 param_5,
          int param_6)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  float fVar15;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  puVar2 = PTR_DAT_057d2fd0;
  fVar12 = param_3;
  if ((bRam0000000005c29b4e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057dc5e0);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_05818d48);
    FUN_012d0dc8(PTR_DAT_057ccae0);
    FUN_012d0dc8(PTR_DAT_057874c0);
    FUN_012d0dc8(PTR_DAT_058179a8);
    FUN_012d0dc8(PTR_DAT_058121c0);
    FUN_012d0dc8(PTR_DAT_0577c090);
    FUN_012d0dc8(PTR_DAT_0579dba8);
    FUN_012d0dc8(PTR_DAT_057f2e58);
    FUN_012d0dc8(PTR_DAT_05790678);
    FUN_012d0dc8(PTR_DAT_057d2fd0);
    FUN_012d0dc8(PTR_DAT_058030a8);
    bRam0000000005c29b4e = 1;
  }
  lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
  puVar3 = PTR_DAT_057815e0;
  puVar2 = PTR_DAT_057606c8;
  if (lVar4 != 0) {
    System_Object___ctor_23dfe5c(lVar4,0);
    *(long *)(lVar4 + 0x18) = param_4;
    FUN_012d0d74((long *)(lVar4 + 0x18),param_4);
    *(undefined4 *)(lVar4 + 0x20) = param_1;
    *(undefined4 *)(lVar4 + 0x24) = param_2;
    *(float *)(lVar4 + 0x28) = param_3;
    *(undefined8 *)(lVar4 + 0x30) = param_5;
    FUN_012d0d74((undefined8 *)(lVar4 + 0x30),param_5);
    *(undefined8 *)(lVar4 + 0x10) = 0;
    FUN_012d0d74((undefined8 *)(lVar4 + 0x10),0);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar5 = DG_Tweening_DOTween__Sequence_1eda154(0);
    lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
    puVar3 = PTR_DAT_05818d48;
    if (lVar6 == 0) goto LAB_0224ad2c;
    DG_Tweening_TweenCallback___ctor_1ed6da8(lVar6,lVar4,*(undefined8 *)PTR_DAT_058179a8,0);
    DG_Tweening_TweenSettingsExtensions__OnStart_object__24505a0(uVar5,lVar6,*(undefined8 *)puVar3);
    uVar7 = Modules_Contexts_GamePlay_MagicBottle_Scripts_MagicBottleAnimationView__PlayScaleXY_214ad3c
                      (param_4);
    DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar5,uVar7,0);
    if (*(long *)(param_4 + 0x18) == 0) goto LAB_0224ad2c;
    uVar7 = DG_Tweening_DOTweenModuleSprite__DOFade_33e2fd0
                      (0,*(undefined4 *)(*(long *)(param_4 + 0x18) + 0x98),
                       *(undefined8 *)(param_4 + 0x20),0);
    DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar5,uVar7,0);
    lVar6 = *(long *)(param_4 + 0x18);
    if (lVar6 == 0) goto LAB_0224ad2c;
    uVar7 = DG_Tweening_DOTweenModuleSprite__DOFade_33e2fd0
                      (*(undefined4 *)(lVar6 + 0xa0),*(undefined4 *)(lVar6 + 0x9c),
                       *(undefined8 *)(param_4 + 0x28),0);
    DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar5,uVar7,0);
    if (*(long *)(param_4 + 0x18) == 0) goto LAB_0224ad2c;
    uVar7 = DG_Tweening_DOTweenModuleSprite__DOFade_33e2fd0
                      (0,*(undefined4 *)(*(long *)(param_4 + 0x18) + 0xa4),
                       *(undefined8 *)(param_4 + 0x48),0);
    DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar5,uVar7,0);
    if (*(long *)(param_4 + 0x18) == 0) goto LAB_0224ad2c;
    fVar10 = *(float *)(*(long *)(param_4 + 0x18) + 0xa4);
    uVar7 = DG_Tweening_DOTweenModuleSprite__DOFade_33e2fd0(0,*(undefined8 *)(param_4 + 0x50),0);
    DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar5,uVar7,0);
    if (*(long *)(param_4 + 0x18) == 0) goto LAB_0224ad2c;
    uVar13 = *(undefined4 *)(*(long *)(param_4 + 0x18) + 0x108);
    uVar7 = Modules_Contexts_GamePlay_MagicBottle_Scripts_MagicBottleAnimationView__PlayShine_214ae4c
                      (param_4);
    DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(uVar13,uVar5,uVar7,0);
    if (*(long *)(param_4 + 0x18) == 0) goto LAB_0224ad2c;
    uVar13 = *(undefined4 *)(*(long *)(param_4 + 0x18) + 0x118);
    lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
    if (lVar6 == 0) goto LAB_0224ad2c;
    DG_Tweening_TweenCallback___ctor_1ed6da8(lVar6,lVar4,*(undefined8 *)PTR_DAT_058121c0,0);
    DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(uVar13,uVar5,lVar6,0);
    if (*(long *)(param_4 + 0x18) == 0) goto LAB_0224ad2c;
    uVar13 = *(undefined4 *)(*(long *)(param_4 + 0x18) + 0x11c);
    lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
    if (lVar6 == 0) goto LAB_0224ad2c;
    DG_Tweening_TweenCallback___ctor_1ed6da8(lVar6,lVar4,*(undefined8 *)PTR_DAT_0577c090,0);
    DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(uVar13,uVar5,lVar6,0);
    if (*(long *)(param_4 + 0x18) == 0) goto LAB_0224ad2c;
    uVar13 = *(undefined4 *)(*(long *)(param_4 + 0x18) + 0xc0);
    uVar7 = UnityEngine_Component__get_transform_408b444(param_4,0);
    lVar6 = UnityEngine_Component__get_transform_408b444(param_4,0);
    if (lVar6 == 0) goto LAB_0224ad2c;
    fVar9 = (float)UnityEngine_Transform__get_position_4092b08(lVar6,0);
    lVar6 = *(long *)(param_4 + 0x18);
    if (lVar6 == 0) goto LAB_0224ad2c;
    fVar10 = fVar10 + *(float *)(lVar6 + 0x88);
    fVar12 = fVar12 + *(float *)(lVar6 + 0x8c);
    uVar7 = DG_Tweening_ShortcutExtensions__DOMove_1ee4f98
                      (fVar9 + *(float *)(lVar6 + 0x84),fVar10,fVar12,*(undefined4 *)(lVar6 + 0x80),
                       uVar7,0,0);
    if (*(long *)(param_4 + 0x18) == 0) goto LAB_0224ad2c;
    uVar7 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                      (uVar7,*(undefined8 *)(*(long *)(param_4 + 0x18) + 0x90),
                       *(undefined8 *)PTR_DAT_057874c0);
    DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(uVar13,uVar5,uVar7,0);
    if (*(long *)(param_4 + 0x18) == 0) goto LAB_0224ad2c;
    fVar9 = *(float *)(*(long *)(param_4 + 0x18) + 0xc0);
    lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
    if (lVar6 == 0) goto LAB_0224ad2c;
    DG_Tweening_TweenCallback___ctor_1ed6da8(lVar6,lVar4,*(undefined8 *)PTR_DAT_0579dba8,0);
    DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(fVar9 + 0.25,uVar5,lVar6,0);
    lVar6 = UnityEngine_Component__get_transform_408b444(param_4,0);
    if (lVar6 == 0) goto LAB_0224ad2c;
    fVar9 = (float)UnityEngine_Transform__get_position_4092b08(lVar6,0);
    lVar6 = *(long *)(param_4 + 0x18);
    if (lVar6 == 0) goto LAB_0224ad2c;
    uVar7 = *(undefined8 *)(lVar6 + 0x84);
    fVar15 = *(float *)(lVar6 + 0x8c);
    lVar6 = FUN_012d0e38(*(undefined8 *)PTR_DAT_058030a8,4);
    if (lVar6 == 0) goto LAB_0224ad2c;
    uVar1 = *(uint *)(lVar6 + 0x18);
    if (uVar1 == 0) goto LAB_0224ad30;
    fVar12 = fVar12 + fVar15;
    fVar9 = fVar9 + (float)uVar7;
    fVar10 = fVar10 + (float)((ulong)uVar7 >> 0x20);
    *(ulong *)(lVar6 + 0x20) = CONCAT44(fVar10,fVar9);
    *(float *)(lVar6 + 0x28) = fVar12;
    lVar8 = *(long *)(param_4 + 0x18);
    if (lVar8 == 0) goto LAB_0224ad2c;
    if (param_6 == 2) {
      if (uVar1 < 2) goto LAB_0224ad30;
                    /* try { // try from 0224aaf8 to 0234ab4b has its CatchHandler @ 0224aaf8
                       catch() { ... } // from try @ 0224aaf8 with catch @ 0224aaf8
                       catch() { ... } // from try @ 0224abb0 with catch @ 0224aaf8
                       catch() { ... } // from try @ 0224abe0 with catch @ 0224aaf8
                       catch() { ... } // from try @ 0224ac5c with catch @ 0224aaf8 */
      fVar15 = *(float *)(lVar8 + 0x48);
      *(ulong *)(lVar6 + 0x2c) =
           CONCAT44(fVar10 + (float)((ulong)*(undefined8 *)(lVar8 + 0x40) >> 0x20),
                    fVar9 + (float)*(undefined8 *)(lVar8 + 0x40));
      *(float *)(lVar6 + 0x34) = fVar12 + fVar15;
      lVar8 = *(long *)(param_4 + 0x18);
      if (lVar8 == 0) goto LAB_0224ad2c;
      if (uVar1 < 3) goto LAB_0224ad30;
      uVar7 = *(undefined8 *)(lVar4 + 0x20);
      uVar11 = *(undefined8 *)(lVar8 + 0x58);
      fVar12 = *(float *)(lVar4 + 0x28);
      fVar10 = *(float *)(lVar8 + 0x60);
    }
    else {
      if (uVar1 < 2) goto LAB_0224ad30;
      fVar15 = *(float *)(lVar8 + 0x54);
      *(ulong *)(lVar6 + 0x2c) =
           CONCAT44(fVar10 + (float)((ulong)*(undefined8 *)(lVar8 + 0x4c) >> 0x20),
                    fVar9 + (float)*(undefined8 *)(lVar8 + 0x4c));
                    /* try { // try from 0224ab4c to 0234abaf has its CatchHandler @ 0224abb0 */
      *(float *)(lVar6 + 0x34) = fVar12 + fVar15;
      lVar8 = *(long *)(param_4 + 0x18);
      if (lVar8 == 0) goto LAB_0224ad2c;
      if (uVar1 < 3) goto LAB_0224ad30;
      uVar7 = *(undefined8 *)(lVar4 + 0x20);
      uVar11 = *(undefined8 *)(lVar8 + 100);
      fVar12 = *(float *)(lVar4 + 0x28);
      fVar10 = *(float *)(lVar8 + 0x6c);
    }
    *(ulong *)(lVar6 + 0x38) =
         CONCAT44((float)((ulong)uVar7 >> 0x20) + (float)((ulong)uVar11 >> 0x20),
                  (float)uVar7 + (float)uVar11);
    *(float *)(lVar6 + 0x40) = fVar12 + fVar10;
    if (uVar1 == 3) {
LAB_0224ad30:
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef8();
    }
    uVar13 = *(undefined4 *)(lVar4 + 0x28);
    *(undefined8 *)(lVar6 + 0x44) = *(undefined8 *)(lVar4 + 0x20);
    *(undefined4 *)(lVar6 + 0x4c) = uVar13;
    if (*(long *)(param_4 + 0x18) != 0) {
      uVar13 = *(undefined4 *)(*(long *)(param_4 + 0x18) + 0xc4);
      uVar7 = UnityEngine_Component__get_transform_408b444(param_4,0);
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0224ab4c with catch @ 0224abb0
                       try { // try from 0224abb0 to 0234abc7 has its CatchHandler @ 0224aaf8 */
      if (*(long *)(param_4 + 0x18) != 0) {
        uVar14 = *(undefined4 *)(*(long *)(param_4 + 0x18) + 0x70);
                    /* try { // try from 0224abc8 to 0234abdf has its CatchHandler @ 0224ac54 */
                    /* try { // try from 0224abe0 to 0234ac43 has its CatchHandler @ 0224aaf8 */
        uStack_78 = 0;
        uStack_70 = 0;
        uStack_68 = 0;
        System_Nullable_Color____ctor_2037044
                  (0x3f800000,0,0,0x3f800000,&uStack_78,*(undefined8 *)PTR_DAT_057dc5e0);
        uStack_88 = uStack_70;
        uStack_90 = uStack_78;
        uStack_80 = uStack_68;
        uVar7 = DG_Tweening_ShortcutExtensions__DOPath_1ee9134
                          (uVar14,uVar7,lVar6,1,3,*(undefined4 *)(lVar6 + 0x18),&uStack_90,0);
        if (*(long *)(param_4 + 0x18) != 0) {
          uVar7 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                            (uVar7,*(undefined8 *)(*(long *)(param_4 + 0x18) + 0x78),
                             *(undefined8 *)PTR_DAT_057ccae0);
                    /* try { // try from 0224ac44 to 0234ac53 has its CatchHandler @ 0224ac54 */
          DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(uVar13,uVar5,uVar7,0);
                    /* catch() { ... } // from try @ 0224abc8 with catch @ 0224ac54
                       catch() { ... } // from try @ 0224ac44 with catch @ 0224ac54 */
          if (*(long *)(param_4 + 0x18) != 0) {
                    /* try { // try from 0224ac58 to 0234ac5b has its CatchHandler @ 0224ac64 */
            uVar13 = *(undefined4 *)(*(long *)(param_4 + 0x18) + 0xc0);
                    /* try { // try from 0224ac5c to 0234ac67 has its CatchHandler @ 0224aaf8 */
            uVar7 = Modules_Contexts_GamePlay_MagicBottle_Scripts_MagicBottleAnimationView__SampleZRotation_214b274
                              (param_4);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0224ac58 with catch @ 0224ac64
                        */
                    /* try { // try from 0224ac68 to 0234af77 has its CatchHandler @ 0224ac68
                       catch() { ... } // from try @ 0224ac68 with catch @ 0224ac68
                       catch() { ... } // from try @ 0224b03c with catch @ 0224ac68
                       catch() { ... } // from try @ 0224b100 with catch @ 0224ac68
                       catch() { ... } // from try @ 0224b19c with catch @ 0224ac68 */
            DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(uVar13,uVar5,uVar7,0);
            if (*(long *)(param_4 + 0x18) != 0) {
              uVar13 = *(undefined4 *)(*(long *)(param_4 + 0x18) + 0xcc);
              lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
              if (lVar6 != 0) {
                DG_Tweening_TweenCallback___ctor_1ed6da8
                          (lVar6,lVar4,*(undefined8 *)PTR_DAT_057f2e58,0);
                DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(uVar13,uVar5,lVar6,0);
                if (*(long *)(param_4 + 0x18) != 0) {
                  uVar13 = *(undefined4 *)(*(long *)(param_4 + 0x18) + 200);
                  lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
                  if (lVar6 != 0) {
                    DG_Tweening_TweenCallback___ctor_1ed6da8
                              (lVar6,lVar4,*(undefined8 *)PTR_DAT_05790678,0);
                    DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154
                              (uVar13,uVar5,lVar6,0);
                    return uVar5;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0224ad2c:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

