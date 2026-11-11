/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Banner.MagicStreakTournamentBannerView$$ShowContainer
DG_Tweening_Tween_o* Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentBannerView__ShowContainer (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentBannerView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Banner.MagicStreakTournamentBannerView$$ShowContainer
   DG_Tweening_Tween_o*
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentBannerView__ShowContainer
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentBannerView_o*
   __this, const MethodInfo* method); */

long Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentBannerView__ShowContainer_3e1a010
               (long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((bRam0000000005c380d7 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057874c0);
    bRam0000000005c380d7 = 1;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    UnityEngine_Transform__get_localPosition_4092c40(*(long *)(param_1 + 0x28),0);
    if (*(long *)(param_1 + 0x18) != 0) {
      lVar4 = DG_Tweening_ShortcutExtensions__DOLocalMove_1ee56a4(uVar5,0,0);
      if (*(long *)(param_1 + 0x18) != 0) {
        uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x88);
        if ((bRam0000000005c2b025 & 1) == 0) {
          FUN_012d0dc8(PTR_DAT_05805638,uVar5,*(undefined8 *)PTR_DAT_057874c0);
          FUN_012d0dc8(PTR_DAT_05776a80);
          FUN_012d0dc8(PTR_DAT_0580b108);
          bRam0000000005c2b025 = 1;
        }
        puVar1 = PTR_DAT_05776a80;
        if ((lVar4 != 0) && (*(char *)(lVar4 + 0xe8) != '\0')) {
          *(undefined4 *)(lVar4 + 0xb4) = 0x25;
          lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
          puVar1 = PTR_DAT_0580b108;
          if (lVar2 != 0) {
            DG_Tweening_Core_Easing_EaseCurve___ctor_3336d6c(lVar2,uVar5,0);
            lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
            if (lVar3 != 0) {
              DG_Tweening_EaseFunction___ctor_1ed6eb4(lVar3,lVar2,*(undefined8 *)PTR_DAT_05805638,0)
              ;
              *(long *)(lVar4 + 0xb8) = lVar3;
              FUN_012d0d74((long *)(lVar4 + 0xb8),lVar3);
              return lVar4;
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        return lVar4;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

