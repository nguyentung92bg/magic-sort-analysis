/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Banner.MagicStreakTournamentProgressView$$FollowHatXPosition
DG_Tweening_Tween_o* Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressView__FollowHatXPosition (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressView_o* __this, float duration, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Banner.MagicStreakTournamentProgressView$$FollowHatXPosition
   DG_Tweening_Tween_o*
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressView__FollowHatXPosition
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressView_o*
   __this, float duration, const MethodInfo* method); */

undefined8
Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressView__FollowHatXPosition_3e1b2ec
          (float param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  float fVar4;
  
  if ((bRam0000000005c380e4 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05789e00);
    FUN_012d0dc8(PTR_DAT_057cc518);
    FUN_012d0dc8(PTR_DAT_057bda10);
    bRam0000000005c380e4 = 1;
  }
  if (*(long *)(param_2 + 0x20) != 0) {
                    /* try { // try from 03f1b344 to 0401b35f has its CatchHandler @ 03f1b50c */
    fVar4 = *(float *)(*(long *)(param_2 + 0x20) + 0x188);
    lVar1 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057cc518);
    if (lVar1 != 0) {
                    /* try { // try from 03f1b36c to 0401b383 has its CatchHandler @ 03f1b508 */
      DG_Tweening_TweenCallback_float____ctor_341f244
                (lVar1,param_2,*(undefined8 *)PTR_DAT_05789e00,0);
      uVar2 = DG_Tweening_DOVirtual__Float_1edbb8c(0,0x3f800000,fVar4 + param_1,lVar1,0);
                    /* try { // try from 03f1b390 to 0401b393 has its CatchHandler @ 03f1b500 */
      puVar3 = (undefined8 *)(param_2 + 0x60);
      *puVar3 = uVar2;
      FUN_012d0d74(puVar3);
      if (*(long *)(param_2 + 0x20) != 0) {
                    /* try { // try from 03f1b3a8 to 0401b3d3 has its CatchHandler @ 03f1b4fc */
        DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                  (*puVar3,*(undefined8 *)(*(long *)(param_2 + 0x20) + 0x18),
                   *(undefined8 *)PTR_DAT_057bda10);
        return *puVar3;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

