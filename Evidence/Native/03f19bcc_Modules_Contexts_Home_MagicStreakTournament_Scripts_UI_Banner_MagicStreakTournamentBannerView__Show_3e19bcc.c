/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Banner.MagicStreakTournamentBannerView$$Show
void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentBannerView__Show (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentBannerView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Banner.MagicStreakTournamentBannerView$$Show
   void 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentBannerView__Show
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentBannerView_o*
   __this, const MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentBannerView__Show_3e19bcc
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
  
  Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentBannerView__Initialize_3e19adc
            ();
  puVar1 = PTR_DAT_0576aae0;
  if (*(int *)(param_1 + 0x40) != 0) {
    if ((bRam0000000005c380d6 & 1) == 0) {
      FUN_012d0dc8(PTR_DAT_058030e0);
      FUN_012d0dc8(PTR_DAT_0576aae0);
      FUN_012d0dc8(PTR_DAT_057815e0);
      FUN_012d0dc8(PTR_DAT_057e7670);
      bRam0000000005c380d6 = 1;
    }
    if (((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
        (lVar4 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar4 != 0)) &&
       (lVar4 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                          (lVar4,*(undefined8 *)PTR_DAT_058030e0), puVar1 = PTR_DAT_057815e0,
       lVar4 != 0)) {
      uVar3 = Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetStreakCountForAnimation_411f990
                        (lVar4,0);
      plVar7 = (long *)(param_1 + 0x48);
      if (*plVar7 != 0) {
        DG_Tweening_TweenExtensions__Kill_1edd6a4(*plVar7,0,0);
      }
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      uVar5 = DG_Tweening_DOTween__Sequence_1eda154(0);
      *(undefined8 *)(param_1 + 0x48) = uVar5;
      FUN_012d0d74(plVar7,uVar5);
      uVar8 = *(undefined8 *)(param_1 + 0x48);
      uVar5 = Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentBannerView__ShowContainer_3e1a010
                        (param_1);
      DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar8,uVar5,0);
      if (*(long *)(param_1 + 0x18) != 0) {
        DG_Tweening_TweenSettingsExtensions__AppendInterval_1edcc0c
                  (*(undefined4 *)(*(long *)(param_1 + 0x18) + 0x1b4),
                   *(undefined8 *)(param_1 + 0x48),0);
        puVar1 = PTR_DAT_057e7670;
        if (*(long *)(param_1 + 0x38) != 0) {
          lVar6 = *plVar7;
          uVar5 = Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressAnimationView__PlayHatReturnAnimationFromIndex_3e1a388
                            (*(long *)(param_1 + 0x38),uVar3);
          DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(lVar6,uVar5,0);
          DG_Tweening_TweenExtensions__Play_object__26ef194(*plVar7,*(undefined8 *)puVar1);

          Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__ResetStreakCountForAnimation_411f96c
          :
          uVar3 = Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetCurrentMultiplierIndex_411f8f8
                            (lVar4,0);
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
    FUN_012d0ef0();
  }
  if ((bRam0000000005c380d5 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_058030e0);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057e7670);
    bRam0000000005c380d5 = 1;
  }
  puVar1 = PTR_DAT_0576aae0;
  if (*(long *)(param_1 + 0x38) != 0) {
    Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressAnimationView__PrepareForWinAnimation_3e19fcc
              ();
    if (((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
        (lVar4 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar4 != 0)) &&
       (lVar4 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                          (lVar4,*(undefined8 *)PTR_DAT_058030e0), puVar1 = PTR_DAT_057815e0,
       lVar4 != 0)) {
      iVar2 = Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetStreakCountForAnimation_411f990
                        (lVar4,0);
      plVar7 = (long *)(param_1 + 0x48);
      if (*plVar7 != 0) {
        DG_Tweening_TweenExtensions__Kill_1edd6a4(*plVar7,0,0);
      }
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      uVar5 = DG_Tweening_DOTween__Sequence_1eda154(0);
      *(undefined8 *)(param_1 + 0x48) = uVar5;
      FUN_012d0d74(plVar7,uVar5);
      uVar8 = *(undefined8 *)(param_1 + 0x48);
      uVar5 = Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentBannerView__ShowContainer_3e1a010
                        (param_1);
      DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar8,uVar5,0);
      puVar1 = PTR_DAT_057e7670;
      if (*(long *)(param_1 + 0x38) != 0) {
        lVar6 = *plVar7;
        uVar5 = Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressAnimationView__PlayHatMoveAnimationToIndex_3e1a094
                          (*(long *)(param_1 + 0x38),iVar2,iVar2 + 1);
        DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(lVar6,uVar5,0);
        DG_Tweening_TweenExtensions__Play_object__26ef194(*plVar7,*(undefined8 *)puVar1);
        goto 
        Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__ResetStreakCountForAnimation_411f96c
        ;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

