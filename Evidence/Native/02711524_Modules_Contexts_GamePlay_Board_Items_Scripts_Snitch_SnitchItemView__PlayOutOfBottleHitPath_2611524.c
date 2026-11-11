/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Snitch.SnitchItemView$$PlayOutOfBottleHitPath
DG_Tweening_Tween_o* Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__PlayOutOfBottleHitPath (Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView_o* __this, UnityEngine_Vector3_o targetPosition, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* belongingBottle, int32_t targetBottleRowIndex, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Board.Items.Scripts.Snitch.SnitchItemView$$PlayOutOfBottleHitPath
   DG_Tweening_Tween_o*
   Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__PlayOutOfBottleHitPath
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView_o* __this,
   UnityEngine_Vector3_o targetPosition,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* belongingBottle, int32_t
   targetBottleRowIndex, const MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__PlayOutOfBottleHitPath_2611524
          (undefined4 param_1,float param_2,float param_3,long param_4,long param_5,
          undefined4 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 in_x7;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined4 uVar25;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  
  puVar1 = PTR_DAT_05804fb8;
                    /* try { // try from 02711550 to 0281155f has its CatchHandler @ 02711560 */
                    /* catch() { ... } // from try @ 027114dc with catch @ 02711560
                       catch() { ... } // from try @ 02711550 with catch @ 02711560 */
                    /* try { // try from 02711564 to 02811567 has its CatchHandler @ 02711570 */
                    /* try { // try from 02711568 to 02811573 has its CatchHandler @ 027113f8 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02711564 with catch @ 02711570
                        */
  fVar18 = param_3;
  fVar19 = param_2;
  if ((bRam0000000005c2ba09 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_0575a2d8);
    FUN_012d0dc8(PTR_DAT_057dc5e0);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_05818d48);
    FUN_012d0dc8(PTR_DAT_057ccae0);
    FUN_012d0dc8(PTR_DAT_057874c0);
    FUN_012d0dc8(PTR_DAT_057fc1d0);
    FUN_012d0dc8(PTR_DAT_0575e948);
    FUN_012d0dc8(PTR_DAT_05804fb8);
    bRam0000000005c2ba09 = 1;
  }
  lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  puVar2 = PTR_DAT_057fc1d0;
  puVar1 = PTR_DAT_057815e0;
  if (lVar3 != 0) {
    System_Object___ctor_23dfe5c(lVar3,0);
    *(long *)(lVar3 + 0x10) = param_4;
    FUN_012d0d74((long *)(lVar3 + 0x10),param_4);
    *(undefined4 *)(lVar3 + 0x18) = param_1;
    *(float *)(lVar3 + 0x1c) = param_2;
    *(float *)(lVar3 + 0x20) = param_3;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar4 = DG_Tweening_DOTween__Sequence_1eda154(0);
    uVar5 = UnityEngine_Component__get_gameObject_408b480(param_4,0);
    uVar4 = DG_Tweening_TweenSettingsExtensions__SetLink_object__2450f00
                      (uVar4,uVar5,*(undefined8 *)puVar2);
    if ((param_5 != 0) &&
       (plVar6 = (long *)Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4
                                   (param_5,0), plVar6 != (long *)0x0)) {
      lVar11 = *plVar6;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_0575a2d8) {
            puVar7 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_027116e0;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar7 = (undefined8 *)FUN_0131971c(plVar6,*(long *)PTR_DAT_0575a2d8,0);
LAB_027116e0:
      fVar14 = (float)(*(code *)*puVar7)(plVar6,puVar7[1]);
      if (*(long *)(param_4 + 0x38) != 0) {
        fVar21 = *(float *)(*(long *)(param_4 + 0x38) + 0x308);
        if (cRam0000000005c230ac == '\0') {
          FUN_012d0dc8(PTR_DAT_05805c10);
          cRam0000000005c230ac = '\x01';
        }
        lVar11 = *(long *)(*(long *)PTR_DAT_05805c10 + 0xb8);
        fVar15 = *(float *)(lVar11 + 0x20);
        fVar22 = *(float *)(lVar11 + 0x18);
        fVar20 = *(float *)(lVar11 + 0x1c);
        fVar23 = *(float *)(lVar3 + 0x18);
        fVar24 = *(float *)(lVar3 + 0x1c);
        if (cRam0000000005c244b8 == '\0') {
          FUN_012d0dc8(PTR_DAT_057d6f00);
          cRam0000000005c244b8 = '\x01';
        }
        if (*(int *)(*(long *)PTR_DAT_057d6f00 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        if (*(long *)(param_4 + 0x38) != 0) {
          fVar17 = *(float *)(*(long *)(param_4 + 0x38) + 0x3a8);
          lVar11 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057606c8);
          puVar1 = PTR_DAT_05818d48;
          if (lVar11 != 0) {
            fVar14 = fVar14 + fVar21 * fVar22;
            fVar19 = fVar19 + fVar21 * fVar20;
            fVar23 = fVar14 - fVar23;
            fVar24 = fVar19 - fVar24;
            DG_Tweening_TweenCallback___ctor_1ed6da8(lVar11,lVar3,*(undefined8 *)PTR_DAT_0575e948,0)
            ;
            DG_Tweening_TweenSettingsExtensions__OnStart_object__24505a0
                      (uVar4,lVar11,*(undefined8 *)puVar1);
            puVar1 = PTR_DAT_057dc5e0;
            if (fVar17 <= SQRT(fVar23 * fVar23 + fVar24 * fVar24)) {
              fVar18 = fVar18 + fVar21 * fVar15;
              Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__GetBezierControlPointsForPosition_2611f38
                        (&uStack_98,fVar14,fVar19,fVar18,*(undefined4 *)(lVar3 + 0x18),
                         *(undefined4 *)(lVar3 + 0x1c),*(undefined4 *)(lVar3 + 0x20),param_4,
                         *(undefined4 *)(param_5 + 0xdc),param_6);
                    /* try { // try from 027118d4 to 02811913 has its CatchHandler @ 027118d4
                       catch() { ... } // from try @ 027118d4 with catch @ 027118d4
                       catch() { ... } // from try @ 02711928 with catch @ 027118d4
                       catch() { ... } // from try @ 02711964 with catch @ 027118d4
                       catch() { ... } // from try @ 027119a4 with catch @ 027118d4 */
              uVar5 = CONCAT44(uStack_88,uStack_8c);
              uVar10 = Modules_Infrastructure_Utils_BezierUtils__Get2NodeBezierControlPointsXYConfigurable_3de0b30
                                 (fVar14,fVar19,fVar18,*(undefined4 *)(lVar3 + 0x18),
                                  *(undefined4 *)(lVar3 + 0x1c),*(undefined4 *)(lVar3 + 0x20),0);
                    /* try { // try from 02711914 to 02811927 has its CatchHandler @ 02711934 */
                    /* try { // try from 02711928 to 0281194b has its CatchHandler @ 027118d4 */
              uVar16 = Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__GetSnitchHitDynamicDuration_260f3e8
                                 (fVar14,fVar19,fVar18,*(undefined4 *)(lVar3 + 0x18),
                                  *(undefined4 *)(lVar3 + 0x1c),*(undefined4 *)(lVar3 + 0x20),
                                  param_4);
              uVar9 = uStack_98;
              uVar25 = uStack_90;
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02711914 with catch @ 02711934
                        */
              uVar8 = UnityEngine_Component__get_transform_408b444(param_4,0);
                    /* try { // try from 0271194c to 02811963 has its CatchHandler @ 0271199c */
              uStack_98 = 0;
              uStack_90 = 0;
              uStack_8c = 0;
              uStack_88 = 0;
                    /* try { // try from 02711964 to 0281198b has its CatchHandler @ 027118d4 */
              System_Nullable_Color____ctor_2037044
                        (0x3f800000,0x3f800000,0x3f800000,0x3f800000,&uStack_98,
                         *(undefined8 *)puVar1);
              uStack_a8 = CONCAT44(uStack_8c,uStack_90);
              uStack_b0 = uStack_98;
                    /* try { // try from 0271198c to 0281199b has its CatchHandler @ 0271199c */
              uStack_a0 = uStack_88;
              uVar5 = DG_Tweening_ShortcutExtensions__DOPath_1ee9134
                                (uVar16,uVar8,uVar10,2,3,0x23,&uStack_b0,0,in_x7,uVar9,uVar25,uVar5,
                                 uStack_84);
                    /* catch() { ... } // from try @ 0271194c with catch @ 0271199c
                       catch() { ... } // from try @ 0271198c with catch @ 0271199c */
                    /* try { // try from 027119a0 to 028119a3 has its CatchHandler @ 027119ac */
              if (*(long *)(param_4 + 0x38) != 0) {
                    /* try { // try from 027119a4 to 028119af has its CatchHandler @ 027118d4 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 027119a0 with catch @ 027119ac
                        */
                uVar9 = *(undefined8 *)(*(long *)(param_4 + 0x38) + 0x378);
                uVar10 = *(undefined8 *)PTR_DAT_057ccae0;
LAB_027119b4:
                uVar5 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                  (uVar5,uVar9,uVar10);
                DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar4,uVar5,0);
                return uVar4;
              }
            }
            else {
              uVar5 = UnityEngine_Component__get_transform_408b444(param_4,0);
              if (*(long *)(param_4 + 0x38) != 0) {
                uVar5 = DG_Tweening_ShortcutExtensions__DOMoveX_1ee516c
                                  (*(undefined4 *)(lVar3 + 0x18),
                                   *(undefined4 *)(*(long *)(param_4 + 0x38) + 0x3e4),uVar5,0,0);
                puVar1 = PTR_DAT_057874c0;
                if (*(long *)(param_4 + 0x38) != 0) {
                  uVar5 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                    (uVar5,*(undefined8 *)(*(long *)(param_4 + 0x38) + 1000),
                                     *(undefined8 *)PTR_DAT_057874c0);
                  DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar4,uVar5,0);
                  uVar5 = UnityEngine_Component__get_transform_408b444(param_4,0);
                  if (*(long *)(param_4 + 0x38) != 0) {
                    uVar5 = DG_Tweening_ShortcutExtensions__DOMoveY_1ee533c
                                      (*(undefined4 *)(lVar3 + 0x1c),
                                       *(undefined4 *)(*(long *)(param_4 + 0x38) + 0x3e4),uVar5,0,0)
                    ;
                    if (*(long *)(param_4 + 0x38) != 0) {
                      uVar9 = *(undefined8 *)(*(long *)(param_4 + 0x38) + 0x3f0);
                      uVar10 = *(undefined8 *)puVar1;
                      goto LAB_027119b4;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

