/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Banner.MagicStreakTournamentProgressView$$UpdateTargetRank
DG_Tweening_Tween_o* Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressView__UpdateTargetRank (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressView_o* __this, float duration, bool isWin, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Banner.MagicStreakTournamentProgressView$$UpdateTargetRank
   DG_Tweening_Tween_o*
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressView__UpdateTargetRank
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressView_o*
   __this, float duration, bool isWin, const MethodInfo* method); */

undefined8
Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressView__UpdateTargetRank_3e1b3d4
          (undefined8 param_1,long param_2,byte param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  puVar1 = PTR_DAT_05801488;
                    /* try { // try from 03f1b3e4 to 0401b3e7 has its CatchHandler @ 03f1b4f8 */
                    /* try { // try from 03f1b3f8 to 0401b3ff has its CatchHandler @ 03f1b4f4 */
  if ((bRam0000000005c380e5 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057cc518);
                    /* try { // try from 03f1b414 to 0401b41b has its CatchHandler @ 03f1b4ec */
    FUN_012d0dc8(PTR_DAT_0577a350);
    FUN_012d0dc8(PTR_DAT_05801488);
                    /* try { // try from 03f1b428 to 0401b447 has its CatchHandler @ 03f1b4f0 */
    bRam0000000005c380e5 = 1;
  }
  lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  puVar1 = PTR_DAT_057cc518;
  if (lVar2 != 0) {
    Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressView___c__DisplayClass21_0___ctor_3cf0ddc
              (lVar2,0);
    *(long *)(lVar2 + 0x10) = param_2;
    FUN_012d0d74((long *)(lVar2 + 0x10),param_2);
    *(byte *)(lVar2 + 0x18) = param_3 & 1;
                    /* try { // try from 03f1b470 to 0401b473 has its CatchHandler @ 03f1b504 */
    lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                    /* try { // try from 03f1b474 to 0401b4bf has its CatchHandler @ 03f1b26c */
    if (lVar3 != 0) {
      DG_Tweening_TweenCallback_float____ctor_341f244(lVar3,lVar2,*(undefined8 *)PTR_DAT_0577a350,0)
      ;
      uVar4 = DG_Tweening_DOVirtual__Float_1edbb8c(0,0x3f800000,param_1,lVar3,0);
      puVar5 = (undefined8 *)(param_2 + 0x58);
      *puVar5 = uVar4;
      FUN_012d0d74(puVar5,uVar4);
                    /* try { // try from 03f1b4c0 to 0401b4c3 has its CatchHandler @ 03f1b4e8 */
                    /* try { // try from 03f1b4c4 to 0401b4c7 has its CatchHandler @ 03f1b4e4 */
                    /* try { // try from 03f1b4c8 to 0401b4cb has its CatchHandler @ 03f1b4e0 */
                    /* try { // try from 03f1b4cc to 0401b4cf has its CatchHandler @ 03f1b50c */
                    /* try { // try from 03f1b4d0 to 0401b4d3 has its CatchHandler @ 03f1b508 */
      return *puVar5;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03f1b4d4 to 0401b4d7 has its CatchHandler @ 03f1b4dc */
  FUN_012d0ef0();
}

