/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Banner.MagicStreakTournamentBannerView$$ShowWinAnimation
void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentBannerView__ShowWinAnimation (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentBannerView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Banner.MagicStreakTournamentBannerView$$ShowWinAnimation
   void 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentBannerView__ShowWinAnimation
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentBannerView_o*
   __this, const MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentBannerView__ShowWinAnimation_3e19bf8
               (long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  
  if ((bRam0000000005c380d5 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_058030e0);
    FUN_012d0dc8(PTR_DAT_0576aae0);
                    /* try { // try from 03f19c34 to 04019c37 has its CatchHandler @ 03f19d80 */
    FUN_012d0dc8(PTR_DAT_057815e0);
                    /* try { // try from 03f19c3c to 04019c4b has its CatchHandler @ 03f19d84 */
    FUN_012d0dc8(PTR_DAT_057e7670);
    bRam0000000005c380d5 = 1;
  }
  puVar1 = PTR_DAT_0576aae0;
  if (*(long *)(param_1 + 0x38) != 0) {
    Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressAnimationView__PrepareForWinAnimation_3e19fcc
              ();
                    /* try { // try from 03f19c78 to 04019c7b has its CatchHandler @ 03f19d7c */
                    /* try { // try from 03f19c80 to 04019c87 has its CatchHandler @ 03f19d78 */
    if (((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
        (lVar4 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar4 != 0)) &&
       (lVar4 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                          (lVar4,*(undefined8 *)PTR_DAT_058030e0), puVar1 = PTR_DAT_057815e0,
       lVar4 != 0)) {
                    /* try { // try from 03f19c8c to 04019c93 has its CatchHandler @ 03f19d74 */
                    /* try { // try from 03f19c98 to 04019ca3 has its CatchHandler @ 03f19d70 */
      iVar2 = Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetStreakCountForAnimation_411f990
                        (lVar4,0);
      plVar7 = (long *)(param_1 + 0x48);
      if (*plVar7 != 0) {
                    /* try { // try from 03f19cb8 to 04019cbf has its CatchHandler @ 03f19d6c */
        DG_Tweening_TweenExtensions__Kill_1edd6a4(*plVar7,0,0);
      }
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
                    /* try { // try from 03f19cd0 to 04019cdb has its CatchHandler @ 03f19d68 */
      uVar5 = DG_Tweening_DOTween__Sequence_1eda154(0);
      *(undefined8 *)(param_1 + 0x48) = uVar5;
      FUN_012d0d74(plVar7,uVar5);
      uVar8 = *(undefined8 *)(param_1 + 0x48);
      uVar5 = Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentBannerView__ShowContainer_3e1a010
                        (param_1);
                    /* try { // try from 03f19cf4 to 04019d0f has its CatchHandler @ 03f19d80 */
      DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar8,uVar5,0);
      puVar1 = PTR_DAT_057e7670;
      if (*(long *)(param_1 + 0x38) != 0) {
        lVar6 = *plVar7;
                    /* try { // try from 03f19d14 to 04019d23 has its CatchHandler @ 03f19d88 */
        uVar5 = Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressAnimationView__PlayHatMoveAnimationToIndex_3e1a094
                          (*(long *)(param_1 + 0x38),iVar2,iVar2 + 1);
                    /* try { // try from 03f19d24 to 04019d47 has its CatchHandler @ 03f19bac */
        DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(lVar6,uVar5,0);
        DG_Tweening_TweenExtensions__Play_object__26ef194(*plVar7,*(undefined8 *)puVar1);
        uVar3 = Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetCurrentMultiplierIndex_411f8f8
                          (lVar4,0);
                    /* try { // try from 03f19d48 to 04019d4b has its CatchHandler @ 03f19d88 */
                    /* try { // try from 03f19d4c to 04019d4f has its CatchHandler @ 03f19d84 */
                    /* try { // try from 03f19d50 to 04019d53 has its CatchHandler @ 03f19d64 */
                    /* try { // try from 03f19d54 to 04019d57 has its CatchHandler @ 03f19d60 */
        if (*(long *)(lVar4 + 0x28) != 0) {
          *(undefined4 *)(*(long *)(lVar4 + 0x28) + 0x34) = uVar3;
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03f19d58 to 04019d5b has its CatchHandler @ 03f19d7c */
  FUN_012d0ef0();
}

