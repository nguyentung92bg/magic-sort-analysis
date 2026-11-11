/* IL2CPP: Modules.Contexts.Home.MagicBottle.Scripts.UI.MagicBottleCongratsPopUp$$Show
void Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleCongratsPopUp__Show (Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleCongratsPopUp_o* __this, Modules_Infrastructure_UI_Common_Scripts_PopUp_PopUpArguments_o* popUpArguments, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MagicBottle.Scripts.UI.MagicBottleCongratsPopUp$$Show
   void Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleCongratsPopUp__Show
   (Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleCongratsPopUp_o* __this,
   Modules_Infrastructure_UI_Common_Scripts_PopUp_PopUpArguments_o* popUpArguments, const
   MethodInfo* method); */

void Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleCongratsPopUp__Show_375e078
               (long param_1,long *param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  float fVar15;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  if ((bRam0000000005c33ba9 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05818760);
    bRam0000000005c33ba9 = 1;
  }
  puVar4 = PTR_DAT_057b8520;
  if (param_2 == (long *)0x0) {
    return;
  }
  bVar1 = *(byte *)(*(long *)PTR_DAT_05818760 + 300);
  if ((*(byte *)(*param_2 + 300) < bVar1) ||
     (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_05818760)) {
                    /* WARNING: Subroutine does not return */
    FUN_012d1288(param_2);
  }
  uVar13 = *(undefined4 *)((long)param_2 + 0x24);
  lVar6 = param_2[5];
  uVar14 = *(undefined4 *)((long)param_2 + 0x2c);
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
  puVar2 = PTR_DAT_05814830;
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar5 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                    (*(undefined8 *)puVar2);
  if (lVar5 != 0) {
    Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Invoke_40e28a4(lVar5,0);
    if (*(long *)(param_1 + 0x70) != 0) {
      Modules_Contexts_Home_UI_Common_Scripts_PlayButtonContainer__StopMagicBottleParticle_297eb8c
                (*(long *)(param_1 + 0x70),0);
      if (*(long *)(param_1 + 0x70) != 0) {
        Modules_Contexts_Home_UI_Common_Scripts_PlayButtonContainer__ToggleMagicBottleSprite_297eb5c
                  (*(long *)(param_1 + 0x70),0,0);
        if ((*(long *)(param_1 + 0x18) != 0) &&
           (lVar5 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x18),0),
           lVar5 != 0)) {
          UnityEngine_GameObject__SetActive_408e318(lVar5,1,0);
          if ((*(long *)(param_1 + 0x18) != 0) &&
             (lVar5 = UnityEngine_Component__get_transform_408b444(*(long *)(param_1 + 0x18),0),
             lVar5 != 0)) {
            UnityEngine_Transform__set_position_4092ba8(uVar13,(int)lVar6,uVar14,lVar5,0);
            if (*(long *)(param_1 + 0x18) != 0) {
              lVar6 = UnityEngine_Component__get_transform_408b444(*(long *)(param_1 + 0x18),0);
              if (cRam0000000005c230a9 == '\0') {
                FUN_012d0dc8(PTR_DAT_05805c10);
                cRam0000000005c230a9 = '\x01';
              }
              puVar4 = PTR_DAT_05805c10;
              if ((*(long *)(param_1 + 0x28) != 0) && (lVar6 != 0)) {
                fVar15 = *(float *)(*(long *)(param_1 + 0x28) + 0x20);
                lVar5 = *(long *)(*(long *)PTR_DAT_05805c10 + 0xb8);
                UnityEngine_Transform__set_localScale_40932d0
                          (fVar15 * *(float *)(lVar5 + 0xc),fVar15 * *(float *)(lVar5 + 0x10),
                           fVar15 * *(float *)(lVar5 + 0x14),lVar6,0);
                puVar3 = PTR_DAT_057bc5e8;
                puVar2 = PTR_DAT_0577c710;
                if ((*(long *)(param_1 + 0x28) != 0) && (*(long *)(param_1 + 0x20) != 0)) {
                  UnityEngine_SpriteRenderer__set_color_4095de0
                            (0,0,0,*(undefined4 *)(*(long *)(param_1 + 0x28) + 100),
                             *(long *)(param_1 + 0x20),0);
                  lVar6 = *(long *)(param_1 + 0x30);
                  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                    thunk_FUN_0130472c();
                  }
                  uVar7 = Modules_Infrastructure_Utils_GrandStringExtensions__Localize_3de2900
                                    (*(undefined8 *)puVar2,0);
                  if (lVar6 != 0) {
                    Modules_Infrastructure_Utils_TextSequenceAnimator__SetText_3de58d4
                              (lVar6,uVar7,0,0);
                    if (*(long *)(param_1 + 0x38) != 0) {
                      lVar6 = TMPro_TextMeshPro__get_transform_38b5900(*(long *)(param_1 + 0x38),0);
                      if (cRam0000000005c230aa == '\0') {
                        FUN_012d0dc8(PTR_DAT_05805c10);
                        cRam0000000005c230aa = '\x01';
                      }
                      if (lVar6 != 0) {
                        puVar10 = *(undefined4 **)(*(long *)puVar4 + 0xb8);
                        UnityEngine_Transform__set_localScale_40932d0
                                  (*puVar10,puVar10[1],puVar10[2],lVar6,0);
                        if (*(long *)(param_1 + 0x40) != 0) {
                          lVar6 = TMPro_TextMeshPro__get_transform_38b5900
                                            (*(long *)(param_1 + 0x40),0);
                          if (cRam0000000005c230aa == '\0') {
                            FUN_012d0dc8(PTR_DAT_05805c10);
                            cRam0000000005c230aa = '\x01';
                          }
                          puVar3 = PTR_DAT_057815e0;
                          puVar2 = PTR_DAT_057606c8;
                          if (lVar6 != 0) {
                            puVar10 = *(undefined4 **)(*(long *)puVar4 + 0xb8);
                            UnityEngine_Transform__set_localScale_40932d0
                                      (*puVar10,puVar10[1],puVar10[2],lVar6,0);
                            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                              thunk_FUN_0130472c();
                            }
                            uVar7 = DG_Tweening_DOTween__Sequence_1eda154(0);
                            puVar11 = (undefined8 *)(param_1 + 0x78);
                            *puVar11 = uVar7;
                            FUN_012d0d74(puVar11,uVar7);
                            uVar7 = *puVar11;
                            lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
                            if (lVar6 != 0) {
                              DG_Tweening_TweenCallback___ctor_1ed6da8
                                        (lVar6,param_1,*(undefined8 *)PTR_DAT_05774bb8,0);
                              DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154
                                        (0,uVar7,lVar6,0);
                              if (*(long *)(param_1 + 0x18) != 0) {
                                uVar12 = *(undefined8 *)(param_1 + 0x78);
                                uVar7 = UnityEngine_Component__get_transform_408b444
                                                  (*(long *)(param_1 + 0x18),0);
                                lVar6 = *(long *)(param_1 + 0x28);
                                if (lVar6 != 0) {
                                  uVar8 = Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleCongratsPopUp__GetBottleFirstPath_375eecc
                                                    (*(undefined4 *)(lVar6 + 0x48),
                                                     *(undefined4 *)(lVar6 + 0x4c),
                                                     *(undefined4 *)(lVar6 + 0x50),param_1);
                                  if (*(long *)(param_1 + 0x28) != 0) {
                                    uVar13 = *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x60);
                                    uStack_78 = 0;
                                    uStack_70 = 0;
                                    uStack_68 = 0;
                                    System_Nullable_Color____ctor_2037044
                                              (0x3f800000,0,0,0x3f800000,&uStack_78,
                                               *(undefined8 *)PTR_DAT_057dc5e0);
                                    uStack_88 = uStack_70;
                                    uStack_90 = uStack_78;
                                    uStack_80 = uStack_68;
                                    uVar7 = DG_Tweening_ShortcutExtensions__DOPath_1ee9134
                                                      (uVar13,uVar7,uVar8,2,3,0x14,&uStack_90,0);
                                    if (*(long *)(param_1 + 0x28) != 0) {
                                      uVar7 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                                        (uVar7,*(undefined8 *)
                                                                (*(long *)(param_1 + 0x28) + 0x58),
                                                         *(undefined8 *)PTR_DAT_057ccae0);
                                      DG_Tweening_TweenSettingsExtensions__Insert_1eedff4
                                                (0,uVar12,uVar7,0);
                                      if (*(long *)(param_1 + 0x18) != 0) {
                                        uVar12 = *(undefined8 *)(param_1 + 0x78);
                                        uVar7 = UnityEngine_Component__get_transform_408b444
                                                          (*(long *)(param_1 + 0x18),0);
                                        lVar6 = *(long *)(param_1 + 0x28);
                                        if (lVar6 != 0) {
                                          uVar7 = DG_Tweening_ShortcutExtensions__DOScale_1ee663c
                                                            (*(undefined4 *)(lVar6 + 0x24),
                                                             *(undefined4 *)(lVar6 + 0x18),uVar7,0);
                                          puVar3 = PTR_DAT_057874c0;
                                          if (*(long *)(param_1 + 0x28) != 0) {
                                            uVar7 = 
                                                  DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                                            (uVar7,*(undefined8 *)
                                                                    (*(long *)(param_1 + 0x28) +
                                                                    0x28),
                                                             *(undefined8 *)PTR_DAT_057874c0);
                                            DG_Tweening_TweenSettingsExtensions__Insert_1eedff4
                                                      (0,uVar12,uVar7,0);
                                            lVar6 = *(long *)(param_1 + 0x28);
                                            if (lVar6 != 0) {
                                              uVar12 = *(undefined8 *)(param_1 + 0x78);
                                              uVar7 = 
                                                  DG_Tweening_DOTweenModuleSprite__DOFade_33e2fd0
                                                            (*(undefined4 *)(lVar6 + 0x68),
                                                             *(undefined4 *)(lVar6 + 0x6c),
                                                             *(undefined8 *)(param_1 + 0x20),0);
                                              if (*(long *)(param_1 + 0x28) != 0) {
                                                uVar7 = 
                                                  DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                                            (uVar7,*(undefined8 *)
                                                                    (*(long *)(param_1 + 0x28) +
                                                                    0x70),
                                                             *(undefined8 *)PTR_DAT_0580b168);
                                                DG_Tweening_TweenSettingsExtensions__Insert_1eedff4
                                                          (0,uVar12,uVar7,0);
                                                if (*(long *)(param_1 + 0x28) != 0) {
                                                  uVar7 = *(undefined8 *)(param_1 + 0x78);
                                                  uVar13 = *(undefined4 *)
                                                            (*(long *)(param_1 + 0x28) + 0x1c);
                                                  lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
                                                  if (lVar6 != 0) {
                                                    DG_Tweening_TweenCallback___ctor_1ed6da8
                                                              (lVar6,param_1,
                                                               *(undefined8 *)PTR_DAT_05791ca0,0);
                                                                                                        
                                                  DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154
                                                            (uVar13,uVar7,lVar6,0);
                                                  if ((*(long *)(param_1 + 0x28) != 0) &&
                                                     (*(long *)(param_1 + 0x30) != 0)) {
                                                    uVar12 = *(undefined8 *)(param_1 + 0x78);
                                                    uVar13 = *(undefined4 *)
                                                              (*(long *)(param_1 + 0x28) + 0x78);
                                                    uVar7 = 
                                                  Modules_Infrastructure_Utils_TextSequenceAnimator__MoveAndScale_3de60d8
                                                            (*(long *)(param_1 + 0x30),0);
                                                  DG_Tweening_TweenSettingsExtensions__Insert_1eedff4
                                                            (uVar13,uVar12,uVar7,0);
                                                  if ((*(long *)(param_1 + 0x28) != 0) &&
                                                     (*(long *)(param_1 + 0x38) != 0)) {
                                                    uVar12 = *(undefined8 *)(param_1 + 0x78);
                                                    uVar13 = *(undefined4 *)
                                                              (*(long *)(param_1 + 0x28) + 0x7c);
                                                    uVar7 = TMPro_TextMeshPro__get_transform_38b5900
                                                                      (*(long *)(param_1 + 0x38),0);
                                                    if (cRam0000000005c230a9 == '\0') {
                                                      FUN_012d0dc8(PTR_DAT_05805c10);
                                                      cRam0000000005c230a9 = '\x01';
                                                    }
                                                    if (*(long *)(param_1 + 0x28) != 0) {
                                                      lVar6 = *(long *)(*(long *)puVar4 + 0xb8);
                                                      uVar7 = 
                                                  DG_Tweening_ShortcutExtensions__DOScale_1ee649c
                                                            (*(undefined4 *)(lVar6 + 0xc),
                                                             *(undefined4 *)(lVar6 + 0x10),
                                                             *(undefined4 *)(lVar6 + 0x14),
                                                             *(undefined4 *)
                                                              (*(long *)(param_1 + 0x28) + 0x84),
                                                             uVar7,0);
                                                  if (*(long *)(param_1 + 0x28) != 0) {
                                                    uVar7 = 
                                                  DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                                            (uVar7,*(undefined8 *)
                                                                    (*(long *)(param_1 + 0x28) +
                                                                    0x88),*(undefined8 *)puVar3);
                                                  DG_Tweening_TweenSettingsExtensions__Insert_1eedff4
                                                            (uVar13,uVar12,uVar7,0);
                                                  if ((*(long *)(param_1 + 0x28) != 0) &&
                                                     (*(long *)(param_1 + 0x40) != 0)) {
                                                    uVar12 = *(undefined8 *)(param_1 + 0x78);
                                                    uVar13 = *(undefined4 *)
                                                              (*(long *)(param_1 + 0x28) + 0x80);
                                                    uVar7 = TMPro_TextMeshPro__get_transform_38b5900
                                                                      (*(long *)(param_1 + 0x40),0);
                                                    if (cRam0000000005c230a9 == '\0') {
                                                      FUN_012d0dc8(PTR_DAT_05805c10);
                                                      cRam0000000005c230a9 = '\x01';
                                                    }
                                                    if (*(long *)(param_1 + 0x28) != 0) {
                                                      lVar6 = *(long *)(*(long *)puVar4 + 0xb8);
                                                      uVar7 = 
                                                  DG_Tweening_ShortcutExtensions__DOScale_1ee649c
                                                            (*(undefined4 *)(lVar6 + 0xc),
                                                             *(undefined4 *)(lVar6 + 0x10),
                                                             *(undefined4 *)(lVar6 + 0x14),
                                                             *(undefined4 *)
                                                              (*(long *)(param_1 + 0x28) + 0x84),
                                                             uVar7,0);
                                                  if (*(long *)(param_1 + 0x28) != 0) {
                                                    uVar7 = 
                                                  DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                                            (uVar7,*(undefined8 *)
                                                                    (*(long *)(param_1 + 0x28) +
                                                                    0x88),*(undefined8 *)puVar3);
                                                  DG_Tweening_TweenSettingsExtensions__Insert_1eedff4
                                                            (uVar13,uVar12,uVar7,0);
                                                  puVar4 = PTR_DAT_05797df8;
                                                  if (*(long *)(param_1 + 0x28) != 0) {
                                                    uVar7 = *(undefined8 *)(param_1 + 0x78);
                                                    uVar13 = *(undefined4 *)
                                                              (*(long *)(param_1 + 0x28) + 0x90);
                                                    lVar6 = *(long *)PTR_DAT_05797df8;
                                                    if (*(int *)(lVar6 + 0xe0) == 0) {
                                                      thunk_FUN_0130472c();
                                                      lVar6 = *(long *)puVar4;
                                                    }
                                                    lVar5 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
                                                    if (lVar5 == 0) {
                                                      if (*(int *)(lVar6 + 0xe0) == 0) {
                                                        thunk_FUN_0130472c();
                                                        lVar6 = *(long *)puVar4;
                                                      }
                                                      uVar12 = **(undefined8 **)(lVar6 + 0xb8);
                                                      lVar5 = thunk_FUN_01320e48(*(undefined8 *)
                                                                                  puVar2);
                                                      if (lVar5 == 0) goto LAB_0385e870;
                                                      DG_Tweening_TweenCallback___ctor_1ed6da8
                                                                (lVar5,uVar12,
                                                                 *(undefined8 *)PTR_DAT_058189b8,0);
                                                      plVar9 = (long *)(*(long *)(*(long *)puVar4 +
                                                                                 0xb8) + 8);
                                                      *plVar9 = lVar5;
                                                      FUN_012d0d74(plVar9,lVar5);
                                                    }
                                                                                                        
                                                  DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154
                                                            (uVar13,uVar7,lVar5,0);
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

