/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.LobbyButton.MagicStreakTournamentLobbyButtonRewardView$$FillFrontBarLeftOverValue
DG_Tweening_Tween_o* Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentLobbyButtonRewardView__FillFrontBarLeftOverValue (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentLobbyButtonRewardView_o* __this, float percentage, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.LobbyButton.MagicStreakTournamentLobbyButtonRewardView$$FillFrontBarLeftOverValue
   DG_Tweening_Tween_o*
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentLobbyButtonRewardView__FillFrontBarLeftOverValue
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentLobbyButtonRewardView_o*
   __this, float percentage, const MethodInfo* method); */

long Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentLobbyButtonRewardView__FillFrontBarLeftOverValue_3e146b4
               (float param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  float fVar7;
  
  if ((bRam0000000005c380a1 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05791030);
    FUN_012d0dc8(PTR_DAT_057a1538);
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_05768aa8);
    FUN_012d0dc8(PTR_DAT_05761b68);
    FUN_012d0dc8(PTR_DAT_057e5928);
    bRam0000000005c380a1 = 1;
  }
  if (*(long *)(param_2 + 0x20) != 0) {
    fVar7 = *(float *)(*(long *)(param_2 + 0x20) + 0x1c);
    lVar3 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_05791030);
    puVar1 = PTR_DAT_057a1538;
    if (lVar3 != 0) {
      DG_Tweening_Core_DOGetter_float____ctor_156d324
                (lVar3,param_2,*(undefined8 *)PTR_DAT_05768aa8,0);
      lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
      if (lVar4 != 0) {
        DG_Tweening_Core_DOSetter_float____ctor_156e614
                  (lVar4,param_2,*(undefined8 *)PTR_DAT_05761b68,0);
        if (*(long *)(param_2 + 0x20) != 0) {
          uVar6 = *(undefined4 *)(*(long *)(param_2 + 0x20) + 0xb4);
          if (*(int *)(*(long *)PTR_DAT_057815e0 + 0xe0) == 0) {
            thunk_FUN_0130472c();
          }
          lVar3 = DG_Tweening_DOTween__To_1ed84a4(fVar7 * param_1,uVar6,lVar3,lVar4,0);
          if (*(long *)(param_2 + 0x20) != 0) {
            uVar5 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0xb8);
            if ((bRam0000000005c2b025 & 1) == 0) {
              FUN_012d0dc8(PTR_DAT_05805638,uVar5,*(undefined8 *)PTR_DAT_057e5928);
              FUN_012d0dc8(PTR_DAT_05776a80);
              FUN_012d0dc8(PTR_DAT_0580b108);
              bRam0000000005c2b025 = 1;
            }
            puVar1 = PTR_DAT_05776a80;
            if ((lVar3 != 0) && (*(char *)(lVar3 + 0xe8) != '\0')) {
              *(undefined4 *)(lVar3 + 0xb4) = 0x25;
              lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
              puVar1 = PTR_DAT_0580b108;
              if (lVar4 != 0) {
                DG_Tweening_Core_Easing_EaseCurve___ctor_3336d6c(lVar4,uVar5,0);
                lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                if (lVar2 != 0) {
                  DG_Tweening_EaseFunction___ctor_1ed6eb4
                            (lVar2,lVar4,*(undefined8 *)PTR_DAT_05805638,0);
                  *(long *)(lVar3 + 0xb8) = lVar2;
                  FUN_012d0d74((long *)(lVar3 + 0xb8),lVar2);
                  return lVar3;
                }
              }
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
            return lVar3;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

