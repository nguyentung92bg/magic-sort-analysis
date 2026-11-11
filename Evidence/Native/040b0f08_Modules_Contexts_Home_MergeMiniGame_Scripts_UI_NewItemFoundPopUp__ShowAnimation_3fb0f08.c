/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.UI.NewItemFoundPopUp$$ShowAnimation
DG_Tweening_Sequence_o* Modules_Contexts_Home_MergeMiniGame_Scripts_UI_NewItemFoundPopUp__ShowAnimation (Modules_Contexts_Home_MergeMiniGame_Scripts_UI_NewItemFoundPopUp_o* __this, int32_t level, Modules_Contexts_Application_Reward_Scripts_RewardModel_o* reward, UnityEngine_Vector3_o fromPosition, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.UI.NewItemFoundPopUp$$ShowAnimation
   DG_Tweening_Sequence_o*
   Modules_Contexts_Home_MergeMiniGame_Scripts_UI_NewItemFoundPopUp__ShowAnimation
   (Modules_Contexts_Home_MergeMiniGame_Scripts_UI_NewItemFoundPopUp_o* __this, int32_t level,
   Modules_Contexts_Application_Reward_Scripts_RewardModel_o* reward, UnityEngine_Vector3_o
   fromPosition, const MethodInfo* method); */

undefined8
Modules_Contexts_Home_MergeMiniGame_Scripts_UI_NewItemFoundPopUp__ShowAnimation_3fb0f08
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined4 param_5,
          undefined8 param_6)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined8 uVar8;
  float fVar9;
  
  puVar3 = PTR_DAT_057815e0;
  if ((bRam0000000005c3905a & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057887a8);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_057874c0);
    bRam0000000005c3905a = 1;
  }
  *(int *)(param_4 + 0x68) = (int)param_1;
  *(int *)(param_4 + 0x6c) = (int)param_2;
  *(int *)(param_4 + 0x70) = (int)param_3;
  puVar2 = PTR_DAT_057606c8;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar4 = DG_Tweening_DOTween__Sequence_1eda154(0);
  lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
  if (lVar5 != 0) {
    DG_Tweening_TweenCallback___ctor_1ed6da8(lVar5,param_4,*(undefined8 *)PTR_DAT_057887a8,0);
    DG_Tweening_TweenSettingsExtensions__AppendCallback_1eee078(uVar4,lVar5,0);
    Modules_Contexts_Home_MergeMiniGame_Scripts_UI_NewItemFoundPopUp__SetItem_3fb1534
              (param_4,0,param_5);
    if (*(long *)(param_4 + 0x38) != 0) {
      Modules_Contexts_Home_Monetization_WatchAndWin_Scripts_UI_WatchAndWinDynamicRewardView__SetReward_32fc0a0
                (*(long *)(param_4 + 0x38),param_6,0);
      if ((*(long *)(param_4 + 0x38) != 0) &&
         (lVar5 = *(long *)(*(long *)(param_4 + 0x38) + 0x30), lVar5 != 0)) {
        Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__FadeTextAndImage_1382724
                  (0,0x3f800000,lVar5,0);
        DG_Tweening_DOTweenModuleSprite__DOFade_33e2fd0(0,0,*(undefined8 *)(param_4 + 0x20),0);
        if ((*(long *)(param_4 + 0x18) != 0) &&
           (lVar5 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_4 + 0x18),0),
           lVar5 != 0)) {
          lVar5 = UnityEngine_GameObject__get_transform_408e25c(lVar5,0);
          if (cRam0000000005c230a9 == '\0') {
            FUN_012d0dc8(PTR_DAT_05805c10);
            cRam0000000005c230a9 = '\x01';
          }
          puVar3 = PTR_DAT_05805c10;
          if ((*(long *)(param_4 + 0x40) != 0) && (lVar5 != 0)) {
            fVar9 = *(float *)(*(long *)(param_4 + 0x40) + 0x1c0);
            lVar7 = *(long *)(*(long *)PTR_DAT_05805c10 + 0xb8);
            UnityEngine_Transform__set_localScale_40932d0
                      (fVar9 * *(float *)(lVar7 + 0xc),fVar9 * *(float *)(lVar7 + 0x10),
                       fVar9 * *(float *)(lVar7 + 0x14),lVar5,0);
            if ((*(long *)(param_4 + 0x18) != 0) &&
               ((lVar5 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_4 + 0x18),0),
                lVar5 != 0 &&
                (lVar5 = UnityEngine_GameObject__get_transform_408e25c(lVar5,0), lVar5 != 0)))) {
              UnityEngine_Transform__set_position_4092ba8(param_1,param_2,param_3,lVar5,0);
              lVar5 = *(long *)(param_4 + 0x48);
              if (cRam0000000005c230aa == '\0') {
                FUN_012d0dc8(PTR_DAT_05805c10);
                cRam0000000005c230aa = '\x01';
              }
              if (lVar5 != 0) {
                puVar6 = *(undefined4 **)(*(long *)puVar3 + 0xb8);
                UnityEngine_Transform__set_localScale_40932d0(*puVar6,puVar6[1],puVar6[2],lVar5,0);
                lVar5 = *(long *)(param_4 + 0x60);
                if (cRam0000000005c230aa == '\0') {
                  FUN_012d0dc8(PTR_DAT_05805c10);
                  cRam0000000005c230aa = '\x01';
                }
                if (lVar5 != 0) {
                  puVar6 = *(undefined4 **)(*(long *)puVar3 + 0xb8);
                  UnityEngine_Transform__set_localScale_40932d0(*puVar6,puVar6[1],puVar6[2],lVar5,0)
                  ;
                  lVar5 = *(long *)(param_4 + 0x58);
                  if (cRam0000000005c230aa == '\0') {
                    FUN_012d0dc8(PTR_DAT_05805c10);
                    cRam0000000005c230aa = '\x01';
                  }
                  if (lVar5 != 0) {
                    puVar6 = *(undefined4 **)(*(long *)puVar3 + 0xb8);
                    UnityEngine_Transform__set_localScale_40932d0
                              (*puVar6,puVar6[1],puVar6[2],lVar5,0);
                    lVar5 = *(long *)(param_4 + 0x50);
                    if (cRam0000000005c230aa == '\0') {
                      FUN_012d0dc8(PTR_DAT_05805c10);
                      cRam0000000005c230aa = '\x01';
                    }
                    if (lVar5 != 0) {
                      puVar6 = *(undefined4 **)(*(long *)puVar3 + 0xb8);
                      UnityEngine_Transform__set_localScale_40932d0
                                (*puVar6,puVar6[1],puVar6[2],lVar5,0);
                      uVar8 = *(undefined8 *)(param_4 + 0x50);
                      if (cRam0000000005c230a9 == '\0') {
                        FUN_012d0dc8(PTR_DAT_05805c10);
                        cRam0000000005c230a9 = '\x01';
                      }
                      if (*(long *)(param_4 + 0x40) != 0) {
                        lVar5 = *(long *)(*(long *)puVar3 + 0xb8);
                        uVar8 = DG_Tweening_ShortcutExtensions__DOScale_1ee649c
                                          (*(undefined4 *)(lVar5 + 0xc),
                                           *(undefined4 *)(lVar5 + 0x10),
                                           *(undefined4 *)(lVar5 + 0x14),
                                           *(undefined4 *)(*(long *)(param_4 + 0x40) + 0x1d8),uVar8,
                                           0);
                        puVar2 = PTR_DAT_057874c0;
                        if (*(long *)(param_4 + 0x40) != 0) {
                          uVar8 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                            (uVar8,*(undefined8 *)
                                                    (*(long *)(param_4 + 0x40) + 0x1e8),
                                             *(undefined8 *)PTR_DAT_057874c0);
                          DG_Tweening_TweenSettingsExtensions__Insert_1eedff4
                                    (_UNK_04339cd0,uVar4,uVar8,0);
                          uVar8 = *(undefined8 *)(param_4 + 0x58);
                          if (cRam0000000005c230a9 == '\0') {
                            FUN_012d0dc8(PTR_DAT_05805c10);
                            cRam0000000005c230a9 = '\x01';
                          }
                          if (*(long *)(param_4 + 0x40) != 0) {
                            lVar5 = *(long *)(*(long *)puVar3 + 0xb8);
                            uVar8 = DG_Tweening_ShortcutExtensions__DOScale_1ee649c
                                              (*(undefined4 *)(lVar5 + 0xc),
                                               *(undefined4 *)(lVar5 + 0x10),
                                               *(undefined4 *)(lVar5 + 0x14),
                                               *(undefined4 *)(*(long *)(param_4 + 0x40) + 0x1d8),
                                               uVar8,0);
                            if (*(long *)(param_4 + 0x40) != 0) {
                              uVar8 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                                (uVar8,*(undefined8 *)
                                                        (*(long *)(param_4 + 0x40) + 0x1e8),
                                                 *(undefined8 *)puVar2);
                              DG_Tweening_TweenSettingsExtensions__Insert_1eedff4
                                        (_UNK_0432e0b0,uVar4,uVar8,0);
                              uVar8 = *(undefined8 *)(param_4 + 0x60);
                              if (cRam0000000005c230a9 == '\0') {
                                FUN_012d0dc8(PTR_DAT_05805c10);
                                cRam0000000005c230a9 = '\x01';
                              }
                              if (*(long *)(param_4 + 0x40) != 0) {
                                lVar5 = *(long *)(*(long *)puVar3 + 0xb8);
                                uVar8 = DG_Tweening_ShortcutExtensions__DOScale_1ee649c
                                                  (*(undefined4 *)(lVar5 + 0xc),
                                                   *(undefined4 *)(lVar5 + 0x10),
                                                   *(undefined4 *)(lVar5 + 0x14),
                                                   *(undefined4 *)
                                                    (*(long *)(param_4 + 0x40) + 0x1d8),uVar8,0);
                                if (*(long *)(param_4 + 0x40) != 0) {
                                  uVar8 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                                    (uVar8,*(undefined8 *)
                                                            (*(long *)(param_4 + 0x40) + 0x1e8),
                                                     *(undefined8 *)puVar2);
                                  DG_Tweening_TweenSettingsExtensions__Insert_1eedff4
                                            (_UNK_04321764,uVar4,uVar8,0);
                                  uVar8 = *(undefined8 *)(param_4 + 0x48);
                                  if (cRam0000000005c230a9 == '\0') {
                                    FUN_012d0dc8(PTR_DAT_05805c10);
                                    cRam0000000005c230a9 = '\x01';
                                  }
                                  if (*(long *)(param_4 + 0x40) != 0) {
                                    lVar5 = *(long *)(*(long *)puVar3 + 0xb8);
                                    uVar8 = DG_Tweening_ShortcutExtensions__DOScale_1ee649c
                                                      (*(undefined4 *)(lVar5 + 0xc),
                                                       *(undefined4 *)(lVar5 + 0x10),
                                                       *(undefined4 *)(lVar5 + 0x14),
                                                       *(undefined4 *)
                                                        (*(long *)(param_4 + 0x40) + 0x1d8),uVar8,0)
                                    ;
                                    if (*(long *)(param_4 + 0x40) != 0) {
                                      uVar8 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                                        (uVar8,*(undefined8 *)
                                                                (*(long *)(param_4 + 0x40) + 0x1e8),
                                                         *(undefined8 *)puVar2);
                                      DG_Tweening_TweenSettingsExtensions__Insert_1eedff4
                                                (0x3f000000,uVar4,uVar8,0);
                                      lVar5 = *(long *)(param_4 + 0x40);
                                      if (lVar5 != 0) {
                                        uVar8 = DG_Tweening_DOTweenModuleSprite__DOFade_33e2fd0
                                                          (*(undefined4 *)(lVar5 + 0x1d4),
                                                           *(undefined4 *)(lVar5 + 0x1d8),
                                                           *(undefined8 *)(param_4 + 0x20),0);
                                        DG_Tweening_TweenSettingsExtensions__Insert_1eedff4
                                                  (_UNK_043e8820,uVar4,uVar8,0);
                                        if ((*(long *)(param_4 + 0x18) != 0) &&
                                           (lVar5 = UnityEngine_Component__get_gameObject_408b480
                                                              (*(long *)(param_4 + 0x18),0),
                                           lVar5 != 0)) {
                                          uVar8 = UnityEngine_GameObject__get_transform_408e25c
                                                            (lVar5,0);
                                          lVar5 = *(long *)(param_4 + 0x40);
                                          if (lVar5 != 0) {
                                            uVar8 = DG_Tweening_ShortcutExtensions__DOMove_1ee4f98
                                                              (*(undefined4 *)(lVar5 + 0x1c8),
                                                               *(undefined4 *)(lVar5 + 0x1cc),
                                                               *(undefined4 *)(lVar5 + 0x1d0),
                                                               *(undefined4 *)(lVar5 + 0x1d8),uVar8,
                                                               0,0);
                                            if (*(long *)(param_4 + 0x40) != 0) {
                                              uVar8 = 
                                                  DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                                            (uVar8,*(undefined8 *)
                                                                    (*(long *)(param_4 + 0x40) +
                                                                    0x1e0),*(undefined8 *)puVar2);
                                              uVar1 = _UNK_04339be4;
                                              DG_Tweening_TweenSettingsExtensions__Insert_1eedff4
                                                        (_UNK_04339be4,uVar4,uVar8,0);
                                              if ((*(long *)(param_4 + 0x18) != 0) &&
                                                 (lVar5 = 
                                                  UnityEngine_Component__get_gameObject_408b480
                                                            (*(long *)(param_4 + 0x18),0),
                                                 lVar5 != 0)) {
                                                uVar8 = 
                                                  UnityEngine_GameObject__get_transform_408e25c
                                                            (lVar5,0);
                                                if (cRam0000000005c230a9 == '\0') {
                                                  FUN_012d0dc8(PTR_DAT_05805c10);
                                                  cRam0000000005c230a9 = '\x01';
                                                }
                                                lVar5 = *(long *)(param_4 + 0x40);
                                                if (lVar5 != 0) {
                                                  fVar9 = *(float *)(lVar5 + 0x1c4);
                                                  lVar7 = *(long *)(*(long *)puVar3 + 0xb8);
                                                  uVar8 = 
                                                  DG_Tweening_ShortcutExtensions__DOScale_1ee649c
                                                            (*(float *)(lVar7 + 0xc) * fVar9,
                                                             *(float *)(lVar7 + 0x10) * fVar9,
                                                             *(float *)(lVar7 + 0x14) * fVar9,
                                                             *(undefined4 *)(lVar5 + 0x1d8),uVar8,0)
                                                  ;
                                                  if (*(long *)(param_4 + 0x40) != 0) {
                                                    uVar8 = 
                                                  DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                                            (uVar8,*(undefined8 *)
                                                                    (*(long *)(param_4 + 0x40) +
                                                                    0x1e8),*(undefined8 *)puVar2);
                                                  DG_Tweening_TweenSettingsExtensions__Insert_1eedff4
                                                            (uVar1,uVar4,uVar8,0);
                                                  return uVar4;
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
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

