/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelFailPopUpNS.Scripts.HeartBeatAnimationView$$Play
void Modules_Contexts_GamePlay_UI_LevelFailPopUpNS_Scripts_HeartBeatAnimationView__Play (Modules_Contexts_GamePlay_UI_LevelFailPopUpNS_Scripts_HeartBeatAnimationView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02551160) */
/* WARNING: Removing unreachable block (ram,0x02551168) */
/* WARNING: Removing unreachable block (ram,0x0255117c) */
/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelFailPopUpNS.Scripts.HeartBeatAnimationView$$Play
   void Modules_Contexts_GamePlay_UI_LevelFailPopUpNS_Scripts_HeartBeatAnimationView__Play
   (Modules_Contexts_GamePlay_UI_LevelFailPopUpNS_Scripts_HeartBeatAnimationView_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_UI_LevelFailPopUpNS_Scripts_HeartBeatAnimationView__Play_16f33b0
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  float fVar8;
  
                    /* try { // try from 017f33b4 to 018f33cb has its CatchHandler @ 017f3450 */
                    /* try { // try from 017f33cc to 018f343b has its CatchHandler @ 017f316c */
  if ((bRam0000000005c24b68 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057874c0);
    FUN_012d0dc8(PTR_DAT_057d4b28);
    bRam0000000005c24b68 = 1;
  }
  plVar6 = (long *)(param_1 + 0x28);
  if (*plVar6 != 0) {
    DG_Tweening_TweenExtensions__Kill_1edd6a4(*plVar6,0,0);
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    UnityEngine_GameObject__SetActive_408e318(*(long *)(param_1 + 0x18),1,0);
    if (*(long *)(param_1 + 0x18) != 0) {
      lVar3 = UnityEngine_GameObject__get_transform_408e25c(*(long *)(param_1 + 0x18),0);
                    /* try { // try from 017f343c to 018f344b has its CatchHandler @ 017f3450 */
      if (cRam0000000005c230a9 == '\0') {
                    /* catch() { ... } // from try @ 017f33b4 with catch @ 017f3450
                       catch() { ... } // from try @ 017f343c with catch @ 017f3450 */
                    /* try { // try from 017f3454 to 018f3457 has its CatchHandler @ 017f3518 */
        FUN_012d0dc8(PTR_DAT_05805c10);
                    /* try { // try from 017f3458 to 018f3473 has its CatchHandler @ 017f316c */
                    /* catch() { ... } // from try @ 017f32d0 with catch @ 017f345c */
        cRam0000000005c230a9 = '\x01';
      }
      puVar2 = PTR_DAT_05805c10;
      puVar1 = PTR_DAT_057815e0;
      if ((*(long *)(param_1 + 0x20) != 0) && (lVar3 != 0)) {
                    /* try { // try from 017f3474 to 018f348b has its CatchHandler @ 017f3508 */
        fVar8 = *(float *)(*(long *)(param_1 + 0x20) + 0x20);
        lVar5 = *(long *)(*(long *)PTR_DAT_05805c10 + 0xb8);
                    /* try { // try from 017f348c to 018f34df has its CatchHandler @ 017f316c */
        UnityEngine_Transform__set_localScale_40932d0
                  (fVar8 * *(float *)(lVar5 + 0xc),fVar8 * *(float *)(lVar5 + 0x10),
                   fVar8 * *(float *)(lVar5 + 0x14),lVar3,0);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        uVar4 = DG_Tweening_DOTween__Sequence_1eda154(0);
        *(undefined8 *)(param_1 + 0x28) = uVar4;
        FUN_012d0d74(plVar6,uVar4);
        if (*(long *)(param_1 + 0x20) != 0) {
                    /* try { // try from 017f34e0 to 018f34e3 has its CatchHandler @ 017f3504 */
                    /* try { // try from 017f34e4 to 018f34f3 has its CatchHandler @ 017f316c */
          DG_Tweening_TweenSettingsExtensions__AppendInterval_1edcc0c
                    (*(float *)(*(long *)(param_1 + 0x20) + 0x1c) * 0.5,
                     *(undefined8 *)(param_1 + 0x28),0);
                    /* try { // try from 017f34f4 to 018f3503 has its CatchHandler @ 017f3508 */
          if (*(long *)(param_1 + 0x18) != 0) {
            uVar7 = *(undefined8 *)(param_1 + 0x28);
            uVar4 = UnityEngine_GameObject__get_transform_408e25c(*(long *)(param_1 + 0x18),0);
                    /* catch() { ... } // from try @ 017f34e0 with catch @ 017f3504 */
                    /* catch() { ... } // from try @ 017f3474 with catch @ 017f3508
                       catch() { ... } // from try @ 017f34f4 with catch @ 017f3508 */
                    /* try { // try from 017f350c to 018f350f has its CatchHandler @ 017f3518 */
            if (cRam0000000005c230a9 == '\0') {
                    /* try { // try from 017f3510 to 018f351b has its CatchHandler @ 017f316c */
                    /* catch() { ... } // from try @ 017f3454 with catch @ 017f3518
                       catch() { ... } // from try @ 017f350c with catch @ 017f3518 */
              FUN_012d0dc8(PTR_DAT_05805c10);
              cRam0000000005c230a9 = '\x01';
            }
            lVar3 = *(long *)(param_1 + 0x20);
            if (lVar3 != 0) {
              fVar8 = *(float *)(lVar3 + 0x24);
              lVar5 = *(long *)(*(long *)puVar2 + 0xb8);
              uVar4 = DG_Tweening_ShortcutExtensions__DOScale_1ee649c
                                (*(float *)(lVar5 + 0xc) * fVar8,*(float *)(lVar5 + 0x10) * fVar8,
                                 *(float *)(lVar5 + 0x14) * fVar8,*(undefined4 *)(lVar3 + 0x18),
                                 uVar4,0);
              if (*(long *)(param_1 + 0x20) != 0) {
                uVar4 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                  (uVar4,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28),
                                   *(undefined8 *)PTR_DAT_057874c0);
                DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar7,uVar4,0);
                puVar1 = PTR_DAT_057d4b28;
                if (*(long *)(param_1 + 0x20) != 0) {
                  DG_Tweening_TweenSettingsExtensions__AppendInterval_1edcc0c
                            (*(float *)(*(long *)(param_1 + 0x20) + 0x1c) * 0.5,*plVar6,0);
                  lVar3 = *plVar6;
                  uVar4 = *(undefined8 *)puVar1;
                  if (((lVar3 != 0) && (*(char *)(lVar3 + 0xe8) != '\0')) &&
                     (*(char *)(lVar3 + 0x100) == '\0')) {
                    *(undefined4 *)(lVar3 + 0xa4) = 0xffffffff;
                    *(undefined4 *)(lVar3 + 0xa8) = 0;
                    if (*(int *)(lVar3 + 0x10) == 0) {
                      *(undefined4 *)(lVar3 + 0x108) = 0x7f800000;
                      return;
                    }
                  }
                  return;
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

