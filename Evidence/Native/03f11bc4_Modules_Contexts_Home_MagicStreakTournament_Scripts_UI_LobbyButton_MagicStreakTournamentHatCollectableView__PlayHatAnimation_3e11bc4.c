/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.LobbyButton.MagicStreakTournamentHatCollectableView$$PlayHatAnimation
DG_Tweening_Tween_o* Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentHatCollectableView__PlayHatAnimation (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentHatCollectableView_o* __this, int32_t getEarnedHats, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.LobbyButton.MagicStreakTournamentHatCollectableView$$PlayHatAnimation
   DG_Tweening_Tween_o*
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentHatCollectableView__PlayHatAnimation
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentHatCollectableView_o*
   __this, int32_t getEarnedHats, const MethodInfo* method); */

undefined8
Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentHatCollectableView__PlayHatAnimation_3e11bc4
          (long param_1,int param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  uint uVar8;
  float fVar9;
  
  if ((bRam0000000005c3808c & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_05799db8);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_0579e470);
    bRam0000000005c3808c = 1;
  }
  puVar1 = PTR_DAT_057815e0;
  plVar6 = (long *)(param_1 + 0x68);
  if (*plVar6 != 0) {
    DG_Tweening_TweenExtensions__Kill_1edd6a4(*plVar6,0,0);
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar2 = DG_Tweening_DOTween__Sequence_1eda154(0);
  *plVar6 = lVar2;
  FUN_012d0d74(plVar6,lVar2);
  if (0 < param_2) {
    lVar2 = 0;
    do {
      lVar5 = *(long *)(param_1 + 0x20);
      if (lVar5 == 0) goto LAB_03f11d7c;
      uVar8 = (uint)lVar2;
      if (*(uint *)(lVar5 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef8();
      }
      lVar5 = *(long *)(lVar5 + lVar2 * 8 + 0x20);
      if (lVar5 == 0) goto LAB_03f11d7c;
      lVar3 = UnityEngine_Component__get_transform_408b444(lVar5,0);
      if ((*(long *)(param_1 + 0x28) == 0) ||
         (UnityEngine_Transform__get_localPosition_4092c40(*(long *)(param_1 + 0x28),0), lVar3 == 0)
         ) goto LAB_03f11d7c;
      UnityEngine_Transform__set_localPosition_4092ce0(lVar3,0);
      if (*(long *)(param_1 + 0x18) == 0) goto LAB_03f11d7c;
      uVar7 = *(undefined8 *)(param_1 + 0x68);
      fVar9 = *(float *)(*(long *)(param_1 + 0x18) + 0xa0);
      uVar4 = Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentHatCollectableView__GetHatMoveSequence_3e11d84
                        (param_1,lVar5);
      DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(fVar9 * (float)(int)uVar8,uVar7,uVar4,0);
    } while ((uVar8 != 2) && (lVar2 = lVar2 + 1, param_2 - 1U != uVar8));
  }
  lVar5 = *plVar6;
  lVar2 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057606c8);
  puVar1 = PTR_DAT_0579e470;
  if (lVar2 != 0) {
    DG_Tweening_TweenCallback___ctor_1ed6da8(lVar2,param_1,*(undefined8 *)PTR_DAT_05799db8,0);
    DG_Tweening_TweenSettingsExtensions__OnComplete_object__24504c4
              (lVar5,lVar2,*(undefined8 *)puVar1);
    return *(undefined8 *)(param_1 + 0x68);
  }
LAB_03f11d7c:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

