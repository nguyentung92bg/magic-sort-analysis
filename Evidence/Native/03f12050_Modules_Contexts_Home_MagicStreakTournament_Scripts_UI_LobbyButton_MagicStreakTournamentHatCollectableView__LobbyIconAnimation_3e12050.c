/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.LobbyButton.MagicStreakTournamentHatCollectableView$$LobbyIconAnimation
void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentHatCollectableView__LobbyIconAnimation (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentHatCollectableView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.LobbyButton.MagicStreakTournamentHatCollectableView$$LobbyIconAnimation
   void 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentHatCollectableView__LobbyIconAnimation
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentHatCollectableView_o*
   __this, const MethodInfo* method); */

long Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentHatCollectableView__LobbyIconAnimation_3e12050
               (long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if ((bRam0000000005c3808e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    bRam0000000005c3808e = 1;
  }
  puVar1 = PTR_DAT_057815e0;
  lVar3 = *(long *)(param_1 + 0x60);
  if (lVar3 != 0) {
    DG_Tweening_TweenExtensions__Kill_1edd6a4(lVar3,0,0);
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar4 = DG_Tweening_DOTween__Sequence_1eda154(0);
  *(undefined8 *)(param_1 + 0x60) = uVar4;
  FUN_012d0d74((long *)(param_1 + 0x60),uVar4);
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x60);
    uVar4 = DG_Tweening_ShortcutExtensions__DOScale_1ee649c
                      (*(undefined4 *)(lVar3 + 0xa4),*(undefined4 *)(lVar3 + 0xa8),
                       *(undefined4 *)(lVar3 + 0xac),*(undefined4 *)(lVar3 + 0xb0),
                       *(undefined8 *)(param_1 + 0x38),0);
    DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar5,uVar4,0);
    if (*(long *)(param_1 + 0x18) != 0) {
      lVar3 = *(long *)(param_1 + 0x60);
      uVar4 = DG_Tweening_ShortcutExtensions__DOScale_1ee649c
                        (*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54),
                         *(undefined4 *)(param_1 + 0x58),
                         *(undefined4 *)(*(long *)(param_1 + 0x18) + 0xb4),
                         *(undefined8 *)(param_1 + 0x38),0);
      uVar2 = DG_Tweening_TweenSettingsExtensions__ValidateAddToSequence_1eedf30(lVar3,uVar4,0);
      if ((uVar2 & 1) != 0) {
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        DG_Tweening_Sequence__DoInsert_1edfca4(*(undefined4 *)(lVar3 + 0xa0),lVar3,uVar4);
      }
      return lVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

