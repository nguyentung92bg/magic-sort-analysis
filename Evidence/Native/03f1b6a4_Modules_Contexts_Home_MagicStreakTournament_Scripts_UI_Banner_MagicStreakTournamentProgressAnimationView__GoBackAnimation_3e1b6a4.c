/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Banner.MagicStreakTournamentProgressAnimationView$$GoBackAnimation
DG_Tweening_Sequence_o* Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressAnimationView__GoBackAnimation (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressAnimationView_o* __this, int32_t index, UnityEngine_Vector3_o initialPosition, UnityEngine_Vector3_o middlePosition, UnityEngine_Vector3_o finalPosition, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Banner.MagicStreakTournamentProgressAnimationView$$GoBackAnimation
   DG_Tweening_Sequence_o*
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressAnimationView__GoBackAnimation
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressAnimationView_o*
   __this, int32_t index, UnityEngine_Vector3_o initialPosition, UnityEngine_Vector3_o
   middlePosition, UnityEngine_Vector3_o finalPosition, const MethodInfo* method); */

undefined8
Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressAnimationView__GoBackAnimation_3e1b6a4
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,long param_7,int param_8)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  undefined4 uStack0000000000000000;
  undefined4 uStack0000000000000004;
  undefined4 in_stack_00000008;
  
  puVar2 = PTR_DAT_058030a8;
                    /* try { // try from 03f1b6f4 to 0401b6ff has its CatchHandler @ 03f1b8a8 */
  if ((bRam0000000005c380dc & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_058030a8);
    bRam0000000005c380dc = 1;
  }
  lVar6 = FUN_012d0e38(*(undefined8 *)puVar2,3);
  if (lVar6 != 0) {
    uVar1 = *(uint *)(lVar6 + 0x18);
                    /* try { // try from 03f1b728 to 0401b743 has its CatchHandler @ 03f1b8b0 */
    if (uVar1 != 0) {
      *(undefined4 *)(lVar6 + 0x20) = param_1;
      *(undefined4 *)(lVar6 + 0x24) = param_2;
      *(undefined4 *)(lVar6 + 0x28) = param_3;
      if (uVar1 != 1) {
        *(undefined4 *)(lVar6 + 0x2c) = param_4;
        *(undefined4 *)(lVar6 + 0x30) = param_5;
        *(undefined4 *)(lVar6 + 0x34) = param_6;
        if (2 < uVar1) {
                    /* try { // try from 03f1b758 to 0401b773 has its CatchHandler @ 03f1b8a4 */
          *(undefined4 *)(lVar6 + 0x38) = uStack0000000000000000;
          *(undefined4 *)(lVar6 + 0x3c) = uStack0000000000000004;
          *(undefined4 *)(lVar6 + 0x40) = in_stack_00000008;
          puVar2 = PTR_DAT_057815e0;
          if (3 < param_8) {
            if ((bRam0000000005c380de & 1) == 0) {
              FUN_012d0dc8(PTR_DAT_057815e0);
              FUN_012d0dc8(PTR_DAT_057ccae0);
              bRam0000000005c380de = 1;
            }
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_0130472c();
            }
            uVar3 = DG_Tweening_DOTween__Sequence_1eda154(0);
            if (*(long *)(param_7 + 0x18) != 0) {
              uVar4 = UnityEngine_Component__get_transform_408b444(*(long *)(param_7 + 0x18),0);
              lVar7 = *(long *)(param_7 + 0x30);
              if (lVar7 != 0) {
                uVar4 = DG_Tweening_ShortcutExtensions__DOScale_1ee649c
                                  (*(undefined4 *)(lVar7 + 0x4c),*(undefined4 *)(lVar7 + 0x50),
                                   *(undefined4 *)(lVar7 + 0x54),*(undefined4 *)(lVar7 + 0x48),uVar4
                                   ,0);
                DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar3,uVar4,0);
                if (*(long *)(param_7 + 0x18) != 0) {
                  uVar4 = UnityEngine_Component__get_transform_408b444(*(long *)(param_7 + 0x18),0);
                  lVar7 = *(long *)(param_7 + 0x30);
                  if (lVar7 != 0) {
                    uVar4 = DG_Tweening_ShortcutExtensions__DOScale_1ee649c
                                      (*(undefined4 *)(lVar7 + 0x5c),*(undefined4 *)(lVar7 + 0x60),
                                       *(undefined4 *)(lVar7 + 100),*(undefined4 *)(lVar7 + 0x58),
                                       uVar4,0);
                    DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar3,uVar4,0);
                    if (*(long *)(param_7 + 0x30) != 0) {
                      uVar4 = *(undefined8 *)(param_7 + 0x18);
                      fVar9 = *(float *)(*(long *)(param_7 + 0x30) + 0x24);
                      fVar8 = (float)Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressAnimationView__GetAdditionalDurationForHatMovement_3e1b7c8
                                               (param_7,param_8,1);
                      uVar4 = DG_Tweening_ShortcutExtensions__DOLocalPath_1ee937c
                                        (fVar9 + fVar8,uVar4,lVar6,1,1,10,&stack0xffffffffffffffa8,0
                                        );
                      uVar4 = DG_Tweening_TweenSettingsExtensions__SetOptions_1eee58c(uVar4,0,0,0,0)
                      ;
                      if (*(long *)(param_7 + 0x30) != 0) {
                        uVar4 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                          (uVar4,*(undefined8 *)(*(long *)(param_7 + 0x30) + 0x18),
                                           *(undefined8 *)PTR_DAT_057ccae0);
                        DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar3,uVar4,0);
                        uVar4 = DG_Tweening_DOTween__Sequence_1eda154(0);
                        if (*(long *)(param_7 + 0x18) != 0) {
                          uVar5 = UnityEngine_Component__get_transform_408b444
                                            (*(long *)(param_7 + 0x18),0);
                          lVar6 = *(long *)(param_7 + 0x30);
                          if (lVar6 != 0) {
                            uVar5 = DG_Tweening_ShortcutExtensions__DOScale_1ee649c
                                              (*(undefined4 *)(lVar6 + 0x6c),
                                               *(undefined4 *)(lVar6 + 0x70),
                                               *(undefined4 *)(lVar6 + 0x74),
                                               *(undefined4 *)(lVar6 + 0x68),uVar5,0);
                            DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar4,uVar5,0);
                            if (*(long *)(param_7 + 0x18) != 0) {
                              uVar5 = UnityEngine_Component__get_transform_408b444
                                                (*(long *)(param_7 + 0x18),0);
                              if (cRam0000000005c230a9 == '\0') {
                                FUN_012d0dc8(PTR_DAT_05805c10);
                                cRam0000000005c230a9 = '\x01';
                              }
                              if (*(long *)(param_7 + 0x30) != 0) {
                                lVar6 = *(long *)(*(long *)PTR_DAT_05805c10 + 0xb8);
                                uVar5 = DG_Tweening_ShortcutExtensions__DOScale_1ee649c
                                                  (*(undefined4 *)(lVar6 + 0xc),
                                                   *(undefined4 *)(lVar6 + 0x10),
                                                   *(undefined4 *)(lVar6 + 0x14),
                                                   *(undefined4 *)(*(long *)(param_7 + 0x30) + 0x78)
                                                   ,uVar5,0);
                                DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar4,uVar5,0);
                                lVar6 = *(long *)(param_7 + 0x30);
                                if (lVar6 != 0) {
                                  DG_Tweening_TweenSettingsExtensions__Insert_1eedff4
                                            ((*(float *)(lVar6 + 0x24) + *(float *)(lVar6 + 0x58) +
                                             *(float *)(lVar6 + 0x48)) - *(float *)(lVar6 + 0x7c),
                                             uVar3,uVar4,0);
                                  return uVar3;
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
          if ((bRam0000000005c380dd & 1) == 0) {
            FUN_012d0dc8(PTR_DAT_057815e0);
            FUN_012d0dc8(PTR_DAT_057ccae0);
            bRam0000000005c380dd = 1;
          }
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_0130472c();
          }
          uVar3 = DG_Tweening_DOTween__Sequence_1eda154(0);
          if (*(long *)(param_7 + 0x18) != 0) {
            uVar4 = UnityEngine_Component__get_transform_408b444(*(long *)(param_7 + 0x18),0);
            lVar7 = *(long *)(param_7 + 0x30);
            if (lVar7 != 0) {
              uVar4 = DG_Tweening_ShortcutExtensions__DOScale_1ee649c
                                (*(undefined4 *)(lVar7 + 0x4c),*(undefined4 *)(lVar7 + 0x50),
                                 *(undefined4 *)(lVar7 + 0x54),*(undefined4 *)(lVar7 + 0x48),uVar4,0
                                );
              DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar3,uVar4,0);
              if (*(long *)(param_7 + 0x18) != 0) {
                uVar4 = UnityEngine_Component__get_transform_408b444(*(long *)(param_7 + 0x18),0);
                lVar7 = *(long *)(param_7 + 0x30);
                if (lVar7 != 0) {
                  uVar4 = DG_Tweening_ShortcutExtensions__DOScale_1ee649c
                                    (*(undefined4 *)(lVar7 + 0x5c),*(undefined4 *)(lVar7 + 0x60),
                                     *(undefined4 *)(lVar7 + 100),*(undefined4 *)(lVar7 + 0x58),
                                     uVar4,0);
                  DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar3,uVar4,0);
                  if (*(long *)(param_7 + 0x30) != 0) {
                    uVar4 = *(undefined8 *)(param_7 + 0x18);
                    fVar9 = *(float *)(*(long *)(param_7 + 0x30) + 0x20);
                    fVar8 = (float)Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressAnimationView__GetAdditionalDurationForHatMovement_3e1b7c8
                                             (param_7,param_8,1);
                    uVar4 = DG_Tweening_ShortcutExtensions__DOLocalPath_1ee937c
                                      (fVar9 + fVar8,uVar4,lVar6,1,1,10,&stack0xffffffffffffffa8,0);
                    uVar4 = DG_Tweening_TweenSettingsExtensions__SetOptions_1eee58c(uVar4,0,0,0,0);
                    if (*(long *)(param_7 + 0x30) != 0) {
                      uVar4 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                        (uVar4,*(undefined8 *)(*(long *)(param_7 + 0x30) + 0x18),
                                         *(undefined8 *)PTR_DAT_057ccae0);
                      DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar3,uVar4,0);
                      uVar4 = DG_Tweening_DOTween__Sequence_1eda154(0);
                      if (*(long *)(param_7 + 0x18) != 0) {
                        uVar5 = UnityEngine_Component__get_transform_408b444
                                          (*(long *)(param_7 + 0x18),0);
                        lVar6 = *(long *)(param_7 + 0x30);
                        if (lVar6 != 0) {
                          uVar5 = DG_Tweening_ShortcutExtensions__DOScale_1ee649c
                                            (*(undefined4 *)(lVar6 + 0x6c),
                                             *(undefined4 *)(lVar6 + 0x70),
                                             *(undefined4 *)(lVar6 + 0x74),
                                             *(undefined4 *)(lVar6 + 0x68),uVar5,0);
                          DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar4,uVar5,0);
                          if (*(long *)(param_7 + 0x18) != 0) {
                            uVar5 = UnityEngine_Component__get_transform_408b444
                                              (*(long *)(param_7 + 0x18),0);
                            if (cRam0000000005c230a9 == '\0') {
                              FUN_012d0dc8(PTR_DAT_05805c10);
                              cRam0000000005c230a9 = '\x01';
                            }
                            if (*(long *)(param_7 + 0x30) != 0) {
                              lVar6 = *(long *)(*(long *)PTR_DAT_05805c10 + 0xb8);
                              uVar5 = DG_Tweening_ShortcutExtensions__DOScale_1ee649c
                                                (*(undefined4 *)(lVar6 + 0xc),
                                                 *(undefined4 *)(lVar6 + 0x10),
                                                 *(undefined4 *)(lVar6 + 0x14),
                                                 *(undefined4 *)(*(long *)(param_7 + 0x30) + 0x78),
                                                 uVar5,0);
                              DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar4,uVar5,0);
                              lVar6 = *(long *)(param_7 + 0x30);
                              if (lVar6 != 0) {
                                DG_Tweening_TweenSettingsExtensions__Insert_1eedff4
                                          ((*(float *)(lVar6 + 0x20) + *(float *)(lVar6 + 0x58) +
                                           *(float *)(lVar6 + 0x48)) - *(float *)(lVar6 + 0x7c),
                                           uVar3,uVar4,0);
                                return uVar3;
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
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

