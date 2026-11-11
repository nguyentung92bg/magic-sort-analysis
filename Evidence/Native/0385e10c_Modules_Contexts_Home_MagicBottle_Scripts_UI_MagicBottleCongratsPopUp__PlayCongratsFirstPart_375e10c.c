/* IL2CPP: Modules.Contexts.Home.MagicBottle.Scripts.UI.MagicBottleCongratsPopUp$$PlayCongratsFirstPart
void Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleCongratsPopUp__PlayCongratsFirstPart (Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleCongratsPopUp_o* __this, UnityEngine_Vector3_o bottleStartPosition, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicBottle.Scripts.UI.MagicBottleCongratsPopUp$$PlayCongratsFirstPart
   void Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleCongratsPopUp__PlayCongratsFirstPart
   (Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleCongratsPopUp_o* __this,
   UnityEngine_Vector3_o bottleStartPosition, const MethodInfo* method); */

void Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleCongratsPopUp__PlayCongratsFirstPart_375e10c
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined4 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  float fVar12;
  undefined4 uVar13;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  puVar3 = PTR_DAT_057b8520;
  if ((bRam0000000005c33bab & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057bc5e8);
    FUN_012d0dc8(PTR_DAT_05774bb8);
    FUN_012d0dc8(PTR_DAT_05791ca0);
    FUN_012d0dc8(PTR_DAT_057dc5e0);
    FUN_012d0dc8(PTR_DAT_05814830);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_057ccae0);
    FUN_012d0dc8(PTR_DAT_0580b168);
    FUN_012d0dc8(PTR_DAT_057874c0);
    FUN_012d0dc8(PTR_DAT_058189b8);
    FUN_012d0dc8(PTR_DAT_05797df8);
    FUN_012d0dc8(PTR_DAT_0577c710);
    bRam0000000005c33bab = 1;
  }
  puVar1 = PTR_DAT_05814830;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar4 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                    (*(undefined8 *)puVar1);
  if (lVar4 != 0) {
    Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Invoke_40e28a4(lVar4,0);
    if (*(long *)(param_4 + 0x70) != 0) {
      Modules_Contexts_Home_UI_Common_Scripts_PlayButtonContainer__StopMagicBottleParticle_297eb8c
                (*(long *)(param_4 + 0x70),0);
      if (*(long *)(param_4 + 0x70) != 0) {
        Modules_Contexts_Home_UI_Common_Scripts_PlayButtonContainer__ToggleMagicBottleSprite_297eb5c
                  (*(long *)(param_4 + 0x70),0,0);
        if ((*(long *)(param_4 + 0x18) != 0) &&
           (lVar4 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_4 + 0x18),0),
           lVar4 != 0)) {
          UnityEngine_GameObject__SetActive_408e318(lVar4,1,0);
          if ((*(long *)(param_4 + 0x18) != 0) &&
             (lVar4 = UnityEngine_Component__get_transform_408b444(*(long *)(param_4 + 0x18),0),
             lVar4 != 0)) {
            UnityEngine_Transform__set_position_4092ba8(param_1,param_2,param_3,lVar4,0);
            if (*(long *)(param_4 + 0x18) != 0) {
              lVar4 = UnityEngine_Component__get_transform_408b444(*(long *)(param_4 + 0x18),0);
              if (cRam0000000005c230a9 == '\0') {
                FUN_012d0dc8(PTR_DAT_05805c10);
                cRam0000000005c230a9 = '\x01';
              }
              puVar3 = PTR_DAT_05805c10;
              if ((*(long *)(param_4 + 0x28) != 0) && (lVar4 != 0)) {
                fVar12 = *(float *)(*(long *)(param_4 + 0x28) + 0x20);
                lVar9 = *(long *)(*(long *)PTR_DAT_05805c10 + 0xb8);
                UnityEngine_Transform__set_localScale_40932d0
                          (fVar12 * *(float *)(lVar9 + 0xc),fVar12 * *(float *)(lVar9 + 0x10),
                           fVar12 * *(float *)(lVar9 + 0x14),lVar4,0);
                puVar2 = PTR_DAT_057bc5e8;
                puVar1 = PTR_DAT_0577c710;
                if ((*(long *)(param_4 + 0x28) != 0) && (*(long *)(param_4 + 0x20) != 0)) {
                  UnityEngine_SpriteRenderer__set_color_4095de0
                            (0,0,0,*(undefined4 *)(*(long *)(param_4 + 0x28) + 100),
                             *(long *)(param_4 + 0x20),0);
                  lVar4 = *(long *)(param_4 + 0x30);
                  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                    thunk_FUN_0130472c();
                  }
                  uVar5 = Modules_Infrastructure_Utils_GrandStringExtensions__Localize_3de2900
                                    (*(undefined8 *)puVar1,0);
                  if (lVar4 != 0) {
                    Modules_Infrastructure_Utils_TextSequenceAnimator__SetText_3de58d4
                              (lVar4,uVar5,0,0);
                    if (*(long *)(param_4 + 0x38) != 0) {
                      lVar4 = TMPro_TextMeshPro__get_transform_38b5900(*(long *)(param_4 + 0x38),0);
                      if (cRam0000000005c230aa == '\0') {
                        FUN_012d0dc8(PTR_DAT_05805c10);
                        cRam0000000005c230aa = '\x01';
                      }
                      if (lVar4 != 0) {
                        puVar8 = *(undefined4 **)(*(long *)puVar3 + 0xb8);
                        UnityEngine_Transform__set_localScale_40932d0
                                  (*puVar8,puVar8[1],puVar8[2],lVar4,0);
                        if (*(long *)(param_4 + 0x40) != 0) {
                          lVar4 = TMPro_TextMeshPro__get_transform_38b5900
                                            (*(long *)(param_4 + 0x40),0);
                          if (cRam0000000005c230aa == '\0') {
                            FUN_012d0dc8(PTR_DAT_05805c10);
                            cRam0000000005c230aa = '\x01';
                          }
                          puVar2 = PTR_DAT_057815e0;
                          puVar1 = PTR_DAT_057606c8;
                          if (lVar4 != 0) {
                            puVar8 = *(undefined4 **)(*(long *)puVar3 + 0xb8);
                            UnityEngine_Transform__set_localScale_40932d0
                                      (*puVar8,puVar8[1],puVar8[2],lVar4,0);
                            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                              thunk_FUN_0130472c();
                            }
                            uVar5 = DG_Tweening_DOTween__Sequence_1eda154(0);
                            puVar10 = (undefined8 *)(param_4 + 0x78);
                            *puVar10 = uVar5;
                            FUN_012d0d74(puVar10,uVar5);
                            uVar5 = *puVar10;
                            lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                            if (lVar4 != 0) {
                              DG_Tweening_TweenCallback___ctor_1ed6da8
                                        (lVar4,param_4,*(undefined8 *)PTR_DAT_05774bb8,0);
                              DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154
                                        (0,uVar5,lVar4,0);
                              if (*(long *)(param_4 + 0x18) != 0) {
                                uVar11 = *(undefined8 *)(param_4 + 0x78);
                                uVar5 = UnityEngine_Component__get_transform_408b444
                                                  (*(long *)(param_4 + 0x18),0);
                                lVar4 = *(long *)(param_4 + 0x28);
                                if (lVar4 != 0) {
                                  uVar6 = Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleCongratsPopUp__GetBottleFirstPath_375eecc
                                                    (*(undefined4 *)(lVar4 + 0x48),
                                                     *(undefined4 *)(lVar4 + 0x4c),
                                                     *(undefined4 *)(lVar4 + 0x50),param_4);
                                  if (*(long *)(param_4 + 0x28) != 0) {
                                    uVar13 = *(undefined4 *)(*(long *)(param_4 + 0x28) + 0x60);
                    /* try { // try from 0385e4e0 to 0395e58f has its CatchHandler @ 0385e4e0
                       catch() { ... } // from try @ 0385e4e0 with catch @ 0385e4e0
                       catch() { ... } // from try @ 0385e5a0 with catch @ 0385e4e0
                       catch() { ... } // from try @ 0385e5e4 with catch @ 0385e4e0
                       catch() { ... } // from try @ 0385e61c with catch @ 0385e4e0 */
                                    uStack_78 = 0;
                                    uStack_70 = 0;
                                    uStack_68 = 0;
                                    System_Nullable_Color____ctor_2037044
                                              (0x3f800000,0,0,0x3f800000,&uStack_78,
                                               *(undefined8 *)PTR_DAT_057dc5e0);
                                    uStack_88 = uStack_70;
                                    uStack_90 = uStack_78;
                                    uStack_80 = uStack_68;
                                    uVar5 = DG_Tweening_ShortcutExtensions__DOPath_1ee9134
                                                      (uVar13,uVar5,uVar6,2,3,0x14,&uStack_90,0);
                                    if (*(long *)(param_4 + 0x28) != 0) {
                                      uVar5 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                                        (uVar5,*(undefined8 *)
                                                                (*(long *)(param_4 + 0x28) + 0x58),
                                                         *(undefined8 *)PTR_DAT_057ccae0);
                                      DG_Tweening_TweenSettingsExtensions__Insert_1eedff4
                                                (0,uVar11,uVar5,0);
                                      if (*(long *)(param_4 + 0x18) != 0) {
                                        uVar11 = *(undefined8 *)(param_4 + 0x78);
                                        uVar5 = UnityEngine_Component__get_transform_408b444
                                                          (*(long *)(param_4 + 0x18),0);
                                        lVar4 = *(long *)(param_4 + 0x28);
                                        if (lVar4 != 0) {
                    /* try { // try from 0385e590 to 0395e59f has its CatchHandler @ 0385e5c8 */
                                          uVar5 = DG_Tweening_ShortcutExtensions__DOScale_1ee663c
                                                            (*(undefined4 *)(lVar4 + 0x24),
                                                             *(undefined4 *)(lVar4 + 0x18),uVar5,0);
                                          puVar2 = PTR_DAT_057874c0;
                                          if (*(long *)(param_4 + 0x28) != 0) {
                    /* try { // try from 0385e5a0 to 0395e5df has its CatchHandler @ 0385e4e0 */
                                            uVar5 = 
                                                  DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                                            (uVar5,*(undefined8 *)
                                                                    (*(long *)(param_4 + 0x28) +
                                                                    0x28),
                                                             *(undefined8 *)PTR_DAT_057874c0);
                                            DG_Tweening_TweenSettingsExtensions__Insert_1eedff4
                                                      (0,uVar11,uVar5,0);
                                            lVar4 = *(long *)(param_4 + 0x28);
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0385e590 with catch @ 0385e5c8
                        */
                                            if (lVar4 != 0) {
                                              uVar11 = *(undefined8 *)(param_4 + 0x78);
                                              uVar5 = 
                                                  DG_Tweening_DOTweenModuleSprite__DOFade_33e2fd0
                                                            (*(undefined4 *)(lVar4 + 0x68),
                                                             *(undefined4 *)(lVar4 + 0x6c),
                                                             *(undefined8 *)(param_4 + 0x20),0);
                    /* try { // try from 0385e5e0 to 0395e5e3 has its CatchHandler @ 0385e608 */
                    /* try { // try from 0385e5e4 to 0395e60b has its CatchHandler @ 0385e4e0 */
                                              if (*(long *)(param_4 + 0x28) != 0) {
                                                uVar5 = 
                                                  DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                                            (uVar5,*(undefined8 *)
                                                                    (*(long *)(param_4 + 0x28) +
                                                                    0x70),
                                                             *(undefined8 *)PTR_DAT_0580b168);
                    /* catch() { ... } // from try @ 0385e5e0 with catch @ 0385e608 */
                    /* try { // try from 0385e60c to 0395e61b has its CatchHandler @ 0385e630 */
                                                DG_Tweening_TweenSettingsExtensions__Insert_1eedff4
                                                          (0,uVar11,uVar5,0);
                                                if (*(long *)(param_4 + 0x28) != 0) {
                    /* try { // try from 0385e61c to 0395e627 has its CatchHandler @ 0385e4e0 */
                                                  uVar5 = *(undefined8 *)(param_4 + 0x78);
                                                  uVar13 = *(undefined4 *)
                                                            (*(long *)(param_4 + 0x28) + 0x1c);
                                                  lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                    /* try { // try from 0385e628 to 0395e62f has its CatchHandler @ 0385e630 */
                                                  if (lVar4 != 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0385e60c with catch @ 0385e630
                       catch(type#2 @ 00000000) { ... } // from try @ 0385e628 with catch @ 0385e630
                        */
                                                    DG_Tweening_TweenCallback___ctor_1ed6da8
                                                              (lVar4,param_4,
                                                               *(undefined8 *)PTR_DAT_05791ca0,0);
                                                                                                        
                                                  DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154
                                                            (uVar13,uVar5,lVar4,0);
                                                  if ((*(long *)(param_4 + 0x28) != 0) &&
                                                     (*(long *)(param_4 + 0x30) != 0)) {
                                                    uVar11 = *(undefined8 *)(param_4 + 0x78);
                                                    uVar13 = *(undefined4 *)
                                                              (*(long *)(param_4 + 0x28) + 0x78);
                                                    uVar5 = 
                                                  Modules_Infrastructure_Utils_TextSequenceAnimator__MoveAndScale_3de60d8
                                                            (*(long *)(param_4 + 0x30),0);
                                                  DG_Tweening_TweenSettingsExtensions__Insert_1eedff4
                                                            (uVar13,uVar11,uVar5,0);
                                                  if ((*(long *)(param_4 + 0x28) != 0) &&
                                                     (*(long *)(param_4 + 0x38) != 0)) {
                                                    uVar11 = *(undefined8 *)(param_4 + 0x78);
                                                    uVar13 = *(undefined4 *)
                                                              (*(long *)(param_4 + 0x28) + 0x7c);
                                                    uVar5 = TMPro_TextMeshPro__get_transform_38b5900
                                                                      (*(long *)(param_4 + 0x38),0);
                                                    if (cRam0000000005c230a9 == '\0') {
                                                      FUN_012d0dc8(PTR_DAT_05805c10);
                                                      cRam0000000005c230a9 = '\x01';
                                                    }
                                                    if (*(long *)(param_4 + 0x28) != 0) {
                                                      lVar4 = *(long *)(*(long *)puVar3 + 0xb8);
                                                      uVar5 = 
                                                  DG_Tweening_ShortcutExtensions__DOScale_1ee649c
                                                            (*(undefined4 *)(lVar4 + 0xc),
                                                             *(undefined4 *)(lVar4 + 0x10),
                                                             *(undefined4 *)(lVar4 + 0x14),
                                                             *(undefined4 *)
                                                              (*(long *)(param_4 + 0x28) + 0x84),
                                                             uVar5,0);
                                                  if (*(long *)(param_4 + 0x28) != 0) {
                                                    uVar5 = 
                                                  DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                                            (uVar5,*(undefined8 *)
                                                                    (*(long *)(param_4 + 0x28) +
                                                                    0x88),*(undefined8 *)puVar2);
                                                  DG_Tweening_TweenSettingsExtensions__Insert_1eedff4
                                                            (uVar13,uVar11,uVar5,0);
                                                  if ((*(long *)(param_4 + 0x28) != 0) &&
                                                     (*(long *)(param_4 + 0x40) != 0)) {
                                                    uVar11 = *(undefined8 *)(param_4 + 0x78);
                                                    uVar13 = *(undefined4 *)
                                                              (*(long *)(param_4 + 0x28) + 0x80);
                                                    uVar5 = TMPro_TextMeshPro__get_transform_38b5900
                                                                      (*(long *)(param_4 + 0x40),0);
                                                    if (cRam0000000005c230a9 == '\0') {
                                                      FUN_012d0dc8(PTR_DAT_05805c10);
                                                      cRam0000000005c230a9 = '\x01';
                                                    }
                                                    if (*(long *)(param_4 + 0x28) != 0) {
                                                      lVar4 = *(long *)(*(long *)puVar3 + 0xb8);
                                                      uVar5 = 
                                                  DG_Tweening_ShortcutExtensions__DOScale_1ee649c
                                                            (*(undefined4 *)(lVar4 + 0xc),
                                                             *(undefined4 *)(lVar4 + 0x10),
                                                             *(undefined4 *)(lVar4 + 0x14),
                                                             *(undefined4 *)
                                                              (*(long *)(param_4 + 0x28) + 0x84),
                                                             uVar5,0);
                                                  if (*(long *)(param_4 + 0x28) != 0) {
                                                    uVar5 = 
                                                  DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                                            (uVar5,*(undefined8 *)
                                                                    (*(long *)(param_4 + 0x28) +
                                                                    0x88),*(undefined8 *)puVar2);
                                                  DG_Tweening_TweenSettingsExtensions__Insert_1eedff4
                                                            (uVar13,uVar11,uVar5,0);
                                                  puVar3 = PTR_DAT_05797df8;
                                                  if (*(long *)(param_4 + 0x28) != 0) {
                                                    uVar5 = *(undefined8 *)(param_4 + 0x78);
                                                    uVar13 = *(undefined4 *)
                                                              (*(long *)(param_4 + 0x28) + 0x90);
                                                    lVar4 = *(long *)PTR_DAT_05797df8;
                                                    if (*(int *)(lVar4 + 0xe0) == 0) {
                                                      thunk_FUN_0130472c();
                                                      lVar4 = *(long *)puVar3;
                                                    }
                                                    lVar9 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
                                                    if (lVar9 == 0) {
                                                      if (*(int *)(lVar4 + 0xe0) == 0) {
                                                        thunk_FUN_0130472c();
                                                        lVar4 = *(long *)puVar3;
                                                      }
                                                      uVar11 = **(undefined8 **)(lVar4 + 0xb8);
                                                      lVar9 = thunk_FUN_01320e48(*(undefined8 *)
                                                                                  puVar1);
                                                      if (lVar9 == 0) goto LAB_0385e870;
                                                      DG_Tweening_TweenCallback___ctor_1ed6da8
                                                                (lVar9,uVar11,
                                                                 *(undefined8 *)PTR_DAT_058189b8,0);
                                                      plVar7 = (long *)(*(long *)(*(long *)puVar3 +
                                                                                 0xb8) + 8);
                                                      *plVar7 = lVar9;
                                                      FUN_012d0d74(plVar7,lVar9);
                                                    }
                                                                                                        
                                                  DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154
                                                            (uVar13,uVar5,lVar9,0);
                                                  return;
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
LAB_0385e870:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

