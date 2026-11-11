/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Snitch.SnitchItemView$$PlaySnitchOutOfBottle
DG_Tweening_Sequence_o* Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__PlaySnitchOutOfBottle (Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView_o* __this, Modules_Infrastructure_Common_Scripts_Component_AItem_o* targetItem, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* belongingBottle, int32_t targetBottleRowIndex, UnityEngine_Vector3_o snitchTargetHitPosition, System_Action_o* onComplete, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Modules.Contexts.GamePlay.Board.Items.Scripts.Snitch.SnitchItemView$$PlaySnitchOutOfBottle
   DG_Tweening_Sequence_o*
   Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__PlaySnitchOutOfBottle
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView_o* __this,
   Modules_Infrastructure_Common_Scripts_Component_AItem_o* targetItem,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* belongingBottle, int32_t
   targetBottleRowIndex, UnityEngine_Vector3_o snitchTargetHitPosition, System_Action_o* onComplete,
   const MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__PlaySnitchOutOfBottle_2610c94
          (float param_1,float param_2,long *param_3,long param_4,long param_5,undefined4 param_6,
          undefined8 param_7)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  int *piVar14;
  long *plVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  
  puVar2 = PTR_DAT_05794808;
  fVar19 = param_2;
  if ((bRam0000000005c2ba00 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057e4648);
    FUN_012d0dc8(PTR_DAT_0575c3c8);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_0575a2d8);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_05818d48);
    FUN_012d0dc8(PTR_DAT_057874c0);
    FUN_012d0dc8(PTR_DAT_057fc1d0);
    FUN_012d0dc8(PTR_DAT_057952a8);
    FUN_012d0dc8(PTR_DAT_05758a70);
    FUN_012d0dc8(PTR_DAT_05782340);
    FUN_012d0dc8(PTR_DAT_057cf7e8);
    FUN_012d0dc8(PTR_DAT_05794808);
    bRam0000000005c2ba00 = 1;
  }
  lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
  if (lVar6 != 0) {
    System_Object___ctor_23dfe5c(lVar6,0);
    *(long *)(lVar6 + 0x10) = (long)param_3;
    FUN_012d0d74((long *)(lVar6 + 0x10),param_3);
    plVar15 = (long *)(lVar6 + 0x28);
    *plVar15 = param_4;
    FUN_012d0d74(plVar15,param_4);
    *(undefined8 *)(lVar6 + 0x30) = param_7;
    FUN_012d0d74((undefined8 *)(lVar6 + 0x30),param_7);
    puVar3 = PTR_DAT_057fc1d0;
    puVar2 = PTR_DAT_057815e0;
    if (param_3[0xc] != 0) {
      UnityEngine_Behaviour__set_enabled_408d778(param_3[0xc],1,0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      uVar7 = DG_Tweening_DOTween__Sequence_1eda154(0);
      uVar8 = UnityEngine_Component__get_gameObject_408b480(param_3,0);
      uVar7 = DG_Tweening_TweenSettingsExtensions__SetLink_object__2450f00
                        (uVar7,uVar8,*(undefined8 *)puVar3);
      if ((*plVar15 != 0) && (param_3[7] != 0)) {
        fVar16 = (float)Modules_Contexts_GamePlay_Snitch_Scripts_SnitchAnimationConfig__GetSnitchTargetOffsetForItemType_20fa198
                                  (param_3[7],*(undefined4 *)(*plVar15 + 0x18),0);
        plVar15 = *(long **)(lVar6 + 0x28);
        param_2 = param_2 + fVar19;
        *(float *)(lVar6 + 0x20) = param_1 + fVar16;
        *(float *)(lVar6 + 0x24) = param_2;
        if (plVar15 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)PTR_DAT_057e4648 + 300);
          if (((bVar1 <= *(byte *)(*plVar15 + 300)) &&
              (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar1 * 8 + -8) ==
               *(long *)PTR_DAT_057e4648)) &&
             (iVar5 = Modules_Contexts_GamePlay_Board_Items_Scripts_Carpet_CarpetItem__GetBelongingBottleCount_2f5b130
                                (plVar15,0), 0 < iVar5)) {
            fVar17 = (float)Modules_Contexts_GamePlay_Board_Items_Scripts_Carpet_CarpetItem__GetCenterPositionOfBelongingBottles_2f5c728
                                      (plVar15,0);
            param_2 = fVar19 + param_2;
            *(float *)(lVar6 + 0x20) = fVar16 + fVar17;
            *(float *)(lVar6 + 0x24) = param_2;
          }
        }
        if ((param_5 != 0) &&
           (plVar15 = (long *)Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4
                                        (param_5,0), plVar15 != (long *)0x0)) {
          lVar11 = *plVar15;
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
          if (uVar12 != 0) {
            piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_0575a2d8) {
                puVar9 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_02710f44;
              }
              uVar12 = uVar12 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar12 != 0);
          }
          puVar9 = (undefined8 *)FUN_0131971c(plVar15,*(long *)PTR_DAT_0575a2d8,0);
LAB_02710f44:
          (*(code *)*puVar9)(plVar15,puVar9[1]);
          if (((param_3[7] != 0) && (**(long **)(*(long *)PTR_DAT_0576aae0 + 0xb8) != 0)) &&
             (lVar11 = *(long *)(**(long **)(*(long *)PTR_DAT_0576aae0 + 0xb8) + 0x18), lVar11 != 0)
             ) {
            fVar19 = *(float *)(param_3[7] + 0x308);
            uVar8 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                              (lVar11,*(undefined8 *)PTR_DAT_0575c3c8);
            *(undefined8 *)(lVar6 + 0x18) = uVar8;
            FUN_012d0d74((undefined8 *)(lVar6 + 0x18),uVar8);
            uVar8 = Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__GetDynamicDurationRequiredForSequence_2611338
                              (*(undefined4 *)(lVar6 + 0x20),*(undefined4 *)(lVar6 + 0x24),0,param_3
                               ,param_5,param_6);
            puVar2 = PTR_DAT_057606c8;
            if (param_3[7] != 0) {
              fVar16 = *(float *)(param_3[7] + 0x2fc);
              lVar11 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057606c8);
              puVar3 = PTR_DAT_05818d48;
              if (lVar11 != 0) {
                DG_Tweening_TweenCallback___ctor_1ed6da8
                          (lVar11,lVar6,*(undefined8 *)PTR_DAT_057952a8,0);
                DG_Tweening_TweenSettingsExtensions__OnStart_object__24505a0
                          (uVar7,lVar11,*(undefined8 *)puVar3);
                uVar10 = DG_Tweening_DOTweenModuleSprite__DOFade_33e2fd0
                                   (0x3f800000,_UNK_04339be4,param_3[0xf],0);
                DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar7,uVar10,0);
                uVar10 = UnityEngine_Component__get_transform_408b444(param_3,0);
                if (param_3[7] != 0) {
                  uVar10 = DG_Tweening_ShortcutExtensions__DOMoveY_1ee533c
                                     (param_2 + fVar19,*(undefined4 *)(param_3[7] + 0x2fc),uVar10,0,
                                      0);
                  puVar3 = PTR_DAT_057874c0;
                  if (param_3[7] != 0) {
                    uVar10 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                       (uVar10,*(undefined8 *)(param_3[7] + 0x300),
                                        *(undefined8 *)PTR_DAT_057874c0);
                    DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar7,uVar10,0);
                    lVar11 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
                    if (lVar11 != 0) {
                      DG_Tweening_TweenCallback___ctor_1ed6da8
                                (lVar11,lVar6,*(undefined8 *)PTR_DAT_05758a70,0);
                      DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(0,uVar7,lVar11,0);
                      uVar10 = UnityEngine_Component__get_transform_408b444(param_3,0);
                      lVar11 = param_3[7];
                      if (lVar11 != 0) {
                        fVar19 = *(float *)(lVar11 + 800);
                        if (cRam0000000005c230a9 == '\0') {
                          FUN_012d0dc8(PTR_DAT_05805c10);
                          cRam0000000005c230a9 = '\x01';
                          lVar11 = param_3[7];
                          if (lVar11 == 0) goto LAB_0271132c;
                        }
                        puVar4 = PTR_DAT_05805c10;
                        lVar13 = *(long *)(*(long *)PTR_DAT_05805c10 + 0xb8);
                        uVar10 = DG_Tweening_ShortcutExtensions__DOScale_1ee649c
                                           (fVar19 * *(float *)(lVar13 + 0xc),
                                            fVar19 * *(float *)(lVar13 + 0x10),
                                            fVar19 * *(float *)(lVar13 + 0x14),
                                            *(undefined4 *)(lVar11 + 0x324),uVar10,0);
                        if (param_3[7] != 0) {
                          uVar10 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                             (uVar10,*(undefined8 *)(param_3[7] + 0x328),
                                              *(undefined8 *)puVar3);
                          DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar7,uVar10,0);
                          if (param_3[7] != 0) {
                            uVar18 = *(undefined4 *)(param_3[7] + 0x334);
                            uVar10 = Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__PlayOutOfBottleHitPath_2611524
                                               (*(undefined4 *)(lVar6 + 0x20),
                                                *(undefined4 *)(lVar6 + 0x24),0,param_3,param_5,
                                                param_6);
                            DG_Tweening_TweenSettingsExtensions__Insert_1eedff4
                                      (uVar18,uVar7,uVar10,0);
                            if (param_3[7] != 0) {
                              uVar18 = *(undefined4 *)(param_3[7] + 0x334);
                    /* try { // try from 027111bc to 0281120f has its CatchHandler @ 027111bc
                       catch() { ... } // from try @ 027111bc with catch @ 027111bc
                       catch() { ... } // from try @ 02711274 with catch @ 027111bc
                       catch() { ... } // from try @ 027112a4 with catch @ 027111bc
                       catch() { ... } // from try @ 02711320 with catch @ 027111bc */
                              uVar10 = UnityEngine_Component__get_transform_408b444(param_3,0);
                              if (param_3[7] != 0) {
                                fVar19 = *(float *)(param_3[7] + 0x338);
                                if (cRam0000000005c230a9 == '\0') {
                                  FUN_012d0dc8(PTR_DAT_05805c10);
                                  cRam0000000005c230a9 = '\x01';
                                }
                                lVar11 = *(long *)(*(long *)puVar4 + 0xb8);
                    /* try { // try from 02711210 to 02811273 has its CatchHandler @ 02711274 */
                                uVar10 = DG_Tweening_ShortcutExtensions__DOScale_1ee649c
                                                   (fVar19 * *(float *)(lVar11 + 0xc),
                                                    fVar19 * *(float *)(lVar11 + 0x10),
                                                    fVar19 * *(float *)(lVar11 + 0x14),uVar8,uVar10,
                                                    0);
                                if (param_3[7] != 0) {
                                  uVar10 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                                     (uVar10,*(undefined8 *)(param_3[7] + 0x340),
                                                      *(undefined8 *)puVar3);
                                  DG_Tweening_TweenSettingsExtensions__Insert_1eedff4
                                            (uVar18,uVar7,uVar10,0);
                                  if (param_3[7] != 0) {
                                    uVar18 = *(undefined4 *)(param_3[7] + 0x334);
                                    lVar11 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
                                    if (lVar11 != 0) {
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02711210 with catch @ 02711274
                       try { // try from 02711274 to 0281128b has its CatchHandler @ 027111bc */
                                      DG_Tweening_TweenCallback___ctor_1ed6da8
                                                (lVar11,lVar6,*(undefined8 *)PTR_DAT_05782340,0);
                                      DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154
                                                (uVar18,uVar7,lVar11,0);
                    /* try { // try from 0271128c to 028112a3 has its CatchHandler @ 02711318 */
                                      lVar11 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
                                      if (lVar11 != 0) {
                    /* try { // try from 027112a4 to 02811307 has its CatchHandler @ 027111bc */
                                        DG_Tweening_TweenCallback___ctor_1ed6da8
                                                  (lVar11,lVar6,*(undefined8 *)PTR_DAT_057cf7e8,0);
                                        DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154
                                                  ((float)uVar8 + fVar16,uVar7,lVar11,0);
                                        lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
                                        if (lVar6 != 0) {
                                          DG_Tweening_TweenCallback___ctor_1ed6da8
                                                    (lVar6,param_3,*(undefined8 *)(*param_3 + 0x1d0)
                                                     ,0);
                                          DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154
                                                    (0x40400000,uVar7,lVar6,0);
                    /* try { // try from 02711308 to 02811317 has its CatchHandler @ 02711318 */
                    /* catch() { ... } // from try @ 0271128c with catch @ 02711318
                       catch() { ... } // from try @ 02711308 with catch @ 02711318 */
                    /* try { // try from 0271131c to 0281131f has its CatchHandler @ 02711328 */
                    /* try { // try from 02711320 to 0281132b has its CatchHandler @ 027111bc */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0271131c with catch @ 02711328
                        */
                                          return uVar7;
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
LAB_0271132c:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

