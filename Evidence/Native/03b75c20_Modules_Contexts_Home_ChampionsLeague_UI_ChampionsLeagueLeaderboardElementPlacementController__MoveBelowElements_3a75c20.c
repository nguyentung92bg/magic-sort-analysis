/* IL2CPP: Modules.Contexts.Home.ChampionsLeague.UI.ChampionsLeagueLeaderboardElementPlacementController$$MoveBelowElements
void Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardElementPlacementController__MoveBelowElements (Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardElementPlacementController_o* __this, int32_t clampedDelta, int32_t newRankIndex, System_Collections_Generic_List_ChampionsLeagueLeaderboardElementView__o* belowViewElements, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.ChampionsLeague.UI.ChampionsLeagueLeaderboardElementPlacementController$$MoveBelowElements
   void 
   Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardElementPlacementController__MoveBelowElements
   (Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardElementPlacementController_o*
   __this, int32_t clampedDelta, int32_t newRankIndex,
   System_Collections_Generic_List_ChampionsLeagueLeaderboardElementView__o* belowViewElements,
   const MethodInfo* method); */

void Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardElementPlacementController__MoveBelowElements_3a75c20
               (undefined1 param_1 [16],float param_2,long param_3,int param_4,int param_5,
               long param_6)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  float fVar11;
  
  if ((bRam0000000005c35a9a & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057aa2e0);
                    /* try { // try from 03b75c60 to 03c75c6b has its CatchHandler @ 03b75c78 */
    FUN_012d0dc8(PTR_DAT_057591e8);
                    /* try { // try from 03b75c6c to 03c75c77 has its CatchHandler @ 03b75c88 */
    FUN_012d0dc8(PTR_DAT_0580e108);
                    /* catch() { ... } // from try @ 03b75bb8 with catch @ 03b75c78
                       catch() { ... } // from try @ 03b75c60 with catch @ 03b75c78
                       try { // try from 03b75c78 to 03c75ca7 has its CatchHandler @ 03b75b5c */
    FUN_012d0dc8(PTR_DAT_0579fca8);
                    /* catch() { ... } // from try @ 03b75c04 with catch @ 03b75c88
                       catch() { ... } // from try @ 03b75c6c with catch @ 03b75c88 */
    FUN_012d0dc8(PTR_DAT_05770998);
    bRam0000000005c35a9a = 1;
  }
  puVar4 = PTR_DAT_057aa2e0;
  puVar3 = PTR_DAT_057591e8;
  if (0 < param_4) {
    do {
      if (*(long *)(param_3 + 0x20) == 0) goto LAB_03b75e2c;
      uVar5 = Modules_Infrastructure_UI_Common_Scripts_Scroll_BasicScrollAdapter__IsElementAtIndexVisible_40075cc
                        (*(long *)(param_3 + 0x20),param_5,0);
      if ((uVar5 & 1) != 0) {
                    /* try { // try from 03b75cc4 to 03c75cc7 has its CatchHandler @ 03b75d30 */
                    /* try { // try from 03b75cd4 to 03c75ceb has its CatchHandler @ 03b75d34 */
        if ((*(long *)(param_3 + 0x20) == 0) ||
           (plVar6 = (long *)Modules_Infrastructure_UI_Common_Scripts_Scroll_BasicScrollAdapter__GetViewAt_4007b6c
                                       (*(long *)(param_3 + 0x20),param_5,0), param_6 == 0))
        goto LAB_03b75e2c;
        if (plVar6 == (long *)0x0) {
LAB_03b75cf8:
          plVar6 = (long *)0x0;
        }
        else {
                    /* try { // try from 03b75cec to 03c75d07 has its CatchHandler @ 03b75d38 */
          bVar1 = *(byte *)(*(long *)puVar4 + 300);
          if (*(byte *)(*plVar6 + 300) < bVar1) goto LAB_03b75cf8;
                    /* try { // try from 03b75d08 to 03c75d1b has its CatchHandler @ 03b75b5c */
          if (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4) {
            plVar6 = (long *)0x0;
          }
        }
        lVar8 = *(long *)(param_6 + 0x10);
                    /* try { // try from 03b75d1c to 03c75d2b has its CatchHandler @ 03b75d44 */
        lVar9 = *(long *)puVar3;
        *(int *)(param_6 + 0x1c) = *(int *)(param_6 + 0x1c) + 1;
        if (lVar8 == 0) goto LAB_03b75e2c;
        uVar2 = *(uint *)(param_6 + 0x18);
                    /* catch() { ... } // from try @ 03b75cc4 with catch @ 03b75d30 */
                    /* catch() { ... } // from try @ 03b75cd4 with catch @ 03b75d34 */
                    /* catch() { ... } // from try @ 03b75cec with catch @ 03b75d38 */
        if (uVar2 < *(uint *)(lVar8 + 0x18)) {
                    /* catch() { ... } // from try @ 03b75ca8 with catch @ 03b75d44
                       catch() { ... } // from try @ 03b75d1c with catch @ 03b75d44 */
          *(uint *)(param_6 + 0x18) = uVar2 + 1;
          *(long **)(lVar8 + (long)(int)uVar2 * 8 + 0x20) = plVar6;
                    /* try { // try from 03b75d4c to 03c75d4f has its CatchHandler @ 03b75e04 */
          FUN_012d0d74();
                    /* try { // try from 03b75d50 to 03c75d63 has its CatchHandler @ 03b75b5c */
        }
        else {
                    /* try { // try from 03b75d64 to 03c75d7b has its CatchHandler @ 03b75df4 */
          (**(code **)(*(long *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x58) + 8))(param_6);
        }
      }
      param_4 = param_4 + -1;
      param_5 = param_5 + 1;
    } while (param_4 != 0);
  }
  puVar4 = PTR_DAT_0579fca8;
  puVar3 = PTR_DAT_05770998;
  if (param_6 == 0) {
LAB_03b75e2c:
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
                    /* try { // try from 03b75d7c to 03c75de3 has its CatchHandler @ 03b75b5c */
  if (0 < *(int *)(param_6 + 0x18)) {
    iVar10 = 0;
    do {
      lVar8 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (param_6,iVar10,*(undefined8 *)puVar4);
      if ((lVar8 == 0) ||
         (lVar9 = UnityEngine_Component__get_transform_408b444(lVar8,0), lVar9 == 0))
      goto LAB_03b75e2c;
      UnityEngine_Transform__get_localPosition_4092c40(lVar9,0);
      uVar7 = UnityEngine_Component__get_transform_408b444(lVar8,0);
      if (*(long *)(param_3 + 0x30) == 0) goto LAB_03b75e2c;
                    /* try { // try from 03b75de4 to 03c75df3 has its CatchHandler @ 03b75df4 */
      fVar11 = *(float *)(*(long *)(param_3 + 0x30) + 0x40);
                    /* catch() { ... } // from try @ 03b75d64 with catch @ 03b75df4
                       catch() { ... } // from try @ 03b75de4 with catch @ 03b75df4 */
      uVar7 = DG_Tweening_ShortcutExtensions__DOLocalMoveY_1ee5a14
                        (param_2 - *(float *)(param_3 + 0x38),uVar7,0,0);
                    /* try { // try from 03b75df8 to 03c75dfb has its CatchHandler @ 03b75e04 */
                    /* try { // try from 03b75dfc to 03c75e07 has its CatchHandler @ 03b75b5c */
      DG_Tweening_TweenSettingsExtensions__SetEase_object__2450cc0(uVar7,2,*(undefined8 *)puVar3);
                    /* catch() { ... } // from try @ 03b75d4c with catch @ 03b75e04
                       catch() { ... } // from try @ 03b75df8 with catch @ 03b75e04 */
      iVar10 = iVar10 + 1;
      param_2 = fVar11;
    } while (iVar10 < *(int *)(param_6 + 0x18));
  }
  return;
}

