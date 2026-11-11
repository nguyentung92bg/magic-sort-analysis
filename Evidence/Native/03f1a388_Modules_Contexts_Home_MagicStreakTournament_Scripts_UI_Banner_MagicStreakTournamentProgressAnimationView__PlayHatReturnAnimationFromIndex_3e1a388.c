/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Banner.MagicStreakTournamentProgressAnimationView$$PlayHatReturnAnimationFromIndex
DG_Tweening_Sequence_o* Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressAnimationView__PlayHatReturnAnimationFromIndex (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressAnimationView_o* __this, int32_t index, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Banner.MagicStreakTournamentProgressAnimationView$$PlayHatReturnAnimationFromIndex
   DG_Tweening_Sequence_o*
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressAnimationView__PlayHatReturnAnimationFromIndex
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressAnimationView_o*
   __this, int32_t index, const MethodInfo* method); */

undefined8
Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressAnimationView__PlayHatReturnAnimationFromIndex_3e1a388
          (undefined1 param_1 [16],undefined4 param_2,undefined8 param_3,long param_4,
          undefined4 param_5)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  
  puVar2 = PTR_DAT_0575cdf8;
  if ((bRam0000000005c380db & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057c2030);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_05803aa8);
    FUN_012d0dc8(PTR_DAT_05775b20);
    FUN_012d0dc8(PTR_DAT_057615e0);
    FUN_012d0dc8(PTR_DAT_05791890);
    FUN_012d0dc8(PTR_DAT_057d7678);
    FUN_012d0dc8(PTR_DAT_05764350);
    FUN_012d0dc8(PTR_DAT_05810248);
    FUN_012d0dc8(PTR_DAT_057d9640);
    FUN_012d0dc8(PTR_DAT_057fa330);
    FUN_012d0dc8(PTR_DAT_0580cc50);
    FUN_012d0dc8(PTR_DAT_0575cdf8);
    bRam0000000005c380db = 1;
  }
  lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
  puVar2 = PTR_DAT_057815e0;
  if (lVar3 != 0) {
    System_Object___ctor_23dfe5c(lVar3,0);
    *(long *)(lVar3 + 0x10) = param_4;
    FUN_012d0d74((long *)(lVar3 + 0x10),param_4);
    *(undefined4 *)(lVar3 + 0x18) = param_5;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar4 = DG_Tweening_DOTween__Sequence_1eda154(0);
    if (3 < *(int *)(lVar3 + 0x18) - 2U) {
      return uVar4;
    }
    lVar5 = Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressAnimationView__GetHatPositionByStreakCount_3e1acb8
                      (param_4);
    if (lVar5 != 0) {
      uVar11 = UnityEngine_Transform__get_localPosition_4092c40(lVar5,0);
      if (((*(long *)(param_4 + 0x20) != 0) &&
          (lVar5 = System_Collections_Generic_List_object___get_Item_21fc76c
                             (*(long *)(param_4 + 0x20),0,*(undefined8 *)PTR_DAT_057c2030),
          lVar5 != 0)) &&
         (lVar5 = UnityEngine_Component__get_transform_408b444(lVar5,0), lVar5 != 0)) {
                    /* try { // try from 03f1a52c to 0401a5e3 has its CatchHandler @ 03f1a52c
                       catch() { ... } // from try @ 03f1a52c with catch @ 03f1a52c
                       catch() { ... } // from try @ 03f1a664 with catch @ 03f1a52c
                       catch() { ... } // from try @ 03f1a6a0 with catch @ 03f1a52c
                       catch() { ... } // from try @ 03f1a6d0 with catch @ 03f1a52c
                       catch() { ... } // from try @ 03f1a710 with catch @ 03f1a52c */
        fVar7 = (float)UnityEngine_Transform__get_localPosition_4092c40(lVar5,0);
        lVar5 = *(long *)(param_4 + 0x30);
        if ((lVar5 != 0) && (*(long *)(param_4 + 0x28) != 0)) {
          uVar8 = *(undefined4 *)(lVar5 + 0x104);
          iVar1 = *(int *)(lVar3 + 0x18);
          fVar15 = *(float *)(lVar5 + 0x80);
          fVar9 = *(float *)(lVar5 + 0x84);
          fVar10 = (float)Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressView__GetAdditionalDelayToGoBack_3e1b4e8
                                    (*(long *)(param_4 + 0x28),iVar1);
          uVar12 = Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressAnimationView__GetTotalDurationForHat_3e1b2a4
                             (param_4,*(undefined4 *)(lVar3 + 0x18));
          puVar2 = PTR_DAT_057606c8;
          lVar5 = *(long *)(param_4 + 0x30);
          if (lVar5 != 0) {
            fVar14 = *(float *)(lVar5 + 0x178);
            uVar13 = *(undefined4 *)(lVar5 + 0x170);
            lVar5 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057606c8);
            if (lVar5 != 0) {
              DG_Tweening_TweenCallback___ctor_1ed6da8
                        (lVar5,lVar3,*(undefined8 *)PTR_DAT_05803aa8,0);
              DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(uVar13,uVar4,lVar5,0);
              if (*(long *)(param_4 + 0x30) != 0) {
                uVar13 = *(undefined4 *)(*(long *)(param_4 + 0x30) + 0x170);
                lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
                if (lVar5 != 0) {
                    /* try { // try from 03f1a5e4 to 0401a5eb has its CatchHandler @ 03f1a6b4 */
                  DG_Tweening_TweenCallback___ctor_1ed6da8
                            (lVar5,lVar3,*(undefined8 *)PTR_DAT_05775b20,0);
                  DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(uVar13,uVar4,lVar5,0);
                  if (*(long *)(param_4 + 0x30) != 0) {
                    uVar13 = *(undefined4 *)(*(long *)(param_4 + 0x30) + 0x170);
                    lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
                    if (lVar5 != 0) {
                    /* try { // try from 03f1a644 to 0401a663 has its CatchHandler @ 03f1a6b0 */
                      DG_Tweening_TweenCallback___ctor_1ed6da8
                                (lVar5,lVar3,*(undefined8 *)PTR_DAT_057615e0,0);
                      DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154
                                (uVar13,uVar4,lVar5,0);
                      if (*(long *)(param_4 + 0x30) != 0) {
                    /* try { // try from 03f1a664 to 0401a68f has its CatchHandler @ 03f1a52c */
                        uVar13 = *(undefined4 *)(*(long *)(param_4 + 0x30) + 0x174);
                        lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
                        if (lVar5 != 0) {
                          DG_Tweening_TweenCallback___ctor_1ed6da8
                                    (lVar5,lVar3,*(undefined8 *)PTR_DAT_05791890,0);
                    /* try { // try from 03f1a690 to 0401a693 has its CatchHandler @ 03f1a6ac */
                    /* try { // try from 03f1a694 to 0401a697 has its CatchHandler @ 03f1a6a8 */
                    /* try { // try from 03f1a698 to 0401a69b has its CatchHandler @ 03f1a6a4 */
                    /* try { // try from 03f1a69c to 0401a69f has its CatchHandler @ 03f1a6ac */
                    /* try { // try from 03f1a6a0 to 0401a6cb has its CatchHandler @ 03f1a52c */
                          DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154
                                    (uVar13,uVar4,lVar5,0);
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 03f1a698 with catch @ 03f1a6a4
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 03f1a694 with catch @ 03f1a6a8
                        */
                          if (*(long *)(param_4 + 0x30) != 0) {
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 03f1a690 with catch @ 03f1a6ac
                       catch(type#1 @ 054cbd58) { ... } // from try @ 03f1a69c with catch @ 03f1a6ac
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 03f1a644 with catch @ 03f1a6b0
                        */
                            uVar13 = *(undefined4 *)(*(long *)(param_4 + 0x30) + 0x174);
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 03f1a5e4 with catch @ 03f1a6b4
                        */
                            lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
                            if (lVar5 != 0) {
                    /* try { // try from 03f1a6cc to 0401a6cf has its CatchHandler @ 03f1a6f8 */
                    /* try { // try from 03f1a6d0 to 0401a707 has its CatchHandler @ 03f1a52c */
                              DG_Tweening_TweenCallback___ctor_1ed6da8
                                        (lVar5,lVar3,*(undefined8 *)PTR_DAT_057d7678,0);
                              DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154
                                        (uVar13,uVar4,lVar5,0);
                              if (*(long *)(param_4 + 0x30) != 0) {
                    /* catch() { ... } // from try @ 03f1a6cc with catch @ 03f1a6f8 */
                                uVar13 = *(undefined4 *)(*(long *)(param_4 + 0x30) + 0x174);
                                lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
                                if (lVar5 != 0) {
                    /* try { // try from 03f1a708 to 0401a70f has its CatchHandler @ 03f1a724 */
                    /* try { // try from 03f1a710 to 0401a71b has its CatchHandler @ 03f1a52c */
                    /* try { // try from 03f1a71c to 0401a723 has its CatchHandler @ 03f1a724 */
                                  DG_Tweening_TweenCallback___ctor_1ed6da8
                                            (lVar5,lVar3,*(undefined8 *)PTR_DAT_05764350,0);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03f1a708 with catch @ 03f1a724
                       catch(type#2 @ 00000000) { ... } // from try @ 03f1a71c with catch @ 03f1a724
                        */
                    /* try { // try from 03f1a728 to 0401a7bf has its CatchHandler @ 03f1a728
                       catch() { ... } // from try @ 03f1a728 with catch @ 03f1a728
                       catch() { ... } // from try @ 03f1a7e0 with catch @ 03f1a728
                       catch() { ... } // from try @ 03f1a824 with catch @ 03f1a728
                       catch() { ... } // from try @ 03f1a84c with catch @ 03f1a728
                       catch() { ... } // from try @ 03f1a898 with catch @ 03f1a728 */
                                  DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154
                                            (uVar13,uVar4,lVar5,0);
                                  if (*(long *)(param_4 + 0x30) != 0) {
                                    uVar13 = *(undefined4 *)(*(long *)(param_4 + 0x30) + 0x178);
                                    lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
                                    if (lVar5 != 0) {
                                      DG_Tweening_TweenCallback___ctor_1ed6da8
                                                (lVar5,lVar3,*(undefined8 *)PTR_DAT_05810248,0);
                                      DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154
                                                (uVar13,uVar4,lVar5,0);
                                      if (*(long *)(param_4 + 0x30) != 0) {
                                        uVar13 = *(undefined4 *)(*(long *)(param_4 + 0x30) + 0x178);
                                        lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
                                        if (lVar5 != 0) {
                                          DG_Tweening_TweenCallback___ctor_1ed6da8
                                                    (lVar5,lVar3,*(undefined8 *)PTR_DAT_057d9640,0);
                    /* try { // try from 03f1a7c0 to 0401a7c7 has its CatchHandler @ 03f1a830 */
                                          DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154
                                                    (uVar13,uVar4,lVar5,0);
                                          if (*(long *)(param_4 + 0x30) != 0) {
                                            uVar13 = *(undefined4 *)
                                                      (*(long *)(param_4 + 0x30) + 0x178);
                                            lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
                    /* try { // try from 03f1a7d8 to 0401a7df has its CatchHandler @ 03f1a82c */
                                            if (lVar5 != 0) {
                    /* try { // try from 03f1a7e0 to 0401a81f has its CatchHandler @ 03f1a728 */
                                              DG_Tweening_TweenCallback___ctor_1ed6da8
                                                        (lVar5,lVar3,*(undefined8 *)PTR_DAT_057fa330
                                                         ,0);
                                              DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154
                                                        (uVar13,uVar4,lVar5,0);
                                              if (*(long *)(param_4 + 0x28) != 0) {
                    /* try { // try from 03f1a820 to 0401a823 has its CatchHandler @ 03f1a828 */
                    /* try { // try from 03f1a824 to 0401a847 has its CatchHandler @ 03f1a728 */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 03f1a820 with catch @ 03f1a828
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 03f1a7d8 with catch @ 03f1a82c
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 03f1a7c0 with catch @ 03f1a830
                        */
                                                fVar14 = fVar9 + fVar15 * (float)(iVar1 + -1) +
                                                         fVar10 + fVar14;
                                                uVar6 = 
                                                  Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressView__RedBarMoveTween_3e1b560
                                                            (uVar12,*(long *)(param_4 + 0x28),
                                                             *(undefined4 *)(lVar3 + 0x18));
                    /* try { // try from 03f1a848 to 0401a84b has its CatchHandler @ 03f1a880 */
                    /* try { // try from 03f1a84c to 0401a88f has its CatchHandler @ 03f1a728 */
                                                DG_Tweening_TweenSettingsExtensions__Insert_1eedff4
                                                          (fVar14,uVar4,uVar6,0);
                                                if (*(long *)(param_4 + 0x28) != 0) {
                                                  uVar6 = 
                                                  Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressView__FollowHatXPosition_3e1b2ec
                                                            (uVar12);
                                                  DG_Tweening_TweenSettingsExtensions__Insert_1eedff4
                                                            (fVar14,uVar4,uVar6,0);
                                                  if (*(long *)(param_4 + 0x28) != 0) {
                    /* catch() { ... } // from try @ 03f1a848 with catch @ 03f1a880 */
                    /* try { // try from 03f1a890 to 0401a897 has its CatchHandler @ 03f1a8ac */
                                                    uVar12 = 
                                                  Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressView__UpdateTargetRank_3e1b3d4
                                                            (uVar12,*(long *)(param_4 + 0x28),0);
                    /* try { // try from 03f1a898 to 0401a8a3 has its CatchHandler @ 03f1a728 */
                    /* try { // try from 03f1a8a4 to 0401a8ab has its CatchHandler @ 03f1a8ac */
                                                  DG_Tweening_TweenSettingsExtensions__Insert_1eedff4
                                                            (fVar14,uVar4,uVar12,0);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03f1a890 with catch @ 03f1a8ac
                       catch(type#2 @ 00000000) { ... } // from try @ 03f1a8a4 with catch @ 03f1a8ac
                        */
                                                  uVar11 = 
                                                  Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressAnimationView__GoBackAnimation_3e1b6a4
                                                            (uVar11,param_2,param_3,
                                                             ((float)uVar11 + fVar7) * 0.5,uVar8,
                                                             param_3,param_4,
                                                             *(undefined4 *)(lVar3 + 0x18));
                                                  DG_Tweening_TweenSettingsExtensions__Insert_1eedff4
                                                            (fVar14,uVar4,uVar11,0);
                                                  lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
                                                  if (lVar5 != 0) {
                                                    DG_Tweening_TweenCallback___ctor_1ed6da8
                                                              (lVar5,lVar3,
                                                               *(undefined8 *)PTR_DAT_0580cc50,0);
                                                                                                        
                                                  DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154
                                                            (fVar14 + _UNK_04339be4,uVar4,lVar5,0);
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
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

