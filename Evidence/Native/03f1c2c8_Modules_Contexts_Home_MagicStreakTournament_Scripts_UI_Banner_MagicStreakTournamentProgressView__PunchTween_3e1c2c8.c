/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Banner.MagicStreakTournamentProgressView$$PunchTween
DG_Tweening_Tween_o* Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressView__PunchTween (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Banner.MagicStreakTournamentProgressView$$PunchTween
   DG_Tweening_Tween_o*
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressView__PunchTween
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressView_o*
   __this, const MethodInfo* method); */

long Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressView__PunchTween_3e1c2c8
               (long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
                    /* try { // try from 03f1c2d0 to 0401c2db has its CatchHandler @ 03f1c850 */
  if ((bRam0000000005c380e7 & 1) == 0) {
                    /* try { // try from 03f1c2e0 to 0401c2e7 has its CatchHandler @ 03f1c84c */
    FUN_012d0dc8(PTR_DAT_0580da90);
    bRam0000000005c380e7 = 1;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    uVar4 = TMPro_TextMeshPro__get_transform_38b5900(*(long *)(param_1 + 0x30),0);
    lVar5 = *(long *)(param_1 + 0x20);
                    /* try { // try from 03f1c308 to 0401c33b has its CatchHandler @ 03f1c874 */
    if (lVar5 != 0) {
      lVar5 = DG_Tweening_ShortcutExtensions__DOPunchScale_1ee71cc
                        (*(undefined4 *)(lVar5 + 0x108),*(undefined4 *)(lVar5 + 0x10c),
                         *(undefined4 *)(lVar5 + 0x110),*(undefined4 *)(lVar5 + 0x114),0x3f800000,
                         uVar4,*(undefined4 *)(lVar5 + 0x118),0);
      if (*(long *)(param_1 + 0x20) != 0) {
        uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x120);
                    /* try { // try from 03f1c34c to 0401c357 has its CatchHandler @ 03f1c848 */
        if ((bRam0000000005c2b025 & 1) == 0) {
          FUN_012d0dc8(PTR_DAT_05805638,uVar4,*(undefined8 *)PTR_DAT_0580da90);
          FUN_012d0dc8(PTR_DAT_05776a80);
          FUN_012d0dc8(PTR_DAT_0580b108);
          bRam0000000005c2b025 = 1;
        }
        puVar1 = PTR_DAT_05776a80;
        if ((lVar5 != 0) && (*(char *)(lVar5 + 0xe8) != '\0')) {
          *(undefined4 *)(lVar5 + 0xb4) = 0x25;
          lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
          puVar1 = PTR_DAT_0580b108;
          if (lVar2 != 0) {
            DG_Tweening_Core_Easing_EaseCurve___ctor_3336d6c(lVar2,uVar4,0);
            lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
            if (lVar3 != 0) {
              DG_Tweening_EaseFunction___ctor_1ed6eb4(lVar3,lVar2,*(undefined8 *)PTR_DAT_05805638,0)
              ;
              *(long *)(lVar5 + 0xb8) = lVar3;
              FUN_012d0d74((long *)(lVar5 + 0xb8),lVar3);
              return lVar5;
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        return lVar5;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

