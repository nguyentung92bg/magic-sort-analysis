/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.LobbyButton.MagicStreakTournamentLobbyButtonRewardView$$OpenBackBar
DG_Tweening_Tween_o* Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentLobbyButtonRewardView__OpenBackBar (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentLobbyButtonRewardView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.LobbyButton.MagicStreakTournamentLobbyButtonRewardView$$OpenBackBar
   DG_Tweening_Tween_o*
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentLobbyButtonRewardView__OpenBackBar
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentLobbyButtonRewardView_o*
   __this, const MethodInfo* method); */

long Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentLobbyButtonRewardView__OpenBackBar_3e1420c
               (long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  puVar1 = PTR_DAT_05791030;
  if ((bRam0000000005c3809d & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05791030);
    FUN_012d0dc8(PTR_DAT_057a1538);
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057df658);
    FUN_012d0dc8(PTR_DAT_0580bb98);
    FUN_012d0dc8(PTR_DAT_057e5928);
    bRam0000000005c3809d = 1;
  }
  lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  puVar1 = PTR_DAT_057a1538;
  if (lVar2 != 0) {
    DG_Tweening_Core_DOGetter_float____ctor_156d324(lVar2,param_1,*(undefined8 *)PTR_DAT_057df658,0)
    ;
    lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    if (lVar3 != 0) {
      DG_Tweening_Core_DOSetter_float____ctor_156e614
                (lVar3,param_1,*(undefined8 *)PTR_DAT_0580bb98,0);
      lVar5 = *(long *)(param_1 + 0x20);
      if (lVar5 != 0) {
        uVar6 = *(undefined4 *)(lVar5 + 0x18);
        uVar7 = *(undefined4 *)(lVar5 + 0x20);
        if (*(int *)(*(long *)PTR_DAT_057815e0 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        lVar2 = DG_Tweening_DOTween__To_1ed84a4(uVar6,uVar7,lVar2,lVar3,0);
        if (*(long *)(param_1 + 0x20) != 0) {
          uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
          if ((bRam0000000005c2b025 & 1) == 0) {
            FUN_012d0dc8(PTR_DAT_05805638,uVar4,*(undefined8 *)PTR_DAT_057e5928);
            FUN_012d0dc8(PTR_DAT_05776a80);
            FUN_012d0dc8(PTR_DAT_0580b108);
            bRam0000000005c2b025 = 1;
          }
          puVar1 = PTR_DAT_05776a80;
          if ((lVar2 != 0) && (*(char *)(lVar2 + 0xe8) != '\0')) {
            *(undefined4 *)(lVar2 + 0xb4) = 0x25;
            lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
            puVar1 = PTR_DAT_0580b108;
            if (lVar3 != 0) {
              DG_Tweening_Core_Easing_EaseCurve___ctor_3336d6c(lVar3,uVar4,0);
              lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
              if (lVar5 != 0) {
                DG_Tweening_EaseFunction___ctor_1ed6eb4
                          (lVar5,lVar3,*(undefined8 *)PTR_DAT_05805638,0);
                *(long *)(lVar2 + 0xb8) = lVar5;
                FUN_012d0d74((long *)(lVar2 + 0xb8),lVar5);
                return lVar2;
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
          return lVar2;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

