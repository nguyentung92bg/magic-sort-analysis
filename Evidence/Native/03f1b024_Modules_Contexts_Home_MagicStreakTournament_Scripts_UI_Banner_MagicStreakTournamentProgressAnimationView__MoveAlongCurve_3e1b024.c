/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Banner.MagicStreakTournamentProgressAnimationView$$MoveAlongCurve
DG_Tweening_Sequence_o* Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressAnimationView__MoveAlongCurve (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressAnimationView_o* __this, UnityEngine_Vector3_array* pathPoints, int32_t streakCount, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Banner.MagicStreakTournamentProgressAnimationView$$MoveAlongCurve
   DG_Tweening_Sequence_o*
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressAnimationView__MoveAlongCurve
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressAnimationView_o*
   __this, UnityEngine_Vector3_array* pathPoints, int32_t streakCount, const MethodInfo* method); */

undefined8
Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressAnimationView__MoveAlongCurve_3e1b024
          (long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  puVar1 = PTR_DAT_057815e0;
                    /* try { // try from 03f1b034 to 0401b03b has its CatchHandler @ 03f1b12c */
                    /* try { // try from 03f1b050 to 0401b057 has its CatchHandler @ 03f1b124 */
  if ((bRam0000000005c380dd & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
                    /* try { // try from 03f1b064 to 0401b083 has its CatchHandler @ 03f1b128 */
    FUN_012d0dc8(PTR_DAT_057ccae0);
    bRam0000000005c380dd = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar2 = DG_Tweening_DOTween__Sequence_1eda154(0);
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar3 = UnityEngine_Component__get_transform_408b444(*(long *)(param_1 + 0x18),0);
    lVar5 = *(long *)(param_1 + 0x30);
                    /* try { // try from 03f1b0ac to 0401b0af has its CatchHandler @ 03f1b138 */
    if (lVar5 != 0) {
                    /* try { // try from 03f1b0b0 to 0401b0fb has its CatchHandler @ 03f1aee8 */
      uVar3 = DG_Tweening_ShortcutExtensions__DOScale_1ee649c
                        (*(undefined4 *)(lVar5 + 0x4c),*(undefined4 *)(lVar5 + 0x50),
                         *(undefined4 *)(lVar5 + 0x54),*(undefined4 *)(lVar5 + 0x48),uVar3,0);
      DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar2,uVar3,0);
      if (*(long *)(param_1 + 0x18) != 0) {
        uVar3 = UnityEngine_Component__get_transform_408b444(*(long *)(param_1 + 0x18),0);
        lVar5 = *(long *)(param_1 + 0x30);
        if (lVar5 != 0) {
          uVar3 = DG_Tweening_ShortcutExtensions__DOScale_1ee649c
                            (*(undefined4 *)(lVar5 + 0x5c),*(undefined4 *)(lVar5 + 0x60),
                             *(undefined4 *)(lVar5 + 100),*(undefined4 *)(lVar5 + 0x58),uVar3,0);
                    /* try { // try from 03f1b0fc to 0401b0ff has its CatchHandler @ 03f1b120 */
                    /* try { // try from 03f1b100 to 0401b103 has its CatchHandler @ 03f1b11c */
                    /* try { // try from 03f1b104 to 0401b107 has its CatchHandler @ 03f1b118 */
          DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar2,uVar3,0);
                    /* try { // try from 03f1b108 to 0401b10b has its CatchHandler @ 03f1b13c */
                    /* try { // try from 03f1b10c to 0401b10f has its CatchHandler @ 03f1b114 */
          if (*(long *)(param_1 + 0x30) != 0) {
                    /* try { // try from 03f1b110 to 0401b113 has its CatchHandler @ 03f1b134 */
            uVar3 = *(undefined8 *)(param_1 + 0x18);
                    /* catch() { ... } // from try @ 03f1b10c with catch @ 03f1b114
                       try { // try from 03f1b114 to 0401b153 has its CatchHandler @ 03f1aee8 */
            fVar7 = *(float *)(*(long *)(param_1 + 0x30) + 0x20);
                    /* catch() { ... } // from try @ 03f1b104 with catch @ 03f1b118 */
                    /* catch() { ... } // from try @ 03f1b100 with catch @ 03f1b11c */
                    /* catch() { ... } // from try @ 03f1b0fc with catch @ 03f1b120 */
                    /* catch() { ... } // from try @ 03f1b050 with catch @ 03f1b124 */
            fVar6 = (float)Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressAnimationView__GetAdditionalDurationForHatMovement_3e1b7c8
                                     (param_1,param_3,1);
                    /* catch() { ... } // from try @ 03f1b064 with catch @ 03f1b128 */
                    /* catch() { ... } // from try @ 03f1b034 with catch @ 03f1b12c */
                    /* catch() { ... } // from try @ 03f1b020 with catch @ 03f1b130 */
                    /* catch() { ... } // from try @ 03f1afe4 with catch @ 03f1b134
                       catch() { ... } // from try @ 03f1b110 with catch @ 03f1b134 */
                    /* catch() { ... } // from try @ 03f1b0ac with catch @ 03f1b138 */
                    /* catch() { ... } // from try @ 03f1afb4 with catch @ 03f1b13c
                       catch() { ... } // from try @ 03f1b108 with catch @ 03f1b13c */
            uStack_58 = 0;
            uStack_50 = 0;
            uStack_48 = 0;
            uVar3 = DG_Tweening_ShortcutExtensions__DOLocalPath_1ee937c
                              (fVar7 + fVar6,uVar3,param_2,1,1,10,&uStack_58,0);
                    /* try { // try from 03f1b154 to 0401b16b has its CatchHandler @ 03f1b1d8 */
            uVar3 = DG_Tweening_TweenSettingsExtensions__SetOptions_1eee58c(uVar3,0,0,0,0);
                    /* try { // try from 03f1b16c to 0401b1c7 has its CatchHandler @ 03f1aee8 */
            if (*(long *)(param_1 + 0x30) != 0) {
              uVar3 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                (uVar3,*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x18),
                                 *(undefined8 *)PTR_DAT_057ccae0);
              DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar2,uVar3,0);
              uVar3 = DG_Tweening_DOTween__Sequence_1eda154(0);
              if (*(long *)(param_1 + 0x18) != 0) {
                uVar4 = UnityEngine_Component__get_transform_408b444(*(long *)(param_1 + 0x18),0);
                lVar5 = *(long *)(param_1 + 0x30);
                if (lVar5 != 0) {
                    /* try { // try from 03f1b1c8 to 0401b1d7 has its CatchHandler @ 03f1b1d8 */
                  uVar4 = DG_Tweening_ShortcutExtensions__DOScale_1ee649c
                                    (*(undefined4 *)(lVar5 + 0x6c),*(undefined4 *)(lVar5 + 0x70),
                                     *(undefined4 *)(lVar5 + 0x74),*(undefined4 *)(lVar5 + 0x68),
                                     uVar4,0);
                    /* catch() { ... } // from try @ 03f1b154 with catch @ 03f1b1d8
                       catch() { ... } // from try @ 03f1b1c8 with catch @ 03f1b1d8 */
                  DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar3,uVar4,0);
                    /* try { // try from 03f1b1dc to 0401b1df has its CatchHandler @ 03f1b1e8 */
                    /* try { // try from 03f1b1e0 to 0401b1eb has its CatchHandler @ 03f1aee8 */
                  if (*(long *)(param_1 + 0x18) != 0) {
                    /* catch() { ... } // from try @ 03f1b1dc with catch @ 03f1b1e8 */
                    uVar4 = UnityEngine_Component__get_transform_408b444
                                      (*(long *)(param_1 + 0x18),0);
                    if (cRam0000000005c230a9 == '\0') {
                      FUN_012d0dc8(PTR_DAT_05805c10);
                      cRam0000000005c230a9 = '\x01';
                    }
                    if (*(long *)(param_1 + 0x30) != 0) {
                      lVar5 = *(long *)(*(long *)PTR_DAT_05805c10 + 0xb8);
                      uVar4 = DG_Tweening_ShortcutExtensions__DOScale_1ee649c
                                        (*(undefined4 *)(lVar5 + 0xc),*(undefined4 *)(lVar5 + 0x10),
                                         *(undefined4 *)(lVar5 + 0x14),
                                         *(undefined4 *)(*(long *)(param_1 + 0x30) + 0x78),uVar4,0);
                      DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar3,uVar4,0);
                      lVar5 = *(long *)(param_1 + 0x30);
                      if (lVar5 != 0) {
                    /* try { // try from 03f1b26c to 0401b343 has its CatchHandler @ 03f1b26c
                       catch() { ... } // from try @ 03f1b26c with catch @ 03f1b26c
                       catch() { ... } // from try @ 03f1b474 with catch @ 03f1b26c
                       catch() { ... } // from try @ 03f1b4dc with catch @ 03f1b26c
                       catch() { ... } // from try @ 03f1b53c with catch @ 03f1b26c
                       catch() { ... } // from try @ 03f1b5b0 with catch @ 03f1b26c */
                        DG_Tweening_TweenSettingsExtensions__Insert_1eedff4
                                  ((*(float *)(lVar5 + 0x20) + *(float *)(lVar5 + 0x58) +
                                   *(float *)(lVar5 + 0x48)) - *(float *)(lVar5 + 0x7c),uVar2,uVar3,
                                   0);
                        return uVar2;
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

