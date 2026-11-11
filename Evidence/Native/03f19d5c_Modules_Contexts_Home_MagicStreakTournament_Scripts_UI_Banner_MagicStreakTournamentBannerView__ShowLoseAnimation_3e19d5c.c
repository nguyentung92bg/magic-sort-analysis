/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Banner.MagicStreakTournamentBannerView$$ShowLoseAnimation
void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentBannerView__ShowLoseAnimation (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentBannerView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Banner.MagicStreakTournamentBannerView$$ShowLoseAnimation
   void 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentBannerView__ShowLoseAnimation
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentBannerView_o*
   __this, const MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentBannerView__ShowLoseAnimation_3e19d5c
               (long param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  
                    /* try { // try from 03f19d5c to 04019d5f has its CatchHandler @ 03f19d78 */
  puVar1 = PTR_DAT_0576aae0;
                    /* catch() { ... } // from try @ 03f19d54 with catch @ 03f19d60
                       try { // try from 03f19d60 to 04019d9f has its CatchHandler @ 03f19bac */
                    /* catch() { ... } // from try @ 03f19d50 with catch @ 03f19d64 */
                    /* catch() { ... } // from try @ 03f19cd0 with catch @ 03f19d68 */
                    /* catch() { ... } // from try @ 03f19cb8 with catch @ 03f19d6c */
                    /* catch() { ... } // from try @ 03f19c98 with catch @ 03f19d70 */
                    /* catch() { ... } // from try @ 03f19c8c with catch @ 03f19d74 */
                    /* catch() { ... } // from try @ 03f19c80 with catch @ 03f19d78
                       catch() { ... } // from try @ 03f19d5c with catch @ 03f19d78 */
                    /* catch() { ... } // from try @ 03f19c78 with catch @ 03f19d7c
                       catch() { ... } // from try @ 03f19d58 with catch @ 03f19d7c */
  if ((bRam0000000005c380d6 & 1) == 0) {
                    /* catch() { ... } // from try @ 03f19c34 with catch @ 03f19d80
                       catch() { ... } // from try @ 03f19cf4 with catch @ 03f19d80 */
                    /* catch() { ... } // from try @ 03f19c3c with catch @ 03f19d84
                       catch() { ... } // from try @ 03f19d4c with catch @ 03f19d84 */
                    /* catch() { ... } // from try @ 03f19d14 with catch @ 03f19d88
                       catch() { ... } // from try @ 03f19d48 with catch @ 03f19d88 */
    FUN_012d0dc8(PTR_DAT_058030e0);
    FUN_012d0dc8(PTR_DAT_0576aae0);
                    /* try { // try from 03f19da0 to 04019db7 has its CatchHandler @ 03f19e00 */
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057e7670);
    bRam0000000005c380d6 = 1;
  }
                    /* try { // try from 03f19db8 to 04019def has its CatchHandler @ 03f19bac */
  if (((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
      (lVar3 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar3 != 0)) &&
     (lVar3 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                        (lVar3,*(undefined8 *)PTR_DAT_058030e0), puVar1 = PTR_DAT_057815e0,
     lVar3 != 0)) {
                    /* try { // try from 03f19df0 to 04019dff has its CatchHandler @ 03f19e00 */
    uVar2 = Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetStreakCountForAnimation_411f990
                      (lVar3,0);
    plVar6 = (long *)(param_1 + 0x48);
                    /* catch() { ... } // from try @ 03f19da0 with catch @ 03f19e00
                       catch() { ... } // from try @ 03f19df0 with catch @ 03f19e00 */
                    /* try { // try from 03f19e04 to 04019e07 has its CatchHandler @ 03f19e10 */
    if (*plVar6 != 0) {
                    /* try { // try from 03f19e08 to 04019e13 has its CatchHandler @ 03f19bac */
                    /* catch() { ... } // from try @ 03f19e04 with catch @ 03f19e10 */
      DG_Tweening_TweenExtensions__Kill_1edd6a4(*plVar6,0,0);
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar4 = DG_Tweening_DOTween__Sequence_1eda154(0);
    *(undefined8 *)(param_1 + 0x48) = uVar4;
    FUN_012d0d74(plVar6,uVar4);
    uVar7 = *(undefined8 *)(param_1 + 0x48);
    uVar4 = Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentBannerView__ShowContainer_3e1a010
                      (param_1);
    DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar7,uVar4,0);
    if (*(long *)(param_1 + 0x18) != 0) {
      DG_Tweening_TweenSettingsExtensions__AppendInterval_1edcc0c
                (*(undefined4 *)(*(long *)(param_1 + 0x18) + 0x1b4),*(undefined8 *)(param_1 + 0x48),
                 0);
      puVar1 = PTR_DAT_057e7670;
      if (*(long *)(param_1 + 0x38) != 0) {
        lVar5 = *plVar6;
        uVar4 = Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressAnimationView__PlayHatReturnAnimationFromIndex_3e1a388
                          (*(long *)(param_1 + 0x38),uVar2);
        DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(lVar5,uVar4,0);
        DG_Tweening_TweenExtensions__Play_object__26ef194(*plVar6,*(undefined8 *)puVar1);
        uVar2 = Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetCurrentMultiplierIndex_411f8f8
                          (lVar3,0);
        if (*(long *)(lVar3 + 0x28) != 0) {
          *(undefined4 *)(*(long *)(lVar3 + 0x28) + 0x34) = uVar2;
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

