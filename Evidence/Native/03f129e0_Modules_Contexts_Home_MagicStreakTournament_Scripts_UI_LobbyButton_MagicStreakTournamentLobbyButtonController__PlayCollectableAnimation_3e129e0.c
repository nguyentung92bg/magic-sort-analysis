/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.LobbyButton.MagicStreakTournamentLobbyButtonController$$PlayCollectableAnimation
DG_Tweening_Tween_o* Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentLobbyButtonController__PlayCollectableAnimation (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentLobbyButtonController_o* __this, int32_t hatCount, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.LobbyButton.MagicStreakTournamentLobbyButtonController$$PlayCollectableAnimation
   DG_Tweening_Tween_o*
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentLobbyButtonController__PlayCollectableAnimation
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentLobbyButtonController_o*
   __this, int32_t hatCount, const MethodInfo* method); */

undefined8
Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentLobbyButtonController__PlayCollectableAnimation_3e129e0
          (long param_1,int param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  uint uVar9;
  float fVar10;
  
  lVar5 = *(long *)(param_1 + 0x28);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if ((bRam0000000005c3808c & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_05799db8);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_0579e470);
    bRam0000000005c3808c = 1;
  }
  puVar1 = PTR_DAT_057815e0;
  plVar7 = (long *)(lVar5 + 0x68);
  if (*plVar7 != 0) {
    DG_Tweening_TweenExtensions__Kill_1edd6a4(*plVar7,0,0);
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar2 = DG_Tweening_DOTween__Sequence_1eda154(0);
  *plVar7 = lVar2;
  FUN_012d0d74(plVar7,lVar2);
  if (0 < param_2) {
    lVar2 = 0;
    do {
      lVar6 = *(long *)(lVar5 + 0x20);
      if (lVar6 == 0) goto LAB_03f11d7c;
      uVar9 = (uint)lVar2;
      if (*(uint *)(lVar6 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef8();
      }
      lVar6 = *(long *)(lVar6 + lVar2 * 8 + 0x20);
      if (lVar6 == 0) goto LAB_03f11d7c;
      lVar3 = UnityEngine_Component__get_transform_408b444(lVar6,0);
      if ((*(long *)(lVar5 + 0x28) == 0) ||
         (UnityEngine_Transform__get_localPosition_4092c40(*(long *)(lVar5 + 0x28),0), lVar3 == 0))
      goto LAB_03f11d7c;
      UnityEngine_Transform__set_localPosition_4092ce0(lVar3,0);
      if (*(long *)(lVar5 + 0x18) == 0) goto LAB_03f11d7c;
      uVar8 = *(undefined8 *)(lVar5 + 0x68);
      fVar10 = *(float *)(*(long *)(lVar5 + 0x18) + 0xa0);
      uVar4 = Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentHatCollectableView__GetHatMoveSequence_3e11d84
                        (lVar5,lVar6);
      DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(fVar10 * (float)(int)uVar9,uVar8,uVar4,0);
    } while ((uVar9 != 2) && (lVar2 = lVar2 + 1, param_2 - 1U != uVar9));
  }
  lVar6 = *plVar7;
  lVar2 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057606c8);
  puVar1 = PTR_DAT_0579e470;
  if (lVar2 != 0) {
    DG_Tweening_TweenCallback___ctor_1ed6da8(lVar2,lVar5,*(undefined8 *)PTR_DAT_05799db8,0);
    DG_Tweening_TweenSettingsExtensions__OnComplete_object__24504c4
              (lVar6,lVar2,*(undefined8 *)puVar1);
    return *(undefined8 *)(lVar5 + 0x68);
  }
LAB_03f11d7c:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

