/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Banner.MagicStreakTournamentProgressAnimationView$$LoopPlayHatReturnAnimationFromIndex
void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressAnimationView__LoopPlayHatReturnAnimationFromIndex (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressAnimationView_o* __this, int32_t index, System_Collections_Generic_List_int__o* multipliers, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02551160) */
/* WARNING: Removing unreachable block (ram,0x02551168) */
/* WARNING: Removing unreachable block (ram,0x0255117c) */
/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Banner.MagicStreakTournamentProgressAnimationView$$LoopPlayHatReturnAnimationFromIndex
   void 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressAnimationView__LoopPlayHatReturnAnimationFromIndex
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressAnimationView_o*
   __this, int32_t index, System_Collections_Generic_List_int__o* multipliers, const MethodInfo*
   method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressAnimationView__LoopPlayHatReturnAnimationFromIndex_3e19640
               (long param_1,undefined4 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  
  puVar1 = PTR_DAT_0575e100;
                    /* try { // try from 03f19648 to 0401966b has its CatchHandler @ 03f19584 */
                    /* try { // try from 03f1966c to 0401966f has its CatchHandler @ 03f19674 */
  if ((bRam0000000005c380da & 1) == 0) {
                    /* try { // try from 03f19670 to 04019673 has its CatchHandler @ 03f19688 */
                    /* catch() { ... } // from try @ 03f1966c with catch @ 03f19674
                       try { // try from 03f19674 to 040196a7 has its CatchHandler @ 03f19584 */
                    /* catch() { ... } // from try @ 03f19618 with catch @ 03f19678 */
    FUN_012d0dc8(PTR_DAT_057815e0);
                    /* catch() { ... } // from try @ 03f19600 with catch @ 03f1967c */
                    /* catch() { ... } // from try @ 03f195e0 with catch @ 03f19680 */
                    /* catch() { ... } // from try @ 03f195d4 with catch @ 03f19684 */
    FUN_012d0dc8(PTR_DAT_057606c8);
                    /* catch() { ... } // from try @ 03f195cc with catch @ 03f19688
                       catch() { ... } // from try @ 03f19670 with catch @ 03f19688 */
                    /* catch() { ... } // from try @ 03f1963c with catch @ 03f1968c */
    FUN_012d0dc8(PTR_DAT_057d4b28);
    FUN_012d0dc8(PTR_DAT_057d0c80);
                    /* try { // try from 03f196a8 to 040196bf has its CatchHandler @ 03f19784 */
    FUN_012d0dc8(PTR_DAT_05797fd0);
    FUN_012d0dc8(PTR_DAT_0575e100);
    bRam0000000005c380da = 1;
  }
  lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  puVar1 = PTR_DAT_057815e0;
                    /* try { // try from 03f196c8 to 040196cb has its CatchHandler @ 03f1977c */
  if (lVar3 != 0) {
                    /* try { // try from 03f196d8 to 040196df has its CatchHandler @ 03f19778 */
    System_Object___ctor_23dfe5c(lVar3,0);
                    /* try { // try from 03f196e4 to 040196fb has its CatchHandler @ 03f19780 */
    *(long *)(lVar3 + 0x10) = param_1;
    FUN_012d0d74((long *)(lVar3 + 0x10),param_1);
    *(undefined8 *)(lVar3 + 0x20) = param_3;
    *(undefined4 *)(lVar3 + 0x18) = param_2;
                    /* try { // try from 03f19700 to 04019743 has its CatchHandler @ 03f19794 */
    FUN_012d0d74((undefined8 *)(lVar3 + 0x20),param_3);
    plVar6 = (long *)(param_1 + 0x38);
    if (*plVar6 != 0) {
      DG_Tweening_TweenExtensions__Kill_1edd6a4(*plVar6,0,0);
    }
    puVar2 = PTR_DAT_057606c8;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    lVar4 = DG_Tweening_DOTween__Sequence_1eda154(0);
    *plVar6 = lVar4;
                    /* try { // try from 03f19748 to 0401974b has its CatchHandler @ 03f19774 */
    FUN_012d0d74(plVar6,lVar4);
                    /* try { // try from 03f1974c to 0401974f has its CatchHandler @ 03f19794 */
                    /* try { // try from 03f19750 to 0401975f has its CatchHandler @ 03f19584 */
    lVar7 = *plVar6;
    lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
    if (lVar4 != 0) {
                    /* try { // try from 03f19760 to 0401976f has its CatchHandler @ 03f19784 */
                    /* catch() { ... } // from try @ 03f19748 with catch @ 03f19774 */
      DG_Tweening_TweenCallback___ctor_1ed6da8(lVar4,lVar3,*(undefined8 *)PTR_DAT_057d0c80,0);
                    /* catch() { ... } // from try @ 03f196d8 with catch @ 03f19778 */
                    /* catch() { ... } // from try @ 03f196c8 with catch @ 03f1977c */
                    /* catch() { ... } // from try @ 03f196e4 with catch @ 03f19780 */
                    /* catch() { ... } // from try @ 03f196a8 with catch @ 03f19784
                       catch() { ... } // from try @ 03f19760 with catch @ 03f19784 */
      DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(0,lVar7,lVar4,0);
                    /* try { // try from 03f1978c to 0401978f has its CatchHandler @ 03f19824 */
                    /* try { // try from 03f19790 to 040197b3 has its CatchHandler @ 03f19584 */
      lVar7 = *plVar6;
                    /* catch() { ... } // from try @ 03f19700 with catch @ 03f19794
                       catch() { ... } // from try @ 03f1974c with catch @ 03f19794 */
      lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
      if (lVar4 != 0) {
                    /* try { // try from 03f197b4 to 040197cb has its CatchHandler @ 03f19814 */
        DG_Tweening_TweenCallback___ctor_1ed6da8(lVar4,lVar3,*(undefined8 *)PTR_DAT_05797fd0,0);
        DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(0,lVar7,lVar4,0);
                    /* try { // try from 03f197cc to 04019803 has its CatchHandler @ 03f19584 */
        if (*(long *)(param_1 + 0x30) != 0) {
          DG_Tweening_TweenSettingsExtensions__AppendInterval_1edcc0c
                    (*(undefined4 *)(*(long *)(param_1 + 0x30) + 0x1ac),
                     *(undefined8 *)(param_1 + 0x38),0);
          uVar8 = *(undefined8 *)(param_1 + 0x38);
          uVar5 = Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressAnimationView__PlayHatReturnAnimationFromIndex_3e1a388
                            (param_1,*(undefined4 *)(lVar3 + 0x18));
          DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar8,uVar5,0);
          puVar1 = PTR_DAT_057d4b28;
                    /* try { // try from 03f19804 to 04019813 has its CatchHandler @ 03f19814 */
          if (*(long *)(param_1 + 0x30) != 0) {
                    /* catch() { ... } // from try @ 03f197b4 with catch @ 03f19814
                       catch() { ... } // from try @ 03f19804 with catch @ 03f19814 */
                    /* try { // try from 03f19818 to 0401981b has its CatchHandler @ 03f19824 */
                    /* try { // try from 03f1981c to 04019827 has its CatchHandler @ 03f19584 */
            DG_Tweening_TweenSettingsExtensions__AppendInterval_1edcc0c
                      (*(undefined4 *)(*(long *)(param_1 + 0x30) + 0x1b0),*plVar6,0);
                    /* catch() { ... } // from try @ 03f1978c with catch @ 03f19824
                       catch() { ... } // from try @ 03f19818 with catch @ 03f19824 */
            lVar3 = *plVar6;
            uVar5 = *(undefined8 *)puVar1;
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
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

