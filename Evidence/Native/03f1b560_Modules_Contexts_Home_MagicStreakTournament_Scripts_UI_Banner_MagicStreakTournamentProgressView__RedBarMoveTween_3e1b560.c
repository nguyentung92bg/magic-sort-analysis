/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Banner.MagicStreakTournamentProgressView$$RedBarMoveTween
DG_Tweening_Tween_o* Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressView__RedBarMoveTween (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressView_o* __this, int32_t currentIndex, float duration, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Banner.MagicStreakTournamentProgressView$$RedBarMoveTween
   DG_Tweening_Tween_o*
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressView__RedBarMoveTween
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressView_o*
   __this, int32_t currentIndex, float duration, const MethodInfo* method); */

undefined8
Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressView__RedBarMoveTween_3e1b560
          (undefined8 param_1,long param_2,undefined4 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_05816760;
  if ((bRam0000000005c380e8 & 1) == 0) {
                    /* try { // try from 03f1b598 to 0401b5a7 has its CatchHandler @ 03f1b5a8 */
    FUN_012d0dc8(PTR_DAT_057cc518);
    FUN_012d0dc8(PTR_DAT_0580da90);
                    /* catch() { ... } // from try @ 03f1b524 with catch @ 03f1b5a8
                       catch() { ... } // from try @ 03f1b598 with catch @ 03f1b5a8 */
                    /* try { // try from 03f1b5ac to 0401b5af has its CatchHandler @ 03f1b5b8 */
                    /* try { // try from 03f1b5b0 to 0401b5bb has its CatchHandler @ 03f1b26c */
    FUN_012d0dc8(PTR_DAT_0578ef90);
                    /* catch() { ... } // from try @ 03f1b5ac with catch @ 03f1b5b8 */
    FUN_012d0dc8(PTR_DAT_05816760);
    bRam0000000005c380e8 = 1;
  }
  lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if (lVar2 != 0) {
    Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressView___c__DisplayClass24_0___ctor_3cf0fd4
              (lVar2,0);
    Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressView__SetRedBarLength_3e1c150
              (param_2,param_3);
    puVar1 = PTR_DAT_057cc518;
    if (*(long *)(param_2 + 0x48) != 0) {
      uVar4 = UnityEngine_SpriteRenderer__get_size_4095c28(*(long *)(param_2 + 0x48),0);
      *(undefined8 *)(lVar2 + 0x10) = *(undefined8 *)(param_2 + 0x48);
      FUN_012d0d74();
      lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
      if (lVar3 != 0) {
                    /* try { // try from 03f1b63c to 0401b6f3 has its CatchHandler @ 03f1b63c
                       catch() { ... } // from try @ 03f1b63c with catch @ 03f1b63c
                       catch() { ... } // from try @ 03f1b814 with catch @ 03f1b63c
                       catch() { ... } // from try @ 03f1b87c with catch @ 03f1b63c
                       catch() { ... } // from try @ 03f1b8e0 with catch @ 03f1b63c
                       catch() { ... } // from try @ 03f1b954 with catch @ 03f1b63c */
        DG_Tweening_TweenCallback_float____ctor_341f244
                  (lVar3,lVar2,*(undefined8 *)PTR_DAT_0578ef90,0);
        uVar4 = DG_Tweening_DOVirtual__Float_1edbb8c(uVar4,0,param_1,lVar3,0);
        if (*(long *)(param_2 + 0x20) != 0) {
          uVar4 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                            (uVar4,*(undefined8 *)(*(long *)(param_2 + 0x20) + 0x180),
                             *(undefined8 *)PTR_DAT_0580da90);
          *(undefined8 *)(param_2 + 0x68) = uVar4;
          FUN_012d0d74((undefined8 *)(param_2 + 0x68),uVar4);
          return uVar4;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

