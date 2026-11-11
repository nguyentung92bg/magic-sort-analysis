/* IL2CPP: Modules.Contexts.Home.ChampionsLeague.UI.ChampionsLeagueLeaderboardElementPlacementController$$PlugUserViewTween
DG_Tweening_Tween_o* Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardElementPlacementController__PlugUserViewTween (Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardElementPlacementController_o* __this, Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardElementView_o* userView, int32_t newRankIndex, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.ChampionsLeague.UI.ChampionsLeagueLeaderboardElementPlacementController$$PlugUserViewTween
   DG_Tweening_Tween_o*
   Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardElementPlacementController__PlugUserViewTween
   (Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardElementPlacementController_o*
   __this, Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardElementView_o*
   userView, int32_t newRankIndex, const MethodInfo* method); */

undefined8
Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardElementPlacementController__PlugUserViewTween_3a759c0
          (long param_1,long param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  
                    /* try { // try from 03b759c0 to 03c759d7 has its CatchHandler @ 03b75a20 */
  puVar2 = PTR_DAT_057815e0;
                    /* try { // try from 03b759d8 to 03c759f3 has its CatchHandler @ 03b75a24 */
  if ((bRam0000000005c35a99 & 1) == 0) {
                    /* try { // try from 03b759f4 to 03c75a07 has its CatchHandler @ 03b75848 */
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057606c8);
                    /* try { // try from 03b75a08 to 03c75a17 has its CatchHandler @ 03b75a30 */
    FUN_012d0dc8(PTR_DAT_0579e470);
                    /* catch() { ... } // from try @ 03b759b0 with catch @ 03b75a1c */
    FUN_012d0dc8(PTR_DAT_057874c0);
                    /* catch() { ... } // from try @ 03b759c0 with catch @ 03b75a20 */
                    /* catch() { ... } // from try @ 03b759d8 with catch @ 03b75a24 */
    FUN_012d0dc8(PTR_DAT_05770998);
                    /* catch() { ... } // from try @ 03b75994 with catch @ 03b75a30
                       catch() { ... } // from try @ 03b75a08 with catch @ 03b75a30 */
    FUN_012d0dc8(PTR_DAT_058142b0);
                    /* try { // try from 03b75a38 to 03c75a3b has its CatchHandler @ 03b75af0 */
                    /* try { // try from 03b75a3c to 03c75a4f has its CatchHandler @ 03b75848 */
    FUN_012d0dc8(PTR_DAT_05777140);
    bRam0000000005c35a99 = 1;
  }
                    /* try { // try from 03b75a50 to 03c75a67 has its CatchHandler @ 03b75ae0 */
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar3 = DG_Tweening_DOTween__Sequence_1eda154(0);
  if (param_2 != 0) {
                    /* try { // try from 03b75a68 to 03c75acf has its CatchHandler @ 03b75848 */
    uVar4 = UnityEngine_Component__get_transform_408b444(param_2,0);
    if (cRam0000000005c230a9 == '\0') {
      FUN_012d0dc8(PTR_DAT_05805c10);
      cRam0000000005c230a9 = '\x01';
    }
    if (*(long *)(param_1 + 0x30) != 0) {
      lVar6 = *(long *)(*(long *)PTR_DAT_05805c10 + 0xb8);
      uVar4 = DG_Tweening_ShortcutExtensions__DOScale_1ee649c
                        (*(undefined4 *)(lVar6 + 0xc),*(undefined4 *)(lVar6 + 0x10),
                         *(undefined4 *)(lVar6 + 0x14),
                         *(undefined4 *)(*(long *)(param_1 + 0x30) + 0x28),uVar4,0);
                    /* try { // try from 03b75ad0 to 03c75adf has its CatchHandler @ 03b75ae0 */
      if (*(long *)(param_1 + 0x30) != 0) {
                    /* catch() { ... } // from try @ 03b75a50 with catch @ 03b75ae0
                       catch() { ... } // from try @ 03b75ad0 with catch @ 03b75ae0 */
                    /* try { // try from 03b75ae4 to 03c75ae7 has its CatchHandler @ 03b75af0 */
        uVar4 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                          (uVar4,*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x38),
                           *(undefined8 *)PTR_DAT_057874c0);
                    /* try { // try from 03b75ae8 to 03c75af3 has its CatchHandler @ 03b75848 */
                    /* catch() { ... } // from try @ 03b75a38 with catch @ 03b75af0
                       catch() { ... } // from try @ 03b75ae4 with catch @ 03b75af0 */
        DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar3,uVar4,0);
        uVar4 = UnityEngine_Component__get_transform_408b444(param_2,0);
        if (*(long *)(param_1 + 0x20) != 0) {
          Modules_Infrastructure_UI_Common_Scripts_Scroll_BasicScrollAdapter__GetLocalPositionForScrollElementView_400743c
                    (*(long *)(param_1 + 0x20),param_3,0);
          if (*(long *)(param_1 + 0x30) != 0) {
            uVar4 = DG_Tweening_ShortcutExtensions__DOLocalMove_1ee56a4(uVar4,0,0);
            puVar2 = PTR_DAT_05777140;
            if (*(long *)(param_1 + 0x30) != 0) {
                    /* try { // try from 03b75b5c to 03c75bb7 has its CatchHandler @ 03b75b5c
                       catch() { ... } // from try @ 03b75b5c with catch @ 03b75b5c
                       catch() { ... } // from try @ 03b75c78 with catch @ 03b75b5c
                       catch() { ... } // from try @ 03b75d08 with catch @ 03b75b5c
                       catch() { ... } // from try @ 03b75d50 with catch @ 03b75b5c
                       catch() { ... } // from try @ 03b75d7c with catch @ 03b75b5c
                       catch() { ... } // from try @ 03b75dfc with catch @ 03b75b5c */
              uVar4 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450cc0
                                (uVar4,*(undefined4 *)(*(long *)(param_1 + 0x30) + 0x50),
                                 *(undefined8 *)PTR_DAT_05770998);
              DG_Tweening_TweenSettingsExtensions__Join_1ee8bcc(uVar3,uVar4,0);
              lVar6 = *(long *)puVar2;
              if (*(int *)(lVar6 + 0xe0) == 0) {
                thunk_FUN_0130472c();
                lVar6 = *(long *)puVar2;
              }
              puVar1 = PTR_DAT_057606c8;
              lVar7 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
              if (lVar7 == 0) {
                if (*(int *)(lVar6 + 0xe0) == 0) {
                  thunk_FUN_0130472c();
                  lVar6 = *(long *)puVar2;
                }
                uVar4 = **(undefined8 **)(lVar6 + 0xb8);
                lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                    /* try { // try from 03b75bb8 to 03c75be3 has its CatchHandler @ 03b75c78 */
                if (lVar7 == 0) goto LAB_03b75c1c;
                DG_Tweening_TweenCallback___ctor_1ed6da8
                          (lVar7,uVar4,*(undefined8 *)PTR_DAT_058142b0,0);
                plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
                *plVar5 = lVar7;
                FUN_012d0d74(plVar5,lVar7);
              }
              DG_Tweening_TweenSettingsExtensions__OnComplete_object__24504c4
                        (uVar3,lVar7,*(undefined8 *)PTR_DAT_0579e470);
                    /* try { // try from 03b75c04 to 03c75c4b has its CatchHandler @ 03b75c88 */
              return uVar3;
            }
          }
        }
      }
    }
  }
LAB_03b75c1c:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

