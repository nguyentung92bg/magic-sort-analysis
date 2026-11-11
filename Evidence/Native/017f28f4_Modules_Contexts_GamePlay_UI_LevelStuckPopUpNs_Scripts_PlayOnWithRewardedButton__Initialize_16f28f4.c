/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts.PlayOnWithRewardedButton$$Initialize
void Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_PlayOnWithRewardedButton__Initialize (Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_PlayOnWithRewardedButton_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts.PlayOnWithRewardedButton$$Initialize
   void Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_PlayOnWithRewardedButton__Initialize
   (Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_PlayOnWithRewardedButton_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_PlayOnWithRewardedButton__Initialize_16f28f4
               (long param_1)

{
  ulong *puVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  
  puVar5 = PTR_DAT_0576aae0;
  if ((bRam0000000005c24bac & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057a2938);
    FUN_012d0dc8(PTR_DAT_05769838);
                    /* try { // try from 017f2934 to 018f293b has its CatchHandler @ 017f2990 */
    FUN_012d0dc8(PTR_DAT_0576aae0);
                    /* try { // try from 017f293c to 018f297f has its CatchHandler @ 017f27a4 */
    bRam0000000005c24bac = 1;
  }
  lVar10 = **(long **)(*(long *)puVar5 + 0xb8);
  if ((lVar10 != 0) && (lVar10 = *(long *)(lVar10 + 0x18), lVar10 != 0)) {
    uVar8 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                      (lVar10,*(undefined8 *)PTR_DAT_057a2938);
    *(undefined8 *)(param_1 + 0x48) = uVar8;
    FUN_012d0d74();
                    /* try { // try from 017f2980 to 018f2983 has its CatchHandler @ 017f298c */
                    /* try { // try from 017f2984 to 018f2987 has its CatchHandler @ 017f2998 */
    lVar10 = **(long **)(*(long *)puVar5 + 0xb8);
                    /* try { // try from 017f2988 to 018f298b has its CatchHandler @ 017f2990 */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 017f2980 with catch @ 017f298c
                       try { // try from 017f298c to 018f29b3 has its CatchHandler @ 017f27a4 */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 017f2934 with catch @ 017f2990
                       catch(type#1 @ 054cbd58) { ... } // from try @ 017f2988 with catch @ 017f2990
                        */
    if ((lVar10 != 0) && (lVar10 = *(long *)(lVar10 + 0x18), lVar10 != 0)) {
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 017f28cc with catch @ 017f2994
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 017f28e8 with catch @ 017f2998
                       catch(type#1 @ 054cbd58) { ... } // from try @ 017f2984 with catch @ 017f2998
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 017f2890 with catch @ 017f299c
                        */
      lVar10 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                         (lVar10,*(undefined8 *)PTR_DAT_05769838);
      plVar12 = (long *)(param_1 + 0x50);
      *plVar12 = lVar10;
                    /* try { // try from 017f29b4 to 018f29b7 has its CatchHandler @ 017f29c8 */
      FUN_012d0d74(plVar12,lVar10);
      if (*plVar12 != 0) {
        uVar6 = Modules_Contexts_GamePlay_PlayOn_Scripts_PlayOnWithRewarded_PlayOnWithRewardedService__GetTargetAdWatchCount_2149f10
                          (*plVar12,0);
                    /* catch() { ... } // from try @ 017f29b4 with catch @ 017f29c8 */
        lVar10 = *(long *)(param_1 + 0x50);
        *(undefined4 *)(param_1 + 0x40) = uVar6;
        if (lVar10 != 0) {
                    /* try { // try from 017f29d4 to 018f29df has its CatchHandler @ 017f29f4 */
          lVar13 = *(long *)(param_1 + 0x38);
          uVar2 = *(undefined4 *)(lVar10 + 0x50);
                    /* try { // try from 017f29e0 to 018f29eb has its CatchHandler @ 017f27a4 */
          uVar7 = Modules_Contexts_GamePlay_PlayOn_Scripts_PlayOnWithRewarded_PlayOnWithRewardedService__GetDefaultPlayOnBehaviour_2149d64
                            (lVar10,0);
                    /* try { // try from 017f29ec to 018f29f3 has its CatchHandler @ 017f29f4 */
          if (lVar13 != 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 017f29d4 with catch @ 017f29f4
                       catch(type#2 @ 00000000) { ... } // from try @ 017f29ec with catch @ 017f29f4
                        */
                    /* try { // try from 017f29f8 to 018f2b13 has its CatchHandler @ 017f29f8
                       catch() { ... } // from try @ 017f29f8 with catch @ 017f29f8
                       catch() { ... } // from try @ 017f2b4c with catch @ 017f29f8
                       catch() { ... } // from try @ 017f2c10 with catch @ 017f29f8
                       catch() { ... } // from try @ 017f2c60 with catch @ 017f29f8
                       catch() { ... } // from try @ 017f2c90 with catch @ 017f29f8
                       catch() { ... } // from try @ 017f2d1c with catch @ 017f29f8
                       catch() { ... } // from try @ 017f2e0c with catch @ 017f29f8
                       catch() { ... } // from try @ 017f2e54 with catch @ 017f29f8
                       catch() { ... } // from try @ 017f2e90 with catch @ 017f29f8
                       catch() { ... } // from try @ 017f2f0c with catch @ 017f29f8 */
            Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_PlayOnWithRewardedView__UpdateView_1606a90
                      (lVar13,uVar2,uVar6,uVar7,0);
            if (*(long *)(param_1 + 0x50) == 0) {
              return;
            }
            uVar9 = Modules_Contexts_GamePlay_PlayOn_Scripts_PlayOnWithRewarded_PlayOnWithRewardedService__ShouldShowRewarded_2148de0
                              (*(long *)(param_1 + 0x50),0);
            if ((uVar9 & 1) == 0) {
              if (*(long *)(param_1 + 0x48) == 0) {
                return;
              }
              uVar9 = Modules_Contexts_Application_Ads_Scripts_AdService__CanShowInterWithoutFrequency_1b5f198
                                (*(long *)(param_1 + 0x48),0);
              lVar10 = *(long *)(param_1 + 0x18);
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_012d0ef0();
              }
            }
            else {
              if (*(long *)(param_1 + 0x48) == 0) {
                return;
              }
              uVar9 = Modules_Contexts_Application_Ads_Scripts_AdService__IsRewardedReady_1b5f73c
                                (*(long *)(param_1 + 0x48),0);
              lVar10 = *(long *)(param_1 + 0x18);
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_012d0ef0();
              }
            }
            if ((uVar9 & 1) == 0) {
              if ((bRam0000000005c24b52 & 1) == 0) {
                FUN_012d0dc8(PTR_DAT_05758e60);
                bRam0000000005c24b52 = 1;
              }
              puVar11 = (undefined8 *)(lVar10 + 0x18);
              DG_Tweening_TweenExtensions__Kill_1edd6a4(*puVar11,0,0);
              lVar13 = UnityEngine_Component__get_gameObject_408b480(lVar10,0);
              puVar5 = PTR_DAT_05758e60;
              if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_012d0ef0();
              }
              UnityEngine_GameObject__SetActive_408e318(lVar13,1,0);
              uVar8 = UnityEngine_Component__get_transform_408b444(lVar10,0);
              uVar8 = DG_Tweening_ShortcutExtensions__DORotate_1ee5d7c
                                (0,0,0xc3b40000,0x3f800000,uVar8,1,0);
              uVar8 = DG_Tweening_TweenSettingsExtensions__SetLoops_object__2451144
                                (uVar8,0xffffffff,0,*(undefined8 *)puVar5);
              *(undefined8 *)(lVar10 + 0x18) = uVar8;
              if (iRam0000000005c3d478 != 0) {
                puVar1 = (ulong *)(((ulong)puVar11 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
                do {
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                  if (bVar4) {
                    *puVar1 = *puVar1 | 1L << ((ulong)puVar11 >> 0xc & 0x3f);
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
              }
              return;
            }
            if (*(long *)(lVar10 + 0x18) != 0) {
              DG_Tweening_TweenExtensions__Kill_1edd6a4(*(long *)(lVar10 + 0x18),0,0);
            }
            lVar10 = UnityEngine_Component__get_gameObject_408b480(lVar10,0);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
            if (pcRam0000000005c3a388 == (code *)0x0) {
              pcRam0000000005c3a388 = (code *)FUN_012d0d84(&UNK_043edeb4);
            }
                    /* WARNING: Could not recover jumptable at 0x0418e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam0000000005c3a388)(lVar10,0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

